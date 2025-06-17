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
			'2' => 1000,
			'3' => 1000,
		),
		"vvm" => Dict(
			'1' => 5,
			'2' => 10000,
			'3' => 20000
		),
		"vim" => Dict(
			'1' => 5,
			'2' => 1000,
			'3' => 1000
		),
	),
	"vrgather" => Dict(
        "vxm" => Dict(
            '1' => 5,
            '2' => 1000,
            '3' => 1000,
        ),
        "vvm" => Dict(
            '1' => 5,
            '2' => 10000,
            '3' => 20000
        ),
        "vim" => Dict(
            '1' => 5,
            '2' => 1000,
            '3' => 1000
        ),
    )
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
		"vvm" => Dict(
			"main" => "asm volatile(\"vmerge.vvm v3, v1, v2, v0\");",
			"follow" => 
        """
        asm volatile(\"vmerge.vvm v3, v1, v2, v0\");
        asm volatile(\"vmerge.vvm v1, v3, v2, v0\");
        """
		),
		"vim" => Dict(
			"main" => "asm volatile(\"vmerge.vim v3, v1, -1, v0\");",
			"follow" => "asm volatile(\"vmerge.vim v3, v3, -1, v0\");"
		)
	),
	"vrgather" => Dict(
        "vxm" => Dict(
            "main" => "asm volatile(\"vrgather.vxm v3, v1, %[A]\");",
            "follow" => "asm volatile(\"vrgather.vxm v3, v3, %[A]\");"
        ),
        "vvm" => Dict(
            "main" => "asm volatile(\"vrgather.vvm v3, v1, v2\");",
            "follow" => 
            """
            asm volatile(\"vrgather.vvm v3, v1, v2\");
            asm volatile(\"vrgather.vvm v1, v3, v2\");
            """
        ),
        "vim" => Dict(
            "main" => "asm volatile(\"vrgather.vim v3, v1, -1\");",
            "follow" => "asm volatile(\"vrgather.vim v3, v3, -1\");"
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
			VSET(16, e8, m1);
			VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
			VLOAD_8(v2, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1);
			VLOAD_8(v3, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1);
			VLOAD_8(v0, 0xAA, 0x55);
			""",
		"vim" => """
			VSET(16, e8, m1);
			VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
			VLOAD_8(v0, 0xAA, 0x55);
			"""
	),
	"vrgather" => Dict(
        "vxm" => """
            const uint64_t scalar = 3;

            VSET(16, e8, m1);
            VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
            """,
        "vvm" => """
            VSET(16, e8, m1);
            VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
            VLOAD_8(v2, 3, 2, 1, 0, 7, 6, 5, 4, 3, 2, 1, 0, 7, 6, 5, 4);
            """,
        "vim" => """
            VSET(16, e8, m1);
            VLOAD_8(v1, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8);
            """
    )
)

# instructions to test
instructions = Dict(
	"vmerge" => ["vxm", "vvm", "vim"],
	"vrgather" => ["vxm", "vvm", "vim"]
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
