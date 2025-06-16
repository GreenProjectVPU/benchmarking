# riscv64-unknown-elf-gcc -march=rv64gcv -mabi=lp64d -O3 -o vmerge_try.o vmerge_try.c -I$(CHIPYARD)generators/ara/ara/apps/riscv-tests/isa/macros/vector -I$(CHIPYARD).conda-env/riscv-tools/include/riscv -I$(CHIPYARD).conda-env/riscv-tools/sysroot/usr/include

CC = riscv64-unknown-elf-gcc
DUMP = riscv64-linux-gnu-objdump -D

SRC ?= tests/vmerge.c

CHIPYARD = /home/artjom/Uni/nir/chipyard
RISCV_TOOLS = /home/artjom/Uni/nir/chipyard/.conda-env/riscv-tools
BUILD_DIR = build

TARGET = $(BUILD_DIR)/$(notdir $(SRC:.c=.elf))
DUMP_TARGET = $(TARGET:.elf=.dump)

INCLUDES = \
	-I$(CHIPYARD)/generators/ara/ara/apps/riscv-tests/isa/macros/vector \
	-I$(RISCV_TOOLS)/include/riscv \
	-I$(RISCV_TOOLS)/sysroot/usr/include \
	-I./include

CCFLAGS = \
	-march=rv64gcv \
	-mabi=lp64d \
	-static \
	-O1 \
	$(INCLUDES)

ISA = rv64gcv
SPIKE_FLAGS = \
	--isa=$(ISA)

all: $(TARGET) $(DUMP_TARGET)

$(TARGET): $(SRC)
	$(CC) $(CCFLAGS) -o $@ $<

$(DUMP_TARGET): $(TARGET)
	$(DUMP) $< > $@

sim:
	spike $(SPIKE_FLAGS) -l --log=spike_log.txt pk $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean