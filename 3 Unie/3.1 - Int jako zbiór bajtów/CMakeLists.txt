#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-12 16:48:01.120184
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-xc"
      "-Wall"
      "-Werror"
      "-Wno-parentheses"
      "-std=c11"
      "-Wno-error=parentheses"
      "-Wno-error=implicit-fallthrough"
      "-Werror=vla"
      "-D_GNU_SOURCE"
      "-Wno-error=unused-parameter"
      "-Wextra"
      "-fdiagnostics-color"
      "-D_ANSI_OUTPUT"
      "-ggdb3"
      "-pedantic"
      "-DINSIDE_DANTE"
      "-fmax-errors=5"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-wrap,main"
        "-Wl,-Map=main.map"
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