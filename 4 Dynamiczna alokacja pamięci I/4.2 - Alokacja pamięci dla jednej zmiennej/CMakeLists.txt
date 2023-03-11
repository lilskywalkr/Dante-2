#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-22 23:52:56.156037
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-parentheses"
      "-Wno-error=parentheses"
      "-D_ANSI_OUTPUT"
      "-std=c11"
      "-fdiagnostics-color"
      "-pedantic"
      "-xc"
      "-Wextra"
      "-Werror"
      "-Wno-error=unused-parameter"
      "-fmax-errors=5"
      "-ggdb3"
      "-Wno-error=implicit-fallthrough"
      "-Werror=vla"
      "-D_GNU_SOURCE"
      "-DINSIDE_DANTE"
      "-Wall"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-cref"
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