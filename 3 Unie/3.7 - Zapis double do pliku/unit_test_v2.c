/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Zapis double do pliku
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-15 16:41:48.313417
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


        union double_to_char_t
        {
          double d;
          char tab[8];
        };
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji save_double
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji save_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                union double_to_char_t dtc = { .d = 1667.943975812739 };
        
                int err_code = save_double(&dtc, "thin.bin");
                test_error(err_code == 0, "Funkcja save_double() powinna zwrócić 0, a zwróciła %d", err_code);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji save_double
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji save_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                union double_to_char_t dtc = { .d = -1860.7510001197325 };
        
                int err_code = save_double(&dtc, "strange.txt");
                test_error(err_code == 0, "Funkcja save_double() powinna zwrócić 0, a zwróciła %d", err_code);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji save_double
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji save_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                union double_to_char_t dtc = { .d = 0 };
        
                int err_code = save_double(&dtc, "producesentburnagreethrowmeasurepastchairdetermine");
                test_error(err_code == 0, "Funkcja save_double() powinna zwrócić 0, a zwróciła %d", err_code);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Reakcja funkcji save_double na brak możliwości utworzenia pliku (fopen zwróci NULL)
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Reakcja funkcji save_double na brak możliwości utworzenia pliku (fopen zwróci NULL)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    
            union double_to_char_t dtc = { .d = 0 };

            int err_code = save_double(&dtc, "producesentburnagreethrowmeasurepastchairdetermine");
            test_error(err_code == 2, "Funkcja save_double() powinna zwrócić 2, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji save_double
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji save_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            union double_to_char_t dtc = { .d = 0 };

            int err_code = save_double(&dtc, NULL);
            test_error(err_code == 1, "Funkcja save_double() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji save_double
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji save_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = save_double(NULL, "producesentburnagreethrowmeasurepastchairdetermine");
            test_error(err_code == 1, "Funkcja save_double() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji save_double
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji save_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = save_double(NULL, NULL);
            test_error(err_code == 1, "Funkcja save_double() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji load_double
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji load_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                union double_to_char_t dtc = { .d = 5242.478764490465 };
        
                int err_code = load_double(&dtc, "sugar.txt");
                test_error(err_code == 0, "Funkcja load_double() powinna zwrócić 0, a zwróciła %d", err_code);
        
                test_error(5242.478764490465 + 0.01 > dtc.d && 5242.478764490465 - 0.01 < dtc.d, "Wartość %lf odczytana przez funkcję load_data() nie mieści się w wymaganym przedziale dokładności, powinno być 5242.478764490465", dtc.d);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji load_double
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji load_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                union double_to_char_t dtc = { .d = -6661.199797815884 };
        
                int err_code = load_double(&dtc, "capital.bin");
                test_error(err_code == 0, "Funkcja load_double() powinna zwrócić 0, a zwróciła %d", err_code);
        
                test_error(-6661.199797815884 + 0.01 > dtc.d && -6661.199797815884 - 0.01 < dtc.d, "Wartość %lf odczytana przez funkcję load_data() nie mieści się w wymaganym przedziale dokładności, powinno być -6661.199797815884", dtc.d);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji load_double
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji load_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                union double_to_char_t dtc = { .d = 0 };
        
                int err_code = load_double(&dtc, "earthwildmeancamepartybehindhopesafecurrentweightpeople");
                test_error(err_code == 0, "Funkcja load_double() powinna zwrócić 0, a zwróciła %d", err_code);
        
                test_error(0 + 0.01 > dtc.d && 0 - 0.01 < dtc.d, "Wartość %lf odczytana przez funkcję load_data() nie mieści się w wymaganym przedziale dokładności, powinno być 0", dtc.d);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji load_double
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji load_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                union double_to_char_t dtc = { .d = 72797.72470246516 };
        
                int err_code = load_double(&dtc, "week.txt");
                test_error(err_code == 3, "Funkcja load_double() powinna zwrócić 3, a zwróciła %d", err_code);
        
                test_error(72797.72470246516 + 0.01 > dtc.d && 72797.72470246516 - 0.01 < dtc.d, "Wartość %lf odczytana przez funkcję load_data() nie mieści się w wymaganym przedziale dokładności, powinno być 72797.72470246516", dtc.d);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji load_double
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji load_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                union double_to_char_t dtc = { .d = 72797.72470246516 };
        
                int err_code = load_double(&dtc, "house.txt");
                test_error(err_code == 3, "Funkcja load_double() powinna zwrócić 3, a zwróciła %d", err_code);
        
                test_error(72797.72470246516 + 0.01 > dtc.d && 72797.72470246516 - 0.01 < dtc.d, "Wartość %lf odczytana przez funkcję load_data() nie mieści się w wymaganym przedziale dokładności, powinno być 72797.72470246516", dtc.d);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji load_double
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji load_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                union double_to_char_t dtc = { .d = 72797.72470246516 };
        
                int err_code = load_double(&dtc, "lone.txt");
                test_error(err_code == 2, "Funkcja load_double() powinna zwrócić 2, a zwróciła %d", err_code);
        
                test_error(72797.72470246516 + 0.01 > dtc.d && 72797.72470246516 - 0.01 < dtc.d, "Wartość %lf odczytana przez funkcję load_data() nie mieści się w wymaganym przedziale dokładności, powinno być 72797.72470246516", dtc.d);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji load_double
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji load_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            union double_to_char_t dtc = { .d = 72797.72470246516 };

            int err_code = load_double(&dtc, NULL);
            test_error(err_code == 1, "Funkcja load_double() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji load_double
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji load_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = load_double(NULL, "lone.txt");
            test_error(err_code == 1, "Funkcja load_double() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji load_double
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji load_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = load_double(NULL, NULL);
            test_error(err_code == 1, "Funkcja load_double() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    
            printf("***START***\n");
            int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
            printf("\n***END***\n");
            test_error(ret_code == 5, "Funkcja main zakończyła się kodem %d a powinna 5", ret_code); 
        
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
            UTEST1, // Sprawdzanie poprawności działania funkcji save_double
            UTEST2, // Sprawdzanie poprawności działania funkcji save_double
            UTEST3, // Sprawdzanie poprawności działania funkcji save_double
            UTEST4, // Reakcja funkcji save_double na brak możliwości utworzenia pliku (fopen zwróci NULL)
            UTEST5, // Sprawdzanie poprawności działania funkcji save_double
            UTEST6, // Sprawdzanie poprawności działania funkcji save_double
            UTEST7, // Sprawdzanie poprawności działania funkcji save_double
            UTEST8, // Sprawdzanie poprawności działania funkcji load_double
            UTEST9, // Sprawdzanie poprawności działania funkcji load_double
            UTEST10, // Sprawdzanie poprawności działania funkcji load_double
            UTEST11, // Sprawdzanie poprawności działania funkcji load_double
            UTEST12, // Sprawdzanie poprawności działania funkcji load_double
            UTEST13, // Sprawdzanie poprawności działania funkcji load_double
            UTEST14, // Sprawdzanie poprawności działania funkcji load_double
            UTEST15, // Sprawdzanie poprawności działania funkcji load_double
            UTEST16, // Sprawdzanie poprawności działania funkcji load_double
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
            test_summary(16); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
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