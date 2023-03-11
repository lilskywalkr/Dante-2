#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-03-30 17:25:48.703679
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror=vla"
      "-Wno-error=unused-parameter"
      "-Wno-error=parentheses"
      "-Wno-error=implicit-fallthrough"
      "-fdiagnostics-color"
      "-Werror"
      "-Wextra"
      "-pedantic"
      "-xc"
      "-DINSIDE_DANTE"
      "-ggdb3"
      "-D_GNU_SOURCE"
      "-Wall"
      "-Wno-parentheses"
      "-D_ANSI_OUTPUT"
      "-fmax-errors=5"
      "-std=c11"

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
        "big_numbers.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)