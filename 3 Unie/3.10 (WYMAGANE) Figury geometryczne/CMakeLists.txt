#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-18 00:58:07.458247
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-std=c11"
      "-ggdb3"
      "-Wno-error=unused-parameter"
      "-xc"
      "-pedantic"
      "-Wall"
      "-DINSIDE_DANTE"
      "-D_ANSI_OUTPUT"
      "-Werror=vla"
      "-Werror"
      "-Wno-parentheses"
      "-Wextra"
      "-Wno-error=parentheses"
      "-fmax-errors=5"
      "-fdiagnostics-color"
      "-Wno-error=implicit-fallthrough"
      "-D_GNU_SOURCE"

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