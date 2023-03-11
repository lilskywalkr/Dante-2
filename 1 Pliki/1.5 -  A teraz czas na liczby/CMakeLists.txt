#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-24 11:25:21.450082
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-pedantic"
      "-Werror"
      "-std=c11"
      "-Wno-parentheses"
      "-Wno-error=parentheses"
      "-fmax-errors=5"
      "-Wextra"
      "-Wno-error=implicit-fallthrough"
      "-xc"
      "-D_GNU_SOURCE"
      "-D_ANSI_OUTPUT"
      "-DINSIDE_DANTE"
      "-fdiagnostics-color"
      "-Wall"
      "-Wno-error=unused-parameter"
      "-Werror=vla"
      "-ggdb3"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-cref"
        "-ggdb3"
        "-Wl,-wrap,main"
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