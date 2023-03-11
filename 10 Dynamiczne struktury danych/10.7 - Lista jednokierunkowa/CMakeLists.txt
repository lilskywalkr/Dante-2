#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-06-01 11:17:35.401034
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-std=c11"
      "-xc"
      "-Wno-error=unused-parameter"
      "-Wall"
      "-DINSIDE_DANTE"
      "-fmax-errors=5"
      "-ggdb3"
      "-Wno-parentheses"
      "-Wno-error=parentheses"
      "-D_GNU_SOURCE"
      "-pedantic"
      "-Wextra"
      "-Werror=vla"
      "-fdiagnostics-color"
      "-Wno-error=implicit-fallthrough"
      "-Werror"
      "-D_ANSI_OUTPUT"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-ggdb3"
        "-Wl,-Map=main.map"
        "-Wl,-cref"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "linked_list.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)