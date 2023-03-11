#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-15 22:02:17.036348
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-pedantic"
      "-D_ANSI_OUTPUT"
      "-std=c11"
      "-Wextra"
      "-fmax-errors=5"
      "-xc"
      "-Werror"
      "-Wno-error=unused-parameter"
      "-Wno-error=parentheses"
      "-fdiagnostics-color"
      "-ggdb3"
      "-DINSIDE_DANTE"
      "-Wall"
      "-Wno-error=implicit-fallthrough"
      "-Wno-parentheses"
      "-D_GNU_SOURCE"
      "-Werror=vla"

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
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)