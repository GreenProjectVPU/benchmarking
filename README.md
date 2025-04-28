`tests/vmerge_intr.c` - с использованием интринзиков напрямую
`tests/vmerge.c` - с использованием заготовленным макросов из Ara (`chipyard/generators/ara/ara/apps/riscv-tests/isa/macros/scalar/test_macros.h`), украденный файлик в который я добавил просто вывод cycles, можно на этих макросах и построить дальше бенч 

`make SRC=<path-to-file>` - билдит ELF бинарник 
`make SRC=<path-to-file> sim` - запустить симуляцию бинарника используя spike (проверить компиляцию интринзиков, макросы не пройдут вроде)
