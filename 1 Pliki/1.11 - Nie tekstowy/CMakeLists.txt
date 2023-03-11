#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-27 17:00:21.913505
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-error=unused-parameter"
      "-Wno-parentheses"
      "-Werror=vla"
      "-Wall"
      "-fdiagnostics-color"
      "-Werror"
      "-pedantic"
      "-xc"
      "-fmax-errors=5"
      "-D_GNU_SOURCE"
      "-std=c11"
      "-DINSIDE_DANTE"
      "-Wextra"
      "-ggdb3"
      "-D_ANSI_OUTPUT"
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=parentheses"

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