#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-04-27 12:41:33.685686
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-parentheses"
      "-Werror=vla"
      "-D_GNU_SOURCE"
      "-DINSIDE_DANTE"
      "-ggdb3"
      "-fmax-errors=5"
      "-Wextra"
      "-xc"
      "-Wno-error=parentheses"
      "-Wno-error=unused-parameter"
      "-Wno-error=implicit-fallthrough"
      "-fdiagnostics-color"
      "-pedantic"
      "-D_ANSI_OUTPUT"
      "-Werror"
      "-std=c11"
      "-Wall"

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
        "int_operations.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)