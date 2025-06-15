# riscv64-unknown-elf-gcc -march=rv64gcv -mabi=lp64d -O3 -o vmerge_try.o vmerge_try.c -Ichipyard/generators/ara/ara/apps/riscv-tests/isa/macros/vector -Ichipyard/.conda-env/riscv-tools/include/riscv -Ichipyard/.conda-env/riscv-tools/sysroot/usr/include

CC = riscv64-unknown-elf-gcc

SRC ?= vmerge_try.c

TARGET = $(SRC:.c=.elf)

INCLUDES = \
	-Ichipyard/generators/ara/ara/apps/riscv-tests/isa/macros/vector \
	-Ichipyard/.conda-env/riscv-tools/include/riscv \
	-Ichipyard/.conda-env/riscv-tools/sysroot/usr/include

CCFLAGS = \
	-march=rv64gcv \
	-mabi=lp64d \
	-static \
	-O0 \
	$(INCLUDES)

ISA = rv64gcv_zicntr
SPIKE_FLAGS = \
	--isa=$(ISA)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CCFLAGS) -o $@ $<

ass:
	$(CC) $(CCFLAGS) -S vmerge.c -o vmerge.S 

sim:
	spike $(SPIKE_FLAGS) -l --log=spike_log.txt pk $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean
