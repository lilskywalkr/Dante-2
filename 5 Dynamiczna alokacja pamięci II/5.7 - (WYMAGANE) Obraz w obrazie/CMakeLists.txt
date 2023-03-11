#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-03-27 14:04:48.232774
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-ggdb3"
      "-xc"
      "-fdiagnostics-color"
      "-Wextra"
      "-pedantic"
      "-Werror"
      "-Wno-error=implicit-fallthrough"
      "-fmax-errors=5"
      "-std=c11"
      "-Wall"
      "-Wno-error=parentheses"
      "-Wno-parentheses"
      "-Wno-error=unused-parameter"
      "-D_GNU_SOURCE"
      "-DINSIDE_DANTE"
      "-D_ANSI_OUTPUT"
      "-Werror=vla"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-Map=main.map"
        "-Wl,-wrap,main"
        "-Wl,-cref"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "image_utils.c"
        "main.c"
        "unit_helper_v2.c"
        "unit_test_v2.c"
        "rdebug.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)