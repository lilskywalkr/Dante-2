#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-22 23:45:15.938104
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror"
      "-Wextra"
      "-Wno-error=unused-parameter"
      "-Wno-parentheses"
      "-Werror=vla"
      "-Wno-error=parentheses"
      "-ggdb3"
      "-pedantic"
      "-D_ANSI_OUTPUT"
      "-Wall"
      "-fmax-errors=5"
      "-DINSIDE_DANTE"
      "-fdiagnostics-color"
      "-std=c11"
      "-Wno-error=implicit-fallthrough"
      "-D_GNU_SOURCE"
      "-xc"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-ggdb3"
        "-Wl,-Map=main.map"
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