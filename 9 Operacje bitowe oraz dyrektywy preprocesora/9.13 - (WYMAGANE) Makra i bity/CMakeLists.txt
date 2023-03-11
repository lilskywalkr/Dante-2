#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-21 13:57:36.557360
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror"
      "-Werror=vla"
      "-Wno-error=unused-parameter"
      "-std=c11"
      "-DINSIDE_DANTE"
      "-Wno-error=implicit-fallthrough"
      "-pedantic"
      "-fdiagnostics-color"
      "-Wall"
      "-fmax-errors=5"
      "-D_ANSI_OUTPUT"
      "-Wno-parentheses"
      "-ggdb3"
      "-Wextra"
      "-xc"
      "-D_GNU_SOURCE"
      "-Wno-error=parentheses"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-Wl,-cref"
        "-Wl,-Map=main.map"
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