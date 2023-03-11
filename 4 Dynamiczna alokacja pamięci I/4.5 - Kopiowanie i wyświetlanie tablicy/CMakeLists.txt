#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-23 18:03:44.075220
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wall"
      "-std=c11"
      "-Wno-error=unused-parameter"
      "-Wextra"
      "-pedantic"
      "-ggdb3"
      "-Wno-error=parentheses"
      "-DINSIDE_DANTE"
      "-xc"
      "-Werror"
      "-Werror=vla"
      "-fdiagnostics-color"
      "-Wno-error=implicit-fallthrough"
      "-Wno-parentheses"
      "-D_GNU_SOURCE"
      "-D_ANSI_OUTPUT"
      "-fmax-errors=5"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-Wl,-Map=main.map"
        "-Wl,-cref"
        "-ggdb3"
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