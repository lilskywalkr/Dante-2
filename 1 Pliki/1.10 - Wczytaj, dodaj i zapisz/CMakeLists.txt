#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-26 21:02:23.994706
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror=vla"
      "-std=c11"
      "-Wextra"
      "-fdiagnostics-color"
      "-xc"
      "-Wno-error=implicit-fallthrough"
      "-fmax-errors=5"
      "-D_GNU_SOURCE"
      "-Wno-parentheses"
      "-pedantic"
      "-D_ANSI_OUTPUT"
      "-Wall"
      "-Werror"
      "-Wno-error=unused-parameter"
      "-DINSIDE_DANTE"
      "-ggdb3"
      "-Wno-error=parentheses"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-ggdb3"
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
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