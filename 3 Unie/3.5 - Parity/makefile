#
# DANTE :: System Automatycznych Testów Jednostkowych oraz Akceptacyjnych
# Tomasz Jaworski, 2018-2020
#
# Plik wygenerowany automatycznie
# Znacznik czasowy: 2022-02-12 20:40:55.634112
#

OUTDIR		:= build-dir

CC          := gcc
CC_FLAGS    := -std=c11 -Wno-error=implicit-fallthrough -Wno-error=parentheses -pedantic -fdiagnostics-color -fmax-errors=5 -Werror=vla -xc -Wextra -ggdb3 -D_GNU_SOURCE -DINSIDE_DANTE -Wall -Wno-parentheses -Werror -Wno-error=unused-parameter -D_ANSI_OUTPUT 
#CC_FLAGS    += -Werror=vla -Wno-error=unused-parameter -Wno-error=parentheses -Wno-parentheses -Wno-error=implicit-fallthrough
#CC_FLAGS    += -D_GNU_SOURCE -D_TEST_BOOTSTRAP -DINSIDE_DANTE
#CC_FLAGS    += -D_NO_HTML_OUTPUT -D_ANSI_OUTPUT

LD          := gcc
LD_FLAGS    := -ggdb3 -Wl,-Map=main.map -Wl,-cref 
LD_LIBS     := -lm 

RM          := rm -rf
MKDIR       := mkdir -p

default: # Domyślny target - pomoc
	@echo "Brak określonego celu budowania lub uruchomienia. Dostępne są możliwości:"
	@echo "    make build          - Budowa pliku wykonywalnego"
	@echo "    make rebuild        - Przebudowa pliku wykonywalnego"
	@echo "    make clean          - Usunięcie pliku wykonywalnego i plików pośrenidch"
	@echo "    make run_main       - Uruchomienie przesłanej funkcji main()"
	@echo "    make run_main_tests - Uruchomienie testów funkcji main()"
	@echo "    make run_unit_tests - Uruchomienie testów jednostkowych"
	@echo ""


# Target: podstawowe uruchomienie całego programu
all: run_main

.PHONY: all

# Target: Uruchomienie przesłanej funkcji main()
run_main: build
	${OUTDIR}/main 0

# Target: Uruchomienie testów jednostkowych
run_unit_tests: build
	${OUTDIR}/main 1

# Target: Uruchomienie testów funkcji main()
run_main_tests: build
	${OUTDIR}/main 2

# Target: Przebudowa pliku wykonywalnego
rebuild: clean build

# Target: Budowa pliku wykonywalnego
build: .prepare ${OUTDIR}/main

#
# Kompilacja i konsolidacja przesłanego programu
#

${OUTDIR}/main: ${OUTDIR}/main.c.o 
	@echo "Konsolidacja..."
	@${LD} ${LD_FLAGS} ${OUTDIR}/main.c.o  -o ${OUTDIR}/main ${LD_LIBS}


${OUTDIR}/main.c.o:  main.c
	@echo "Budowanie pliku 'main.o' z 'main.c'..."
	${CC} ${CC_FLAGS} -c main.c -o ${OUTDIR}/main.c.o


.PHONY: build rebuild run_main run_main_tests run_unit_tests clean


#
# Przygotownie środowiska
#

.prepare: ${OUTDIR}

${OUTDIR}:
	${MKDIR} ${OUTDIR}

clean:
	${RM} ${OUTDIR}


.PHONY: prepare clean
.PHONY: build rebuild
.PHONY: run_unit_tests run_main_tests run_main