# Структура

- `tests` - папка с шаблоном и сабпапками для генерации тестов конкретных инструкций
    - `template.c` - шаблон для генерации тестов с использованием заготовленным макросов из Ara (`chipyard/generators/ara/ara/apps/riscv-tests/isa/macros/scalar/test_macros.h`),  
- `main.jl` - скрипт генерации тестов, для новых тестов добавить папку с соотв. названием и обновить словари в скрипте 

# Запуск

`julia main.jl` - генерации тестбенчей (си файлов) в папке `tests/<instr-name>/generated`
`make SRC=<path-to-file>` - билдит ELF бинарник 
`make SRC=<path-to-file> sim` - запустить симуляцию бинарника используя spike (проверить компиляцию интринзиков, макросы не пройдут вроде)
