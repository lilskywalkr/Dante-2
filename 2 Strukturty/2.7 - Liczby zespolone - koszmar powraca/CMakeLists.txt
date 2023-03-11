#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-05 16:58:36.765534
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=parentheses"
      "-D_GNU_SOURCE"
      "-Wextra"
      "-Werror=vla"
      "-Werror"
      "-fdiagnostics-color"
      "-Wno-parentheses"
      "-ggdb3"
      "-pedantic"
      "-fmax-errors=5"
      "-DINSIDE_DANTE"
      "-Wno-error=unused-parameter"
      "-std=c11"
      "-Wall"
      "-xc"
      "-D_ANSI_OUTPUT"

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
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)