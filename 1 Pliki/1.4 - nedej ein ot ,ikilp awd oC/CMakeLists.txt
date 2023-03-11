#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-23 22:40:13.031723
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-std=c11"
      "-ggdb3"
      "-DINSIDE_DANTE"
      "-Wall"
      "-pedantic"
      "-D_ANSI_OUTPUT"
      "-Wno-error=unused-parameter"
      "-Wno-parentheses"
      "-xc"
      "-Wextra"
      "-fmax-errors=5"
      "-fdiagnostics-color"
      "-Werror"
      "-Wno-error=implicit-fallthrough"
      "-Werror=vla"
      "-Wno-error=parentheses"
      "-D_GNU_SOURCE"

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
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)