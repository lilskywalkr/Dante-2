#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-01-04 20:13:13.829967
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-error=parentheses"
      "-Wextra"
      "-D_ANSI_OUTPUT"
      "-D_GNU_SOURCE"
      "-pedantic"
      "-Wall"
      "-Wno-error=unused-parameter"
      "-fdiagnostics-color"
      "-Werror=vla"
      "-Wno-error=implicit-fallthrough"
      "-DINSIDE_DANTE"
      "-ggdb3"
      "-Werror"
      "-fmax-errors=5"
      "-Wno-parentheses"
      "-xc"
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
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)