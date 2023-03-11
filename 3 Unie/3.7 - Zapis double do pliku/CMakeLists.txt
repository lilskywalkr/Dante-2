#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-15 16:42:09.022408
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror"
      "-xc"
      "-ggdb3"
      "-Wextra"
      "-Wno-error=implicit-fallthrough"
      "-fmax-errors=5"
      "-Werror=vla"
      "-std=c11"
      "-Wno-parentheses"
      "-D_GNU_SOURCE"
      "-D_ANSI_OUTPUT"
      "-Wno-error=parentheses"
      "-Wall"
      "-Wno-error=unused-parameter"
      "-DINSIDE_DANTE"
      "-pedantic"
      "-fdiagnostics-color"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-Wl,-Map=main.map"
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