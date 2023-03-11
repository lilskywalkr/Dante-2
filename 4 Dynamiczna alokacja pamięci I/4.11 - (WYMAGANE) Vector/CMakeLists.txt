#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-03-03 17:29:37.375527
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror=vla"
      "-DINSIDE_DANTE"
      "-Wall"
      "-Wno-parentheses"
      "-std=c11"
      "-pedantic"
      "-Wno-error=parentheses"
      "-ggdb3"
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=unused-parameter"
      "-fdiagnostics-color"
      "-D_GNU_SOURCE"
      "-D_ANSI_OUTPUT"
      "-xc"
      "-Werror"
      "-Wextra"
      "-fmax-errors=5"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-Wl,-cref"
        "-ggdb3"
        "-Wl,-Map=main.map"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "main.c"
        "vector.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)