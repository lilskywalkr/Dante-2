#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-03-06 15:51:45.417243
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-D_GNU_SOURCE"
      "-Wno-error=parentheses"
      "-DINSIDE_DANTE"
      "-Wno-error=implicit-fallthrough"
      "-xc"
      "-fmax-errors=5"
      "-Werror"
      "-Wno-parentheses"
      "-std=c11"
      "-Wall"
      "-pedantic"
      "-ggdb3"
      "-D_ANSI_OUTPUT"
      "-Wextra"
      "-fdiagnostics-color"
      "-Werror=vla"
      "-Wno-error=unused-parameter"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-cref"
        "-Wl,-wrap,main"
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