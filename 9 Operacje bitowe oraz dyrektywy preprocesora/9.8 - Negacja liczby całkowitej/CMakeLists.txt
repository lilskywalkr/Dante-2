#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-05-16 11:12:25.940459
#

cmake_minimum_required(VERSION 3.17)
project(project1 C)

# Przyjmij standard C11
set(CMAKE_C_STANDARD 11)

# Ustaw opcje kompilatora (z raportu Dante)
add_compile_options(
      "-ggdb3"
      "-pedantic"
      "-std=c11"
      "-fmax-errors=5"
      "-Wno-error=parentheses"
      "-DINSIDE_DANTE"
      "-Wno-error=implicit-fallthrough"
      "-D_GNU_SOURCE"
      "-Wall"
      "-D_ANSI_OUTPUT"
      "-Wno-parentheses"
      "-Werror=vla"
      "-xc"
      "-fdiagnostics-color"
      "-Wno-error=unused-parameter"
      "-Wextra"
      "-Werror"

)

# Ustaw opcje konsolidatora (z raportu Dante)
add_link_options(
        "-ggdb3"
        "-Wl,-Map=main.map"
        "-Wl,-cref"
)

# Utwórz target 'project1' i dodaj do niego pliki źródlowe:
add_executable(project1
        "main.c"
)

# Dołącz niezbędne biblioteki
target_link_libraries(project1
        "m"
)