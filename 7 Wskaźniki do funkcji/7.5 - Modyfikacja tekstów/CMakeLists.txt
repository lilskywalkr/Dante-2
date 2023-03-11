#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-04-30 11:44:19.660024
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-error=implicit-fallthrough"
      "-fmax-errors=5"
      "-DINSIDE_DANTE"
      "-Wextra"
      "-ggdb3"
      "-Wno-parentheses"
      "-Wno-error=unused-parameter"
      "-Werror"
      "-xc"
      "-Wall"
      "-pedantic"
      "-fdiagnostics-color"
      "-Werror=vla"
      "-std=c11"
      "-D_ANSI_OUTPUT"
      "-Wno-error=parentheses"
      "-D_GNU_SOURCE"

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
        "char_operations.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)