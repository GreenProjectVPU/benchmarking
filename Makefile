# riscv64-unknown-elf-gcc -march=rv64gcv -mabi=lp64d -O3 -o vmerge_try.o vmerge_try.c -I$(CHIPYARD)generators/ara/ara/apps/riscv-tests/isa/macros/vector -I$(CHIPYARD).conda-env/riscv-tools/include/riscv -I$(CHIPYARD).conda-env/riscv-tools/sysroot/usr/include

CC = riscv64-unknown-elf-gcc

SRC ?= vmerge.c

CHIPYARD = /root/chipyard
RISCV_TOOLS = /root/chipyard/.conda-env/riscv-tools

TARGET = $(SRC:.c=.elf)

INCLUDES = \
	-I$(CHIPYARD)/generators/ara/ara/apps/riscv-tests/isa/macros/vector \
	-I$(RISCV_TOOLS)/include/riscv \
	-I$(RISCV_TOOLS)/sysroot/usr/include \
	-I./include

CCFLAGS = \
	-march=rv64gcv \
	-mabi=lp64d \
	-static \
	-O0 \
	$(INCLUDES)

ISA = rv64gcv
SPIKE_FLAGS = \
	--isa=$(ISA)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CCFLAGS) -o $@ $<

sim:
	spike $(SPIKE_FLAGS) -l --log=spike_log.txt pk $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean