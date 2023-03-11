#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2021-12-23 20:47:28.895238
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-DINSIDE_DANTE"
      "-D_GNU_SOURCE"
      "-D_ANSI_OUTPUT"
      "-pedantic"
      "-Wno-error=unused-parameter"
      "-xc"
      "-Wall"
      "-fdiagnostics-color"
      "-Werror"
      "-fmax-errors=5"
      "-ggdb3"
      "-Werror=vla"
      "-Wextra"
      "-std=c11"
      "-Wno-error=parentheses"
      "-Wno-error=implicit-fallthrough"
      "-Wno-parentheses"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-cref"
        "-ggdb3"
        "-Wl,-wrap,main"
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