/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania I w strukturze plik być może
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-07 20:32:08.091328
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


        
            struct file_t
            {
                FILE *f;
                int size;
            };
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji open_file
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji open_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
                struct file_t file;
                
                printf("#####START#####");
                int ret_val = open_file(&file, "would.txt");
                printf("#####END#####\n");

                test_error(ret_val == 0, "Wartść zwrócona przez funkcję open_file jest nieprawidłowa; powinno być 0, a jest %d", ret_val );
                test_error(file.size == 0, "Rozmiar pliku jest niewłaćiwy; powinno być 0, a jest %d", file.size );

                fclose(file.f);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji open_file
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji open_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
                struct file_t file;
                
                printf("#####START#####");
                int ret_val = open_file(&file, "tree.txt");
                printf("#####END#####\n");

                test_error(ret_val == 0, "Wartść zwrócona przez funkcję open_file jest nieprawidłowa; powinno być 0, a jest %d", ret_val );
                test_error(file.size == 1466, "Rozmiar pliku jest niewłaćiwy; powinno być 1466, a jest %d", file.size );

                fclose(file.f);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji open_file
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji open_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
                struct file_t file;
                
                printf("#####START#####");
                int ret_val = open_file(&file, "off.txt");
                printf("#####END#####\n");

                test_error(ret_val == 0, "Wartść zwrócona przez funkcję open_file jest nieprawidłowa; powinno być 0, a jest %d", ret_val );
                test_error(file.size == 0, "Rozmiar pliku jest niewłaćiwy; powinno być 0, a jest %d", file.size );

                fclose(file.f);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Reakcja funkcji open_file na brak możliwości utworzenia pliku (fopen zwróci NULL)
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Reakcja funkcji open_file na brak możliwości utworzenia pliku (fopen zwróci NULL)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    
                struct file_t file;
                
                printf("#####START#####");
                int ret_val = open_file(&file, "size.txt");
                printf("#####END#####\\n");

                test_error(ret_val == 2, "Wartść zwrócona przez funkcję open_file jest nieprawidłowa; powinno być 2, a jest %d", ret_val );
           
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji open_file
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji open_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct file_t file;

            printf("#####START#####");
            int ret_val = open_file(&file, NULL);
            printf("#####END#####\n");

            test_error(ret_val == 1, "Wartść zwrócona przez funkcję open_file jest nieprawidłowa; powinno być 1, a jest %d", ret_val );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji open_file
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji open_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int ret_val = open_file(NULL, NULL);
            printf("#####END#####\n");

            test_error(ret_val == 1, "Wartść zwrócona przez funkcję open_file jest nieprawidłowa; powinno być 1, a jest %d", ret_val );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji open_file
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji open_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int ret_val = open_file(NULL, "size.txt");
            printf("#####END#####\n");

            test_error(ret_val == 1, "Wartść zwrócona przez funkcję open_file jest nieprawidłowa; powinno być 1, a jest %d", ret_val );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji close_file
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji close_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct file_t file;
            
            printf("#####START#####");
            int ret_val = open_file(&file, "beat.txt");
            printf("#####END#####\n");

            test_error(ret_val == 0, "Wartść zwrócona przez funkcję open_file jest nieprawidłowa; powinno być 0, a jest %d", ret_val );

            printf("#####START#####");
            close_file(&file);
            printf("#####END#####\n");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji close_file
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji close_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            close_file(NULL);
            printf("#####END#####\n");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji close_file
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji close_file", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct file_t file;
            file.f = NULL;

            printf("#####START#####");
            close_file(&file);
            printf("#####END#####\n");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji find_min
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji find_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct file_t files[14];

            open_file(&files[0], "wheel.txt");
    open_file(&files[1], "floor.txt");
    open_file(&files[2], "ready.txt");
    open_file(&files[3], "fat.txt");
    open_file(&files[4], "hear.txt");
    open_file(&files[5], "form.txt");
    open_file(&files[6], "real.txt");
    open_file(&files[7], "dress.txt");
    open_file(&files[8], "ship.txt");
    open_file(&files[9], "art.txt");
    open_file(&files[10], "select.txt");
    open_file(&files[11], "set.txt");
    open_file(&files[12], "took.txt");
    open_file(&files[13], "end.txt");


            printf("#####START#####");
            struct file_t *f = find_min(files, 14);
            printf("#####END#####\n");

            test_error(f == (files + 8), "Wartść zwrócona przez funkcję find_min jest niewłaściwa");

            for (int i = 0; i < 14; ++i)
                fclose(files[i].f);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji find_min
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji find_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            struct file_t *f = find_min(NULL, 14);
            printf("#####END#####\n");

            test_error(f == NULL, "Wartść zwrócona przez funkcję find_min jest niewłaściwa");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji find_min
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji find_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct file_t files[14];

            open_file(&files[0], "wheel.txt");
    open_file(&files[1], "floor.txt");
    open_file(&files[2], "ready.txt");
    open_file(&files[3], "fat.txt");
    open_file(&files[4], "hear.txt");
    open_file(&files[5], "form.txt");
    open_file(&files[6], "real.txt");
    open_file(&files[7], "dress.txt");
    open_file(&files[8], "ship.txt");
    open_file(&files[9], "art.txt");
    open_file(&files[10], "select.txt");
    open_file(&files[11], "set.txt");
    open_file(&files[12], "took.txt");
    open_file(&files[13], "end.txt");


            printf("#####START#####");
            struct file_t *f = find_min(files, 0);
            printf("#####END#####\n");

            test_error(f == NULL, "Wartść zwrócona przez funkcję find_min jest niewłaściwa");

            for (int i = 0; i < 14; ++i)
                fclose(files[i].f);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji find_min
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji find_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct file_t files[14];

            open_file(&files[0], "wheel.txt");
    open_file(&files[1], "floor.txt");
    open_file(&files[2], "ready.txt");
    open_file(&files[3], "fat.txt");
    open_file(&files[4], "hear.txt");
    open_file(&files[5], "form.txt");
    open_file(&files[6], "real.txt");
    open_file(&files[7], "dress.txt");
    open_file(&files[8], "ship.txt");
    open_file(&files[9], "art.txt");
    open_file(&files[10], "select.txt");
    open_file(&files[11], "set.txt");
    open_file(&files[12], "took.txt");
    open_file(&files[13], "end.txt");


            printf("#####START#####");
            struct file_t *f = find_min(files, -14);
            printf("#####END#####\n");

            test_error(f == NULL, "Wartść zwrócona przez funkcję find_min jest niewłaściwa");

            for (int i = 0; i < 14; ++i)
                fclose(files[i].f);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak możliwości otworzenia pliku (fopen zawsze zwróci NULL)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak możliwości otworzenia pliku (fopen zawsze zwróci NULL)", __LINE__);

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
            UTEST1, // Sprawdzanie poprawności działania funkcji open_file
            UTEST2, // Sprawdzanie poprawności działania funkcji open_file
            UTEST3, // Sprawdzanie poprawności działania funkcji open_file
            UTEST4, // Reakcja funkcji open_file na brak możliwości utworzenia pliku (fopen zwróci NULL)
            UTEST5, // Sprawdzanie poprawności działania funkcji open_file
            UTEST6, // Sprawdzanie poprawności działania funkcji open_file
            UTEST7, // Sprawdzanie poprawności działania funkcji open_file
            UTEST8, // Sprawdzanie poprawności działania funkcji close_file
            UTEST9, // Sprawdzanie poprawności działania funkcji close_file
            UTEST10, // Sprawdzanie poprawności działania funkcji close_file
            UTEST11, // Sprawdzanie poprawności działania funkcji find_min
            UTEST12, // Sprawdzanie poprawności działania funkcji find_min
            UTEST13, // Sprawdzanie poprawności działania funkcji find_min
            UTEST14, // Sprawdzanie poprawności działania funkcji find_min
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
            test_summary(14); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak możliwości otworzenia pliku (fopen zawsze zwróci NULL)
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