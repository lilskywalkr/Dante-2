#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-04-18 18:49:15.132799
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-Wno-error=parentheses"
      "-Werror=vla"
      "-D_ANSI_OUTPUT"
      "-fdiagnostics-color"
      "-Wno-error=implicit-fallthrough"
      "-D_GNU_SOURCE"
      "-ggdb3"
      "-xc"
      "-Wno-parentheses"
      "-Wall"
      "-pedantic"
      "-fmax-errors=5"
      "-Wno-error=unused-parameter"
      "-Wextra"
      "-std=c11"
      "-DINSIDE_DANTE"
      "-Werror"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-wrap,main"
        "-Wl,-cref"
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