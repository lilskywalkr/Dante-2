#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-06-01 22:40:17.304087
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-fdiagnostics-color"
      "-D_GNU_SOURCE"
      "-Wno-error=unused-parameter"
      "-fmax-errors=5"
      "-pedantic"
      "-Wno-parentheses"
      "-Wall"
      "-std=c11"
      "-ggdb3"
      "-Werror=vla"
      "-Wno-error=parentheses"
      "-DINSIDE_DANTE"
      "-D_ANSI_OUTPUT"
      "-Werror"
      "-Wno-error=implicit-fallthrough"
      "-Wextra"
      "-xc"

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
        "doubly_linked_list.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)