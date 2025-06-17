## FOR LOCAL RUN

`tests/vmerge_intr.c` - с использованием интринзиков напрямую
`tests/vmerge.c` - с использованием заготовленным макросов из Ara (`chipyard/generators/ara/ara/apps/riscv-tests/isa/macros/scalar/test_macros.h`), украденный файлик в который я добавил просто вывод cycles, можно на этих макросах и построить дальше бенч 

`make SRC=<path-to-file>` - билдит ELF бинарник 
`make SRC=<path-to-file> sim` - запустить симуляцию бинарника используя spike (проверить компиляцию интринзиков, макросы не пройдут вроде)

## DOCKER

### 1. Assemble the image from the beginning

Build image:

`docker build -t riscv-env .`

Run container:

`docker run -it riscv-env`

Run vmerge.c: 

`./simulator-chipyard.harness-GENV256D128ShuttleConfig pk /workspace/vmerge.elf`



### 2. Use a ready-made image

Run other binary: 

1. Pull ready-made image

   `docker pull ankolesn/riscv-benchmarking:latest`

2. Copy your binary into container

   `docker cp /path/to/file/*.elf name_container:/root/chipyard/sims/verilator`

3. Run binary

   `make -j3 run-binary CONFIG=GENV256D128ShuttleConfig LOADME M=1 EXTRA_SIM_FLAGS=+cospike-printf=0 TIMEOUT_CYCLES=999999999999999999 BINARY=<your_binary_name>.elf`

Link to dokerhub with the finished image: https://hub.docker.com/repository/docker/ankolesn/riscv-benchmarking/tags