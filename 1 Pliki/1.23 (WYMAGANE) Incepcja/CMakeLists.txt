#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-29 14:45:45.335139
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-error=implicit-fallthrough"
      "-Werror"
      "-Wno-error=unused-parameter"
      "-ggdb3"
      "-std=c11"
      "-DINSIDE_DANTE"
      "-Wall"
      "-Werror=vla"
      "-fmax-errors=5"
      "-pedantic"
      "-fdiagnostics-color"
      "-Wno-parentheses"
      "-xc"
      "-D_ANSI_OUTPUT"
      "-D_GNU_SOURCE"
      "-Wextra"
      "-Wno-error=parentheses"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-ggdb3"
        "-Wl,-wrap,main"
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