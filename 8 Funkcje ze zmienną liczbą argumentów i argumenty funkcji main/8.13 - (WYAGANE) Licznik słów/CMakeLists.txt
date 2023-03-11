#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-15 18:55:33.661659
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-ggdb3"
      "-xc"
      "-Wextra"
      "-Wall"
      "-fmax-errors=5"
      "-Werror=vla"
      "-Wno-error=unused-parameter"
      "-Wno-parentheses"
      "-D_GNU_SOURCE"
      "-pedantic"
      "-DINSIDE_DANTE"
      "-D_ANSI_OUTPUT"
      "-fdiagnostics-color"
      "-Wno-error=implicit-fallthrough"
      "-std=c11"
      "-Wno-error=parentheses"
      "-Werror"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-ggdb3"
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