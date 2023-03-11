#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-08 20:15:57.121278
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-D_GNU_SOURCE"
      "-Wextra"
      "-ggdb3"
      "-Werror=vla"
      "-fdiagnostics-color"
      "-Werror"
      "-Wno-error=unused-parameter"
      "-D_ANSI_OUTPUT"
      "-DINSIDE_DANTE"
      "-Wno-parentheses"
      "-pedantic"
      "-std=c11"
      "-xc"
      "-Wall"
      "-fmax-errors=5"
      "-Wno-error=parentheses"
      "-Wno-error=implicit-fallthrough"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
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