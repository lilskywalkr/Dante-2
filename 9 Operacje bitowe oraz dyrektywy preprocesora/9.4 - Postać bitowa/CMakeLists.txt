#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-16 11:58:13.585357
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror=vla"
      "-fdiagnostics-color"
      "-D_GNU_SOURCE"
      "-Werror"
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=unused-parameter"
      "-xc"
      "-Wno-parentheses"
      "-D_ANSI_OUTPUT"
      "-fmax-errors=5"
      "-std=c11"
      "-Wall"
      "-DINSIDE_DANTE"
      "-Wno-error=parentheses"
      "-pedantic"
      "-Wextra"
      "-ggdb3"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-ggdb3"
        "-Wl,-cref"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "main.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)