/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Dynamiczna tabliczka mnożenia
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-03 23:28:31.216772
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


//
// Elementy globalne dla całego testu
//






//
//  Test 1: Reakcja na brak pamięci - limit ustawiony na 40 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit ustawiony na 40 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(40);
    
    //
    // -----------
    //
    
            printf("***START***\n");
            int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
            printf("\n***END***\n");
            test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code); 
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 80 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 80 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(80);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 120 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 120 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(120);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 160 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 160 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(160);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Reakcja na brak pamięci - limit ustawiony na 200 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit ustawiony na 200 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(200);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Reakcja na brak pamięci - limit ustawiony na 240 bajtów
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na brak pamięci - limit ustawiony na 240 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(240);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Reakcja na brak pamięci - limit ustawiony na 280 bajtów
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na brak pamięci - limit ustawiony na 280 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(280);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Reakcja na brak pamięci - limit ustawiony na 320 bajtów
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na brak pamięci - limit ustawiony na 320 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(320);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Reakcja na brak pamięci - limit ustawiony na 360 bajtów
//
void MTEST9(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(9, "Reakcja na brak pamięci - limit ustawiony na 360 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(360);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Reakcja na brak pamięci - limit ustawiony na 400 bajtów
//
void MTEST10(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(10, "Reakcja na brak pamięci - limit ustawiony na 400 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(400);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Reakcja na brak pamięci - limit ustawiony na 440 bajtów
//
void MTEST11(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(11, "Reakcja na brak pamięci - limit ustawiony na 440 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(440);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Reakcja na limit pamięci - limit dla pojedynczego wywołania funkcji malloc, calloc i realloc ustawiony na 80 bajtów; limit ogólny 1000 bajtów
//
void MTEST12(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(12, "Reakcja na limit pamięci - limit dla pojedynczego wywołania funkcji malloc, calloc i realloc ustawiony na 80 bajtów; limit ogólny 1000 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1000);
    rldebug_heap_set_function_singleshot_limit(HFC_MALLOC, 80);
    rldebug_heap_set_function_singleshot_limit(HFC_CALLOC, 80);
    rldebug_heap_set_function_singleshot_limit(HFC_REALLOC, 80);
    
    //
    // -----------
    //
    
            printf("***START***\n");
            int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
            printf("\n***END***\n");
            test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code);
            test_no_heap_leakage();
            onerror_terminate();
        
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

    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci - limit ustawiony na 40 bajtów
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 80 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 120 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 160 bajtów
            MTEST5, // Reakcja na brak pamięci - limit ustawiony na 200 bajtów
            MTEST6, // Reakcja na brak pamięci - limit ustawiony na 240 bajtów
            MTEST7, // Reakcja na brak pamięci - limit ustawiony na 280 bajtów
            MTEST8, // Reakcja na brak pamięci - limit ustawiony na 320 bajtów
            MTEST9, // Reakcja na brak pamięci - limit ustawiony na 360 bajtów
            MTEST10, // Reakcja na brak pamięci - limit ustawiony na 400 bajtów
            MTEST11, // Reakcja na brak pamięci - limit ustawiony na 440 bajtów
            MTEST12, // Reakcja na limit pamięci - limit dla pojedynczego wywołania funkcji malloc, calloc i realloc ustawiony na 80 bajtów; limit ogólny 1000 bajtów
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
            test_summary(12); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}