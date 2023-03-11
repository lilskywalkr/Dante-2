#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-04-30 15:42:22.253846
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-DINSIDE_DANTE"
      "-fmax-errors=5"
      "-D_ANSI_OUTPUT"
      "-std=c11"
      "-ggdb3"
      "-D_GNU_SOURCE"
      "-Werror=vla"
      "-Wno-error=parentheses"
      "-Wno-parentheses"
      "-xc"
      "-Werror"
      "-fdiagnostics-color"
      "-Wall"
      "-Wextra"
      "-pedantic"
      "-Wno-error=unused-parameter"
      "-Wno-error=implicit-fallthrough"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-Wl,-wrap,main"
        "-Wl,-Map=main.map"
        "-ggdb3"
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