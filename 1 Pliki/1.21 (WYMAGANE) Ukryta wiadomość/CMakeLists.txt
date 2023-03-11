#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-28 15:20:34.743119
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-error=implicit-fallthrough"
      "-xc"
      "-DINSIDE_DANTE"
      "-Werror=vla"
      "-Wno-error=parentheses"
      "-Wall"
      "-pedantic"
      "-Wno-parentheses"
      "-D_ANSI_OUTPUT"
      "-std=c11"
      "-ggdb3"
      "-Wextra"
      "-Wno-error=unused-parameter"
      "-D_GNU_SOURCE"
      "-Werror"
      "-fmax-errors=5"
      "-fdiagnostics-color"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-ggdb3"
        "-Wl,-Map=main.map"
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