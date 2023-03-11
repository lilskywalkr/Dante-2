#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-01-04 21:56:54.530995
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror"
      "-xc"
      "-DINSIDE_DANTE"
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=parentheses"
      "-fdiagnostics-color"
      "-Werror=vla"
      "-Wno-parentheses"
      "-pedantic"
      "-D_GNU_SOURCE"
      "-Wall"
      "-D_ANSI_OUTPUT"
      "-Wno-error=unused-parameter"
      "-std=c11"
      "-ggdb3"
      "-fmax-errors=5"
      "-Wextra"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-ggdb3"
        "-Wl,-Map=main.map"
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