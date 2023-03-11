#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-22 20:58:35.757166
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-fmax-errors=5"
      "-Werror"
      "-Werror=vla"
      "-D_ANSI_OUTPUT"
      "-Wextra"
      "-Wno-error=unused-parameter"
      "-pedantic"
      "-ggdb3"
      "-Wno-error=implicit-fallthrough"
      "-Wno-parentheses"
      "-Wall"
      "-fdiagnostics-color"
      "-Wno-error=parentheses"
      "-xc"
      "-D_GNU_SOURCE"
      "-DINSIDE_DANTE"
      "-std=c11"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-Map=main.map"
        "-Wl,-cref"
        "-Wl,-wrap,main"
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