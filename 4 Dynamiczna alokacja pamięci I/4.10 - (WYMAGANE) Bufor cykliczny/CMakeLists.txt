#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-27 22:41:46.760995
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-fmax-errors=5"
      "-D_ANSI_OUTPUT"
      "-Werror=vla"
      "-ggdb3"
      "-Wno-error=parentheses"
      "-xc"
      "-fdiagnostics-color"
      "-Wextra"
      "-pedantic"
      "-D_GNU_SOURCE"
      "-Wno-error=implicit-fallthrough"
      "-Werror"
      "-Wno-error=unused-parameter"
      "-DINSIDE_DANTE"
      "-Wall"
      "-Wno-parentheses"
      "-std=c11"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-Wl,-cref"
        "-ggdb3"
        "-Wl,-Map=main.map"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "circular_buffer.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)