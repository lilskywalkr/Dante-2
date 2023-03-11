#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-03-09 19:13:41.190174
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wextra"
      "-Wno-error=parentheses"
      "-Werror"
      "-Wno-error=implicit-fallthrough"
      "-pedantic"
      "-fmax-errors=5"
      "-xc"
      "-ggdb3"
      "-Wall"
      "-Werror=vla"
      "-Wno-parentheses"
      "-fdiagnostics-color"
      "-D_GNU_SOURCE"
      "-D_ANSI_OUTPUT"
      "-std=c11"
      "-Wno-error=unused-parameter"
      "-DINSIDE_DANTE"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-ggdb3"
        "-Wl,-wrap,main"
        "-Wl,-Map=main.map"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "main.c"
        "matrix_utils.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)