#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-09 18:44:41.395964
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror"
      "-D_GNU_SOURCE"
      "-D_ANSI_OUTPUT"
      "-fdiagnostics-color"
      "-Wextra"
      "-Wno-error=parentheses"
      "-Wall"
      "-DINSIDE_DANTE"
      "-Wno-parentheses"
      "-fmax-errors=5"
      "-xc"
      "-pedantic"
      "-ggdb3"
      "-std=c11"
      "-Werror=vla"
      "-Wno-error=unused-parameter"
      "-Wno-error=implicit-fallthrough"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-cref"
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "functions.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)