#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-15 13:39:42.478455
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wextra"
      "-ggdb3"
      "-Wall"
      "-std=c11"
      "-Wno-parentheses"
      "-D_ANSI_OUTPUT"
      "-DINSIDE_DANTE"
      "-fmax-errors=5"
      "-pedantic"
      "-Wno-error=parentheses"
      "-fdiagnostics-color"
      "-D_GNU_SOURCE"
      "-Werror=vla"
      "-Wno-error=implicit-fallthrough"
      "-Werror"
      "-Wno-error=unused-parameter"
      "-xc"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-wrap,main"
        "-Wl,-cref"
        "-Wl,-Map=main.map"
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