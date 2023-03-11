#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-04-26 12:29:20.420704
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-error=unused-parameter"
      "-pedantic"
      "-DINSIDE_DANTE"
      "-Werror"
      "-D_ANSI_OUTPUT"
      "-xc"
      "-D_GNU_SOURCE"
      "-Wextra"
      "-Wall"
      "-Wno-parentheses"
      "-std=c11"
      "-ggdb3"
      "-Wno-error=parentheses"
      "-fdiagnostics-color"
      "-Werror=vla"
      "-fmax-errors=5"
      "-Wno-error=implicit-fallthrough"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-Wl,-wrap,main"
        "-Wl,-Map=main.map"
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