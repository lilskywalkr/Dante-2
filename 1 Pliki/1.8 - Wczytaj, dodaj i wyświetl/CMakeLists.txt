#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-25 23:27:46.150468
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-ggdb3"
      "-Werror=vla"
      "-fmax-errors=5"
      "-Wno-parentheses"
      "-fdiagnostics-color"
      "-DINSIDE_DANTE"
      "-Wextra"
      "-pedantic"
      "-D_ANSI_OUTPUT"
      "-std=c11"
      "-Wno-error=implicit-fallthrough"
      "-Wall"
      "-Wno-error=unused-parameter"
      "-D_GNU_SOURCE"
      "-Wno-error=parentheses"
      "-xc"
      "-Werror"

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
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)