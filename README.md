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

//TODO: When all the files are ready to run, I will make a ready-made image so as not to build it locally (for now it makes no sense to publish an image that builds a single vmerge.c)