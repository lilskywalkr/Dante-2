#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-08 18:06:41.274242
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-fdiagnostics-color"
      "-pedantic"
      "-Wno-error=implicit-fallthrough"
      "-Wno-error=parentheses"
      "-fmax-errors=5"
      "-xc"
      "-ggdb3"
      "-D_ANSI_OUTPUT"
      "-D_GNU_SOURCE"
      "-Werror=vla"
      "-Werror"
      "-Wall"
      "-Wno-parentheses"
      "-DINSIDE_DANTE"
      "-Wno-error=unused-parameter"
      "-Wextra"
      "-std=c11"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-Map=main.map"
        "-ggdb3"
        "-Wl,-cref"
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