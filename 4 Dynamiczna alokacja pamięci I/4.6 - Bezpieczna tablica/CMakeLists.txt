#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-23 21:51:53.350964
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-xc"
      "-Wno-error=parentheses"
      "-pedantic"
      "-DINSIDE_DANTE"
      "-D_GNU_SOURCE"
      "-Wextra"
      "-ggdb3"
      "-Wno-error=unused-parameter"
      "-Wno-parentheses"
      "-Werror"
      "-D_ANSI_OUTPUT"
      "-Werror=vla"
      "-Wno-error=implicit-fallthrough"
      "-fmax-errors=5"
      "-Wall"
      "-std=c11"
      "-fdiagnostics-color"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
        "-Wl,-cref"
        "-ggdb3"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "array.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)