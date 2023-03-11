/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Macierz 2
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-09 19:12:23.483232
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
//  Test 1: Sprawdzanie poprawności działania funkcji matrix_destroy
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji matrix_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct matrix_t arr = {.ptr = NULL, .width = 2, .height = 0};

            printf("#####START#####");
            matrix_destroy(&arr);
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
//  Test 2: Sprawdzanie poprawności działania funkcji matrix_destroy
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji matrix_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct matrix_t arr = {.ptr = NULL, .width = 5, .height = -7};

            printf("#####START#####");
            matrix_destroy(&arr);
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
//  Test 3: Sprawdzanie poprawności działania funkcji matrix_destroy
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji matrix_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            matrix_destroy(NULL);
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
//  Test 4: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 1, .height = 8};
                int width = 6, height = 12;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 12, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 12, a ustawiła na %d", arr.height);

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                }

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
//  Test 5: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 0, .height = 10};
                int width = 18, height = 2;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 18, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 18, a ustawiła na %d", arr.width);
                    test_error(arr.height == 2, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr.height);

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                }

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
//  Test 6: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = 1};
                int width = 142, height = 122;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 142, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 142, a ustawiła na %d", arr.width);
                    test_error(arr.height == 122, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 122, a ustawiła na %d", arr.height);

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                }

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
//  Test 7: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -9, .height = 3};
                int width = 0, height = 12;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 0, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 0, a ustawiła na %d", arr.width);
                    test_error(arr.height == 12, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 12, a ustawiła na %d", arr.height);

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                }

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
//  Test 8: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -6, .height = 4};
                int width = 5, height = 0;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
                    test_error(arr.height == 0, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 0, a ustawiła na %d", arr.height);

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                }

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
//  Test 9: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 6, .height = 8};
                int width = 2, height = -19;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 2, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 2, a ustawiła na %d", arr.width);
                    test_error(arr.height == -19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na -19, a ustawiła na %d", arr.height);

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                }

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
//  Test 10: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 4, .height = -1};
                int width = -8, height = 13;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == -8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na -8, a ustawiła na %d", arr.width);
                    test_error(arr.height == 13, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 13, a ustawiła na %d", arr.height);

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                }

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
//  Test 11: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -10, .height = -10};
                int width = -10, height = -13;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == -10, "Funkcja matrix_create() powinna ustawić szerokość macierzy na -10, a ustawiła na %d", arr.width);
                    test_error(arr.height == -13, "Funkcja matrix_create() powinna ustawić wysokość macierzy na -13, a ustawiła na %d", arr.height);

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                }

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
//  Test 12: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 8, .height = 5};
                int width = 0, height = 0;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 0, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 0, a ustawiła na %d", arr.width);
                    test_error(arr.height == 0, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 0, a ustawiła na %d", arr.height);

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                }

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
//  Test 13: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 576 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 576 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(576);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 5, .height = -8};
                int width = 7, height = 16;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                test_error(arr.height == 16, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 16, a ustawiła na %d", arr.height);

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 14: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 60 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 60 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(60);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 8, .height = 0};
                int width = 13, height = 1;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 13, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 13, a ustawiła na %d", arr.width);
                test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 15: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 132720 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 132720 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(132720);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -3, .height = 10};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 138, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 138, a ustawiła na %d", arr.width);
                test_error(arr.height == 237, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 237, a ustawiła na %d", arr.height);

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 16: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -4, .height = 3};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 17: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 136 bajtów)
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 136 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(136);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -6, .height = 7};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 18: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 144 bajtów)
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 144 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(144);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 4, .height = 3};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 19: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 152 bajtów)
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 152 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(152);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -1, .height = 3};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 20: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 160 bajtów)
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 160 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(160);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 10, .height = -4};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 21: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 168 bajtów)
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 168 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(168);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 10, .height = 9};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 22: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 176 bajtów)
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 176 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(176);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -4, .height = -1};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 23: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 184 bajtów)
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 184 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(184);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = -2};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 24: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 192 bajtów)
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 192 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(192);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = 6};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 25: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 200 bajtów)
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 200 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(200);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -10, .height = 4};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 26: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 208 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 208 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(208);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -4, .height = 1};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 27: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 216 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 216 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(216);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -10, .height = -4};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 28: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 224 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 224 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(224);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -9, .height = -3};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 29: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 232 bajtów)
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 232 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(232);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -5, .height = 0};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 30: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 240 bajtów)
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 240 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(240);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -2, .height = 7};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 31: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 248 bajtów)
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 248 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(248);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = 0};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 32: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 256 bajtów)
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 256 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(256);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = 0};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 33: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 264 bajtów)
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 264 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(264);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -9, .height = -6};
                int width = 138, height = 237;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja matrix_create() powinna zwrócić 2");

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
//  Test 34: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int width = 10, height = 18;        

            printf("#####START#####");
            int res = matrix_create(NULL, width, height);
            printf("#####END#####");

            test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
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
//  Test 35: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 2, height = 18;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 2, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 2, a ustawiła na %d", arr->width);
                    test_error(arr->height == 18, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");


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
//  Test 36: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 16, height = 9;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 16, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 16, a ustawiła na %d", arr->width);
                    test_error(arr->height == 9, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 9, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");


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
//  Test 37: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 144, height = 182;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 144, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 144, a ustawiła na %d", arr->width);
                    test_error(arr->height == 182, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 182, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");


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
//  Test 38: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 0, height = 14;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 0, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 0, a ustawiła na %d", arr->width);
                    test_error(arr->height == 14, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 14, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");


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
//  Test 39: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 7, height = 0;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 7, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 0, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 0, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");


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
//  Test 40: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 1, height = -11;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 1, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                    test_error(arr->height == -11, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na -11, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");


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
//  Test 41: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = -9, height = 13;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == -9, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na -9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 13, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 13, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");


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
//  Test 42: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = -9, height = -18;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == -9, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na -9, a ustawiła na %d", arr->width);
                    test_error(arr->height == -18, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na -18, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");


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
//  Test 43: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 0, height = 0;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 0, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 0, a ustawiła na %d", arr->width);
                    test_error(arr->height == 0, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 0, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");


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
//  Test 44: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 272 bajtów)
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 272 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(272);
    
    //
    // -----------
    //
    

                int width = 2, height = 16;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 2, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 2, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 16, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");
                    
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
//  Test 45: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 184 bajtów)
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 184 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(184);
    
    //
    // -----------
    //
    

                int width = 19, height = 2;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 19, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 19, a ustawiła na %d", arr->width);
                    test_error(arr->height == 2, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");
                    
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
//  Test 46: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 164528 bajtów)
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 164528 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(164528);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 210, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 210, a ustawiła na %d", arr->width);
                    test_error(arr->height == 194, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 194, a ustawiła na %d", arr->height);

                    printf("#####START#####");
                    matrix_destroy_struct(&arr);
                    printf("#####END#####");
                    
                    test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                }
                else
                    test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");
                    
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
//  Test 47: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 48: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 49: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 120 bajtów)
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 120 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(120);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 50: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 160 bajtów)
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 160 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(160);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 51: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 200 bajtów)
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 200 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(200);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 52: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 240 bajtów)
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 240 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(240);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 53: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 280 bajtów)
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 280 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(280);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 54: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 320 bajtów)
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 320 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(320);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 55: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 360 bajtów)
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 360 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(360);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 56: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 400 bajtów)
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 400 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(400);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 57: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 440 bajtów)
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 440 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(440);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 58: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 480 bajtów)
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 480 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(480);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 59: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 520 bajtów)
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 520 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(520);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 60: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 560 bajtów)
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 560 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(560);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 61: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 600 bajtów)
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 600 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(600);
    
    //
    // -----------
    //
    

                int width = 210, height = 194;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja matrix_create_struct() powinna zwrócić NULL");

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
//  Test 62: Sprawdzanie poprawności działania funkcji matrix_transpose
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji matrix_transpose", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -4, .height = 8};
        
                    int array[5][6] = {{ 5, -8, -8, 5, 6, -10}, { 4, 8, 6, -7, 3, 5}, { -8, -2, 6, 10, 3, -8}, { 1, 1, 7, 9, -5, -3}, { -2, 1, 0, 3, 6, 10}};
                    int expected_array[6][5] = {{ 5, 4, -8, 1, -2}, { -8, 8, -2, 1, 1}, { -8, 6, 6, 7, 0}, { 5, -7, 10, 9, 3}, { 6, 3, 3, -5, 6}, { -10, 5, -8, -3, 10}};

                    int res = matrix_create(&arr, 6, 5);
            
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 5, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 5, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
                    for (int i = 0; i < 5; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
                    
                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 5, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 6, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    
                    int ok = 0;
                    
                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 5; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];
                                
                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                    
                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");
                    
                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 63: Sprawdzanie poprawności działania funkcji matrix_transpose
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji matrix_transpose", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 8, .height = -7};
        
                    int array[20][6] = {{ 2, 0, 2, -4, 8, 0}, { 9, 5, -6, 4, 4, 0}, { -1, 8, -3, -3, -9, 1}, { 4, -10, 6, 5, -7, 4}, { 1, 0, 2, -9, -8, -3}, { -1, 1, 10, 6, 7, 2}, { 6, -8, -4, -4, 4, -6}, { -3, -6, 9, -7, 5, -5}, { -7, -6, -1, 2, -4, -1}, { 8, -3, -10, -8, -10, 5}, { 9, -9, -2, -8, 4, -3}, { -7, 5, 0, 10, 10, 8}, { -4, -6, -10, 9, 7, -7}, { 6, -4, 5, 9, -6, -5}, { -8, -2, -7, -3, -1, 4}, { 0, 2, 0, 5, -10, 7}, { -4, 1, 7, -5, 4, 4}, { 7, -3, -3, 3, 7, -7}, { 9, 5, -7, -10, 5, -5}, { -6, -4, -7, -6, 1, -1}};
                    int expected_array[6][20] = {{ 2, 9, -1, 4, 1, -1, 6, -3, -7, 8, 9, -7, -4, 6, -8, 0, -4, 7, 9, -6}, { 0, 5, 8, -10, 0, 1, -8, -6, -6, -3, -9, 5, -6, -4, -2, 2, 1, -3, 5, -4}, { 2, -6, -3, 6, 2, 10, -4, 9, -1, -10, -2, 0, -10, 5, -7, 0, 7, -3, -7, -7}, { -4, 4, -3, 5, -9, 6, -4, -7, 2, -8, -8, 10, 9, 9, -3, 5, -5, 3, -10, -6}, { 8, 4, -9, -7, -8, 7, 4, 5, -4, -10, 4, 10, 7, -6, -1, -10, 4, 7, 5, 1}, { 0, 0, 1, 4, -3, 2, -6, -5, -1, 5, -3, 8, -7, -5, 4, 7, 4, -7, -5, -1}};

                    int res = matrix_create(&arr, 6, 20);
            
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
                    
                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 20, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 20, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 6, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    
                    int ok = 0;
                    
                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 20; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];
                                
                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                    
                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");
                    
                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 64: Sprawdzanie poprawności działania funkcji matrix_transpose
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji matrix_transpose", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -2, .height = -7};
        
                    int array[18][1] = {{ 6}, { -5}, { 8}, { -7}, { -4}, { 0}, { 2}, { 8}, { 2}, { 9}, { -1}, { -6}, { 8}, { 0}, { 1}, { 6}, { -5}, { 10}};
                    int expected_array[1][18] = {{ 6, -5, 8, -7, -4, 0, 2, 8, 2, 9, -1, -6, 8, 0, 1, 6, -5, 10}};

                    int res = matrix_create(&arr, 1, 18);
            
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];
                    
                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 18, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 18, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    
                    int ok = 0;
                    
                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 18; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];
                                
                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                    
                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");
                    
                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 65: Sprawdzanie poprawności działania funkcji matrix_transpose
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji matrix_transpose", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -1, .height = 2};
        
                    int array[1][6] = {{ -4, 8, 4, 7, 2, 10}};
                    int expected_array[6][1] = {{ -4}, { 8}, { 4}, { 7}, { 2}, { 10}};

                    int res = matrix_create(&arr, 6, 1);
            
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
                    
                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 6, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    
                    int ok = 0;
                    
                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];
                                
                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                    
                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");
                    
                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 66: Sprawdzanie poprawności działania funkcji matrix_transpose
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji matrix_transpose", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 0, .height = -8};
        
                    int array[1][1] = {{ -9}};
                    int expected_array[1][1] = {{ -9}};

                    int res = matrix_create(&arr, 1, 1);
            
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];
                    
                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    
                    int ok = 0;
                    
                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];
                                
                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");
                    
                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");
                    
                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 67: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 344 bajtów)
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 344 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(344);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 3, .height = -4};

                    int array[5][6] = {{ 4, -4, -7, -3, -7, 3}, { 8, -1, -8, -9, -6, -1}, { -4, -5, -10, -4, 0, 0}, { -7, 0, 2, -5, 0, 0}, { -4, -9, -9, -2, 0, 6}};
                    int expected_array[6][5] = {{ 4, 8, -4, -7, -4}, { -4, -1, -5, 0, -9}, { -7, -8, -10, 2, -9}, { -3, -9, -4, -5, -2}, { -7, -6, 0, 0, 0}, { 3, -1, 0, 0, 6}};

                    int res = matrix_create(&arr, 6, 5);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 5, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 5, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 5; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 5, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 6, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 5; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 68: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 1184 bajtów)
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 1184 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1184);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 4, .height = -1};

                    int array[20][6] = {{ 10, -8, 10, -6, 0, 1}, { -6, 9, 3, -8, -3, -5}, { 2, -4, 6, 8, 1, -9}, { -3, 0, 9, -4, -3, -9}, { 3, -7, 4, 8, 0, 6}, { 2, 6, 2, 9, 9, 2}, { -7, -6, -9, -2, -10, 0}, { -1, -4, 1, 8, -10, -2}, { -6, -2, 8, 7, -7, -2}, { 8, 9, 5, 5, -1, -9}, { 1, -1, -7, 10, 4, -2}, { 3, 7, -4, 4, -6, 10}, { -2, -8, -7, 6, -3, 5}, { -4, -8, 2, -9, 0, 0}, { 6, -4, -4, -10, -8, 8}, { 9, 1, 10, 5, -5, 2}, { -10, 10, -1, -10, -1, 9}, { 4, -2, -10, 5, 9, 6}, { 7, -3, -3, -5, -10, 0}, { 7, -3, -8, 4, -3, -1}};
                    int expected_array[6][20] = {{ 10, -6, 2, -3, 3, 2, -7, -1, -6, 8, 1, 3, -2, -4, 6, 9, -10, 4, 7, 7}, { -8, 9, -4, 0, -7, 6, -6, -4, -2, 9, -1, 7, -8, -8, -4, 1, 10, -2, -3, -3}, { 10, 3, 6, 9, 4, 2, -9, 1, 8, 5, -7, -4, -7, 2, -4, 10, -1, -10, -3, -8}, { -6, -8, 8, -4, 8, 9, -2, 8, 7, 5, 10, 4, 6, -9, -10, 5, -10, 5, -5, 4}, { 0, -3, 1, -3, 0, 9, -10, -10, -7, -1, 4, -6, -3, 0, -8, -5, -1, 9, -10, -3}, { 1, -5, -9, -9, 6, 2, 0, -2, -2, -9, -2, 10, 5, 0, 8, 2, 9, 6, 0, -1}};

                    int res = matrix_create(&arr, 6, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 20, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 20, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 6, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 20; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 69: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 312 bajtów)
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 312 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(312);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -2, .height = -5};

                    int array[18][1] = {{ 10}, { 2}, { -2}, { 9}, { 3}, { -8}, { 5}, { 8}, { 3}, { 9}, { 7}, { -3}, { -6}, { 1}, { 8}, { 10}, { -4}, { 1}};
                    int expected_array[1][18] = {{ 10, 2, -2, 9, 3, -8, 5, 8, 3, 9, 7, -3, -6, 1, 8, 10, -4, 1}};

                    int res = matrix_create(&arr, 1, 18);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 18, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 18, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 18; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 70: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 120 bajtów)
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 120 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(120);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 6, .height = 1};

                    int array[1][6] = {{ -3, -1, 1, -2, -7, 2}};
                    int expected_array[6][1] = {{ -3}, { -1}, { 1}, { -2}, { -7}, { 2}};

                    int res = matrix_create(&arr, 6, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 6, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 71: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 40 bajtów)
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 40 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(40);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -5, .height = -7};

                    int array[1][1] = {{ 10}};
                    int expected_array[1][1] = {{ 10}};

                    int res = matrix_create(&arr, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_transpose() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_transpose() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_transpose() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_transpose() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po transponowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_transpose() niepoprawnie transponowała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy_struct(&arr_t);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 72: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 264 bajtów)
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 264 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(264);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 1, .height = 10};

                    int array[5][6] = {{ -5, -8, -5, 2, -5, 0}, { 3, 6, -2, 8, -10, 2}, { 7, -9, 10, 0, -1, -1}, { -8, -4, 10, -7, -2, -2}, { 5, 2, 10, -2, 4, -8}};

                    int res = matrix_create(&arr, 6, 5);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 5, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 5, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 5; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_transpose() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 73: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 680 bajtów)
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 680 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(680);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 0, .height = 7};

                    int array[20][6] = {{ 4, 10, -8, 0, -5, 1}, { 0, 9, 0, 4, -9, 7}, { -2, 1, -3, -5, -7, -8}, { -5, 10, -9, -4, 6, 1}, { 0, 9, 0, 9, -1, 5}, { 8, -2, 2, 3, -10, 2}, { -5, -7, 8, 4, 5, 10}, { 2, 2, -9, -2, 10, 1}, { 1, 6, -5, 9, 2, 8}, { -7, 8, -3, 5, -8, 10}, { -7, 4, 5, 8, -7, -9}, { 8, 8, -3, 10, 5, -8}, { 6, -1, -2, -7, 9, -1}, { -10, 6, -7, 0, -5, -2}, { 9, 9, -1, 1, 3, 1}, { 6, 8, 0, 0, -8, 8}, { 9, 7, 5, -7, 7, 7}, { 5, 5, 2, 9, 7, -4}, { 9, -2, 0, 7, -6, 3}, { 9, -6, -5, -1, -6, 2}};

                    int res = matrix_create(&arr, 6, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_transpose() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 74: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 239 bajtów)
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 239 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(239);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 6, .height = -1};

                    int array[18][1] = {{ -10}, { 2}, { 0}, { -10}, { -6}, { -7}, { 6}, { 9}, { 6}, { 2}, { 2}, { 8}, { 3}, { 2}, { 6}, { 4}, { 5}, { 6}};

                    int res = matrix_create(&arr, 1, 18);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_transpose() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 75: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 43 bajtów)
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 43 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(43);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -6, .height = -9};

                    int array[1][6] = {{ -8, 6, -7, -2, 6, 10}};

                    int res = matrix_create(&arr, 6, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_transpose() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 76: Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 24 bajtów)
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 24 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(24);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -9, .height = -8};

                    int array[1][1] = {{ 9}};

                    int res = matrix_create(&arr, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_transpose(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_transpose() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 77: Sprawdzanie poprawności działania funkcji matrix_transpose
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji matrix_transpose", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -1, .height = 0};

                int array[17][6] = {{ -8, 3, 1, 5, -10, -4}, { 9, 2, 5, 8, 8, 4}, { 1, -2, -4, -3, -6, 8}, { -3, 5, -8, 8, -4, -7}, { -1, 5, -5, 2, 9, 7}, { 4, -4, 7, -6, 6, 6}, { -3, -4, -3, -8, -2, 4}, { 9, -10, 0, 8, 4, 0}, { -8, 8, 8, -10, 10, -3}, { 0, 5, -3, -2, 0, -5}, { 2, 0, -5, -9, 10, 7}, { 3, 1, -8, 0, -7, 3}, { 0, -10, 1, -10, 6, -8}, { 1, 3, -3, 4, 4, -9}, { -8, -1, 10, -7, 0, -9}, { -6, 3, -8, 6, 9, -6}, { -2, 8, 2, -1, 5, 1}};

                int res = matrix_create(&arr, 6, 17);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    for (int j = 0; j < 6; ++j)
                        arr.ptr[i][j] = array[i][j];

                arr.width = 0;
                arr.height = 0;
                
                printf("#####START#####");                            
                struct matrix_t *arr_t = matrix_transpose(&arr);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_transpose() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                arr.width = 6;
                arr.height = 17;            
        
                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 78: Sprawdzanie poprawności działania funkcji matrix_transpose
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji matrix_transpose", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.ptr = NULL, .width = 4, .height = 7};

                printf("#####START#####");                            
                struct matrix_t *arr_t = matrix_transpose(&arr);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_transpose() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 79: Sprawdzanie poprawności działania funkcji matrix_transpose
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji matrix_transpose", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");                            
                struct matrix_t *arr_t = matrix_transpose(NULL);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_transpose() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 80: Sprawdzanie poprawności działania funkcji matrix_save_b
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji matrix_save_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 0, .height = -7};

                    int array[5][10] = {{ -10, 8, -6, 7, 8, 6, 3, 9, 9, -6}, { 4, 7, -5, 9, 6, 1, 9, 4, 2, -7}, { -9, -7, -6, -8, 7, 5, 7, -10, -9, 3}, { -4, -4, -8, 1, -7, -6, 3, 7, 10, 0}, { -9, -10, -7, 8, -2, 5, -10, 10, -8, -7}};

                    int res = matrix_create(&arr, 10, 5);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 10, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr.width);
                    test_error(arr.height == 5, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 5, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 5; ++i)
                        for (int j = 0; j < 10; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_b(&arr, "dead.bin");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_b() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 81: Sprawdzanie poprawności działania funkcji matrix_save_b
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji matrix_save_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -10, .height = -9};

                    int array[15][9] = {{ -7, 7, 10, -9, -3, -5, -5, 3, -10}, { -6, 6, 6, 5, 5, 7, -2, 2, 7}, { -6, 10, 3, -10, 2, 3, 10, 7, -1}, { 2, 7, -2, 4, 8, -1, 10, -5, 0}, { 10, -10, -6, 0, -3, -10, -9, 10, 5}, { -6, -10, 3, 10, 0, -10, 1, 6, -8}, { -10, 9, -6, 3, -1, -2, -8, 8, 6}, { 5, 0, 0, -9, -9, 4, 6, -1, 4}, { -8, -5, 0, 0, -6, 6, 6, 6, 0}, { 3, 0, -7, -8, 7, -4, -4, 4, -4}, { -6, 10, 2, -8, -5, 7, 2, -2, 2}, { 4, 9, -2, 10, -8, -2, 4, 7, 4}, { 2, -8, 10, 6, -6, 5, 2, 3, 4}, { -3, -2, -2, -4, -6, 2, 4, 8, -3}, { 4, -10, -8, -7, -4, -8, -2, -6, 5}};

                    int res = matrix_create(&arr, 9, 15);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 15, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 15, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_b(&arr, "original.txt");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_b() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 82: Sprawdzanie poprawności działania funkcji matrix_save_b
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji matrix_save_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 5, .height = 2};

                    int array[15][1] = {{ 6}, { -4}, { 8}, { -10}, { 0}, { 10}, { 3}, { -3}, { 1}, { 4}, { -3}, { -6}, { 9}, { 1}, { 6}};

                    int res = matrix_create(&arr, 1, 15);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 15, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 15, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_b(&arr, "signbin");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_b() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 83: Sprawdzanie poprawności działania funkcji matrix_save_b
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji matrix_save_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 0, .height = 8};

                    int array[1][8] = {{ -1, 7, -10, -4, -5, -5, -10, -1}};

                    int res = matrix_create(&arr, 8, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_b(&arr, "press");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_b() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 84: Sprawdzanie poprawności działania funkcji matrix_save_b
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji matrix_save_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -8, .height = -2};

                    int array[1][1] = {{ -8}};

                    int res = matrix_create(&arr, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_b(&arr, "boardhitbrokethedowallcatgentleplanethoselaytreetwo");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_b() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 85: Sprawdzanie poprawności działania funkcji matrix_save_b
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji matrix_save_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 10, .height = 10};

                int array[16][8] = {{ 4, -3, -3, 4, -10, -3, 4, 4}, { 9, -3, -1, 2, -1, -2, 8, -6}, { 5, -3, -8, 2, -3, -1, -10, -9}, { -2, -2, 5, 3, -1, -9, 4, 5}, { -4, 0, -3, 10, 3, -4, -3, 6}, { 5, -3, 0, -6, -3, -2, -4, 3}, { -6, 3, 9, -5, 5, 9, -2, -8}, { 9, 3, 0, 8, 4, -9, -7, 3}, { 8, 4, -8, 8, -9, 0, 5, 5}, { 1, 7, 3, -2, 4, 1, -8, 1}, { 3, 3, -9, -9, 9, -8, -8, -2}, { 1, 2, -3, -3, 10, 5, -2, -5}, { -9, -9, 6, -6, -2, 8, 0, 7}, { 1, 9, -8, -6, 9, 10, -4, -10}, { 2, 8, -3, 8, 0, -3, 1, -10}, { -4, 9, -2, 7, 9, 9, 10, -3}};

                int res = matrix_create(&arr, 8, 16);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                test_error(arr.height == 16, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 16, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 16; ++i)
                    for (int j = 0; j < 8; ++j)
                        arr.ptr[i][j] = array[i][j];

                arr.width = 0;
                arr.height = 0;

                printf("#####START#####");
                res = matrix_save_b(&arr, "boardhitbrokethedowallcatgentleplanethoselaytreetwo");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_b() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                arr.width = 8;
                arr.height = 16;

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 86: Sprawdzanie poprawności działania funkcji matrix_save_b
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji matrix_save_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -7, .height = -6};

                int array[16][8] = {{ 4, -3, -3, 4, -10, -3, 4, 4}, { 9, -3, -1, 2, -1, -2, 8, -6}, { 5, -3, -8, 2, -3, -1, -10, -9}, { -2, -2, 5, 3, -1, -9, 4, 5}, { -4, 0, -3, 10, 3, -4, -3, 6}, { 5, -3, 0, -6, -3, -2, -4, 3}, { -6, 3, 9, -5, 5, 9, -2, -8}, { 9, 3, 0, 8, 4, -9, -7, 3}, { 8, 4, -8, 8, -9, 0, 5, 5}, { 1, 7, 3, -2, 4, 1, -8, 1}, { 3, 3, -9, -9, 9, -8, -8, -2}, { 1, 2, -3, -3, 10, 5, -2, -5}, { -9, -9, 6, -6, -2, 8, 0, 7}, { 1, 9, -8, -6, 9, 10, -4, -10}, { 2, 8, -3, 8, 0, -3, 1, -10}, { -4, 9, -2, 7, 9, 9, 10, -3}};

                int res = matrix_create(&arr, 8, 16);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                test_error(arr.height == 16, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 16, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 16; ++i)
                    for (int j = 0; j < 8; ++j)
                        arr.ptr[i][j] = array[i][j];

                printf("#####START#####");
                res = matrix_save_b(&arr, NULL);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_b() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 87: Reakcja funkcji matrix_save_b na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Reakcja funkcji matrix_save_b na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -10, .height = 5};

                int array[16][8] = {{ 4, -3, -3, 4, -10, -3, 4, 4}, { 9, -3, -1, 2, -1, -2, 8, -6}, { 5, -3, -8, 2, -3, -1, -10, -9}, { -2, -2, 5, 3, -1, -9, 4, 5}, { -4, 0, -3, 10, 3, -4, -3, 6}, { 5, -3, 0, -6, -3, -2, -4, 3}, { -6, 3, 9, -5, 5, 9, -2, -8}, { 9, 3, 0, 8, 4, -9, -7, 3}, { 8, 4, -8, 8, -9, 0, 5, 5}, { 1, 7, 3, -2, 4, 1, -8, 1}, { 3, 3, -9, -9, 9, -8, -8, -2}, { 1, 2, -3, -3, 10, 5, -2, -5}, { -9, -9, 6, -6, -2, 8, 0, 7}, { 1, 9, -8, -6, 9, 10, -4, -10}, { 2, 8, -3, 8, 0, -3, 1, -10}, { -4, 9, -2, 7, 9, 9, 10, -3}};

                int res = matrix_create(&arr, 8, 16);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                test_error(arr.height == 16, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 16, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 16; ++i)
                    for (int j = 0; j < 8; ++j)
                        arr.ptr[i][j] = array[i][j];

                printf("#####START#####");
                res = matrix_save_b(&arr, NULL);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_b() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 88: Sprawdzanie poprawności działania funkcji matrix_save_b
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji matrix_save_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.ptr = NULL, .width = 10, .height = 2};

                printf("#####START#####");
                int res = matrix_save_b(&arr, "boardhitbrokethedowallcatgentleplanethoselaytreetwo");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_b() powinna zwrócić kod błędu 1, a zwróciła %d", res);

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
//  Test 89: Sprawdzanie poprawności działania funkcji matrix_save_b
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji matrix_save_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = matrix_save_b(NULL, "boardhitbrokethedowallcatgentleplanethoselaytreetwo");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_b() powinna zwrócić kod błędu 1, a zwróciła %d", res);

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
//  Test 90: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 10, .height = -2};

                    int array[7][10] = {{ 7, -9, 10, -9, -7, 9, -6, -4, -10, 9}, { -3, 6, 2, -4, -6, 3, 8, 6, -8, 3}, { 0, -7, -3, 1, 8, 1, -9, 1, -7, 9}, { 3, 9, -6, 1, -7, 1, -3, 7, 0, -7}, { 1, -10, 4, 10, 5, 1, -4, 7, 4, 6}, { 5, 4, -7, 10, -3, -10, 4, 3, 3, 3}, { -6, 0, -1, -8, -1, 2, 2, -9, 6, 4}};

                    int res = matrix_create(&arr, 10, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 10, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr.width);
                    test_error(arr.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 10; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_t(&arr, "brown.bin");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 91: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -1, .height = 5};

                    int array[15][7] = {{ -5, -1, -9, 9, 2, -3, 1}, { 6, -7, -3, 4, -2, -10, -1}, { 7, 4, 0, 6, -9, 9, 5}, { 4, -10, 4, 9, 9, 3, -2}, { -7, 6, -10, 2, -9, 5, 7}, { -6, 3, -10, -5, 7, -7, 3}, { -7, -7, -2, -2, 9, -7, 8}, { -7, -1, -9, 2, -8, 2, 8}, { 4, -7, -9, -6, -1, -4, -5}, { 7, 0, -10, 7, 4, -2, 5}, { -7, 4, 7, 6, 5, 8, -8}, { 3, -10, 3, -2, -8, 0, 6}, { 8, 8, 1, 6, 10, 1, 8}, { -9, -3, 8, -3, 7, 1, 8}, { -2, -3, -7, 3, 10, 1, -7}};

                    int res = matrix_create(&arr, 7, 15);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 15, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 15, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_t(&arr, "often.txt");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 92: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -6, .height = 9};

                    int array[15][1] = {{ 4}, { -1}, { -7}, { -2}, { 7}, { 1}, { 10}, { 2}, { -10}, { 6}, { -4}, { 5}, { 10}, { -8}, { 3}};

                    int res = matrix_create(&arr, 1, 15);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 15, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 15, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_t(&arr, "lovetxt");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 93: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -8, .height = -8};

                    int array[1][5] = {{ -7, -4, -8, 9, -5}};

                    int res = matrix_create(&arr, 5, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 5; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_t(&arr, "drive");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 94: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 10, .height = -9};

                    int array[1][1] = {{ 3}};

                    int res = matrix_create(&arr, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    res = matrix_save_t(&arr, "turnoffafraidregionmetalyesdarktroubleneedwouldbasic");
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja matrix_save_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    matrix_destroy(&arr);
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
//  Test 95: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 3, .height = -4};

                int array[20][9] = {{ 0, 6, 4, 8, 7, -4, 5, -6, 6}, { -7, 8, 3, 4, -10, 6, -1, -2, 10}, { -3, 6, 0, -10, -4, 2, 9, 2, 3}, { -10, -10, -3, -10, 2, 8, -2, 3, 6}, { -6, 8, -4, 3, -1, -3, -7, -5, 0}, { 2, 5, 9, -5, 7, -2, 1, -7, 1}, { 3, -1, 5, 2, 10, 7, -1, 5, -9}, { -2, -3, 6, 4, -9, -4, -9, 1, 10}, { -8, -3, 2, 7, 3, -10, -6, 6, -4}, { 8, 9, 7, -5, -6, 10, 7, 9, -9}, { -10, 2, -5, -9, 7, 3, -7, -9, -10}, { -1, -2, 6, -5, -1, -1, -1, -5, 4}, { -7, -3, -8, -7, 10, 7, 4, -8, -7}, { -10, -8, -4, 3, 0, 10, 2, 0, 2}, { 1, 0, -1, 8, 0, 6, 1, -2, 3}, { 10, -10, -10, 9, 9, -1, -2, 8, -7}, { 7, 3, 4, -6, -1, 5, 9, -7, -10}, { -4, 8, -7, 5, -6, 9, 1, 0, 7}, { -7, 10, -7, 3, -2, -2, -8, -9, 5}, { -2, -7, -9, 9, 6, 0, 1, 1, -10}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                arr.width = 9;
                arr.height = -20;

                printf("#####START#####");
                res = matrix_save_t(&arr, "turnoffafraidregionmetalyesdarktroubleneedwouldbasic");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                arr.width = 9;
                arr.height = 20;

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 96: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 4, .height = -9};

                int array[20][9] = {{ -9, 7, 4, -1, -3, 8, -4, -3, 4}, { 5, 1, -10, 9, -6, -6, -1, -4, -10}, { -2, 3, 10, -3, 6, 6, 5, -7, -10}, { 4, -6, 5, 9, -1, -9, 6, -10, 8}, { 3, -2, -5, 6, -8, -1, 6, 3, 3}, { 4, 1, -7, -3, -4, 5, -7, -10, 1}, { 8, 7, 2, -3, -2, 10, 6, 2, 10}, { -9, 2, -5, 3, 7, -8, -4, -5, 0}, { 8, 4, -10, -10, 10, -3, -5, 2, 1}, { -9, 6, 7, -6, 10, -4, 10, 7, 8}, { -7, -7, -5, 1, 7, -9, 3, -5, -1}, { 0, 0, -9, -9, -2, 0, 5, 9, 8}, { 6, 10, -6, 1, 7, 5, 7, 2, 9}, { 5, 1, -3, 5, 7, 7, 2, 7, 4}, { -7, -2, -9, -4, -6, -9, 7, 7, 3}, { 4, 8, 8, -6, 2, 2, 9, -2, 9}, { 0, -1, 5, -5, 0, -1, -2, 0, 4}, { -3, 5, 4, 8, 3, 7, 4, 2, 1}, { -1, 10, -10, 8, -9, 0, 8, -3, -6}, { 6, -6, -7, 5, -8, 4, 5, 4, 10}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                arr.width = -9;
                arr.height = -20;

                printf("#####START#####");
                res = matrix_save_t(&arr, "turnoffafraidregionmetalyesdarktroubleneedwouldbasic");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                arr.width = 9;
                arr.height = 20;

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 97: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 2, .height = 0};

                int array[20][9] = {{ 7, -7, 9, -8, 7, 9, -5, 8, -1}, { -9, 3, 7, 9, -3, 1, -10, 1, 4}, { -3, 9, 7, 7, 4, -2, 7, 7, -9}, { 10, 10, 0, 1, -7, 5, -3, -1, -9}, { 6, -7, 2, -9, -9, 2, 6, 0, 2}, { 4, -9, -2, -8, 5, 5, -9, -6, -4}, { -5, 3, 1, -1, 7, 10, 4, 5, 5}, { 8, -7, 0, -3, 0, 8, 10, 5, -9}, { -3, 9, 2, -9, 0, -6, -2, -10, 1}, { 0, -9, 9, -3, 4, -10, 8, -7, -8}, { 2, -8, -4, 1, 7, -1, -6, 1, 8}, { 5, 5, -8, 9, -9, 0, 8, 4, 7}, { -6, 3, 1, 4, 10, 9, -7, 10, -3}, { -7, -8, 5, -3, 9, 3, -4, 1, 1}, { 5, -2, 8, -7, -7, -2, 9, -10, -7}, { 5, -10, -4, -3, 7, -9, 4, 4, 1}, { 1, -6, 7, 4, -4, 0, 8, -8, 0}, { -10, 5, 4, -4, 10, -9, -7, 8, -9}, { 9, 9, 3, 8, 0, 10, 9, -5, 7}, { -3, -6, -8, -3, 2, -1, 9, -7, 0}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                arr.width = -9;
                arr.height = 20;

                printf("#####START#####");
                res = matrix_save_t(&arr, "turnoffafraidregionmetalyesdarktroubleneedwouldbasic");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                arr.width = 9;
                arr.height = 20;

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 98: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = 2};

                int array[20][9] = {{ -4, 1, -6, 2, -5, -10, 1, 9, 4}, { -9, 6, -4, 4, 2, -4, -5, 9, -5}, { -1, 0, 6, 3, -7, 3, -1, 10, 7}, { -1, -7, -7, 3, 2, 3, 9, 9, 3}, { 4, 6, 9, 2, -8, 6, 10, 8, -2}, { 8, -1, -6, -10, 9, -9, 10, -7, -1}, { 3, -5, 9, 3, 8, 2, 10, -5, 4}, { -1, 6, -2, 7, 4, -7, 2, 0, -4}, { -8, -8, -6, -5, 10, 7, -3, 2, 2}, { -2, 6, 10, 0, -8, 10, -2, -2, 3}, { 5, 8, -1, 7, -3, 0, 10, 0, -9}, { -8, 7, 9, 0, -9, -4, 6, 8, -3}, { -10, 7, 7, 2, 9, 5, 3, -10, 4}, { -3, 7, -2, 3, -6, 4, -8, -3, -9}, { -6, 6, 0, -8, 0, 6, -10, -8, 2}, { 9, -9, -5, 8, 6, -1, -5, -6, -3}, { 8, 4, -8, 4, -3, 5, 5, 6, -5}, { 7, 10, -5, 0, 2, 3, -6, -3, 5}, { 9, 0, -2, 4, 0, -8, -9, -1, 8}, { -10, -5, -9, -2, -3, -6, -5, -5, -4}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                arr.width = 9;
                arr.height = 0;

                printf("#####START#####");
                res = matrix_save_t(&arr, "turnoffafraidregionmetalyesdarktroubleneedwouldbasic");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                arr.width = 9;
                arr.height = 20;

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 99: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -3, .height = -4};

                int array[20][9] = {{ 5, 6, -4, -6, -2, 7, -10, -10, 2}, { 9, 6, -10, -2, -1, 0, 7, -4, -9}, { 5, -6, 8, -1, -5, 8, -9, -5, -10}, { -10, 0, -5, 7, 0, 5, 8, -7, 7}, { 2, 1, -4, -2, 10, -6, 1, -10, -3}, { -6, -9, -10, -2, -1, -2, -8, -8, -2}, { -2, -3, 4, 7, 1, -4, -10, -5, -4}, { -6, 10, -3, 6, -2, -5, 10, -3, -2}, { -8, 7, 3, -1, 4, -3, 9, 5, 6}, { 2, 8, 5, 8, -3, -3, 6, -9, -10}, { 1, -4, 6, 10, 5, 6, 0, 4, 1}, { -5, 8, 1, 2, 2, -3, 9, 2, 9}, { -7, 4, 9, 3, 1, 9, 5, -8, 2}, { 1, -9, 2, 5, 2, -2, -9, -7, -3}, { -10, 3, 6, 8, -5, -7, -6, -9, 1}, { 10, 6, 9, 7, -2, -7, -3, 8, -5}, { 3, -6, -4, 10, -10, 10, 0, 7, 7}, { -9, -1, 0, -10, -7, -5, -10, 0, -4}, { 0, 9, 2, -8, -3, -7, 8, 3, 1}, { -10, 6, -6, -9, 8, -2, 4, -6, -4}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                arr.width = 0;
                arr.height = 20;

                printf("#####START#####");
                res = matrix_save_t(&arr, "turnoffafraidregionmetalyesdarktroubleneedwouldbasic");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                arr.width = 9;
                arr.height = 20;

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 100: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -4, .height = -4};

                int array[20][9] = {{ 7, 3, -5, -8, 8, -6, 7, 1, 5}, { 9, -10, 6, -3, -8, 6, 6, -9, 3}, { -5, 10, -8, -8, -3, -3, 6, -1, 8}, { -8, 10, 8, -1, 0, -4, 4, 0, -5}, { -7, 5, 9, 4, -6, -3, 1, 10, -3}, { -9, -6, 5, 9, -1, 2, -5, -6, -8}, { -7, 2, 0, 6, 1, -7, -9, 5, 6}, { 7, -10, 7, 9, 4, 9, 6, -4, 0}, { -1, 1, 4, 1, 5, 10, -2, 3, -10}, { 5, -10, 10, -4, 6, -4, 2, 0, 4}, { 1, 8, -4, -8, 1, -8, 5, -4, -8}, { -10, 9, -4, -6, 7, -2, 8, -1, 6}, { -1, 8, 0, 9, 0, -1, -6, 1, -4}, { 4, -8, 0, 8, -6, 7, 3, -9, -8}, { 2, -10, -8, -3, -8, -1, -4, 9, 7}, { 2, 2, -4, -8, -7, 2, -3, -4, 0}, { -1, -7, 1, 8, 2, -7, -1, -8, 7}, { 8, 0, 3, -4, 2, 5, -4, -10, 3}, { -4, 6, 2, -8, 3, 5, -6, -9, -2}, { -4, 7, -6, 7, -8, 8, -5, 8, -7}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                arr.width = 0;
                arr.height = 0;

                printf("#####START#####");
                res = matrix_save_t(&arr, "turnoffafraidregionmetalyesdarktroubleneedwouldbasic");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                arr.width = 9;
                arr.height = 20;

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 101: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 3, .height = -10};

                int array[20][9] = {{ 7, 3, -5, -8, 8, -6, 7, 1, 5}, { 9, -10, 6, -3, -8, 6, 6, -9, 3}, { -5, 10, -8, -8, -3, -3, 6, -1, 8}, { -8, 10, 8, -1, 0, -4, 4, 0, -5}, { -7, 5, 9, 4, -6, -3, 1, 10, -3}, { -9, -6, 5, 9, -1, 2, -5, -6, -8}, { -7, 2, 0, 6, 1, -7, -9, 5, 6}, { 7, -10, 7, 9, 4, 9, 6, -4, 0}, { -1, 1, 4, 1, 5, 10, -2, 3, -10}, { 5, -10, 10, -4, 6, -4, 2, 0, 4}, { 1, 8, -4, -8, 1, -8, 5, -4, -8}, { -10, 9, -4, -6, 7, -2, 8, -1, 6}, { -1, 8, 0, 9, 0, -1, -6, 1, -4}, { 4, -8, 0, 8, -6, 7, 3, -9, -8}, { 2, -10, -8, -3, -8, -1, -4, 9, 7}, { 2, 2, -4, -8, -7, 2, -3, -4, 0}, { -1, -7, 1, 8, 2, -7, -1, -8, 7}, { 8, 0, 3, -4, 2, 5, -4, -10, 3}, { -4, 6, 2, -8, 3, 5, -6, -9, -2}, { -4, 7, -6, 7, -8, 8, -5, 8, -7}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                printf("#####START#####");
                res = matrix_save_t(&arr, NULL);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 102: Reakcja funkcji matrix_save_t na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Reakcja funkcji matrix_save_t na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = -10};

                int array[20][9] = {{ 7, 3, -5, -8, 8, -6, 7, 1, 5}, { 9, -10, 6, -3, -8, 6, 6, -9, 3}, { -5, 10, -8, -8, -3, -3, 6, -1, 8}, { -8, 10, 8, -1, 0, -4, 4, 0, -5}, { -7, 5, 9, 4, -6, -3, 1, 10, -3}, { -9, -6, 5, 9, -1, 2, -5, -6, -8}, { -7, 2, 0, 6, 1, -7, -9, 5, 6}, { 7, -10, 7, 9, 4, 9, 6, -4, 0}, { -1, 1, 4, 1, 5, 10, -2, 3, -10}, { 5, -10, 10, -4, 6, -4, 2, 0, 4}, { 1, 8, -4, -8, 1, -8, 5, -4, -8}, { -10, 9, -4, -6, 7, -2, 8, -1, 6}, { -1, 8, 0, 9, 0, -1, -6, 1, -4}, { 4, -8, 0, 8, -6, 7, 3, -9, -8}, { 2, -10, -8, -3, -8, -1, -4, 9, 7}, { 2, 2, -4, -8, -7, 2, -3, -4, 0}, { -1, -7, 1, 8, 2, -7, -1, -8, 7}, { 8, 0, 3, -4, 2, 5, -4, -10, 3}, { -4, 6, 2, -8, 3, 5, -6, -9, -2}, { -4, 7, -6, 7, -8, 8, -5, 8, -7}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                printf("#####START#####");
                res = matrix_save_t(&arr, NULL);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                printf("#####START#####");
                matrix_destroy(&arr);
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
//  Test 103: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.ptr = NULL, .width = 2, .height = 10};

                printf("#####START#####");
                int res = matrix_save_t(&arr, "turnoffafraidregionmetalyesdarktroubleneedwouldbasic");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

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
//  Test 104: Sprawdzanie poprawności działania funkcji matrix_save_t
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji matrix_save_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = matrix_save_t(NULL, "turnoffafraidregionmetalyesdarktroubleneedwouldbasic");
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_save_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

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
//  Test 105: Sprawdzanie poprawności działania funkcji matrix_display
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji matrix_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct matrix_t arr = {.ptr = NULL, .width = 7, .height = 1};
        
            printf("\n***TEST 1***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            printf("\n***TEST 2***\n\n");
            printf("***START***\n");
            matrix_display(NULL);
            printf("***END***\n");

        
            int res = matrix_create(&arr, 5, 11);
            int array[11][5] = {{ 0, 6, 8, -2, 1}, { 5, -7, 9, -5, -2}, { -1, 1, 10, 1, 1}, { 0, -6, -4, -10, -7}, { 8, -8, -6, 5, -8}, { -10, 6, -6, 5, -9}, { 10, 8, 2, -1, -10}, { -7, 6, 9, -7, -10}, { -7, -4, 0, -5, 6}, { 5, -9, 4, -8, 2}, { -7, 0, -5, 6, 4}};

            test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
            test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
            test_error(arr.height == 11, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 11, a ustawiła na %d", arr.height);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 11; ++i)
                for (int j = 0; j < 5; ++j)
                    arr.ptr[i][j] = array[i][j];


            arr.width = 0;
            arr.height = 11;

            printf("\n***TEST 3***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = -5;
            arr.height = 11;

            printf("\n***TEST 4***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = -5;
            arr.height = -11;

            printf("\n***TEST 5***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = 5;
            arr.height = -11;

            printf("\n***TEST 6***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = 5;
            arr.height = 0;

            printf("\n***TEST 7***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = 0;
            arr.height = 0;

            printf("\n***TEST 8***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = 5;
            arr.height = 11;

            printf("\n***TEST 9***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            printf("#####START#####");
            matrix_destroy(&arr);
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
//  Test 106: Sprawdzanie poprawności działania funkcji matrix_read
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji matrix_read", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct matrix_t arr = {.ptr = NULL, .width = 9, .height = 8};

            printf("\n***TEST 1***\n\n");
            printf("#####START#####");
            int res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            printf("\n***TEST 2***\n\n");
            printf("#####START#####");
            res = matrix_read(NULL);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);


            res = matrix_create(&arr, 5, 11);
            int array[11][5] = {{ 0, 6, 8, -2, 1}, { 5, -7, 9, -5, -2}, { -1, 1, 10, 1, 1}, { 0, -6, -4, -10, -7}, { 8, -8, -6, 5, -8}, { -10, 6, -6, 5, -9}, { 10, 8, 2, -1, -10}, { -7, 6, 9, -7, -10}, { -7, -4, 0, -5, 6}, { 5, -9, 4, -8, 2}, { -7, 0, -5, 6, 4}};

            test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
            test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
            test_error(arr.height == 11, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 11, a ustawiła na %d", arr.height);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem);

            arr.width = 0;
            arr.height = 11;

            printf("\n***TEST 3***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = -5;
            arr.height = 11;

            printf("\n***TEST 4***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = -5;
            arr.height = -11;

            printf("\n***TEST 5***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = 5;
            arr.height = -11;

            printf("\n***TEST 6***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = 5;
            arr.height = 0;

            printf("\n***TEST 7***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = 0;
            arr.height = 0;

            printf("\n***TEST 8***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = 5;
            arr.height = 11;

            printf("\n***TEST 9***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 0, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 0, a zwróciła %d", res);

            int ok = 0;
            
            for (int i = 0; i < 11; ++i)
                for (int j = 0; j < 5; ++j)
                    ok += arr.ptr[i][j] != array[i][j];
                        
            if (ok)
            {
                printf("Zawartość macierzy po pobraniu danych od użytkownika\n");
                matrix_display(&arr);    
            }
            test_error(ok == 0, "Funkcja matrix_read() niepoprawnie pobrała dane do macierzy");

            printf("#####START#####");
            matrix_destroy(&arr);
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
//  Test 1: Reakcja na brak pamięci - limit ustawiony na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
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
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 104 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 104 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(104);
    
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
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 124 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 124 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(124);
    
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
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 144 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 144 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(144);
    
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
//  Test 5: Reakcja na brak pamięci - limit ustawiony na 164 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit ustawiony na 164 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(164);
    
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
//  Test 6: Reakcja na brak pamięci - limit ustawiony na 184 bajtów
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na brak pamięci - limit ustawiony na 184 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(184);
    
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
//  Test 7: Reakcja na brak pamięci - limit ustawiony na 204 bajtów
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na brak pamięci - limit ustawiony na 204 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(204);
    
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
//  Test 8: Reakcja na brak pamięci - limit ustawiony na 224 bajtów
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na brak pamięci - limit ustawiony na 224 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(224);
    
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
//  Test 9: Reakcja na brak pamięci - limit ustawiony na 244 bajtów
//
void MTEST9(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(9, "Reakcja na brak pamięci - limit ustawiony na 244 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(244);
    
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
//  Test 10: Reakcja na brak pamięci - limit ustawiony na 264 bajtów
//
void MTEST10(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(10, "Reakcja na brak pamięci - limit ustawiony na 264 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(264);
    
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
//  Test 11: Reakcja na brak pamięci - limit ustawiony na 284 bajtów
//
void MTEST11(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(11, "Reakcja na brak pamięci - limit ustawiony na 284 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(284);
    
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
//  Test 12: Reakcja na brak pamięci - limit ustawiony na 304 bajtów
//
void MTEST12(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(12, "Reakcja na brak pamięci - limit ustawiony na 304 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(304);
    
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
//  Test 13: Reakcja na brak pamięci - limit ustawiony na 324 bajtów
//
void MTEST13(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(13, "Reakcja na brak pamięci - limit ustawiony na 324 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(324);
    
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
//  Test 14: Reakcja na brak pamięci - limit ustawiony na 364 bajtów (wystarczający na zaalokowanie pamięci na strukturę i nazwę pliku)
//
void MTEST14(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(14, "Reakcja na brak pamięci - limit ustawiony na 364 bajtów (wystarczający na zaalokowanie pamięci na strukturę i nazwę pliku)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(364);
    
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
//  Test 15: Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void MTEST15(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(15, "Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

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

//
//  Test 16: Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void MTEST16(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(16, "Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

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
            UTEST1, // Sprawdzanie poprawności działania funkcji matrix_destroy
            UTEST2, // Sprawdzanie poprawności działania funkcji matrix_destroy
            UTEST3, // Sprawdzanie poprawności działania funkcji matrix_destroy
            UTEST4, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST5, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST6, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST7, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST8, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST9, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST10, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST11, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST12, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST13, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 576 bajtów)
            UTEST14, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 60 bajtów)
            UTEST15, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 132720 bajtów)
            UTEST16, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST17, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 136 bajtów)
            UTEST18, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 144 bajtów)
            UTEST19, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 152 bajtów)
            UTEST20, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 160 bajtów)
            UTEST21, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 168 bajtów)
            UTEST22, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 176 bajtów)
            UTEST23, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 184 bajtów)
            UTEST24, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 192 bajtów)
            UTEST25, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 200 bajtów)
            UTEST26, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 208 bajtów)
            UTEST27, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 216 bajtów)
            UTEST28, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 224 bajtów)
            UTEST29, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 232 bajtów)
            UTEST30, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 240 bajtów)
            UTEST31, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 248 bajtów)
            UTEST32, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 256 bajtów)
            UTEST33, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 264 bajtów)
            UTEST34, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST35, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST36, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST37, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST38, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST39, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST40, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST41, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST42, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST43, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST44, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 272 bajtów)
            UTEST45, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 184 bajtów)
            UTEST46, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 164528 bajtów)
            UTEST47, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST48, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST49, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 120 bajtów)
            UTEST50, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 160 bajtów)
            UTEST51, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 200 bajtów)
            UTEST52, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 240 bajtów)
            UTEST53, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 280 bajtów)
            UTEST54, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 320 bajtów)
            UTEST55, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 360 bajtów)
            UTEST56, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 400 bajtów)
            UTEST57, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 440 bajtów)
            UTEST58, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 480 bajtów)
            UTEST59, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 520 bajtów)
            UTEST60, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 560 bajtów)
            UTEST61, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 600 bajtów)
            UTEST62, // Sprawdzanie poprawności działania funkcji matrix_transpose
            UTEST63, // Sprawdzanie poprawności działania funkcji matrix_transpose
            UTEST64, // Sprawdzanie poprawności działania funkcji matrix_transpose
            UTEST65, // Sprawdzanie poprawności działania funkcji matrix_transpose
            UTEST66, // Sprawdzanie poprawności działania funkcji matrix_transpose
            UTEST67, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 344 bajtów)
            UTEST68, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 1184 bajtów)
            UTEST69, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 312 bajtów)
            UTEST70, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 120 bajtów)
            UTEST71, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 40 bajtów)
            UTEST72, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 264 bajtów)
            UTEST73, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 680 bajtów)
            UTEST74, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 239 bajtów)
            UTEST75, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 43 bajtów)
            UTEST76, // Sprawdzanie reakcji funkcji matrix_transpose na limit pamięci (limit sterty ustawiono na 24 bajtów)
            UTEST77, // Sprawdzanie poprawności działania funkcji matrix_transpose
            UTEST78, // Sprawdzanie poprawności działania funkcji matrix_transpose
            UTEST79, // Sprawdzanie poprawności działania funkcji matrix_transpose
            UTEST80, // Sprawdzanie poprawności działania funkcji matrix_save_b
            UTEST81, // Sprawdzanie poprawności działania funkcji matrix_save_b
            UTEST82, // Sprawdzanie poprawności działania funkcji matrix_save_b
            UTEST83, // Sprawdzanie poprawności działania funkcji matrix_save_b
            UTEST84, // Sprawdzanie poprawności działania funkcji matrix_save_b
            UTEST85, // Sprawdzanie poprawności działania funkcji matrix_save_b
            UTEST86, // Sprawdzanie poprawności działania funkcji matrix_save_b
            UTEST87, // Reakcja funkcji matrix_save_b na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
            UTEST88, // Sprawdzanie poprawności działania funkcji matrix_save_b
            UTEST89, // Sprawdzanie poprawności działania funkcji matrix_save_b
            UTEST90, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST91, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST92, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST93, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST94, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST95, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST96, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST97, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST98, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST99, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST100, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST101, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST102, // Reakcja funkcji matrix_save_t na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
            UTEST103, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST104, // Sprawdzanie poprawności działania funkcji matrix_save_t
            UTEST105, // Sprawdzanie poprawności działania funkcji matrix_display
            UTEST106, // Sprawdzanie poprawności działania funkcji matrix_read
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
            test_summary(106); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci - limit ustawiony na 0 bajtów
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 104 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 124 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 144 bajtów
            MTEST5, // Reakcja na brak pamięci - limit ustawiony na 164 bajtów
            MTEST6, // Reakcja na brak pamięci - limit ustawiony na 184 bajtów
            MTEST7, // Reakcja na brak pamięci - limit ustawiony na 204 bajtów
            MTEST8, // Reakcja na brak pamięci - limit ustawiony na 224 bajtów
            MTEST9, // Reakcja na brak pamięci - limit ustawiony na 244 bajtów
            MTEST10, // Reakcja na brak pamięci - limit ustawiony na 264 bajtów
            MTEST11, // Reakcja na brak pamięci - limit ustawiony na 284 bajtów
            MTEST12, // Reakcja na brak pamięci - limit ustawiony na 304 bajtów
            MTEST13, // Reakcja na brak pamięci - limit ustawiony na 324 bajtów
            MTEST14, // Reakcja na brak pamięci - limit ustawiony na 364 bajtów (wystarczający na zaalokowanie pamięci na strukturę i nazwę pliku)
            MTEST15, // Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
            MTEST16, // Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
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
            test_summary(16); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}