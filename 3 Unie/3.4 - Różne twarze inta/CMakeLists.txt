#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-12 20:34:56.982840
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-DINSIDE_DANTE"
      "-ggdb3"
      "-pedantic"
      "-D_ANSI_OUTPUT"
      "-Wno-error=parentheses"
      "-fdiagnostics-color"
      "-Wextra"
      "-Werror=vla"
      "-Wno-error=implicit-fallthrough"
      "-Wall"
      "-Wno-parentheses"
      "-xc"
      "-Werror"
      "-fmax-errors=5"
      "-D_GNU_SOURCE"
      "-std=c11"
      "-Wno-error=unused-parameter"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-ggdb3"
        "-Wl,-Map=main.map"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "main.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)