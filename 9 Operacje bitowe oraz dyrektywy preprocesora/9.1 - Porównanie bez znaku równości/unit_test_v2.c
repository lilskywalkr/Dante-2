/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Porównanie bez znaku równości
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-15 22:01:53.763494
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
//  Test 1: Sprawdzenie funkcji is_equal()
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzenie funkcji is_equal()", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int result;
            
                result = is_equal(0, 0);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(1, 1);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(-1, -1);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(0, 1);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(0, -1);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(-1, 0);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(1, 0);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(2147483647, 2147483647);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(-1941867319, 1210171463);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(1719417830, 2054987172);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(930774333, -1082241299);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(-1295097274, 6058241);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(1735026939, 1053892076);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(-761295909, 290378986);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(-1564865984, 669342332);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(-1784390599, -1652003540);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(1423889270, -281286950);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(-1400410741, -950776814);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(1279011644, 1680372332);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(-1452208659, -1162578413);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(1925544652, 543899544);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(520032579, 259422698);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(-1865520142, 337343739);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(2009161170, -1792626647);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(-1230206045, 1693173217);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(742350281, 1690439470);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(1439845143, -556981452);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(881109240, 122268307);
                test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
            
                result = is_equal(616664720, 616664720);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(1554939847, 1554939847);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(56033335, 56033335);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(-551833727, -551833727);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(1413571114, 1413571114);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(664830144, 664830144);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(-762010959, -762010959);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(34638756, 34638756);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(-477513078, -477513078);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(204951375, 204951375);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(802639839, 802639839);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(330897564, 330897564);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(732164216, 732164216);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(1890191229, 1890191229);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(-1863519234, -1863519234);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(-1143496930, -1143496930);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(-1647996299, -1647996299);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(1654123226, 1654123226);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(1153755702, 1153755702);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
                result = is_equal(-113154449, -113154449);
                test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
            
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzenie funkcji is_negative()
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzenie funkcji is_negative()", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
             int result;
             
                 result = is_negative(0);
                 test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
             
                 result = is_negative(1);
                 test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
             
                 result = is_negative(-1);
                 test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
             
                 result = is_negative(1983858550);
                 test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
             
                 result = is_negative(-1119852547);
                 test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
             
                 result = is_negative(-323283278);
                 test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
             
                 result = is_negative(-72300518);
                 test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
             
                 result = is_negative(518354524);
                 test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
             
                 result = is_negative(-1084991870);
                 test_error(result == 1, "Oczekiwano wartości 1 a otrzymano %d", result);
             
                 result = is_negative(959738246);
                 test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
             
                 result = is_negative(1941535101);
                 test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
             
                 result = is_negative(1789264997);
                 test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
             
                 result = is_negative(1789634658);
                 test_error(result == 0, "Oczekiwano wartości 0 a otrzymano %d", result);
             
         
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
            UTEST1, // Sprawdzenie funkcji is_equal()
            UTEST2, // Sprawdzenie funkcji is_negative()
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
            test_summary(2); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
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
            test_summary(0); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}