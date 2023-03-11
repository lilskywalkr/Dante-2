#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-03-07 07:26:33.294198
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror"
      "-fmax-errors=5"
      "-D_ANSI_OUTPUT"
      "-fdiagnostics-color"
      "-D_GNU_SOURCE"
      "-Wno-error=implicit-fallthrough"
      "-std=c11"
      "-Wall"
      "-pedantic"
      "-ggdb3"
      "-Wno-error=unused-parameter"
      "-Wno-error=parentheses"
      "-Wextra"
      "-Werror=vla"
      "-xc"
      "-Wno-parentheses"
      "-DINSIDE_DANTE"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-Wl,-Map=main.map"
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