#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-23 16:54:34.502442
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-fdiagnostics-color"
      "-fmax-errors=5"
      "-Wno-error=implicit-fallthrough"
      "-D_ANSI_OUTPUT"
      "-Werror"
      "-pedantic"
      "-ggdb3"
      "-std=c11"
      "-Wextra"
      "-Wno-error=parentheses"
      "-Wall"
      "-Wno-parentheses"
      "-Wno-error=unused-parameter"
      "-xc"
      "-Werror=vla"
      "-DINSIDE_DANTE"
      "-D_GNU_SOURCE"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
        "-ggdb3"
        "-Wl,-cref"
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