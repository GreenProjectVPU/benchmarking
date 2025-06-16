using Match

# replaces variables starting with '$'
# in *.c source file of testbench
# and writes the result in
# tests/<name>/generated
function generate_test_source(template_name, cmd, repeats, setup)
	content = read(template_name, String)
	lines = content |> s -> split(s, "\n") |> s -> map(x -> strip(x), s)

	for word in lines
		content = @match word begin
			r"\$CMDTP times \$\d+" => replace(content, word => repeat(cmd["main"] * "\n", repeats[word[end]]))
			r"\$CMDLP times \$\d+" => replace(content, word => repeat(cmd["follow"] * "\n", repeats[word[end]]))
			r"\$\d+" => begin
				nword = replace(word, word[end-1:end] => repeats[word[end]])
				replace(content, word => nword)
			end
			"\$SETUP" => replace(content, word => setup)
			_ => content
		end
	end

	return content
end

# number of repeats
# corresponding to $<number>
# variables in *.c source file
repeats = Dict(
	'1' => 5,
	'2' => 100
)

# main is the command being tested
# follow is the command that will be used
# in a dependent chain for LATENCY benchmarking
commands = Dict(
	"vmerge" => Dict(
		"vxm" => Dict(
			"main" => "asm volatile(\"vmerge.vxm v3, v1, %[A], v0\" ::[A] \"r\"(scalar));",
			"follow" => "asm volatile(\"vmerge.vxm v3, v3, %[A], v0\" ::[A] \"r\"(scalar));"
			),
		"vvm" => Dict()
	)
)

# setups needed for a testbench
# for a given instruction
setups = Dict(
	"vmerge" => Dict(
		"vxm" => """
		const uint64_t scalar = 0x00000000deadbeef;

		VSET(16, e8, m1);
		VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
		VLOAD_8(v2, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1);
		VLOAD_8(v3, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1);
		VLOAD_8(v0, 0xAA, 0x55);
		"""
		)
)

# instructions to test
instructions = Dict(
	"vmerge" => ["vxm"]
)

cd("tests")
println("? looking at tests...")

dirs = filter(isdir, readdir(".",join=true))

for dir in dirs
	println("? walking into $dir")
	cd(dir)

	println("? creating generated dir")
	mkpath("generated")

	for instr in instructions
		ins = instr.first
		kind = instr.second[1]
		println(" - instruction $(ins)_$(kind)")
		gen_content = generate_test_source("../template.c", commands[ins][kind], repeats, setups[ins][kind])

		write("generated/$(ins*"_"*kind).c", gen_content)

		println("! generated generated/$(ins*"_"*kind).c")
	end

	cd("..")
	println("! exited $(pwd())")
end

# cd("tests/vmerge")



# mkdir("generated")
# cd("generated")
# write("vmerge_vxm.c", content)
# println(content)
