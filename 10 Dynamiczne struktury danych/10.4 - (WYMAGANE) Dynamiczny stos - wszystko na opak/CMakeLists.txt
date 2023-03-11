#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-29 22:57:44.704432
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wextra"
      "-Wno-error=parentheses"
      "-pedantic"
      "-Wno-parentheses"
      "-Wno-error=unused-parameter"
      "-Wno-error=implicit-fallthrough"
      "-Werror=vla"
      "-fdiagnostics-color"
      "-fmax-errors=5"
      "-D_ANSI_OUTPUT"
      "-D_GNU_SOURCE"
      "-xc"
      "-Werror"
      "-std=c11"
      "-Wall"
      "-ggdb3"
      "-DINSIDE_DANTE"

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
        "stack.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)