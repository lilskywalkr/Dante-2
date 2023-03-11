#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-04-02 16:41:15.369336
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Werror=vla"
      "-std=c11"
      "-Werror"
      "-xc"
      "-Wno-error=unused-parameter"
      "-DINSIDE_DANTE"
      "-fmax-errors=5"
      "-Wno-error=parentheses"
      "-Wextra"
      "-D_ANSI_OUTPUT"
      "-Wno-parentheses"
      "-ggdb3"
      "-Wno-error=implicit-fallthrough"
      "-pedantic"
      "-D_GNU_SOURCE"
      "-Wall"
      "-fdiagnostics-color"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-Wl,-wrap,main"
        "-Wl,-Map=main.map"
        "-ggdb3"
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