#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-02 00:42:13.360001
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-ggdb3"
      "-Werror"
      "-std=c11"
      "-Wall"
      "-Wno-error=implicit-fallthrough"
      "-DINSIDE_DANTE"
      "-pedantic"
      "-fdiagnostics-color"
      "-Wno-error=unused-parameter"
      "-Wno-error=parentheses"
      "-Wno-parentheses"
      "-Werror=vla"
      "-fmax-errors=5"
      "-D_ANSI_OUTPUT"
      "-D_GNU_SOURCE"
      "-xc"
      "-Wextra"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-ggdb3"
        "-Wl,-cref"
        "-Wl,-wrap,main"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "board.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)