/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Ile waży plik (trojański?)
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2021-12-23 18:50:22.909546
 *
 * Debug: 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <signal.h>
#include <setjmp.h>
#include <assert.h>

#if !defined(__clang__) && !defined(__GNUC__)
// Zakomentuj poniższy błąd, jeżeli chcesz przetestować testy na swoim kompilatorze C.
#error System testow jednostkowych jest przeznaczony dla kompilatorów GCC/Clang.
#endif

#if defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__)
// Zakomentuj poniższy błąd, jeżeli chcesz przetestować testy na platformie Windows.
#error System testow jednostkowych NIE jest przeznaczony dla testów uruchamianych na platformach Windows.
#endif

#define _RLDEBUG_API_
#include "unit_helper_v2.h"
#include "rdebug.h"

#include "tested_declarations.h"
#include "rdebug.h"

//
// Elementy globalne dla całego testu
//




//
//  Test 1: Sprawdzenie poprawności działania funkcji file_size_from_path
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzenie poprawności działania funkcji file_size_from_path", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
                printf("#####START#####");
                int res = file_size_from_path("path.txt");
                printf("#####END#####\n");
                
                test_error(res == 0, "Funkcja file_size_from_path zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 0, res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzenie poprawności działania funkcji file_size_from_path
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzenie poprawności działania funkcji file_size_from_path", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
                printf("#####START#####");
                int res = file_size_from_path("correct.bin");
                printf("#####END#####\n");
                
                test_error(res == 289, "Funkcja file_size_from_path zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 289, res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzenie poprawności działania funkcji file_size_from_path
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzenie poprawności działania funkcji file_size_from_path", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
                printf("#####START#####");
                int res = file_size_from_path("four");
                printf("#####END#####\n");
                
                test_error(res == 9389, "Funkcja file_size_from_path zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 9389, res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzenie poprawności działania funkcji file_size_from_path
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzenie poprawności działania funkcji file_size_from_path", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
                printf("#####START#####");
                int res = file_size_from_path("buy.port.master.row.either.finger.most.save.record.spread.follow.speak.shore.book.wonder.soft.rail.especially");
                printf("#####END#####\n");
                
                test_error(res == 6238, "Funkcja file_size_from_path zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 6238, res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzenie poprawności działania funkcji file_size_from_path
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzenie poprawności działania funkcji file_size_from_path", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
                printf("#####START#####");
                int res = file_size_from_path("second.txt");
                printf("#####END#####\n");
                
                test_error(res == -1, "Funkcja file_size_from_path zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", -1, res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzenie poprawności działania funkcji file_size_from_path
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzenie poprawności działania funkcji file_size_from_path", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = file_size_from_path(NULL);
            printf("#####END#####\n");

            test_error(res == -2, "Funkcja file_size_from_path zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", -2, res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzenie poprawności działania funkcji file_size_from_file
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzenie poprawności działania funkcji file_size_from_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                FILE *f = fopen("pound.txt", "r");
            
                int pos = 0;
                
                fseek(f, pos, SEEK_SET);
        
                printf("#####START#####");
                int res = file_size_from_file(f);
                printf("#####END#####\n");

                test_error(res == 0, "Funkcja file_size_from_file zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 0, res);
                test_error(ftell(f) == pos, "Funkcja file_size_from_file nie powinna modyfikować wskaźnika na plik");

                fclose(f);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzenie poprawności działania funkcji file_size_from_file
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzenie poprawności działania funkcji file_size_from_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                FILE *f = fopen("lone.bin", "r");
            
                int pos = 0;
                
                fseek(f, pos, SEEK_SET);
        
                printf("#####START#####");
                int res = file_size_from_file(f);
                printf("#####END#####\n");

                test_error(res == 390, "Funkcja file_size_from_file zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 390, res);
                test_error(ftell(f) == pos, "Funkcja file_size_from_file nie powinna modyfikować wskaźnika na plik");

                fclose(f);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzenie poprawności działania funkcji file_size_from_file
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzenie poprawności działania funkcji file_size_from_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                FILE *f = fopen("store", "r");
            
                int pos = 6882;
                
                fseek(f, pos, SEEK_SET);
        
                printf("#####START#####");
                int res = file_size_from_file(f);
                printf("#####END#####\n");

                test_error(res == 6882, "Funkcja file_size_from_file zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 6882, res);
                test_error(ftell(f) == pos, "Funkcja file_size_from_file nie powinna modyfikować wskaźnika na plik");

                fclose(f);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzenie poprawności działania funkcji file_size_from_file
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzenie poprawności działania funkcji file_size_from_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                FILE *f = fopen("wish.heard.sun.special.the.tell.phrase.keep.deep.live.draw.how.bring.nothing.please.matter.division.cool", "r");
            
                int pos = 3418;
                
                fseek(f, pos, SEEK_SET);
        
                printf("#####START#####");
                int res = file_size_from_file(f);
                printf("#####END#####\n");

                test_error(res == 9334, "Funkcja file_size_from_file zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 9334, res);
                test_error(ftell(f) == pos, "Funkcja file_size_from_file nie powinna modyfikować wskaźnika na plik");

                fclose(f);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzenie poprawności działania funkcji file_size_from_file
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzenie poprawności działania funkcji file_size_from_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = file_size_from_file(NULL);
            printf("#####END#####\n");

            test_error(res == -2, "Funkcja file_size_from_file zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", -2, res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak możliwości dwukrotnego otworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak możliwości dwukrotnego otworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 1);
    
    //
    // -----------
    //
    
            printf("***START***\n");
            int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
            printf("\n***END***\n");
            test_error(ret_code == 4, "Funkcja main zakończyła się kodem %d a powinna 4", ret_code); 
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}


enum run_mode_t { rm_normal_with_rld = 0, rm_unit_test = 1, rm_main_test = 2 };

int __wrap_main(volatile int _argc, char** _argv, char** _envp)
{
    int volatile vargc = _argc;
    char ** volatile vargv = _argv, ** volatile venvp = _envp;
	volatile enum run_mode_t run_mode = rm_unit_test; // -1
	volatile int selected_test = -1;

    if (vargc > 1)
	{
	    char* smode = strtok(vargv[1], ",");
	    char* stest = strtok(NULL, "");
		char *errptr = NULL;
		run_mode = (enum run_mode_t)strtol(smode, &errptr, 10);
		if (*errptr == '\x0')
		{
			memmove(vargv + 1, vargv + 2, sizeof(char*) * (vargc - 1));
			vargc--;

			if (stest != NULL)
			{
			    int val = (int)strtol(stest, &errptr, 10);
			    if (*errptr == '\x0')
			        selected_test = val;
			}
		}
	}

    // printf("runmode=%d; selected_test=%d\n", run_mode, selected_test);

    // inicjuj testy jednostkowe
    unit_test_init(run_mode, "unit_test_v2.c");
    test_limit_init();
    rldebug_set_reported_severity_level(MSL_FAILURE);

    if (run_mode == rm_normal_with_rld)
    {
        // konfiguracja ograniczników
        rldebug_reset_limits();
        

        // uruchom funkcję main Studenta a potem wyświetl podsumowanie sterty i zasobów
        volatile int ret_code = rdebug_call_main(tested_main, vargc, vargv, venvp);

        rldebug_reset_limits();
        

        int leaks_detected = rldebug_show_leaked_resources(0);
        if (leaks_detected)
            raise(SIGHEAP);

        return ret_code;
    }

    
    if (run_mode == rm_unit_test)
    {
        test_title("Testy jednostkowe");

        void (*pfcn[])(void) =
        { 
            UTEST1, // Sprawdzenie poprawności działania funkcji file_size_from_path
            UTEST2, // Sprawdzenie poprawności działania funkcji file_size_from_path
            UTEST3, // Sprawdzenie poprawności działania funkcji file_size_from_path
            UTEST4, // Sprawdzenie poprawności działania funkcji file_size_from_path
            UTEST5, // Sprawdzenie poprawności działania funkcji file_size_from_path
            UTEST6, // Sprawdzenie poprawności działania funkcji file_size_from_path
            UTEST7, // Sprawdzenie poprawności działania funkcji file_size_from_file
            UTEST8, // Sprawdzenie poprawności działania funkcji file_size_from_file
            UTEST9, // Sprawdzenie poprawności działania funkcji file_size_from_file
            UTEST10, // Sprawdzenie poprawności działania funkcji file_size_from_file
            UTEST11, // Sprawdzenie poprawności działania funkcji file_size_from_file
            NULL
        };

        for (int idx = 0; pfcn[idx] != NULL && !test_get_session_termination_flag(); idx++)
        {
            if (selected_test == -1 || selected_test == idx + 1)
                pfcn[idx]();

            // limit niezaliczonych testów, po jakim testy jednostkowe zostaną przerwane
            if (test_session_get_fail_count() >= 1000)
                test_terminate_session();
        }


        test_title("RLDebug :: Analiza wycieku zasobów");
        // sprawdź wycieki pamięci
        int leaks_detected = rldebug_show_leaked_resources(1);
        test_set_session_leaks(leaks_detected);

        // poinformuj serwer Mrówka o wyniku testu - podsumowanie
        test_title("Podsumowanie");
        if (selected_test == -1)
            test_summary(11); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak możliwości dwukrotnego otworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)
            NULL
        };

        for (volatile int idx = 0; pfcn[idx] != NULL && !test_get_session_termination_flag(); idx++)
        {
            if (selected_test == -1 || selected_test == idx + 1)
                pfcn[idx](vargc, vargv, venvp);

            // limit niezaliczonych testów, po jakim testy jednostkowe zostaną przerwane
            if (test_session_get_fail_count() >= 1000)
                test_terminate_session();
        }


        test_title("RLDebug :: Analiza wycieku zasobów");
        // sprawdź wycieki pamięci
        int leaks_detected = rldebug_show_leaked_resources(1);
        test_set_session_leaks(leaks_detected);

        // poinformuj serwer Mrówka o wyniku testu - podsumowanie
        test_title("Podsumowanie");
        if (selected_test == -1)
            test_summary(1); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}