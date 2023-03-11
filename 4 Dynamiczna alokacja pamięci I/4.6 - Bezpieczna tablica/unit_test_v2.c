/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Bezpieczna tablica
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-23 21:51:25.605530
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
//  Test 1: Sprawdzanie poprawności działania funkcji array_create
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji array_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct array_t ptr = { .size = 9, .capacity = 8 };

                printf("#####START#####");
                int res = array_create(&ptr, -75);
                printf("#####END#####");

                test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                if (!1)
                {           
            
                    test_error(ptr.size == 0, "Funkcja array_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                    test_error(ptr.capacity == -75, "Funkcja array_create() powinna ustawić wartość capacity size w strukturze na -75, a ustawiła na %d", ptr.capacity);

                    free(ptr.ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji array_create
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji array_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct array_t ptr = { .size = -7, .capacity = -6 };

                printf("#####START#####");
                int res = array_create(&ptr, 0);
                printf("#####END#####");

                test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                if (!1)
                {           
            
                    test_error(ptr.size == 0, "Funkcja array_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                    test_error(ptr.capacity == 0, "Funkcja array_create() powinna ustawić wartość capacity size w strukturze na 0, a ustawiła na %d", ptr.capacity);

                    free(ptr.ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji array_create
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji array_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct array_t ptr = { .size = 5, .capacity = 6 };

                printf("#####START#####");
                int res = array_create(&ptr, 82);
                printf("#####END#####");

                test_error(res == 0, "Funkcja array_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                if (!0)
                {           
            
                    test_error(ptr.size == 0, "Funkcja array_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                    test_error(ptr.capacity == 82, "Funkcja array_create() powinna ustawić wartość capacity size w strukturze na 82, a ustawiła na %d", ptr.capacity);

                    free(ptr.ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji array_create
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji array_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct array_t ptr = { .size = 6, .capacity = 5 };

                printf("#####START#####");
                int res = array_create(&ptr, 7573);
                printf("#####END#####");

                test_error(res == 0, "Funkcja array_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                if (!0)
                {           
            
                    test_error(ptr.size == 0, "Funkcja array_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                    test_error(ptr.capacity == 7573, "Funkcja array_create() powinna ustawić wartość capacity size w strukturze na 7573, a ustawiła na %d", ptr.capacity);

                    free(ptr.ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 380 bajtów)
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 380 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(380);
    
    //
    // -----------
    //
    

                struct array_t ptr = { .size = -6, .capacity = 9 };

                printf("#####START#####");
                int res = array_create(&ptr, 95);
                printf("#####END#####");

                test_error(res == 0, "Funkcja array_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja array_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 95, "Funkcja array_create() powinna ustawić wartość pola capacity w strukturze na 95, a ustawiła na %d", ptr.capacity);

                free(ptr.ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 368 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 368 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(368);
    
    //
    // -----------
    //
    

                struct array_t ptr = { .size = -9, .capacity = -6 };

                printf("#####START#####");
                int res = array_create(&ptr, 95);
                printf("#####END#####");

                test_error(res == 2, "Funkcja array_create() powinna zwrócić wartość 2, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji array_create
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji array_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = array_create(NULL, 95);
                printf("#####END#####");

                test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji array_push_back
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji array_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-86, -76, -23, -66, 47, 44, -56, -8, -34, 12, 87, -14, -17};
        
                struct array_t ptr = { .size = 7, .capacity = 5 };

                printf("#####START#####");
                int res = array_create(&ptr, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja array_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja array_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 13, "Funkcja array_create() powinna ustawić wartość pola capacity w strukturze na 13, a ustawiła na %d", ptr.capacity);

                for (int i = 0; i < 13; ++i)
                {
                        printf("#####START#####");
                        res = array_push_back(&ptr, array[i]);
                        printf("#####END#####");
                        
                        test_error(res == 0, "Funkcja array_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja array_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 13, "Funkcja array_push_back() powinna ustawić wartość pola capacity w strukturze na 13, a ustawiła na %d", ptr.capacity);
                        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                printf("#####START#####");
                res = array_push_back(&ptr, 45);
                printf("#####END#####");

                test_error(res == 2, "Funkcja array_push_back() powinna zwrócić wartość 2, a zwróciła %d", res);
                test_error(ptr.size == 13, "Funkcja array_push_back() powinna ustawić wartość pola size w strukturze na 13, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 13, "Funkcja array_push_back() powinna ustawić wartość pola capacity w strukturze na 13, a ustawiła na %d", ptr.capacity);
                
                for (int j = 0; j < 13; ++j)
                    test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);
                
                free(ptr.ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji array_push_back
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji array_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-82, 86, -47, -53, 44, -76, 89, 85, 5, -16, -58, -34, 93, 1, -51, -12, 48, 15, -81, 87, 100, 35, 75, 30, -76, -55, -56, 48, 42, -60, 18, -23, -30, -95, -2, 7, 83, -90, 11, 60, -66, 93, 96, -69, 71, 100, 0, 94, 10, -89, -5, 17, 72, 73, -71, 51, -60, 10, 57, 61, -62, 69, 65, -18};
        
                struct array_t ptr = { .size = 0, .capacity = 4 };

                printf("#####START#####");
                int res = array_create(&ptr, 64);
                printf("#####END#####");

                test_error(res == 0, "Funkcja array_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja array_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 64, "Funkcja array_create() powinna ustawić wartość pola capacity w strukturze na 64, a ustawiła na %d", ptr.capacity);

                for (int i = 0; i < 64; ++i)
                {
                        printf("#####START#####");
                        res = array_push_back(&ptr, array[i]);
                        printf("#####END#####");
                        
                        test_error(res == 0, "Funkcja array_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja array_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 64, "Funkcja array_push_back() powinna ustawić wartość pola capacity w strukturze na 64, a ustawiła na %d", ptr.capacity);
                        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                printf("#####START#####");
                res = array_push_back(&ptr, 27);
                printf("#####END#####");

                test_error(res == 2, "Funkcja array_push_back() powinna zwrócić wartość 2, a zwróciła %d", res);
                test_error(ptr.size == 64, "Funkcja array_push_back() powinna ustawić wartość pola size w strukturze na 64, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 64, "Funkcja array_push_back() powinna ustawić wartość pola capacity w strukturze na 64, a ustawiła na %d", ptr.capacity);
                
                for (int j = 0; j < 64; ++j)
                    test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);
                
                free(ptr.ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji array_push_back
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji array_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[] = {-59, -11, -100, -57, 64, 100, 70, 42, 54, 25, -24};
                struct array_t ptr = { .ptr = array, .size = -3, .capacity = 2 };
                    
                printf("#####START#####");
                int res = array_push_back(&ptr, 13);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji array_push_back
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji array_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[] = {-59, -11, -100, -57, 64, 100, 70, 42, 54, 25, -24};
                struct array_t ptr = { .ptr = array, .size = 0, .capacity = -8 };
                    
                printf("#####START#####");
                int res = array_push_back(&ptr, 6);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji array_push_back
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji array_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[] = {-59, -11, -100, -57, 64, 100, 70, 42, 54, 25, -24};
                struct array_t ptr = { .ptr = array, .size = 15, .capacity = 7 };
                    
                printf("#####START#####");
                int res = array_push_back(&ptr, -10);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji array_push_back
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji array_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[] = {-59, -11, -100, -57, 64, 100, 70, 42, 54, 25, -24};
                struct array_t ptr = { .ptr = array, .size = 0, .capacity = 0 };
                    
                printf("#####START#####");
                int res = array_push_back(&ptr, 84);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji array_push_back
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji array_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[] = {-59, -11, -100, -57, 64, 100, 70, 42, 54, 25, -24};
                struct array_t ptr = { .ptr = array, .size = 11, .capacity = -7 };
                    
                printf("#####START#####");
                int res = array_push_back(&ptr, 68);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji array_push_back
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji array_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[] = {-59, -11, -100, -57, 64, 100, 70, 42, 54, 25, -24};
                struct array_t ptr = { .ptr = array, .size = -11, .capacity = -10 };
                    
                printf("#####START#####");
                int res = array_push_back(&ptr, 64);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji array_push_back
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji array_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = array_push_back(NULL, 97);
            printf("#####END#####");

            test_error(res == 1, "Funkcja array_create() powinna zwrócić wartość 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji array_destroy
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji array_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct array_t ptr = { .size = -8, .capacity = -3 };

                printf("#####START#####");
                int res = array_create(&ptr, 68);
                printf("#####END#####");

                test_error(res == 0, "Funkcja array_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja array_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 68, "Funkcja array_create() powinna ustawić wartość pola capacity w strukturze na 68, a ustawiła na %d", ptr.capacity);

                printf("#####START#####");
                array_destroy(&ptr);
                printf("#####END#####");

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji array_destroy
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji array_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct array_t ptr = { .size = 4, .capacity = 6 };

                printf("#####START#####");
                int res = array_create(&ptr, 3837);
                printf("#####END#####");

                test_error(res == 0, "Funkcja array_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja array_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 3837, "Funkcja array_create() powinna ustawić wartość pola capacity w strukturze na 3837, a ustawiła na %d", ptr.capacity);

                printf("#####START#####");
                array_destroy(&ptr);
                printf("#####END#####");

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji array_destroy
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji array_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            printf("#####START#####");
            array_destroy(NULL);
            printf("#####END#####");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji array_destroy
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji array_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_t ptr = { .ptr = NULL, .size = 5, .capacity = 19 };

            printf("#####START#####");
            array_destroy(&ptr);
            printf("#####END#####");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji array_display
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji array_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int array[] = {-59, -11, -100, -57, 64, 100, 70, 42, 54, 25, -24};

            struct array_t arr;
            arr.ptr = array;

    //-------------1-----------------------

            printf("Test 1: ***START***\n");
            array_display(NULL);
            printf("***END***\n");


    //-------------2-----------------------

            arr.capacity = 10;
            arr.size = 11;

            printf("Test 2: ***START***\n");
            array_display(&arr);
            printf("***END***\n");


    //-------------3-----------------------

            arr.capacity = 11;
            arr.size = -11;

            printf("Test 3: ***START***\n");
            array_display(&arr);
            printf("***END***\n");


    //-------------4-----------------------

            arr.capacity = 11;
            arr.size = 0;

            printf("Test 4: ***START***\n");
            array_display(&arr);
            printf("***END***\n");

    //-------------5-----------------------

            arr.capacity = 11;
            arr.size = 11;
            arr.ptr = NULL;

            printf("Test 5: ***START***\n");
            array_display(&arr);
            printf("***END***\n");

    //-------------6-----------------------

            arr.capacity = 11;
            arr.size = 11;
            arr.ptr = array;

            printf("Test 6: ***START***\n");
            array_display(&arr);
            printf("***END***\n");

    //-------------7-----------------------

            arr.capacity = 11;
            arr.size = 11 - 1;

            printf("Test 7: ***START***\n");
            array_display(&arr);
            printf("***END***\n");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci (limit sterty ustawiono na 29 bajtów)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci (limit sterty ustawiono na 29 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(29);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji array_create
            UTEST2, // Sprawdzanie poprawności działania funkcji array_create
            UTEST3, // Sprawdzanie poprawności działania funkcji array_create
            UTEST4, // Sprawdzanie poprawności działania funkcji array_create
            UTEST5, // Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 380 bajtów)
            UTEST6, // Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 368 bajtów)
            UTEST7, // Sprawdzanie poprawności działania funkcji array_create
            UTEST8, // Sprawdzanie poprawności działania funkcji array_push_back
            UTEST9, // Sprawdzanie poprawności działania funkcji array_push_back
            UTEST10, // Sprawdzanie poprawności działania funkcji array_push_back
            UTEST11, // Sprawdzanie poprawności działania funkcji array_push_back
            UTEST12, // Sprawdzanie poprawności działania funkcji array_push_back
            UTEST13, // Sprawdzanie poprawności działania funkcji array_push_back
            UTEST14, // Sprawdzanie poprawności działania funkcji array_push_back
            UTEST15, // Sprawdzanie poprawności działania funkcji array_push_back
            UTEST16, // Sprawdzanie poprawności działania funkcji array_push_back
            UTEST17, // Sprawdzanie poprawności działania funkcji array_destroy
            UTEST18, // Sprawdzanie poprawności działania funkcji array_destroy
            UTEST19, // Sprawdzanie poprawności działania funkcji array_destroy
            UTEST20, // Sprawdzanie poprawności działania funkcji array_destroy
            UTEST21, // Sprawdzanie poprawności działania funkcji array_display
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
            test_summary(21); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci (limit sterty ustawiono na 29 bajtów)
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