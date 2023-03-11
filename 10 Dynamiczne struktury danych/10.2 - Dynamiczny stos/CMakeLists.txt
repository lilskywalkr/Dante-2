#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-23 19:31:04.922217
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wall"
      "-xc"
      "-DINSIDE_DANTE"
      "-pedantic"
      "-ggdb3"
      "-fmax-errors=5"
      "-Werror=vla"
      "-std=c11"
      "-Wextra"
      "-Wno-error=parentheses"
      "-Wno-error=unused-parameter"
      "-Werror"
      "-Wno-error=implicit-fallthrough"
      "-D_ANSI_OUTPUT"
      "-D_GNU_SOURCE"
      "-Wno-parentheses"
      "-fdiagnostics-color"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-cref"
        "-Wl,-wrap,main"
        "-ggdb3"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "main.c"
        "stack.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)