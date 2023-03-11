#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-12 20:40:55.625624
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-std=c11"
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=parentheses"
      "-pedantic"
      "-fdiagnostics-color"
      "-fmax-errors=5"
      "-Werror=vla"
      "-xc"
      "-Wextra"
      "-ggdb3"
      "-D_GNU_SOURCE"
      "-DINSIDE_DANTE"
      "-Wall"
      "-Wno-parentheses"
      "-Werror"
      "-Wno-error=unused-parameter"
      "-D_ANSI_OUTPUT"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-Map=main.map"
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