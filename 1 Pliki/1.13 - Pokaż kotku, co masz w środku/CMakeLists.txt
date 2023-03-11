#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-27 19:43:30.691649
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wall"
      "-Wno-parentheses"
      "-fdiagnostics-color"
      "-Wextra"
      "-fmax-errors=5"
      "-Werror=vla"
      "-D_ANSI_OUTPUT"
      "-D_GNU_SOURCE"
      "-xc"
      "-Wno-error=unused-parameter"
      "-pedantic"
      "-std=c11"
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=parentheses"
      "-DINSIDE_DANTE"
      "-Werror"
      "-ggdb3"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
        "-Wl,-cref"
        "-ggdb3"
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