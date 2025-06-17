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
			r"\$CMDLT times \$\d+" => replace(content, word => repeat(cmd["follow"] * "\n", repeats[word[end]]))
      r"\$CMDTP loop \$\d+ times \$\d+" => begin
        nword =
          repeat(
          "for(int i = 0; i < $(repeats[word[end-9]]); i++) {\n" *
          cmd["main"] * "\n" *
          "}\n",
          repeats[word[end]]
        )
        replace(content, word => nword)
      end
			r"\$CMDLP loop \$\d+ times \$\d+" => begin
				nword =
					repeat(
					"for(int i = 0; i < $(repeats[word[end-9]]); i++) {\n" *
					cmd["follow"] * "\n" *
					"}\n",
					repeats[word[end]]
				)
				replace(content, word => nword)
			end
			r"\$\d+" => begin
				nword = replace(word, word[end-1:end] => repeats[word[end]])
				replace(content, word => nword*";")
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
	"vmerge" => Dict(
		"vxm" => Dict(
			'1' => 5,
			'2' => 10000,
			'3' => 10000,
      '4' => 1,
      '5' => (10000/100),
      '6' => 100,
      '7' => 10000 # multiplied by number of commands in CMD main or follow
		),
		"vvm" => Dict(
      '1' => 5,
			'2' => 10000,
			'3' => 10000,
      '4' => 1,
      '5' => (10000/100),
      '6' => 100,
      '7' => 10000 * 1 # multiplied by number of commands in CMD main or follow
    ),
		"vim" => Dict(
			'1' => 5,
			'2' => 10000,
			'3' => 10000,
      '4' => 1,
      '5' => (10000/100),
      '6' => 100,
      '7' => 10000 # multiplied by number of commands in CMD main or follow
    ),
	)
)

# main is the command being tested
# follow is the command that will be used
# in a dependent chain for LATENCY benchmarking
commands = Dict(
	"vmerge" => Dict(
		"vxm" => Dict(
			"main" => "asm volatile(\"vmerge.vxm v3, v3, %[A], v0\" ::[A] \"r\"(scalar));",
			"follow" => "asm volatile(\"vmerge.vxm v3, v3, %[A], v0\" ::[A] \"r\"(scalar));"
		),
		"vvm" => Dict(
			"main" => #"asm volatile(\"vmerge.vvm v3, v1, v2, v0\");",
				"""
asm volatile(\"vmerge.vvm v3, v1, v2, v0\");
				""",
			"follow" =>
        """
        asm volatile(\"vmerge.vvm v3, v1, v2, v0\");
        asm volatile(\"vmerge.vvm v1, v3, v2, v0\");
        """
		),
		"vim" => Dict(
			"main" => "asm volatile(\"vmerge.vim v3, v3, -1, v0\");",
			"follow" => "asm volatile(\"vmerge.vim v3, v3, -1, v0\");"
		)
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
			VLOAD_8(v3, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1);
			VLOAD_8(v0, 0xAA, 0x55);
			""",
		"vvm" => """
			VSET(16, e32, m2);
			VLOAD_32(v1, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483647, 14777216, 98765432, 123456789, 987654321);
			VLOAD_32(v2, 4194304, 4434304, 524288, 99977216, 16777, 700000, 1048576, 500000, 524288, 700000, 13737316, 58388608, 77777716, 1600000, 9900000, 2097152);
			VLOAD_32(v3, 32224432, 200, 99954432, 400, 1200000, 600, 1100000, 800, 900, 1000, 900000, 4194304, 1300, 2097152, 1500, 1600);
			VLOAD_32(v4, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000, 1100000, 1200000, 1300000, 1400000, 1500000, 1600000);
			VLOAD_32(v5, 1600000, 1500000, 1400000, 1300000, 1200000, 1100000, 1000000, 900000, 800000, 700000, 600000, 500000, 400000, 300000, 200000, 100000);
			VLOAD_32(v6, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432);
			VLOAD_32(v0, 0xAAAAAAAA, 0x55555555);
			""",
		"vim" => """
			VSET(16, e8, m1);
			VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
			VLOAD_8(v0, 0xAA, 0x55);
			"""
	)
)

# instructions to test
instructions = Dict(
	"vmerge" => ["vxm", "vvm", "vim"]
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
		kinds = instr.second
		for kind in kinds
			println(" - instruction $(ins)_$(kind)")
      gen_content = generate_test_source("../template.c", commands[ins][kind], repeats[ins][kind], setups[ins][kind])

			write("generated/$(ins*"_"*kind).c", gen_content)

			println("! generated generated/$(ins*"_"*kind).c")
		end
	end

	cd("..")
	println("! exited $(pwd())")
end
