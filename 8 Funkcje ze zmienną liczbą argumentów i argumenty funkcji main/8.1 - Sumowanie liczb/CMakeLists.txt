#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-07 22:38:29.273471
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-fmax-errors=5"
      "-D_GNU_SOURCE"
      "-std=c11"
      "-Wextra"
      "-Werror=vla"
      "-Werror"
      "-Wno-parentheses"
      "-Wno-error=implicit-fallthrough"
      "-DINSIDE_DANTE"
      "-Wno-error=unused-parameter"
      "-Wall"
      "-pedantic"
      "-fdiagnostics-color"
      "-ggdb3"
      "-Wno-error=parentheses"
      "-D_ANSI_OUTPUT"
      "-xc"

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