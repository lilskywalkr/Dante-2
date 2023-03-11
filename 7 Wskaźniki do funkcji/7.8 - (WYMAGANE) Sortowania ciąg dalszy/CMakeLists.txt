#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-01 19:44:08.934727
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-fdiagnostics-color"
      "-pedantic"
      "-Wall"
      "-fmax-errors=5"
      "-Wno-error=unused-parameter"
      "-Werror"
      "-Wextra"
      "-Wno-error=parentheses"
      "-Wno-parentheses"
      "-std=c11"
      "-D_GNU_SOURCE"
      "-D_ANSI_OUTPUT"
      "-xc"
      "-ggdb3"
      "-DINSIDE_DANTE"
      "-Werror=vla"
      "-Wno-error=implicit-fallthrough"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-Wl,-Map=main.map"
        "-ggdb3"
        "-Wl,-cref"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "comparators.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)