#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-27 18:24:05.448673
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-DINSIDE_DANTE"
      "-ggdb3"
      "-D_ANSI_OUTPUT"
      "-Werror"
      "-Wno-error=parentheses"
      "-fmax-errors=5"
      "-Wall"
      "-D_GNU_SOURCE"
      "-pedantic"
      "-std=c11"
      "-Wno-error=unused-parameter"
      "-Wno-error=implicit-fallthrough"
      "-fdiagnostics-color"
      "-Werror=vla"
      "-xc"
      "-Wextra"
      "-Wno-parentheses"

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