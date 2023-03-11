#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-21 21:11:16.950900
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror"
      "-pedantic"
      "-ggdb3"
      "-Werror=vla"
      "-Wno-error=parentheses"
      "-std=c11"
      "-Wall"
      "-Wextra"
      "-Wno-error=implicit-fallthrough"
      "-Wno-parentheses"
      "-D_GNU_SOURCE"
      "-DINSIDE_DANTE"
      "-fdiagnostics-color"
      "-xc"
      "-D_ANSI_OUTPUT"
      "-fmax-errors=5"
      "-Wno-error=unused-parameter"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
        "-Wl,-cref"
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