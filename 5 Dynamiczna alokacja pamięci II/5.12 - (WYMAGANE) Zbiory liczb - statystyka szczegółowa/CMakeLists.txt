#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-03-19 21:16:10.080204
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-std=c11"
      "-Wno-parentheses"
      "-fmax-errors=5"
      "-xc"
      "-Werror"
      "-D_ANSI_OUTPUT"
      "-Wno-error=unused-parameter"
      "-pedantic"
      "-Wextra"
      "-Wno-error=implicit-fallthrough"
      "-Wall"
      "-ggdb3"
      "-fdiagnostics-color"
      "-DINSIDE_DANTE"
      "-Werror=vla"
      "-D_GNU_SOURCE"
      "-Wno-error=parentheses"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-cref"
        "-Wl,-wrap,main"
        "-Wl,-Map=main.map"
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