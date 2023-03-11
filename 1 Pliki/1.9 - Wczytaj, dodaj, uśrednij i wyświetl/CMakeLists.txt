#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-26 01:55:20.875603
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-parentheses"
      "-xc"
      "-DINSIDE_DANTE"
      "-ggdb3"
      "-D_ANSI_OUTPUT"
      "-fdiagnostics-color"
      "-Wall"
      "-fmax-errors=5"
      "-Wno-error=parentheses"
      "-Wno-error=implicit-fallthrough"
      "-D_GNU_SOURCE"
      "-std=c11"
      "-Werror=vla"
      "-Werror"
      "-Wextra"
      "-Wno-error=unused-parameter"
      "-pedantic"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-cref"
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
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