#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-23 00:09:26.887584
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-parentheses"
      "-DINSIDE_DANTE"
      "-Werror=vla"
      "-std=c11"
      "-Werror"
      "-Wno-error=implicit-fallthrough"
      "-pedantic"
      "-D_ANSI_OUTPUT"
      "-D_GNU_SOURCE"
      "-xc"
      "-ggdb3"
      "-Wall"
      "-Wno-error=unused-parameter"
      "-Wno-error=parentheses"
      "-Wextra"
      "-fdiagnostics-color"
      "-fmax-errors=5"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
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