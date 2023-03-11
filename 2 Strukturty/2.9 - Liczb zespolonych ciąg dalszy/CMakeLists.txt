#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-06 00:59:58.483440
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-pedantic"
      "-DINSIDE_DANTE"
      "-Wall"
      "-xc"
      "-fdiagnostics-color"
      "-Werror"
      "-Wno-error=parentheses"
      "-fmax-errors=5"
      "-Wextra"
      "-Wno-error=unused-parameter"
      "-D_ANSI_OUTPUT"
      "-std=c11"
      "-Werror=vla"
      "-ggdb3"
      "-Wno-error=implicit-fallthrough"
      "-D_GNU_SOURCE"
      "-Wno-parentheses"

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