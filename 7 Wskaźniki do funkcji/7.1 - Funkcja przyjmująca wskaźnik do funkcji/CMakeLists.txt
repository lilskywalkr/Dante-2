#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-04-27 12:25:47.495064
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-pedantic"
      "-ggdb3"
      "-Wall"
      "-xc"
      "-Wno-error=unused-parameter"
      "-D_GNU_SOURCE"
      "-Wno-parentheses"
      "-DINSIDE_DANTE"
      "-Werror=vla"
      "-fmax-errors=5"
      "-D_ANSI_OUTPUT"
      "-Werror"
      "-Wno-error=parentheses"
      "-Wextra"
      "-Wno-error=implicit-fallthrough"
      "-fdiagnostics-color"
      "-std=c11"

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
        "int_operations.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)