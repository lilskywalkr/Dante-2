/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Operacje na macierzach
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-12 12:57:21.278838
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
    

            struct matrix_t arr = {.ptr = NULL, .width = 7, .height = 0};

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
    

            struct matrix_t arr = {.ptr = NULL, .width = 5, .height = -5};

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
    

                struct matrix_t arr = {.width = -3, .height = 6};
                int width = 2, height = 19;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 2, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 2, a ustawiła na %d", arr.width);
                    test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = -9, .height = -6};
                int width = 18, height = 7;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 18, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 18, a ustawiła na %d", arr.width);
                    test_error(arr.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = 2, .height = 6};
                int width = 101, height = 157;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 101, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 101, a ustawiła na %d", arr.width);
                    test_error(arr.height == 157, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 157, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = -8, .height = 1};
                int width = 0, height = 18;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 0, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 0, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = 3, .height = 4};
                int width = 2, height = 0;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 2, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 2, a ustawiła na %d", arr.width);
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
    

                struct matrix_t arr = {.width = 6, .height = -5};
                int width = 8, height = -13;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
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
    

                struct matrix_t arr = {.width = 3, .height = -4};
                int width = -2, height = 17;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == -2, "Funkcja matrix_create() powinna ustawić szerokość macierzy na -2, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = -10, .height = -3};
                int width = -8, height = -16;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == -8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na -8, a ustawiła na %d", arr.width);
                    test_error(arr.height == -16, "Funkcja matrix_create() powinna ustawić wysokość macierzy na -16, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = 3, .height = 7};
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
//  Test 13: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 532 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 532 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(532);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 8, .height = -5};
                int width = 5, height = 19;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
                test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);

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
//  Test 14: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 104 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 104 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(104);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 4, .height = -8};
                int width = 11, height = 2;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 11, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 11, a ustawiła na %d", arr.width);
                test_error(arr.height == 2, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr.height);

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
//  Test 15: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 102080 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 102080 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(102080);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -2, .height = 5};
                int width = 143, height = 176;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 143, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 143, a ustawiła na %d", arr.width);
                test_error(arr.height == 176, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 176, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = 1, .height = -8};
                int width = 143, height = 176;        

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
//  Test 17: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 120 bajtów)
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 120 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(120);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 2, .height = -1};
                int width = 143, height = 176;        

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
//  Test 18: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 136 bajtów)
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 136 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(136);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 2, .height = -10};
                int width = 143, height = 176;        

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
    

                struct matrix_t arr = {.width = 3, .height = 1};
                int width = 143, height = 176;        

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
//  Test 20: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 168 bajtów)
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 168 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(168);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 0, .height = -7};
                int width = 143, height = 176;        

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
//  Test 21: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 184 bajtów)
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 184 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(184);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 2, .height = 2};
                int width = 143, height = 176;        

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
//  Test 22: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 200 bajtów)
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 200 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(200);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -3, .height = 7};
                int width = 143, height = 176;        

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
//  Test 23: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 216 bajtów)
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 216 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(216);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = 2};
                int width = 143, height = 176;        

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
//  Test 24: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 232 bajtów)
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 232 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(232);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 4, .height = -7};
                int width = 143, height = 176;        

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
//  Test 25: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 248 bajtów)
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 248 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(248);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = -6};
                int width = 143, height = 176;        

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
//  Test 26: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 264 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 264 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(264);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 10, .height = 4};
                int width = 143, height = 176;        

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
//  Test 27: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 280 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 280 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(280);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = 6};
                int width = 143, height = 176;        

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
//  Test 28: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 296 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 296 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(296);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 10, .height = -10};
                int width = 143, height = 176;        

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
//  Test 29: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 312 bajtów)
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 312 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(312);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -9, .height = -2};
                int width = 143, height = 176;        

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
//  Test 30: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 328 bajtów)
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 328 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(328);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 4, .height = 1};
                int width = 143, height = 176;        

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
//  Test 31: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 344 bajtów)
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 344 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(344);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -9, .height = 5};
                int width = 143, height = 176;        

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
//  Test 32: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int width = 3, height = 18;        

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
//  Test 33: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 3, height = 18;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 3, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 3, a ustawiła na %d", arr->width);
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
//  Test 34: Sprawdzanie poprawności działania funkcji matrix_create_struct
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji matrix_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 16, height = 7;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 16, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 16, a ustawiła na %d", arr->width);
                    test_error(arr->height == 7, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

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
    

                int width = 169, height = 299;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 169, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 169, a ustawiła na %d", arr->width);
                    test_error(arr->height == 299, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 299, a ustawiła na %d", arr->height);

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
    

                int width = 0, height = 13;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 0, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 0, a ustawiła na %d", arr->width);
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
    

                int width = 6, height = 0;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 6, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
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
    

                int width = 3, height = -13;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 3, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 3, a ustawiła na %d", arr->width);
                    test_error(arr->height == -13, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na -13, a ustawiła na %d", arr->height);

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
    

                int width = -3, height = 15;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == -3, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na -3, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 15, a ustawiła na %d", arr->height);

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
    

                int width = -1, height = -12;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!1)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == -1, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na -1, a ustawiła na %d", arr->width);
                    test_error(arr->height == -12, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na -12, a ustawiła na %d", arr->height);

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
//  Test 42: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 304 bajtów)
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 304 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(304);
    
    //
    // -----------
    //
    

                int width = 4, height = 12;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 4, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 4, a ustawiła na %d", arr->width);
                    test_error(arr->height == 12, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 12, a ustawiła na %d", arr->height);

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
//  Test 43: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 88 bajtów)
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 88 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(88);
    
    //
    // -----------
    //
    

                int width = 16, height = 1;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 16, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 16, a ustawiła na %d", arr->width);
                    test_error(arr->height == 1, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr->height);

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
//  Test 44: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 296816 bajtów)
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 296816 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(296816);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

                printf("#####START#####");
                struct matrix_t *arr = matrix_create_struct(width, height);
                printf("#####END#####");


                if (!0)
                {
                    test_error(arr != NULL, "Funkcja matrix_create_struct() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja matrix_create_struct() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 278, "Funkcja matrix_create_struct() powinna ustawić szerokość macierzy na 278, a ustawiła na %d", arr->width);
                    test_error(arr->height == 265, "Funkcja matrix_create_struct() powinna ustawić wysokość macierzy na 265, a ustawiła na %d", arr->height);

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
//  Test 45: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 46: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 47: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 112 bajtów)
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 112 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(112);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 48: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 136 bajtów)
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 136 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(136);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 49: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 160 bajtów)
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 160 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(160);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 50: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 184 bajtów)
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 184 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(184);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 51: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 208 bajtów)
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 208 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(208);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 52: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 232 bajtów)
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 232 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(232);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 53: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 256 bajtów)
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 256 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(256);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 54: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 280 bajtów)
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 280 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(280);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 55: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 304 bajtów)
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 304 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(304);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 56: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 328 bajtów)
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 328 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(328);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 57: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 352 bajtów)
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 352 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(352);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 58: Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 376 bajtów)
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 376 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(376);
    
    //
    // -----------
    //
    

                int width = 278, height = 265;        

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
//  Test 59: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][8] = {{ -4, 4, 4, 3, -3, -3, 0, 1}, { 2, -4, -4, -5, 4, -9, 3, -5}, { -1, -4, 7, -8, 9, -2, -8, 10}, { -10, 2, 6, -9, 5, 5, 4, 10}, { -1, 3, -3, -4, -8, 2, 4, 2}, { 4, -3, -3, 2, -6, 6, -8, -8}, { 3, -1, -1, -1, 7, -8, -1, -3}, { -2, -3, 9, -1, -1, 5, 2, 5}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("we.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 8, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 8; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 60: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[18][5] = {{ -1, 1, -1, 5, -10}, { 1, 10, -3, -9, -6}, { 0, -6, -9, 1, 8}, { 1, -9, 0, 6, 0}, { -4, 1, -3, -2, 10}, { 9, -8, 5, -8, 2}, { -5, 5, 3, 9, -5}, { -2, -10, 2, 6, -3}, { 0, -3, 2, -2, -2}, { 10, -1, 1, -1, -4}, { 4, -2, -4, -1, -9}, { -9, 3, -6, 10, -1}, { 1, 9, -5, -9, 7}, { 5, -3, 2, 8, -3}, { 7, -10, 5, 1, 6}, { -2, -10, 9, 0, -4}, { -10, -5, -3, -1, -5}, { 1, 1, 3, -6, 9}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("distant.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 5, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr->width);
                        test_error(arr->height == 18, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 18; ++i)
                            for (int j = 0; j < 5; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 61: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][1] = {{ 4}, { -9}, { -2}, { -9}, { 0}, { -3}, { 3}, { -1}, { 10}, { -5}, { -10}, { -10}, { -4}, { 2}, { -3}, { -5}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("most.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 1, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 16, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 16, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 62: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][10] = {{ 10, 7, -9, 5, 5, 1, -7, -1, -2, -6}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("foot.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 63: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][1] = {{ 3}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("cent.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 1, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 64: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("egg.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 65: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("whole.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 66: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("was.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 67: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("rock.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 68: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("dad.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 69: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("here.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 70: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("thought.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 71: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("nation.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 72: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("north.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 73: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("star.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 74: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("deep.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 2, "Funkcja matrix_load_b() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                    if (!2)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
                
        
                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");
                        
                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 75: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][8] = {{ -4, 4, 4, 3, -3, -3, 0, 1}, { 2, -4, -4, -5, 4, -9, 3, -5}, { -1, -4, 7, -8, 9, -2, -8, 10}, { -10, 2, 6, -9, 5, 5, 4, 10}, { -1, 3, -3, -4, -8, 2, 4, 2}, { 4, -3, -3, 2, -6, 6, -8, -8}, { 3, -1, -1, -1, 7, -8, -1, -3}, { -2, -3, 9, -1, -1, 5, 2, 5}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("we.bin", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 8, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 8; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 76: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[18][5] = {{ -1, 1, -1, 5, -10}, { 1, 10, -3, -9, -6}, { 0, -6, -9, 1, 8}, { 1, -9, 0, 6, 0}, { -4, 1, -3, -2, 10}, { 9, -8, 5, -8, 2}, { -5, 5, 3, 9, -5}, { -2, -10, 2, 6, -3}, { 0, -3, 2, -2, -2}, { 10, -1, 1, -1, -4}, { 4, -2, -4, -1, -9}, { -9, 3, -6, 10, -1}, { 1, 9, -5, -9, 7}, { 5, -3, 2, 8, -3}, { 7, -10, 5, 1, 6}, { -2, -10, 9, 0, -4}, { -10, -5, -3, -1, -5}, { 1, 1, 3, -6, 9}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("distant.bin", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 5, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr->width);
                        test_error(arr->height == 18, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 18; ++i)
                            for (int j = 0; j < 5; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 77: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][1] = {{ 4}, { -9}, { -2}, { -9}, { 0}, { -3}, { 3}, { -1}, { 10}, { -5}, { -10}, { -10}, { -4}, { 2}, { -3}, { -5}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("most.bin", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 1, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 16, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 16, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 78: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][10] = {{ 10, 7, -9, 5, 5, 1, -7, -1, -2, -6}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("foot.bin", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 79: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][1] = {{ 3}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("cent.bin", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 1, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 80: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("egg.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 81: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("whole.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 82: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("was.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 83: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("rock.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 84: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("dad.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 85: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("here.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 86: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("thought.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 87: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("nation.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 88: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("north.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 89: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("star.bin", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 90: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][10] = {{ 6, -5, -6, -2, 9, -3, -9, 6, 10, -7}, { 7, -5, -2, 0, 4, -9, 3, 6, 3, -4}, { 4, 1, -6, 7, -2, 3, 2, -3, 9, 8}, { 7, 3, 0, -2, -4, -3, 0, -3, -6, -8}, { -6, -1, 8, 9, 10, 3, 4, 2, -7, 1}, { 2, -6, -4, 1, 0, 2, 4, 4, 5, -5}, { 9, 2, 6, -1, 2, 6, -8, 10, 0, 10}, { -8, -9, -5, 9, 6, 4, 7, -6, -10, -4}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("deep.bin", NULL);
                    printf("#####END#####");

                    if (!2)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_b() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 10, "Funkcja matrix_load_b() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                        test_error(arr->height == 8, "Funkcja matrix_load_b() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 8; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_b() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 91: Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("stay.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 92: Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("stay.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 93: Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 32 bajtów)
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 32 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(32);
    
    //
    // -----------
    //
    

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("stay.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 94: Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 52 bajtów)
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 52 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(52);
    
    //
    // -----------
    //
    

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("stay.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 95: Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("stay.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 96: Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("stay.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 97: Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 32 bajtów)
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 32 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(32);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("stay.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 98: Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 52 bajtów)
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 52 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(52);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b("stay.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 99: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b(NULL, &err_code);
                    printf("#####END#####");

                    test_error(err_code == 1, "Funkcja matrix_load_b() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 100: Sprawdzanie poprawności działania funkcji matrix_load_b
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji matrix_load_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_b(NULL, NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_b() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 101: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][8] = {{ 4, -7, -5, 6, -3, -2, -2, 0}, { 5, -2, -1, -4, 0, 6, 0, -7}, { -4, 4, 4, 3, 10, -4, -4, 5}, { 1, 1, 0, -1, 7, -9, 8, -5}, { 0, 1, 1, 7, 1, -2, 1, -6}, { -5, 4, -1, -2, 9, 0, -3, -2}, { -2, 4, 0, -4, -9, -2, -9, 1}, { -1, -7, -8, 1, -7, -8, 4, -10}, { 4, -4, -7, 10, 6, -3, 2, -1}, { 6, 10, -7, 10, 5, 7, -5, -7}};

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("fall.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 8, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 8; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 102: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[19][8] = {{ 0, -3, 1, -3, -4, 7, -4, 5}, { -1, 1, 8, 1, 8, -8, -5, -10}, { 2, -10, -2, 9, -4, 4, 9, -1}, { -7, 8, -3, 1, 8, 1, -10, -4}, { 6, 6, 0, 7, -6, 1, 8, 7}, { 9, 5, -5, 2, -7, 8, -10, -7}, { 3, -3, 1, 4, -9, -3, 5, 3}, { -9, -2, -8, 2, -8, 5, -9, 9}, { 2, 5, -3, 4, -8, -9, 2, 7}, { -2, 9, -5, 1, 8, -1, -1, 6}, { -8, 3, 10, 2, 1, 0, 8, -4}, { 7, -9, 5, 6, -10, -4, 1, -8}, { 4, -9, -2, 2, -6, 3, 10, -1}, { 9, 6, -6, -7, 4, -6, 4, -1}, { 4, 3, 6, 4, 7, 4, -3, -5}, { 7, -9, -3, 7, 3, -5, -2, 10}, { -10, -5, -1, 2, -8, 7, -6, -3}, { -1, 4, 7, -1, 0, -8, 2, -3}, { 0, -6, -6, -2, -6, 0, -8, 2}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("drive.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 8, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                        test_error(arr->height == 19, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 19; ++i)
                            for (int j = 0; j < 8; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 103: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[19][1] = {{ -8}, { -9}, { -10}, { 7}, { -8}, { -2}, { 2}, { 2}, { 4}, { -1}, { -4}, { -10}, { 6}, { -10}, { 5}, { -9}, { 4}, { -4}, { 0}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("quite.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 1, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 19, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 19; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 104: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][8] = {{ 10, 3, -1, -6, 0, 4, -1, -6}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("divide.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 8, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 8; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 105: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][1] = {{ -1}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("there.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja matrix_load_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 1, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 106: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("join.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 107: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("tiny.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 108: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("sky.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 109: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("test.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 110: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("ball.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 111: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("told.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 112: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("cool.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 113: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("lot.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 114: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("oil.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 115: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("colony.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja matrix_load_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 116: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("wire.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 2, "Funkcja matrix_load_t() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                    if (!2)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 117: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][8] = {{ 4, -7, -5, 6, -3, -2, -2, 0}, { 5, -2, -1, -4, 0, 6, 0, -7}, { -4, 4, 4, 3, 10, -4, -4, 5}, { 1, 1, 0, -1, 7, -9, 8, -5}, { 0, 1, 1, 7, 1, -2, 1, -6}, { -5, 4, -1, -2, 9, 0, -3, -2}, { -2, 4, 0, -4, -9, -2, -9, 1}, { -1, -7, -8, 1, -7, -8, 4, -10}, { 4, -4, -7, 10, 6, -3, 2, -1}, { 6, 10, -7, 10, 5, 7, -5, -7}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("fall.txt", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 8, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 8; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 118: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[19][8] = {{ 0, -3, 1, -3, -4, 7, -4, 5}, { -1, 1, 8, 1, 8, -8, -5, -10}, { 2, -10, -2, 9, -4, 4, 9, -1}, { -7, 8, -3, 1, 8, 1, -10, -4}, { 6, 6, 0, 7, -6, 1, 8, 7}, { 9, 5, -5, 2, -7, 8, -10, -7}, { 3, -3, 1, 4, -9, -3, 5, 3}, { -9, -2, -8, 2, -8, 5, -9, 9}, { 2, 5, -3, 4, -8, -9, 2, 7}, { -2, 9, -5, 1, 8, -1, -1, 6}, { -8, 3, 10, 2, 1, 0, 8, -4}, { 7, -9, 5, 6, -10, -4, 1, -8}, { 4, -9, -2, 2, -6, 3, 10, -1}, { 9, 6, -6, -7, 4, -6, 4, -1}, { 4, 3, 6, 4, 7, 4, -3, -5}, { 7, -9, -3, 7, 3, -5, -2, 10}, { -10, -5, -1, 2, -8, 7, -6, -3}, { -1, 4, 7, -1, 0, -8, 2, -3}, { 0, -6, -6, -2, -6, 0, -8, 2}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("drive.txt", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 8, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                        test_error(arr->height == 19, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 19; ++i)
                            for (int j = 0; j < 8; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 119: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[19][1] = {{ -8}, { -9}, { -10}, { 7}, { -8}, { -2}, { 2}, { 2}, { 4}, { -1}, { -4}, { -10}, { 6}, { -10}, { 5}, { -9}, { 4}, { -4}, { 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("quite.txt", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 1, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 19, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 19; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 120: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][8] = {{ 10, 3, -1, -6, 0, 4, -1, -6}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("divide.txt", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 8, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 8; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 121: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][1] = {{ -1}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("there.txt", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 1, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 122: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("join.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 123: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("tiny.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 124: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("sky.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 125: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("test.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 126: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("ball.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 127: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("told.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 128: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST128(void)
{
    // informacje o teście
    test_start(128, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("cool.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 129: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST129(void)
{
    // informacje o teście
    test_start(129, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("lot.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 130: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST130(void)
{
    // informacje o teście
    test_start(130, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("oil.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 131: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST131(void)
{
    // informacje o teście
    test_start(131, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("colony.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 132: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST132(void)
{
    // informacje o teście
    test_start(132, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][6] = {{ -9, -10, 10, -1, 4, 1}, { -2, -5, 6, 10, -5, 4}, { -4, -4, -3, -6, 10, -7}, { -1, -7, -6, -6, -1, -9}, { -4, -10, 2, -2, -7, 9}, { 5, -7, -8, 8, -8, -6}, { -9, -9, -7, -3, -4, 0}};

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("wire.txt", NULL);
                    printf("#####END#####");

                    if (!2)
                    {
                        test_error(arr != NULL, "Funkcja matrix_load_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja matrix_load_t() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                        test_error(arr->width == 6, "Funkcja matrix_load_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 7, "Funkcja matrix_load_t() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 7; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja matrix_load_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        matrix_destroy_struct(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja matrix_destroy_struct() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 133: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST133(void)
{
    // informacje o teście
    test_start(133, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 134: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST134(void)
{
    // informacje o teście
    test_start(134, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 135: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 48 bajtów)
//
void UTEST135(void)
{
    // informacje o teście
    test_start(135, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 48 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(48);
    
    //
    // -----------
    //
    

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 136: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 68 bajtów)
//
void UTEST136(void)
{
    // informacje o teście
    test_start(136, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 68 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(68);
    
    //
    // -----------
    //
    

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 137: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 88 bajtów)
//
void UTEST137(void)
{
    // informacje o teście
    test_start(137, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 88 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(88);
    
    //
    // -----------
    //
    

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 138: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 108 bajtów)
//
void UTEST138(void)
{
    // informacje o teście
    test_start(138, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 108 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(108);
    
    //
    // -----------
    //
    

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja matrix_load_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 139: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST139(void)
{
    // informacje o teście
    test_start(139, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 140: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST140(void)
{
    // informacje o teście
    test_start(140, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 141: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 48 bajtów)
//
void UTEST141(void)
{
    // informacje o teście
    test_start(141, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 48 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(48);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 142: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 68 bajtów)
//
void UTEST142(void)
{
    // informacje o teście
    test_start(142, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 68 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(68);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 143: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 88 bajtów)
//
void UTEST143(void)
{
    // informacje o teście
    test_start(143, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 88 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(88);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 144: Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 108 bajtów)
//
void UTEST144(void)
{
    // informacje o teście
    test_start(144, "Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 108 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(108);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t("just.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 145: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST145(void)
{
    // informacje o teście
    test_start(145, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t(NULL, &err_code);
                    printf("#####END#####");

                    test_error(err_code == 1, "Funkcja matrix_load_t() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 146: Sprawdzanie poprawności działania funkcji matrix_load_t
//
void UTEST146(void)
{
    // informacje o teście
    test_start(146, "Sprawdzanie poprawności działania funkcji matrix_load_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    printf("#####START#####");                            
                    struct matrix_t *arr = matrix_load_t(NULL, NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja matrix_load_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

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
//  Test 147: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST147(void)
{
    // informacje o teście
    test_start(147, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -10, .height = 1};

                    int array[6][8] = {{ 10, -6, -5, -10, -8, -3, 3, -5}, { 0, -3, -10, 2, -7, 4, -4, 1}, { 10, -10, 5, -6, -7, -10, 6, 1}, { 7, 0, 3, 5, 4, 6, -3, 1}, { 6, -2, -6, -1, -6, -2, 0, 3}, { -8, 10, -2, -4, -2, 6, -7, -4}};
                    int expected_array[6][8] = {{ 10, -6, -5, -10, -8, -3, 3, -5}, { 0, -3, -10, 2, -7, 4, -4, 1}, { 10, -10, 5, -6, -7, -10, 6, 1}, { 7, 0, 3, 5, 4, 6, -3, 1}, { 6, -2, -6, -1, -6, -2, 0, 3}, { -8, 10, -2, -4, -2, 6, -7, -4}};

                    int res = matrix_create(&arr, 8, 6);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                    test_error(arr.height == 6, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_copy() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 8, "Funkcja matrix_copy() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 6, "Funkcja matrix_copy() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 8; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po skopiowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_copy() niepoprawnie transponowała macierz");

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
//  Test 148: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST148(void)
{
    // informacje o teście
    test_start(148, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -4, .height = 6};

                    int array[18][6] = {{ 4, 5, 2, 1, -3, 0}, { -10, -9, -2, -1, 6, 0}, { -5, 0, -8, 2, 6, 0}, { -6, 0, -8, -7, 3, 3}, { 1, 0, -4, -1, 9, 3}, { 6, 6, -1, -4, -3, 3}, { -7, -3, 10, 1, -5, 6}, { 1, 9, 9, 5, 7, 10}, { 9, -8, -6, 4, -5, 3}, { 4, -4, 10, -2, 4, -3}, { 3, 5, 8, 1, 8, 3}, { 5, -6, -7, -9, 8, 4}, { 3, -9, -10, 8, -5, -2}, { 10, -2, 2, -4, -5, -1}, { -6, 2, 2, 0, 1, -2}, { -5, 0, 0, 7, -7, 7}, { 8, -6, -6, -7, 9, -5}, { 3, 3, -8, 1, -6, -8}};
                    int expected_array[18][6] = {{ 4, 5, 2, 1, -3, 0}, { -10, -9, -2, -1, 6, 0}, { -5, 0, -8, 2, 6, 0}, { -6, 0, -8, -7, 3, 3}, { 1, 0, -4, -1, 9, 3}, { 6, 6, -1, -4, -3, 3}, { -7, -3, 10, 1, -5, 6}, { 1, 9, 9, 5, 7, 10}, { 9, -8, -6, 4, -5, 3}, { 4, -4, 10, -2, 4, -3}, { 3, 5, 8, 1, 8, 3}, { 5, -6, -7, -9, 8, 4}, { 3, -9, -10, 8, -5, -2}, { 10, -2, 2, -4, -5, -1}, { -6, 2, 2, 0, 1, -2}, { -5, 0, 0, 7, -7, 7}, { 8, -6, -6, -7, 9, -5}, { 3, 3, -8, 1, -6, -8}};

                    int res = matrix_create(&arr, 6, 18);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_copy() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 6, "Funkcja matrix_copy() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 18, "Funkcja matrix_copy() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po skopiowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_copy() niepoprawnie transponowała macierz");

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
//  Test 149: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST149(void)
{
    // informacje o teście
    test_start(149, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 3, .height = -1};

                    int array[20][1] = {{ -10}, { -9}, { -7}, { 6}, { 9}, { 9}, { 6}, { 5}, { 8}, { 3}, { -8}, { -9}, { 2}, { 1}, { 0}, { 4}, { -6}, { -7}, { -10}, { 8}};
                    int expected_array[20][1] = {{ -10}, { -9}, { -7}, { 6}, { 9}, { 9}, { 6}, { 5}, { 8}, { 3}, { -8}, { -9}, { 2}, { 1}, { 0}, { 4}, { -6}, { -7}, { -10}, { 8}};

                    int res = matrix_create(&arr, 1, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_copy() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_copy() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 20, "Funkcja matrix_copy() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po skopiowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_copy() niepoprawnie transponowała macierz");

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
//  Test 150: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST150(void)
{
    // informacje o teście
    test_start(150, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -9, .height = -10};

                    int array[1][10] = {{ -5, 3, 8, -7, 6, 9, -4, 10, 10, -7}};
                    int expected_array[1][10] = {{ -5, 3, 8, -7, 6, 9, -4, 10, 10, -7}};

                    int res = matrix_create(&arr, 10, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 10, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 10; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_copy() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 10, "Funkcja matrix_copy() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_copy() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 10; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po skopiowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_copy() niepoprawnie transponowała macierz");

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
//  Test 151: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST151(void)
{
    // informacje o teście
    test_start(151, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -9, .height = -8};

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
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_copy() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_copy() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_copy() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po skopiowaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_copy() niepoprawnie transponowała macierz");

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
//  Test 152: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 128 bajtów)
//
void UTEST152(void)
{
    // informacje o teście
    test_start(152, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 128 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(128);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -6, .height = 1};

                int array[2][5] = {{ -3, -4, -9, 9, -4}, { -8, 7, -5, 0, 3}};
                int expected_array[2][5] = {{ -3, -4, -9, 9, -4}, { -8, 7, -5, 0, 3}};

                int res = matrix_create(&arr, 5, 2);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
                test_error(arr.height == 2, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 5; ++j)
                        arr.ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                struct matrix_t *arr_t = matrix_copy(&arr);
                printf("#####END#####");

                test_error(arr_t != NULL, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr_t != &arr, "Funkcja matrix_copy() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                test_error(arr_t->ptr != NULL, "Funkcja matrix_copy() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr_t->width == 5, "Funkcja matrix_copy() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr_t->width);
                test_error(arr_t->height == 2, "Funkcja matrix_copy() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr_t->height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int ok = 0;

                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 5; ++j)
                        ok += arr_t->ptr[i][j] != expected_array[i][j];

                if (ok)
                {
                    printf("Zawartość macierzy po skopiowaniu\n");
                    matrix_display(arr_t);    
                }
                test_error(ok == 0, "Funkcja matrix_copy() niepoprawnie transponowała macierz");

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
//  Test 153: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 288 bajtów)
//
void UTEST153(void)
{
    // informacje o teście
    test_start(153, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 288 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(288);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -1, .height = 5};

                    int array[6][8] = {{ 3, 6, 0, 2, 1, 8, 2, -1}, { 6, 8, -10, 2, 2, 5, 2, -6}, { -7, 4, -2, 4, -7, -7, 2, 1}, { -1, 7, 6, 4, 3, -8, -6, 2}, { 5, 7, 1, -10, -4, 5, -3, -1}, { -7, 2, 2, 2, -10, -5, -10, -8}};

                    int res = matrix_create(&arr, 8, 6);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                    test_error(arr.height == 6, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 154: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 672 bajtów)
//
void UTEST154(void)
{
    // informacje o teście
    test_start(154, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 672 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(672);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -4, .height = -5};

                    int array[18][6] = {{ 10, 3, -6, -5, 3, -8}, { 0, 2, -7, 4, 0, -8}, { -4, -4, 1, -10, 4, 4}, { -2, 2, -8, 7, 9, -3}, { 8, 5, 6, 8, -4, -1}, { 6, -4, 10, 7, 0, -8}, { -4, 9, -7, -10, 2, 7}, { 3, -6, -5, -9, -2, -8}, { 1, -6, 5, -2, 0, 4}, { -7, -4, -9, 1, 7, -6}, { -4, -6, 9, 1, 0, 3}, { 10, 4, -10, -5, 4, -1}, { -3, -3, 1, 4, -2, 1}, { -1, -2, 1, -2, 10, 10}, { -8, 9, 7, -1, -4, 8}, { -9, 3, -7, -2, -9, 4}, { 6, 3, 0, -3, -3, 9}, { 9, 9, 8, 0, -5, -5}};

                    int res = matrix_create(&arr, 6, 18);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 155: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 473 bajtów)
//
void UTEST155(void)
{
    // informacje o teście
    test_start(155, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 473 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(473);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -7, .height = -10};

                    int array[20][1] = {{ 6}, { -10}, { 6}, { -10}, { -2}, { -2}, { -6}, { -6}, { -1}, { 3}, { -1}, { 8}, { -3}, { -10}, { 6}, { 5}, { -5}, { -7}, { 8}, { -2}};

                    int res = matrix_create(&arr, 1, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 156: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 87 bajtów)
//
void UTEST156(void)
{
    // informacje o teście
    test_start(156, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 87 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(87);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -1, .height = -3};

                    int array[1][10] = {{ -9, 6, -3, 5, -5, -6, 10, -1, 6, -9}};

                    int res = matrix_create(&arr, 10, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 10, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 10; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 157: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 29 bajtów)
//
void UTEST157(void)
{
    // informacje o teście
    test_start(157, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 29 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(29);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 4, .height = -7};

                    int array[1][1] = {{ 2}};

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
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 158: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST158(void)
{
    // informacje o teście
    test_start(158, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -2, .height = 7};
        
                    int array[19][9] = {{ 0, 7, -8, 4, -2, -4, -2, 8, 10}, { 5, -5, 1, -2, 5, -10, 1, 7, 5}, { 8, 8, -8, 8, 0, 4, 2, 8, -1}, { 7, -2, 8, -6, 8, -7, 9, -5, -1}, { -10, -8, -1, 0, -9, 10, 1, -3, 2}, { 4, -2, -3, -1, 8, -9, -1, 2, -9}, { 10, -7, -4, 7, 7, -10, 7, 0, 9}, { -9, 0, -2, 9, 10, 2, 1, 3, -2}, { -9, 3, -5, 9, -2, 0, 3, -8, 6}, { -5, 9, -4, -7, 4, 6, -3, -3, -6}, { -4, 1, -5, -5, 7, 0, -5, 4, -3}, { -5, 1, -3, 5, 10, -6, -7, 3, 5}, { 9, -5, 2, 0, -2, -9, 7, 6, 1}, { 10, -6, -3, -3, -4, 6, -10, -4, 5}, { -1, 3, 10, 9, -9, 5, 3, 6, 9}, { 7, -4, 5, -7, -6, 9, 3, -2, 10}, { 6, 3, 3, 3, 1, 8, 10, 5, 5}, { -8, 6, -1, -1, -3, -2, -5, 2, 4}, { 9, 10, -3, -2, 4, -5, -6, 7, 0}};
        
                    int res = matrix_create(&arr, 9, 19);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 19; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 9;
                    arr.height = -19;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 9;
                    arr.height = 19;
        
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
//  Test 159: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST159(void)
{
    // informacje o teście
    test_start(159, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -2, .height = -4};
        
                    int array[19][9] = {{ 0, 5, 6, 6, 3, -3, 5, -10, 3}, { 5, 9, 3, 5, 10, 2, -2, -6, 0}, { -1, 10, 1, -2, 1, -2, -3, 2, -2}, { 9, -3, 5, 0, 0, 1, 9, 1, -10}, { 4, 8, -8, -6, -7, 0, 7, -7, 6}, { -7, 8, -4, -3, -7, 8, -10, 10, 7}, { -10, 5, 10, 8, 4, 0, -8, -4, 3}, { 2, 2, -2, 7, -2, -8, -5, -8, 2}, { 6, -8, 4, -3, 4, -7, 9, -1, 7}, { 7, 9, -10, -10, -4, -6, 0, 6, 10}, { -6, -5, -5, -7, -7, 0, -10, 5, 9}, { -6, -2, 2, 8, -4, -5, 7, -2, 6}, { 10, 7, 4, 4, -4, -5, 6, -5, -3}, { -8, -3, -4, -10, 10, 9, 3, 10, 4}, { 4, 0, 1, 10, 6, 2, -10, -5, -1}, { 8, -9, 2, 6, 2, 6, -5, 10, 6}, { 0, -9, 10, 10, 8, 10, 4, -5, 10}, { -1, -4, 0, -5, 4, 10, 7, 8, -5}, { 10, 0, -6, 9, -7, 10, -6, -2, -8}};
        
                    int res = matrix_create(&arr, 9, 19);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 19; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = -9;
                    arr.height = -19;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 9;
                    arr.height = 19;
        
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
//  Test 160: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST160(void)
{
    // informacje o teście
    test_start(160, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -2, .height = 8};
        
                    int array[19][9] = {{ 8, 4, -7, -3, -1, 10, -7, 5, -10}, { -5, 10, 1, 7, -1, 2, 9, 4, -8}, { -1, 2, 2, 10, -9, -6, 4, 3, -6}, { -1, 8, 3, -7, 6, -8, 5, 1, -5}, { 9, -4, 8, 6, -10, -9, 0, -5, 2}, { 5, -2, -9, -10, -10, 7, -2, 5, 7}, { -9, 1, 0, 8, 9, -10, 4, 1, -6}, { 7, 3, 9, 2, -6, -6, -1, -3, 8}, { 0, 10, -7, 1, 8, -2, 7, -1, 10}, { -7, -7, -1, -3, -3, 7, 7, 0, -1}, { -6, -1, -2, 8, 6, -4, 0, -1, -2}, { 7, 7, 7, 8, -4, -9, -6, -6, 9}, { -9, 3, -7, -2, -3, 0, 9, 9, -7}, { 9, 3, -4, -8, -7, 9, 9, 0, -5}, { -4, 2, -7, 8, -9, -7, 5, 1, -6}, { -6, -10, -2, 3, -7, -1, -8, -4, 10}, { 7, 4, 0, 10, -8, 3, 2, -7, -3}, { -5, -1, -8, -8, -2, 10, 1, -6, 6}, { 8, -7, 6, -7, -3, 9, 7, 10, 5}};
        
                    int res = matrix_create(&arr, 9, 19);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 19; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = -9;
                    arr.height = 19;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 9;
                    arr.height = 19;
        
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
//  Test 161: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST161(void)
{
    // informacje o teście
    test_start(161, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -1, .height = 2};
        
                    int array[19][9] = {{ 4, -6, -10, 5, 5, -6, -4, -8, 6}, { -1, 4, -8, 2, -5, -3, -7, -10, -4}, { -2, -9, -2, 7, 3, -7, 5, 0, 0}, { -5, -4, -7, -5, 5, 4, -10, -4, -8}, { -5, -1, -5, -6, -7, -4, 7, -8, 10}, { 4, 8, -8, -2, 8, 9, 2, 10, 2}, { -7, 5, -3, 7, 4, 8, 0, 0, -8}, { 7, -3, -5, -1, -8, -7, 7, -9, -8}, { -9, -8, -6, 4, -5, -7, 1, -6, 2}, { -3, 3, 7, -3, 9, 10, 0, 4, -6}, { 7, 9, -4, 10, -4, 10, -3, -2, 1}, { 9, 10, -6, -3, -2, -3, 7, 8, 6}, { 6, -1, 3, 2, 10, -2, -6, 5, 8}, { -6, -1, 3, -6, 8, -5, -6, 2, 0}, { -4, 6, -9, 5, -10, 1, 6, 3, 5}, { 0, 10, 2, 9, 3, 8, 1, 8, 3}, { -3, -1, -7, 0, -1, 7, -10, -3, -10}, { 5, -2, 9, 3, 2, 1, 6, -9, 3}, { 7, 3, 9, -9, 8, -8, -1, 5, -9}};
        
                    int res = matrix_create(&arr, 9, 19);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 19; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 9;
                    arr.height = 0;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 9;
                    arr.height = 19;
        
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
//  Test 162: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST162(void)
{
    // informacje o teście
    test_start(162, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = 2, .height = 10};
        
                    int array[19][9] = {{ -5, 5, -10, -10, -8, -3, 9, -4, -1}, { 8, -5, 9, 4, 7, -5, -4, 1, 5}, { 3, -7, 7, -1, 5, -6, -10, 7, -5}, { -3, 5, -7, -8, 4, -2, 5, -5, -2}, { 4, 6, 1, 1, 6, 1, 2, 10, -4}, { 8, 4, 10, 0, 2, -1, -7, 1, 8}, { 5, -7, -8, 1, 4, 2, -2, 6, -3}, { -7, -6, 8, 10, -1, -7, 8, -1, 2}, { -10, 5, 9, 5, 1, -2, -2, -3, -2}, { 8, -2, -7, 2, 10, 10, -8, -7, 8}, { 1, 5, 8, -4, 2, 3, -10, -9, -10}, { 9, -5, 5, 1, -2, -5, 1, -4, -4}, { 3, -1, 9, 9, -7, -6, 9, 0, -10}, { -3, 9, 10, 3, -8, -5, 4, -8, -3}, { 8, -3, -10, -5, 7, 8, 3, 5, -4}, { 7, 0, -3, 5, 1, -6, 10, -2, -7}, { -6, 9, -10, 3, -2, -10, 2, -6, -5}, { 5, -2, -9, -10, 9, -5, -3, 7, -10}, { 6, -7, 9, 9, 4, -10, -10, -3, -9}};
        
                    int res = matrix_create(&arr, 9, 19);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 19; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 0;
                    arr.height = 19;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 9;
                    arr.height = 19;
        
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
//  Test 163: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST163(void)
{
    // informacje o teście
    test_start(163, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -7, .height = -3};
        
                    int array[19][9] = {{ 8, -8, -3, -1, -5, 1, 1, -9, -4}, { -2, 9, -7, -8, 5, -3, -4, -2, 0}, { 5, -8, -8, 1, -3, 2, 0, 10, 3}, { 1, -1, 1, 6, -8, 4, 1, -5, 4}, { 10, 10, -9, -10, -8, 9, 7, -3, -3}, { -1, -5, -10, 5, 5, 7, -7, 3, -6}, { -10, 3, 2, 9, 9, 0, 1, -3, -5}, { 10, -7, 3, -2, -3, 2, 4, 4, 10}, { -2, -7, 6, 2, 2, -10, -3, -1, -3}, { 2, 1, 6, -7, -6, 8, -1, 4, -2}, { 3, 9, 10, -9, 10, 2, 4, 10, -3}, { 7, -1, -8, 0, -5, 9, 9, 6, -5}, { 6, -9, 9, -5, -6, -3, -7, 2, 6}, { -2, 1, 3, -1, -9, 9, 0, 6, 6}, { 9, -1, 0, -5, 7, 8, -7, -6, 5}, { -2, -10, -5, 8, 10, 6, 1, -8, 6}, { 10, -6, -2, 4, -4, -7, -5, 3, -5}, { -5, -10, 1, -10, 0, 2, 10, -1, 7}, { -2, 8, 4, -1, -8, 7, -7, -3, -5}};
        
                    int res = matrix_create(&arr, 9, 19);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 19; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 0;
                    arr.height = 0;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_copy(&arr);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 9;
                    arr.height = 19;
        
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
//  Test 164: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST164(void)
{
    // informacje o teście
    test_start(164, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.ptr = NULL, .width = 7, .height = 9};

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_copy(&arr);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 165: Sprawdzanie poprawności działania funkcji matrix_copy
//
void UTEST165(void)
{
    // informacje o teście
    test_start(165, "Sprawdzanie poprawności działania funkcji matrix_copy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_copy(NULL);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_copy() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 166: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST166(void)
{
    // informacje o teście
    test_start(166, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 1, .height = -9};
                    struct matrix_t arr_2 = {.width = -3, .height = -3};

                    int array[6][5] = {{ -7, 9, 5, 2, -5}, { -2, 5, 4, -7, -5}, { -1, -10, -7, 3, 5}, { 8, 1, -6, 5, 4}, { -5, -10, 3, -4, -9}, { -9, -7, 5, 7, 10}};
                    int array_2[6][5] = {{ 2, 10, 5, -3, 0}, { -6, 7, -6, 10, 3}, { 9, 7, 1, 7, 9}, { -8, -3, 9, 2, 7}, { 7, -10, 9, 5, -1}, { -6, 0, 5, -6, 7}};
                    
                    int expected_array[6][5] = {{ -5, 19, 10, -1, -5}, { -8, 12, -2, 3, -2}, { 8, -3, -6, 10, 14}, { 0, -2, 3, 7, 11}, { 2, -20, 12, 1, -10}, { -15, -7, 10, 1, 17}};

                    int res = matrix_create(&arr, 5, 6);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
                    test_error(arr.height == 6, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 5; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 5, 6);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 6, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 5; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_add() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 5, "Funkcja matrix_add() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 6, "Funkcja matrix_add() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 5; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_add() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 167: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST167(void)
{
    // informacje o teście
    test_start(167, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 3, .height = -2};
                    struct matrix_t arr_2 = {.width = -4, .height = 5};

                    int array[20][7] = {{ -3, -5, 8, -9, 5, -6, 9}, { 8, 8, -4, 2, 2, -9, -8}, { -1, 5, 3, 0, 9, 0, 9}, { 8, -3, -10, 6, 4, -8, -10}, { 0, -9, -10, 1, -7, 2, 7}, { 4, 3, -4, -9, -3, 3, 4}, { -1, 8, 5, -1, 3, 10, -2}, { 5, -1, -1, -7, 10, -6, 8}, { -2, 5, 1, 5, -7, 4, -2}, { -3, 1, -8, -6, 7, 10, -2}, { 8, 3, -8, -2, -7, -10, -8}, { -7, -7, -2, 10, -9, 10, 10}, { 6, -1, 1, -7, 4, -7, -10}, { -4, -8, 10, -5, -6, 8, 6}, { 2, 4, -1, 10, -7, -10, 2}, { -10, -6, 7, -4, -5, 9, 2}, { -8, -4, 1, 2, 0, 1, -8}, { -4, 4, -9, -7, -6, 4, -5}, { -9, -3, -5, 0, 4, 1, 7}, { -9, -2, 5, -8, 10, 2, 4}};
                    int array_2[20][7] = {{ 0, 2, 5, 2, 3, -4, 4}, { 3, -7, -10, 0, -5, -1, 5}, { 4, 5, 8, 1, -1, 4, -1}, { 9, -4, 7, 7, -3, 0, 5}, { 0, -3, 8, -8, -5, 6, 0}, { 0, -3, 2, -4, -10, -1, -6}, { -9, -9, 7, -9, 10, -8, 5}, { 7, -3, 4, 10, 5, -7, 3}, { -7, -2, -3, 10, -8, 1, -1}, { 3, 9, 3, -5, -5, -3, 4}, { -3, -1, -3, -2, 1, 10, 2}, { -5, 7, -9, -9, -1, -5, -8}, { 7, -2, -1, 5, 3, 8, 1}, { -1, 9, 8, -7, -10, 1, -1}, { 10, -5, -3, 2, -10, -4, 9}, { -7, -3, -10, 9, -5, 10, 5}, { -6, 10, 5, -1, -7, 3, -10}, { 1, -10, 6, -8, -4, -7, 8}, { 3, -6, -10, -5, -5, -5, 8}, { -9, -6, -8, 8, 1, -3, -5}};
                    
                    int expected_array[20][7] = {{ -3, -3, 13, -7, 8, -10, 13}, { 11, 1, -14, 2, -3, -10, -3}, { 3, 10, 11, 1, 8, 4, 8}, { 17, -7, -3, 13, 1, -8, -5}, { 0, -12, -2, -7, -12, 8, 7}, { 4, 0, -2, -13, -13, 2, -2}, { -10, -1, 12, -10, 13, 2, 3}, { 12, -4, 3, 3, 15, -13, 11}, { -9, 3, -2, 15, -15, 5, -3}, { 0, 10, -5, -11, 2, 7, 2}, { 5, 2, -11, -4, -6, 0, -6}, { -12, 0, -11, 1, -10, 5, 2}, { 13, -3, 0, -2, 7, 1, -9}, { -5, 1, 18, -12, -16, 9, 5}, { 12, -1, -4, 12, -17, -14, 11}, { -17, -9, -3, 5, -10, 19, 7}, { -14, 6, 6, 1, -7, 4, -18}, { -3, -6, -3, -15, -10, -3, 3}, { -6, -9, -15, -5, -1, -4, 15}, { -18, -8, -3, 0, 11, -1, -1}};

                    int res = matrix_create(&arr, 7, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 7, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_add() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 7, "Funkcja matrix_add() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 20, "Funkcja matrix_add() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 7; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_add() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 168: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST168(void)
{
    // informacje o teście
    test_start(168, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -3, .height = 3};
                    struct matrix_t arr_2 = {.width = -3, .height = -10};

                    int array[20][1] = {{ -7}, { 6}, { -10}, { -7}, { 4}, { -8}, { 9}, { -3}, { 1}, { 4}, { -9}, { -6}, { -3}, { 5}, { -2}, { -3}, { -1}, { 7}, { -4}, { -9}};
                    int array_2[20][1] = {{ 5}, { 4}, { 2}, { -8}, { -6}, { -9}, { 9}, { 1}, { -8}, { -4}, { -5}, { -6}, { 5}, { 1}, { 8}, { -8}, { 10}, { -6}, { 0}, { 7}};
                    
                    int expected_array[20][1] = {{ -2}, { 10}, { -8}, { -15}, { -2}, { -17}, { 18}, { -2}, { -7}, { 0}, { -14}, { -12}, { 2}, { 6}, { 6}, { -11}, { 9}, { 1}, { -4}, { -2}};

                    int res = matrix_create(&arr, 1, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 1, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_add() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_add() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 20, "Funkcja matrix_add() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_add() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 169: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST169(void)
{
    // informacje o teście
    test_start(169, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 2, .height = 7};
                    struct matrix_t arr_2 = {.width = -10, .height = 6};

                    int array[1][9] = {{ 6, 7, -9, -5, -6, 6, -8, -9, 0}};
                    int array_2[1][9] = {{ -9, -10, -4, 0, -6, 10, -8, 4, 4}};
                    
                    int expected_array[1][9] = {{ -3, -3, -13, -5, -12, 16, -16, -5, 4}};

                    int res = matrix_create(&arr, 9, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 9, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_add() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 9, "Funkcja matrix_add() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_add() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 9; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_add() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 170: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST170(void)
{
    // informacje o teście
    test_start(170, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 2, .height = -3};
                    struct matrix_t arr_2 = {.width = 0, .height = 9};

                    int array[1][1] = {{ -1}};
                    int array_2[1][1] = {{ 6}};
                    
                    int expected_array[1][1] = {{ 5}};

                    int res = matrix_create(&arr, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_add() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_add() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_add() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_add() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 171: Sprawdzanie reakcji funkcji matrix_add na limit pamięci (limit sterty ustawiono na 208 bajtów)
//
void UTEST171(void)
{
    // informacje o teście
    test_start(171, "Sprawdzanie reakcji funkcji matrix_add na limit pamięci (limit sterty ustawiono na 208 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(208);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -3, .height = -10};
                struct matrix_t arr_2 = {.width = 3, .height = 9};

                int array[2][6] = {{ -6, -10, -6, 0, 5, 2}, { -9, -6, 3, -9, 0, 9}};
                int array_2[2][6] = {{ -8, -1, 10, -4, -4, -3}, { -4, -1, 2, 1, -9, 1}};
                
                int expected_array[2][6] = {{ -14, -11, 4, -4, 1, -1}, { -13, -7, 5, -8, -9, 10}};

                int res = matrix_create(&arr, 6, 2);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                test_error(arr.height == 2, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 6; ++j)
                        arr.ptr[i][j] = array[i][j];


                res = matrix_create(&arr_2, 6, 2);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                test_error(arr_2.height == 2, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr_2.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 6; ++j)
                        arr_2.ptr[i][j] = array_2[i][j];


                printf("#####START#####");                            
                struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                printf("#####END#####");

                test_error(arr_t != NULL, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr_t != &arr, "Funkcja matrix_add() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                test_error(arr_t->ptr != NULL, "Funkcja matrix_add() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr_t->width == 6, "Funkcja matrix_add() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_t->width);
                test_error(arr_t->height == 2, "Funkcja matrix_add() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr_t->height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int ok = 0;

                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 6; ++j)
                        ok += arr_t->ptr[i][j] != expected_array[i][j];

                if (ok)
                {
                    printf("Zawartość macierzy po dodawaniu\n");
                    matrix_display(arr_t);    
                }
                test_error(ok == 0, "Funkcja matrix_add() niepoprawnie dodała macierz");

                printf("#####START#####");
                matrix_destroy(&arr);
                printf("#####END#####");

                printf("#####START#####");
                matrix_destroy(&arr_2);
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
//  Test 172: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 278 bajtów)
//
void UTEST172(void)
{
    // informacje o teście
    test_start(172, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 278 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(278);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -10, .height = -9};

                    int array[6][5] = {{ 9, -3, 5, 3, -10}, { 8, -4, -2, -3, -2}, { -9, 1, -9, -5, -2}, { 3, -7, 0, 4, 5}, { 3, 1, -10, -7, -9}, { -8, 3, 2, -9, -10}};

                    int res = matrix_create(&arr, 5, 6);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
                    test_error(arr.height == 6, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 5; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 173: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 1355 bajtów)
//
void UTEST173(void)
{
    // informacje o teście
    test_start(173, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 1355 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1355);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -10, .height = 5};

                    int array[20][7] = {{ 8, -8, 3, 0, -7, -6, 6}, { 10, -3, -10, 6, 4, -5, 6}, { 10, 8, -7, 3, 7, -10, 0}, { -7, -5, 7, -8, 7, 6, -10}, { -7, 3, 9, -8, 5, -2, -7}, { 8, -5, -5, -9, 5, 2, -1}, { -1, 9, -3, 2, 9, 6, -8}, { -7, -2, 6, 3, 9, -9, -2}, { -7, 10, -7, -10, -5, 10, 2}, { -1, -2, 8, 1, 0, 4, 0}, { -1, 2, 0, -5, -10, 9, 9}, { -9, 7, -2, 0, 0, 8, -9}, { 9, 6, 7, -4, -1, 0, 7}, { 2, 10, -3, 4, 4, 3, 2}, { 6, 1, 2, -1, -5, 3, -1}, { -2, -2, -9, -6, -8, -6, 3}, { 6, 5, 8, 2, 1, -1, -8}, { 8, -10, 0, 1, -1, -5, -4}, { 2, -3, 5, 5, 10, -7, 5}, { -10, 4, 8, 5, -7, -10, -3}};

                    int res = matrix_create(&arr, 7, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 174: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 294 bajtów)
//
void UTEST174(void)
{
    // informacje o teście
    test_start(174, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 294 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(294);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -7, .height = -6};

                    int array[20][1] = {{ 4}, { -2}, { 0}, { -5}, { 9}, { 10}, { -3}, { -3}, { 10}, { -3}, { 3}, { -2}, { 1}, { -9}, { -1}, { 1}, { 9}, { -10}, { 9}, { -9}};

                    int res = matrix_create(&arr, 1, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 175: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 74 bajtów)
//
void UTEST175(void)
{
    // informacje o teście
    test_start(175, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 74 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(74);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 9, .height = 8};

                    int array[1][9] = {{ 8, 0, -4, -4, -6, -7, 4, 10, 2}};

                    int res = matrix_create(&arr, 9, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 176: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 23 bajtów)
//
void UTEST176(void)
{
    // informacje o teście
    test_start(176, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 23 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(23);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -1, .height = 6};

                    int array[1][1] = {{ 1}};

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
                    struct matrix_t *arr_t = matrix_add(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 177: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST177(void)
{
    // informacje o teście
    test_start(177, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -1, .height = -3};
        
                    int array[18][6] = {{ -10, 10, -7, 1, -4, -2}, { -9, -9, 7, -9, -1, -2}, { -1, -5, 8, -8, -2, -4}, { -6, -5, 10, 1, -10, 0}, { 7, -10, 4, 1, -8, 8}, { 6, -9, -10, -4, 1, -9}, { 4, 6, 0, -8, 1, -1}, { 3, 10, -10, 4, -6, 6}, { -6, -3, 7, 5, 5, 9}, { 10, -6, -4, -6, 8, 9}, { -5, -10, 2, -8, -8, 3}, { 9, 2, 0, -2, 0, 2}, { 9, -2, -9, 6, -7, -2}, { 4, 9, 9, -5, 0, 10}, { 3, 6, 0, 3, 2, 2}, { -3, -3, -10, -2, 4, 3}, { -2, 7, -2, -3, -10, 1}, { 4, 0, 2, 0, -5, 7}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = -1, .height = 1};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = -18;
                    arr_2.height = 1;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 178: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST178(void)
{
    // informacje o teście
    test_start(178, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -8, .height = -3};
        
                    int array[18][6] = {{ -2, -1, -5, 5, 5, 6}, { 4, 7, 8, -3, -7, -4}, { -9, 7, -1, -5, 6, 1}, { 3, 7, -8, 6, 2, -2}, { -3, -2, 5, 8, -9, -6}, { -6, 3, -3, -8, 0, -10}, { 9, -5, 3, 2, 7, 4}, { -10, -2, -8, -9, -4, 0}, { -2, 10, -3, 6, 4, 6}, { 0, 5, 5, 6, -2, 5}, { -5, 9, -10, 5, -1, -9}, { 0, -1, 2, -7, 1, 2}, { -8, 4, 8, -5, -4, 1}, { 8, 6, -10, -5, 5, 2}, { 1, -9, 2, 3, 9, -6}, { 6, 9, 8, 3, -8, 7}, { -10, 1, 2, 5, 0, -3}, { 3, -10, -5, -4, 1, -10}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = 6, .height = 0};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = -18;
                    arr_2.height = 1;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 179: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST179(void)
{
    // informacje o teście
    test_start(179, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = 6, .height = -3};
        
                    int array[18][6] = {{ 1, 1, -5, 10, 8, -8}, { 7, -6, -1, -8, -4, 10}, { 2, -4, -1, -10, 4, -5}, { -4, 2, -10, 3, 8, 5}, { -5, 7, -6, 8, 3, -3}, { 7, -8, -6, -3, -6, 7}, { -8, -3, -2, 7, 3, 5}, { 5, -1, 6, -10, -4, 3}, { 2, -4, -9, 8, 4, 10}, { -8, 6, 2, 7, 5, 5}, { 4, 6, 7, 8, -3, 1}, { 2, 0, 3, 2, -2, -1}, { 3, 2, 6, -1, -3, -5}, { -9, -1, 2, -7, 4, 9}, { -8, 7, 6, -2, -10, 8}, { -7, -6, -5, 3, -7, -4}, { -6, 0, 0, 1, -10, 9}, { 3, -5, 1, -3, 7, -3}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = 1, .height = 7};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 18;
                    arr_2.height = 1;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 180: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST180(void)
{
    // informacje o teście
    test_start(180, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = 0, .height = -1};
        
                    int array[18][6] = {{ 1, -1, 0, -8, -6, -4}, { 6, 4, -2, -9, -10, -8}, { -1, -10, -6, -5, -3, -7}, { 8, -10, 0, 5, -1, -8}, { -3, 2, 5, -10, -1, 4}, { -8, 6, 2, 2, -9, 7}, { -9, -2, 0, -10, 7, -1}, { 9, -7, 6, 9, -5, 10}, { 7, 9, 0, 10, 7, 10}, { 5, 4, 8, -9, -10, -7}, { -1, 1, 7, 5, -5, 7}, { 4, -5, 8, -4, 10, 6}, { 9, -2, -5, 8, -7, 7}, { -7, -9, -7, -7, 10, 5}, { -3, 7, 3, 6, -1, 9}, { 7, -3, -1, 1, 8, -9}, { 3, -5, 7, -6, -5, -2}, { 1, 7, 3, 10, 0, -1}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = 4, .height = 10};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 0;
                    arr_2.height = 1;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 181: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST181(void)
{
    // informacje o teście
    test_start(181, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -6, .height = -9};
        
                    int array[18][6] = {{ 4, -8, 4, -2, -1, 5}, { 4, 3, -10, -8, -3, 6}, { 1, -8, 5, -6, 4, -1}, { -9, 9, -10, 0, 9, 1}, { 1, -1, 6, -5, 5, 6}, { -1, 3, -10, -5, -3, -2}, { 5, 5, 10, 2, 7, -4}, { 8, -3, 8, -7, -3, 1}, { -7, 8, -1, -8, 6, 7}, { -2, 9, -8, 4, 6, 10}, { 6, 1, -7, 4, 5, -7}, { 0, -10, 7, -4, 0, 3}, { 9, -1, -6, -1, 9, 0}, { -9, 10, -4, 3, -5, -5}, { 3, -10, 3, -1, 10, -2}, { 9, -2, -1, 1, -10, 7}, { 0, 3, 7, 10, 8, 3}, { 6, -1, 8, 2, -10, -6}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = 10, .height = 3};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 18;
                    arr_2.height = 1;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 182: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST182(void)
{
    // informacje o teście
    test_start(182, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = 3, .height = 8};
        
                    int array[18][6] = {{ 3, 6, -10, -10, -4, 2}, { -10, 8, 7, -6, 2, -8}, { -4, -10, 5, -6, 3, 1}, { -9, 1, -1, 7, 9, -5}, { 9, -7, 3, -6, 6, 1}, { -2, 10, 3, 5, -7, -4}, { 6, 9, -1, -2, -1, 2}, { -1, 7, -7, -10, -2, 4}, { -4, 10, 3, 5, -5, 0}, { 8, -5, 9, 3, -8, -9}, { 7, -4, -6, 7, 4, 10}, { -2, -3, -9, -4, 8, 4}, { 9, -3, 7, 8, 8, -7}, { -2, 7, -4, 1, -5, -6}, { 0, 3, 0, 5, 6, -3}, { 4, 5, -5, -2, 9, 3}, { -5, -5, -1, -3, 8, -10}, { 0, 2, 6, -8, -3, -5}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = 0, .height = -10};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 0;
                    arr_2.height = 1;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 183: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST183(void)
{
    // informacje o teście
    test_start(183, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -8, .height = 0};
        
                    int array[18][6] = {{ -2, 1, -1, 5, 0, -2}, { 8, -10, -6, -2, 4, -3}, { -3, -4, 4, 3, 3, 8}, { 7, 2, 10, -8, 0, 7}, { -3, 6, 5, 6, 2, -2}, { -9, 6, 0, 5, -8, -4}, { 0, -3, 10, 8, 0, 8}, { 4, -7, -1, -3, 1, 6}, { -2, -1, 8, -10, 0, 7}, { -6, 4, 0, -10, 5, 6}, { -10, 6, 6, -8, -1, -10}, { 7, 2, 6, 6, -5, 3}, { 2, -7, 2, 9, -3, 2}, { -4, 2, 7, 6, -9, -7}, { 6, 0, 1, 2, -4, 4}, { 3, 3, 3, 8, -8, -7}, { -9, -1, -9, 2, 9, 0}, { -3, -8, -1, -2, -10, 9}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = -18;
        
                    struct matrix_t arr_2 = {.width = -4, .height = 5};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 184: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST184(void)
{
    // informacje o teście
    test_start(184, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -2, .height = 0};
        
                    int array[18][6] = {{ 8, -3, -6, 8, -8, -4}, { 5, 4, -6, 2, -4, -6}, { -10, 1, 0, -5, 5, 10}, { 4, 10, -6, -3, 4, -2}, { 4, -9, -10, -7, 9, 5}, { 8, -7, -1, -1, 10, 10}, { 0, -3, -10, 10, -9, -5}, { 8, -7, -6, 4, -4, 9}, { -9, -9, 6, 4, 3, 9}, { 5, 6, -3, -10, 8, 6}, { 5, 7, -5, 5, -2, -1}, { 7, -2, 1, -1, 0, 5}, { -7, 9, -10, -1, 10, -5}, { 10, 9, -3, -4, -8, 10}, { -5, -4, 7, -5, 4, 5}, { 4, -2, 9, 3, 9, 9}, { 5, 9, 8, 3, 0, 3}, { 2, -2, -5, 6, -9, 6}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = -6;
                    arr.height = -18;
        
                    struct matrix_t arr_2 = {.width = 9, .height = 8};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 185: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST185(void)
{
    // informacje o teście
    test_start(185, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -8, .height = 4};
        
                    int array[18][6] = {{ -7, 5, 10, 10, -10, -7}, { 1, -8, 0, 0, -9, -1}, { 10, 6, 8, 2, -1, -4}, { 5, -2, -7, 8, -6, 6}, { 8, -7, -10, 0, 2, -7}, { 7, 2, 4, -6, -5, 9}, { 6, -10, -5, 1, -4, -1}, { 7, 8, 5, -2, 8, -5}, { 6, 10, -8, -4, 10, 7}, { 0, 10, 4, -6, 8, 6}, { 0, -9, 6, 7, 6, -5}, { -3, -3, 5, 7, 3, 10}, { 7, 8, -2, 8, 6, 2}, { -8, -10, -3, 10, 6, -3}, { 8, -4, 9, -6, -2, 5}, { -3, 9, 6, 7, 5, -6}, { 2, 7, 3, -8, -1, 5}, { 10, -7, 1, -7, 4, -5}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = -6;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = 10, .height = -9};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 186: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST186(void)
{
    // informacje o teście
    test_start(186, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -9, .height = 1};
        
                    int array[18][6] = {{ 4, 8, 7, -6, 4, -1}, { 1, 4, 1, 4, -10, 0}, { 5, -2, -7, 2, 8, -9}, { 6, -9, -6, -1, -3, 0}, { -4, 6, 0, -7, -1, 10}, { -2, 3, 6, -4, -3, -4}, { -3, -8, -1, -7, -6, 6}, { -7, 5, -10, -4, -6, -10}, { 0, -9, -4, 1, 1, -6}, { 5, -9, -5, 4, -5, 5}, { 1, -3, 2, -7, -5, -1}, { 10, -8, -4, -9, 1, 8}, { 2, 6, 5, 9, -5, 1}, { -10, 7, -7, 0, 2, 3}, { 0, -7, 7, 4, 9, 10}, { -1, 1, 0, -7, 4, 3}, { -10, 2, 9, 5, 7, 3}, { -4, 2, -10, -9, 5, -2}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 0;
        
                    struct matrix_t arr_2 = {.width = -2, .height = -4};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 187: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST187(void)
{
    // informacje o teście
    test_start(187, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -7, .height = -1};
        
                    int array[18][6] = {{ 9, 1, 6, -2, 6, -9}, { 0, 5, -5, 6, -3, -7}, { 2, 0, 8, -3, -3, 8}, { 3, 6, 0, -5, 0, 3}, { -7, -4, -9, -7, -10, 8}, { -3, 4, -10, -3, 6, 3}, { 6, 3, 6, -8, 9, 5}, { -6, -4, 3, 6, 2, 0}, { 1, -10, 3, -7, 5, 0}, { 9, -8, -8, 10, -5, 1}, { 1, -4, -2, -1, 8, -5}, { 0, 7, 6, 6, -6, -10}, { 5, -1, -8, -6, 2, -1}, { 7, 2, 8, -2, 5, 6}, { -4, -6, 6, -8, 3, -6}, { 6, -5, 7, 10, -8, 9}, { 5, 9, -3, -9, 7, 3}, { 8, 6, 1, 8, -1, 10}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 0;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = 4, .height = 4};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 188: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST188(void)
{
    // informacje o teście
    test_start(188, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -10, .height = 9};
        
                    int array[18][6] = {{ -8, 2, -7, 3, 8, 2}, { -4, 8, 4, 10, -9, 0}, { 5, -7, 3, -3, 0, -3}, { -8, -2, -2, -2, 1, 6}, { -4, -1, 9, 9, -1, -3}, { 5, -5, 9, 0, 0, 4}, { -2, -9, -2, -3, 0, -8}, { -10, 4, 3, -1, -4, 10}, { 6, -8, -4, 9, 4, 10}, { -7, 9, 10, -10, -4, -4}, { 9, 10, -2, -4, 5, -8}, { -7, -3, 10, 1, 8, -10}, { 6, -9, -3, 6, -6, -7}, { 4, -2, 1, 0, 8, -8}, { 1, 0, 4, -4, 0, 2}, { 10, -6, 6, 8, -4, 7}, { -2, 8, -6, 2, 9, -1}, { -3, 10, 9, -2, -1, 5}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 0;
                    arr.height = 0;
        
                    struct matrix_t arr_2 = {.width = -8, .height = 4};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 189: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST189(void)
{
    // informacje o teście
    test_start(189, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -5, .height = 9};
        
                    int array[18][6] = {{ 4, -5, 5, 10, 10, 0}, { 7, -2, 10, -10, -7, 4}, { 5, -1, -2, 9, -9, 3}, { 4, 4, 6, -3, -1, 5}, { 7, 0, -5, -4, 9, 5}, { -2, -7, 3, -10, 8, 5}, { -3, 5, 4, -3, -9, 1}, { 6, -4, -6, 4, 3, -5}, { -3, 10, 0, -2, 9, -9}, { 1, 2, 6, -10, 10, -10}, { -3, -3, 9, 1, 10, 5}, { -5, 2, 7, 8, 3, -8}, { -1, -6, 8, 3, -5, 8}, { -4, 1, 6, -2, -2, 10}, { 2, -1, -10, 5, -7, 0}, { 2, 7, -7, -2, -5, 8}, { 10, 0, 8, -6, -10, 4}, { 9, 1, 7, 4, 9, -1}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 19;
        
                    struct matrix_t arr_2 = {.width = -6, .height = -3};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 190: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST190(void)
{
    // informacje o teście
    test_start(190, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = -6, .height = -6};
        
                    int array[18][6] = {{ 0, -4, 2, 5, 0, 0}, { 4, -8, 6, 4, -8, -5}, { 10, -8, -8, 1, 9, 9}, { 9, -5, -1, -2, 2, 2}, { 4, 10, -6, 5, 4, -7}, { -2, 0, 4, -3, -5, -3}, { -3, 10, -9, -6, 3, -8}, { 9, 5, 9, -9, -7, 10}, { -7, 10, -1, -8, 5, 0}, { -9, -10, -1, 10, 2, -8}, { -6, -7, -2, -7, -4, -3}, { -1, -4, 2, 1, 6, -3}, { -1, 6, 1, 3, 10, -4}, { -8, -1, 9, -8, -8, -8}, { 8, 8, 1, -8, 7, -7}, { -4, 1, 4, -9, 6, 7}, { 1, 9, -9, -10, 8, 2}, { -10, 1, -1, 2, -1, -4}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 7;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = -1, .height = -5};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 191: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST191(void)
{
    // informacje o teście
    test_start(191, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = 9, .height = -5};
        
                    int array[18][6] = {{ 5, 10, 2, -9, 5, 6}, { -3, -7, 7, -9, 2, -7}, { 6, -4, 3, 6, 3, -9}, { 9, -4, 4, -2, -8, -2}, { 2, 0, -8, -10, 7, 10}, { 10, -10, 0, -5, -4, 8}, { -5, -8, -8, 10, -8, -10}, { 4, -1, 4, 7, -3, -3}, { -7, 0, 10, 7, -1, 7}, { 0, 6, 7, -6, -8, 8}, { 7, -2, 4, 8, -4, -2}, { 6, 7, 3, -4, 0, 7}, { -6, 2, -9, 9, -8, -9}, { 8, -3, -2, -2, 5, 6}, { 3, 4, 3, -1, -6, -7}, { -4, -9, 2, -4, -6, 3}, { -4, 1, -8, 3, -9, 7}, { -10, 7, 0, -10, 7, 0}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = -2, .height = -3};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 7;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 192: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST192(void)
{
    // informacje o teście
    test_start(192, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    struct matrix_t arr = {.width = 6, .height = -3};
        
                    int array[18][6] = {{ -10, 1, -5, 8, -6, -3}, { 0, -4, -7, -1, -9, -8}, { 10, -8, -7, 9, 0, -9}, { 2, -10, -10, 5, 0, -4}, { 4, -10, 10, 4, -3, 9}, { -9, -1, 5, 9, 2, -6}, { -5, -6, 0, 1, 5, 8}, { 2, 8, 4, -10, -5, 7}, { 10, 7, -4, 10, 1, -10}, { -2, 2, 3, -6, 2, -7}, { 4, 6, -2, 8, -5, -10}, { -9, 9, 0, -5, -1, -3}, { -9, -3, 2, -10, -8, 9}, { 6, 8, 5, 8, -9, -9}, { 5, 8, -8, -3, -5, 8}, { -3, 1, 1, -5, 10, -4}, { -2, -8, 3, 1, -2, -4}, { -1, -3, -4, -2, 10, 2}};
        
                    int res = matrix_create(&arr, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];
        
                    arr.width = 6;
                    arr.height = 18;
        
                    struct matrix_t arr_2 = {.width = 9, .height = -9};
        
                    res = matrix_create(&arr_2, 6, 18);
        
                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr_2.ptr[i][j] = array[i][j];
        
                    arr_2.width = 6;
                    arr_2.height = 19;
        
                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                    printf("#####END#####");
        
                    test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");
        
                    arr.width = 6;
                    arr.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 6;
                    arr_2.height = 18;
        
                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 193: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST193(void)
{
    // informacje o teście
    test_start(193, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 6, .height = 18};

                int array[18][6] = {{ -10, 1, -5, 8, -6, -3}, { 0, -4, -7, -1, -9, -8}, { 10, -8, -7, 9, 0, -9}, { 2, -10, -10, 5, 0, -4}, { 4, -10, 10, 4, -3, 9}, { -9, -1, 5, 9, 2, -6}, { -5, -6, 0, 1, 5, 8}, { 2, 8, 4, -10, -5, 7}, { 10, 7, -4, 10, 1, -10}, { -2, 2, 3, -6, 2, -7}, { 4, 6, -2, 8, -5, -10}, { -9, 9, 0, -5, -1, -3}, { -9, -3, 2, -10, -8, 9}, { 6, 8, 5, 8, -9, -9}, { 5, 8, -8, -3, -5, 8}, { -3, 1, 1, -5, 10, -4}, { -2, -8, 3, 1, -2, -4}, { -1, -3, -4, -2, 10, 2}};

                int res = matrix_create(&arr, 6, 18);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    for (int j = 0; j < 6; ++j)
                        arr.ptr[i][j] = array[i][j];

                struct matrix_t arr_2 = {.ptr = NULL, .width = 6, .height = 18};

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_add(&arr, &arr_2);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 194: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST194(void)
{
    // informacje o teście
    test_start(194, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 6, .height = 18};

                int array[18][6] = {{ -10, 1, -5, 8, -6, -3}, { 0, -4, -7, -1, -9, -8}, { 10, -8, -7, 9, 0, -9}, { 2, -10, -10, 5, 0, -4}, { 4, -10, 10, 4, -3, 9}, { -9, -1, 5, 9, 2, -6}, { -5, -6, 0, 1, 5, 8}, { 2, 8, 4, -10, -5, 7}, { 10, 7, -4, 10, 1, -10}, { -2, 2, 3, -6, 2, -7}, { 4, 6, -2, 8, -5, -10}, { -9, 9, 0, -5, -1, -3}, { -9, -3, 2, -10, -8, 9}, { 6, 8, 5, 8, -9, -9}, { 5, 8, -8, -3, -5, 8}, { -3, 1, 1, -5, 10, -4}, { -2, -8, 3, 1, -2, -4}, { -1, -3, -4, -2, 10, 2}};

                int res = matrix_create(&arr, 6, 18);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    for (int j = 0; j < 6; ++j)
                        arr.ptr[i][j] = array[i][j];

                struct matrix_t arr_2 = {.ptr = NULL, .width = 6, .height = 18};

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_add(&arr_2, &arr);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 195: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST195(void)
{
    // informacje o teście
    test_start(195, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 6, .height = 18};

                int array[18][6] = {{ -10, 1, -5, 8, -6, -3}, { 0, -4, -7, -1, -9, -8}, { 10, -8, -7, 9, 0, -9}, { 2, -10, -10, 5, 0, -4}, { 4, -10, 10, 4, -3, 9}, { -9, -1, 5, 9, 2, -6}, { -5, -6, 0, 1, 5, 8}, { 2, 8, 4, -10, -5, 7}, { 10, 7, -4, 10, 1, -10}, { -2, 2, 3, -6, 2, -7}, { 4, 6, -2, 8, -5, -10}, { -9, 9, 0, -5, -1, -3}, { -9, -3, 2, -10, -8, 9}, { 6, 8, 5, 8, -9, -9}, { 5, 8, -8, -3, -5, 8}, { -3, 1, 1, -5, 10, -4}, { -2, -8, 3, 1, -2, -4}, { -1, -3, -4, -2, 10, 2}};

                int res = matrix_create(&arr, 6, 18);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    for (int j = 0; j < 6; ++j)
                        arr.ptr[i][j] = array[i][j];

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_add(&arr, NULL);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 196: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST196(void)
{
    // informacje o teście
    test_start(196, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 6, .height = 18};

                int array[18][6] = {{ -10, 1, -5, 8, -6, -3}, { 0, -4, -7, -1, -9, -8}, { 10, -8, -7, 9, 0, -9}, { 2, -10, -10, 5, 0, -4}, { 4, -10, 10, 4, -3, 9}, { -9, -1, 5, 9, 2, -6}, { -5, -6, 0, 1, 5, 8}, { 2, 8, 4, -10, -5, 7}, { 10, 7, -4, 10, 1, -10}, { -2, 2, 3, -6, 2, -7}, { 4, 6, -2, 8, -5, -10}, { -9, 9, 0, -5, -1, -3}, { -9, -3, 2, -10, -8, 9}, { 6, 8, 5, 8, -9, -9}, { 5, 8, -8, -3, -5, 8}, { -3, 1, 1, -5, 10, -4}, { -2, -8, 3, 1, -2, -4}, { -1, -3, -4, -2, 10, 2}};

                int res = matrix_create(&arr, 6, 18);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    for (int j = 0; j < 6; ++j)
                        arr.ptr[i][j] = array[i][j];

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_add(NULL, &arr);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 197: Sprawdzanie poprawności działania funkcji matrix_add
//
void UTEST197(void)
{
    // informacje o teście
    test_start(197, "Sprawdzanie poprawności działania funkcji matrix_add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_add(NULL, NULL);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_add() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 198: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST198(void)
{
    // informacje o teście
    test_start(198, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -8, .height = -6};
                    struct matrix_t arr_2 = {.width = -3, .height = -10};

                    int array[8][7] = {{ -2, -7, 10, -5, 0, 5, 8}, { 7, -5, 5, 3, 8, -7, 7}, { -9, 5, 8, 10, -8, 1, -2}, { -3, 4, 7, 3, -2, -7, -5}, { -10, 4, 4, 7, 1, -9, -9}, { -2, -1, 8, -7, 4, -6, 0}, { 5, 7, 3, -2, 5, 0, 2}, { 3, 4, 2, -7, 1, -7, 9}};
                    int array_2[8][7] = {{ 5, -2, 5, 8, 0, 6, -9}, { -3, 10, 2, 3, -5, 7, 3}, { -6, 6, -3, 8, -3, -2, -6}, { 5, -4, 4, -6, -6, 3, 6}, { -9, -5, 8, -8, -1, -9, 0}, { 1, -2, 2, 2, -1, 8, -1}, { -7, -4, -3, -9, 2, -9, 8}, { -3, -8, -7, 3, 3, 9, 3}};

                    int expected_array[8][7] = {{ -7, -5, 5, -13, 0, -1, 17}, { 10, -15, 3, 0, 13, -14, 4}, { -3, -1, 11, 2, -5, 3, 4}, { -8, 8, 3, 9, 4, -10, -11}, { -1, 9, -4, 15, 2, 0, -9}, { -3, 1, 6, -9, 5, -14, 1}, { 12, 11, 6, 7, 3, 9, -6}, { 6, 12, 9, -10, -2, -16, 6}};

                    int res = matrix_create(&arr, 7, 8);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 8, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 7, 8);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 8, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_subtract() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 7, "Funkcja matrix_subtract() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 8, "Funkcja matrix_subtract() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 7; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_subtract() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 199: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST199(void)
{
    // informacje o teście
    test_start(199, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 2, .height = -9};
                    struct matrix_t arr_2 = {.width = -7, .height = 8};

                    int array[20][7] = {{ -1, 2, 5, -8, -10, 10, 4}, { -4, -7, -10, 6, -9, 2, -10}, { -7, -9, 8, 6, 4, -6, -6}, { -10, 0, 7, 1, 8, -9, -8}, { -9, -1, 4, -6, -8, 4, 3}, { 10, 4, -3, -1, -2, 4, 8}, { 4, -6, 5, 7, -3, 6, 6}, { -8, -1, 3, -1, 10, 5, -10}, { 2, 9, -4, 7, 6, 0, -6}, { -3, -2, -9, 5, -4, -8, -8}, { 9, -4, -6, 8, 8, 9, 1}, { -10, 8, 6, 6, 6, 10, 0}, { -1, -6, -1, 3, -7, 1, 9}, { -9, -1, -6, 9, 8, -6, -5}, { 1, 3, 9, 6, -9, -4, 10}, { -5, -1, 4, 9, 2, 1, -10}, { -7, 5, 9, -10, -1, -9, 7}, { -5, 8, 10, -6, -8, -1, 9}, { -8, -2, 10, 7, 9, -3, -5}, { 6, 2, -6, 3, 6, -5, -10}};
                    int array_2[20][7] = {{ -5, -8, 9, 0, -3, 5, 3}, { -4, -4, 1, 5, -1, 2, -8}, { -1, 3, -6, -7, 4, -8, -8}, { 6, -3, 8, 3, -4, -8, 6}, { 8, -6, -3, 0, -6, -10, -8}, { -4, -6, -8, -7, 1, 5, 1}, { -3, 7, 1, -9, -8, 10, 10}, { -7, 6, -10, 6, -2, 10, 1}, { 7, 4, -10, -10, 7, 1, -3}, { 2, 7, 8, -3, 2, -3, 4}, { -4, 4, -5, -4, -7, 8, -1}, { -5, -9, 10, -6, -1, -4, 4}, { 3, -3, 10, 7, 3, 5, -3}, { -5, 5, 2, -2, 3, 2, -3}, { 2, 4, 8, 7, -6, -9, -9}, { -1, 1, -4, -9, -7, 10, 2}, { -6, -7, -2, 7, -3, -10, 2}, { 1, -10, -10, -4, -1, -8, -6}, { -6, -7, -2, -2, 4, 7, -6}, { -8, -6, -6, 7, -5, 0, 4}};

                    int expected_array[20][7] = {{ 4, 10, -4, -8, -7, 5, 1}, { 0, -3, -11, 1, -8, 0, -2}, { -6, -12, 14, 13, 0, 2, 2}, { -16, 3, -1, -2, 12, -1, -14}, { -17, 5, 7, -6, -2, 14, 11}, { 14, 10, 5, 6, -3, -1, 7}, { 7, -13, 4, 16, 5, -4, -4}, { -1, -7, 13, -7, 12, -5, -11}, { -5, 5, 6, 17, -1, -1, -3}, { -5, -9, -17, 8, -6, -5, -12}, { 13, -8, -1, 12, 15, 1, 2}, { -5, 17, -4, 12, 7, 14, -4}, { -4, -3, -11, -4, -10, -4, 12}, { -4, -6, -8, 11, 5, -8, -2}, { -1, -1, 1, -1, -3, 5, 19}, { -4, -2, 8, 18, 9, -9, -12}, { -1, 12, 11, -17, 2, 1, 5}, { -6, 18, 20, -2, -7, 7, 15}, { -2, 5, 12, 9, 5, -10, 1}, { 14, 8, 0, -4, 11, -5, -14}};

                    int res = matrix_create(&arr, 7, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 7, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_subtract() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 7, "Funkcja matrix_subtract() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 20, "Funkcja matrix_subtract() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 7; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_subtract() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 200: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST200(void)
{
    // informacje o teście
    test_start(200, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 7, .height = 6};
                    struct matrix_t arr_2 = {.width = -10, .height = 5};

                    int array[17][1] = {{ 5}, { 8}, { 10}, { 2}, { -9}, { 8}, { -5}, { -7}, { 4}, { -7}, { -4}, { 4}, { 0}, { 9}, { -9}, { 10}, { 2}};
                    int array_2[17][1] = {{ 10}, { -6}, { 6}, { 6}, { -4}, { -2}, { 5}, { 7}, { 10}, { 1}, { -1}, { -10}, { -2}, { -10}, { -6}, { -7}, { 7}};

                    int expected_array[17][1] = {{ -5}, { 14}, { 4}, { -4}, { -5}, { 10}, { -10}, { -14}, { -6}, { -8}, { -3}, { 14}, { 2}, { 19}, { -3}, { 17}, { -5}};

                    int res = matrix_create(&arr, 1, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 1, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_subtract() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_subtract() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 17, "Funkcja matrix_subtract() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_subtract() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 201: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST201(void)
{
    // informacje o teście
    test_start(201, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 0, .height = 10};
                    struct matrix_t arr_2 = {.width = 4, .height = 1};

                    int array[1][8] = {{ 8, 9, -3, -2, 5, -8, 2, 5}};
                    int array_2[1][8] = {{ -1, 8, -7, -8, -3, 4, 5, -8}};

                    int expected_array[1][8] = {{ 9, 1, 4, 6, 8, -12, -3, 13}};

                    int res = matrix_create(&arr, 8, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 8, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_subtract() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 8, "Funkcja matrix_subtract() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_subtract() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 8; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_subtract() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 202: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST202(void)
{
    // informacje o teście
    test_start(202, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 6, .height = -8};
                    struct matrix_t arr_2 = {.width = -7, .height = -9};

                    int array[1][1] = {{ 2}};
                    int array_2[1][1] = {{ 9}};

                    int expected_array[1][1] = {{ -7}};

                    int res = matrix_create(&arr, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_subtract() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_subtract() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_subtract() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_subtract() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 203: Sprawdzanie reakcji funkcji matrix_subtract na limit pamięci (limit sterty ustawiono na 232 bajtów)
//
void UTEST203(void)
{
    // informacje o teście
    test_start(203, "Sprawdzanie reakcji funkcji matrix_subtract na limit pamięci (limit sterty ustawiono na 232 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(232);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -10, .height = 5};
                struct matrix_t arr_2 = {.width = 2, .height = -1};

                int array[2][7] = {{ -8, 3, 10, -1, -10, 10, -2}, { 5, -9, 7, -9, -6, -5, 1}};
                int array_2[2][7] = {{ 4, -5, 1, -9, 0, 3, -4}, { -6, -4, -2, -2, -6, -8, -9}};

                int expected_array[2][7] = {{ -12, 8, 9, 8, -10, 7, 2}, { 11, -5, 9, -7, 0, 3, 10}};

                int res = matrix_create(&arr, 7, 2);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                test_error(arr.height == 2, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 7; ++j)
                        arr.ptr[i][j] = array[i][j];


                res = matrix_create(&arr_2, 7, 2);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr_2.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr_2.width);
                test_error(arr_2.height == 2, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr_2.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 7; ++j)
                        arr_2.ptr[i][j] = array_2[i][j];


                printf("#####START#####");                            
                struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                printf("#####END#####");

                test_error(arr_t != NULL, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr_t != &arr, "Funkcja matrix_subtract() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                test_error(arr_t->ptr != NULL, "Funkcja matrix_subtract() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr_t->width == 7, "Funkcja matrix_subtract() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr_t->width);
                test_error(arr_t->height == 2, "Funkcja matrix_subtract() powinna ustawić wysokość macierzy na 2, a ustawiła na %d", arr_t->height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int ok = 0;

                for (int i = 0; i < 2; ++i)
                    for (int j = 0; j < 7; ++j)
                        ok += arr_t->ptr[i][j] != expected_array[i][j];

                if (ok)
                {
                    printf("Zawartość macierzy po dodawaniu\n");
                    matrix_display(arr_t);    
                }
                test_error(ok == 0, "Funkcja matrix_subtract() niepoprawnie dodała macierz");

                printf("#####START#####");
                matrix_destroy(&arr);
                printf("#####END#####");

                printf("#####START#####");
                matrix_destroy(&arr_2);
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
//  Test 204: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 359 bajtów)
//
void UTEST204(void)
{
    // informacje o teście
    test_start(204, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 359 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(359);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -10, .height = 0};

                    int array[8][7] = {{ 0, 9, 9, -2, -3, -10, -2}, { 2, 6, 8, 9, -8, -3, -3}, { 6, -10, -1, 7, 8, 7, 0}, { -1, -9, -1, -4, -3, -5, 2}, { -8, 9, -9, 2, 9, -7, -1}, { 4, -6, -5, 6, -3, -1, -3}, { 8, -3, -10, 7, 7, -2, -5}, { -3, 7, 0, 2, 7, 4, -8}};

                    int res = matrix_create(&arr, 7, 8);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 8, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 205: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 1372 bajtów)
//
void UTEST205(void)
{
    // informacje o teście
    test_start(205, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 1372 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1372);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 6, .height = 3};

                    int array[20][7] = {{ -4, -3, -2, -2, 5, 6, -3}, { 4, 4, 0, 1, 8, -9, -6}, { 4, 10, -5, -6, 6, -3, 10}, { 0, 4, 2, 0, -4, 2, 6}, { 5, -4, -2, -1, -2, -2, 8}, { -9, -7, -3, 10, 9, -5, 7}, { -1, 1, 6, -6, 4, -8, 3}, { -10, -1, 0, -6, 3, 7, 1}, { -9, -8, -9, 0, 8, 10, 1}, { 9, -8, -10, -4, 8, -9, -1}, { 7, 9, -4, 0, -8, -5, -10}, { 9, 1, -3, -1, -1, -9, -8}, { 6, 8, -9, -8, 2, 10, 5}, { 4, -6, -4, 6, -2, 8, 5}, { -1, 1, 7, 4, 1, 3, -5}, { 6, 3, -2, 3, -2, 1, 9}, { 3, 5, 1, 1, -9, -1, 3}, { -6, 3, 4, 2, -7, 0, 1}, { -10, -2, -9, -10, 10, -8, -7}, { -10, 7, -6, 9, -8, 7, 2}};

                    int res = matrix_create(&arr, 7, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 206: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 287 bajtów)
//
void UTEST206(void)
{
    // informacje o teście
    test_start(206, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 287 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(287);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 0, .height = -3};

                    int array[17][1] = {{ 4}, { 6}, { -3}, { 10}, { 1}, { -3}, { 8}, { -4}, { -4}, { 2}, { -10}, { -7}, { 7}, { 8}, { -2}, { -4}, { 9}};

                    int res = matrix_create(&arr, 1, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 207: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 77 bajtów)
//
void UTEST207(void)
{
    // informacje o teście
    test_start(207, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 77 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(77);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -2, .height = 0};

                    int array[1][8] = {{ -4, 8, -10, -3, 6, -2, 5, 0}};

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
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 208: Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 28 bajtów)
//
void UTEST208(void)
{
    // informacje o teście
    test_start(208, "Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 28 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(28);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 9, .height = 3};

                    int array[1][1] = {{ 8}};

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
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 209: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST209(void)
{
    // informacje o teście
    test_start(209, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 7, .height = -5};

                    int array[20][9] = {{ -1, -8, -4, 7, 7, -8, 7, -4, 0}, { -1, 6, 6, -6, -6, -10, 8, -8, 7}, { -6, -2, 5, -7, -9, 3, 4, 4, -4}, { -2, -3, -2, 10, -2, 0, 10, -9, -7}, { -10, 5, -5, 2, 5, 10, 2, -9, 6}, { 1, -1, -7, -10, 7, -7, -9, 4, -8}, { 8, 0, -7, -8, 5, -9, -8, -3, 7}, { 2, 3, 5, 4, -8, 0, 0, 9, 7}, { -8, -4, -5, -9, -7, 6, 9, -7, -1}, { 4, 5, 7, -10, 6, -10, 4, -10, 7}, { -3, 7, -5, 8, -7, 0, -3, -3, -3}, { 2, -5, -7, -10, 2, 4, 7, -8, 6}, { -7, 8, 8, 9, 8, 2, 10, 9, 6}, { 10, -9, -1, 10, -1, 1, 2, -4, 6}, { 6, -1, 1, 5, 0, -6, 3, 2, -8}, { 3, 3, 2, 1, 6, 0, 1, 7, -9}, { -10, 8, 6, -6, -1, 2, -1, -2, -4}, { 5, 2, -4, -10, 7, 3, 10, -1, 7}, { 1, 9, -6, -10, 10, -10, -9, 5, -4}, { 2, -8, 3, 7, 4, 1, -4, -6, 5}};

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
                    arr.height = 20;

                    struct matrix_t arr_2 = {.width = 10, .height = -5};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = -20;
                    arr_2.height = 1;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 210: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST210(void)
{
    // informacje o teście
    test_start(210, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -5, .height = 9};

                    int array[20][9] = {{ -8, 6, 3, -2, 2, 2, 2, -8, -6}, { 5, 2, -9, -7, -8, 8, 9, 4, -2}, { -3, -7, 8, -9, 10, -6, 5, 5, -8}, { 9, 9, -6, -2, 1, 5, 3, 3, 9}, { 6, 4, -1, -3, 6, -3, -8, -5, -5}, { -9, 0, 5, -7, -5, 6, -9, -10, 9}, { 9, -3, 6, 1, -5, 10, -3, 1, -2}, { -10, 4, 0, -4, 9, 1, 9, -1, 4}, { 6, -4, -4, 1, 0, -2, -3, -3, -1}, { -8, 1, -7, -6, -2, -2, -1, -6, -6}, { 5, 8, 2, -8, 3, 4, -5, 10, 7}, { -2, -5, 7, 7, -2, -7, -7, 4, 2}, { -9, 0, -8, -7, 5, -6, 6, -3, 6}, { 10, 3, -5, 2, 3, 3, 6, 7, -4}, { 5, -1, 7, -3, -3, 9, -5, 5, -5}, { 1, 4, 6, 3, -5, -2, -2, 7, 0}, { 4, -4, 3, -8, 9, 2, 1, 7, 3}, { 3, 2, 3, 5, 7, -8, 0, -3, -7}, { -10, -3, 2, 10, -4, 2, -1, 8, 1}, { 1, 5, -6, -10, 8, -4, 5, -3, 8}};

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
                    arr.height = 20;

                    struct matrix_t arr_2 = {.width = -2, .height = 3};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = -20;
                    arr_2.height = 1;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 211: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST211(void)
{
    // informacje o teście
    test_start(211, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 4, .height = 8};

                    int array[20][9] = {{ -6, 2, 3, 5, -1, -6, -1, -8, -8}, { 4, 5, 9, -7, -3, 8, -3, -1, 1}, { -3, -3, -7, -7, -2, 4, -2, -5, -6}, { -10, -5, 5, 10, -6, -7, -3, -3, -2}, { -3, -1, 3, 0, 0, -9, 9, 7, -5}, { -1, 4, -1, -9, -1, 6, 3, 0, 10}, { 7, -8, 5, -8, 0, -5, 2, 3, -9}, { 2, 9, -3, 6, 7, -9, -4, -5, 6}, { 2, 10, 7, -1, 10, -5, 6, 1, 1}, { 3, 6, 5, 1, 4, -6, -1, 5, -3}, { 6, -8, -2, -6, -3, -2, 8, -8, -3}, { -3, -5, 4, -9, 9, -7, 1, 9, 2}, { -6, 8, 9, -5, -1, -7, -9, 2, -3}, { -3, -9, -5, -7, -5, -1, 6, 1, -3}, { 7, 3, 4, 1, -2, -8, -8, -9, -8}, { -8, 10, -2, -10, -3, 4, 7, -3, 3}, { 9, 8, 2, -8, 3, -8, -10, 3, 6}, { 3, 2, 0, -4, -5, -9, -8, 0, -6}, { 1, -5, 3, -4, 3, 7, -10, 9, -5}, { 0, -3, -4, -2, -5, 6, -9, -8, -10}};

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
                    arr.height = 20;

                    struct matrix_t arr_2 = {.width = 6, .height = 7};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 20;
                    arr_2.height = 1;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 212: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST212(void)
{
    // informacje o teście
    test_start(212, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 3, .height = -1};

                    int array[20][9] = {{ -5, 0, 2, -7, -3, 9, 10, 1, 2}, { 4, 4, 3, 6, 2, -1, 3, -4, 8}, { 2, 1, -3, -1, 10, 8, 4, -6, 9}, { -2, 6, 7, -4, 6, 0, 0, 5, -3}, { 8, 4, -10, -3, 6, 9, -7, 6, -2}, { -9, -6, 9, 1, -7, -6, 10, 5, 0}, { 0, -9, 8, -10, -4, -6, 7, 6, -4}, { -6, -1, 3, -1, -2, -7, -7, -6, -5}, { 6, -9, -8, 6, 5, 5, 1, 7, 0}, { 4, -9, -3, -8, 8, 9, 0, 6, -8}, { 9, -2, 4, -3, 5, -1, -6, 9, -7}, { 4, 9, 9, -2, -1, -1, 1, -2, -7}, { 6, -9, -4, 2, 1, 0, 7, -3, -4}, { -7, -5, -6, -7, -8, -3, -3, -4, -3}, { -4, -2, -10, 7, 10, -3, 5, -9, 10}, { 7, -9, -7, -3, 5, 5, -1, -9, -10}, { 3, -8, 2, 10, -5, -1, -10, -6, -8}, { 10, 3, 5, -1, 9, 7, -7, -3, 4}, { 7, 6, 0, 2, 5, 7, -4, 0, 3}, { -4, 10, 1, -5, -4, 4, -4, 2, -10}};

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
                    arr.height = 20;

                    struct matrix_t arr_2 = {.width = -4, .height = 2};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 0;
                    arr_2.height = 1;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 213: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST213(void)
{
    // informacje o teście
    test_start(213, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -1, .height = -6};

                    int array[20][9] = {{ 4, -6, 0, 10, 3, 8, 8, 7, 4}, { -10, 3, 8, 4, -7, 1, 7, -6, -3}, { 5, -6, 9, -7, -3, 2, 4, 1, -2}, { -9, -10, 2, -1, -2, -7, -2, 0, 7}, { -5, 4, 3, -5, 1, 7, 1, 2, 10}, { 2, 9, -1, 3, -4, 7, -9, -10, 9}, { 1, -7, 10, -3, 7, 0, 3, 3, -2}, { 2, 1, -3, 3, -8, 3, -3, 7, -1}, { 1, -4, 2, 3, -2, 9, -9, 7, 4}, { -6, 1, 9, -1, 7, -5, 9, 3, 4}, { 1, -2, 8, -10, -1, -2, 3, -5, -3}, { -8, -7, 7, 9, 9, -1, -5, 3, -1}, { -7, -8, -5, -3, 6, 10, 3, 5, 2}, { -9, -2, 4, 1, 2, -7, 5, 2, 3}, { 6, -3, 8, 4, 6, -6, -4, 7, 6}, { 9, -10, 5, -4, -9, -1, 0, -9, -3}, { 8, -4, -10, 1, 10, 2, 10, 6, -10}, { -5, -8, 7, -4, 0, 4, -2, 0, -8}, { 7, -9, -2, 8, 3, -3, -4, -8, -3}, { 10, 1, -7, -9, 5, 0, 0, -8, 7}};

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
                    arr.height = 20;

                    struct matrix_t arr_2 = {.width = 7, .height = 2};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 20;
                    arr_2.height = 1;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 214: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST214(void)
{
    // informacje o teście
    test_start(214, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 4, .height = 2};

                    int array[20][9] = {{ 2, -9, -7, -2, -9, 4, 1, -2, -9}, { 0, 5, -1, 0, -4, 7, 3, -7, 2}, { -1, -9, -1, -9, 10, 8, -10, -10, 1}, { -3, -5, -2, 5, -8, 0, -9, 9, 3}, { 9, -3, -6, 1, -4, 9, 0, 8, 3}, { 6, 5, 10, 5, -3, 10, 0, -8, -3}, { -7, 3, -4, -10, 6, 8, -6, -10, 8}, { 0, -4, 2, 5, 7, -5, 7, 3, -10}, { 6, 2, 2, 6, 7, 0, -2, 8, 10}, { 1, -3, 8, 5, -6, -1, 2, -4, -6}, { -9, -2, 1, -8, 7, 5, 3, -8, 4}, { -9, 8, 2, 1, 5, -8, 10, 6, 1}, { 6, 7, 0, -6, -8, -3, 4, 5, 8}, { -9, 4, -5, 8, 3, 8, 0, -5, -1}, { -8, 8, 2, 9, 6, 1, 4, 3, 0}, { -5, -7, 0, 9, 10, -9, -8, 0, 10}, { 10, 7, 2, -8, -10, 10, -9, -6, 6}, { 3, -4, -3, 5, -3, 8, 1, -6, -2}, { -10, -1, 7, -10, 0, 7, 5, -3, 8}, { 0, -6, 6, -7, -8, 5, 10, -7, -3}};

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
                    arr.height = 20;

                    struct matrix_t arr_2 = {.width = -3, .height = -3};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 0;
                    arr_2.height = 1;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 215: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST215(void)
{
    // informacje o teście
    test_start(215, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 3, .height = 2};

                    int array[20][9] = {{ 6, 1, -6, 0, 7, 1, -7, 10, 7}, { -10, 2, -8, -5, -5, 4, -4, 8, -6}, { 10, 8, 6, -4, 2, -3, 6, 2, 3}, { 9, 6, -8, 6, 2, 3, 6, 3, 6}, { 9, -1, 3, 8, -2, 1, 3, -6, 8}, { 2, -8, 10, -2, 8, -4, -4, -6, 2}, { -2, 10, -1, -1, -2, 8, -10, 6, 8}, { 3, 2, 3, -3, -1, -5, 1, 10, -10}, { 5, -5, 7, -1, 2, -3, -1, -3, 3}, { -7, 7, -7, 3, -9, -5, 2, 0, 9}, { -1, 5, 7, 0, 1, 0, 8, -10, -7}, { 8, -8, -1, 7, -7, -8, -5, -4, 7}, { -6, -4, 2, -9, 8, 6, -4, -2, -6}, { 10, 5, 0, 1, 8, 4, 6, 8, 1}, { 4, 1, -5, 1, 9, -9, -6, -10, 6}, { -5, 4, -5, 5, -8, -1, 6, -10, 10}, { -5, 7, 8, 0, -8, -1, -1, -4, -8}, { 0, -8, -1, 3, -6, -8, 2, -6, 0}, { -6, -5, 5, 7, -6, -2, 5, 3, -10}, { -9, 8, 7, -1, 8, 1, -1, -9, -4}};

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

                    struct matrix_t arr_2 = {.width = 3, .height = 4};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 216: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST216(void)
{
    // informacje o teście
    test_start(216, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -9, .height = 0};

                    int array[20][9] = {{ -1, -8, 3, -5, -4, 4, 10, 4, 6}, { -5, -5, 6, -8, -2, -4, 10, -3, -7}, { 7, 5, 3, -6, 7, -3, 4, -1, -7}, { 6, -4, -8, 9, -7, -10, -4, 6, 7}, { 0, 7, -8, 2, 0, 4, 6, -7, 5}, { 3, -4, -2, 8, 7, 9, -10, -9, 0}, { -2, 7, 9, 3, 6, 3, -4, 4, 0}, { -2, 1, -10, 5, -3, -8, 0, -2, 3}, { 7, 10, 9, 4, -10, -4, -1, 4, 9}, { -3, 9, -5, 1, 6, 0, -8, -9, 9}, { -8, 5, 6, 7, 4, 1, -1, -5, -2}, { 6, -10, -1, 9, 0, 3, 1, 8, 6}, { 0, -9, 8, -1, 3, 1, 3, 1, -9}, { -5, -4, -5, -5, -8, 7, -9, 6, 8}, { -10, -1, -8, -2, -7, 8, 8, -3, 4}, { 9, 3, 9, -3, 2, 6, 6, 9, 8}, { -1, 8, -8, -4, -2, -10, 6, 0, -5}, { -2, -1, 1, -5, 6, -9, -10, -10, 1}, { 10, 10, -8, -9, -6, -1, 9, 3, 2}, { -3, -4, -7, -4, -6, -2, 1, 8, 4}};

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

                    struct matrix_t arr_2 = {.width = -4, .height = -7};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 217: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST217(void)
{
    // informacje o teście
    test_start(217, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 5, .height = -7};

                    int array[20][9] = {{ -6, 10, -1, -2, 0, 6, 4, -6, -10}, { 6, -10, -5, -5, 9, 0, -4, -7, 0}, { -4, -4, -10, -4, 0, 4, -2, 7, -10}, { 7, -3, 4, 5, -5, -4, -5, -5, 10}, { -1, -3, -2, -3, 0, -8, -6, -5, 7}, { 10, 5, -10, 9, 8, -3, -2, 10, 9}, { -10, 1, -7, 5, -3, 8, 2, -5, -10}, { 8, 9, 10, 4, -5, -8, 4, 3, 3}, { 8, -5, -10, 6, -3, -4, -7, -1, -2}, { -7, 9, -9, -4, 4, -4, 10, 5, 10}, { 10, -5, 4, -2, 0, 6, 6, -5, 10}, { 10, -8, 7, 5, -1, 2, 7, 0, 10}, { 5, -5, -2, 8, 5, -5, 3, 7, 4}, { 8, -9, -1, -2, 1, -4, -2, -3, 0}, { 6, 7, -7, -5, 7, -4, -5, -5, 9}, { 5, 5, 5, -2, 7, 1, -2, 2, 8}, { 8, -1, -9, 0, -3, 8, 2, -1, 7}, { -9, -3, 0, -10, -5, 8, 1, -2, 10}, { 7, -5, 3, 6, -2, -7, -6, 7, 3}, { -10, 9, 9, 0, 4, 9, 8, 5, -1}};

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

                    struct matrix_t arr_2 = {.width = 2, .height = -8};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 218: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST218(void)
{
    // informacje o teście
    test_start(218, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -10, .height = -4};

                    int array[20][9] = {{ 5, 4, -4, 7, -2, 8, -3, 6, 4}, { 3, 4, 7, -9, 5, 9, 3, -2, 7}, { -7, -5, -5, -8, -6, -3, 8, 4, 5}, { 10, 2, 1, -5, 10, 3, 4, 4, 9}, { -5, 9, -7, 6, 6, 4, 4, -10, 8}, { -8, -5, 2, 2, -2, -4, 2, -6, -1}, { -10, 1, 2, -6, 10, 5, -8, 3, 7}, { -6, 3, 8, 6, 2, -2, -4, 1, -3}, { -7, 6, -7, -10, -3, 9, -10, 0, 4}, { 6, -1, -8, -1, -2, 8, 8, 3, 4}, { 2, -9, -3, 0, 3, 1, 5, -9, -5}, { 4, -4, -9, -7, 0, -7, 3, 4, 7}, { 7, 4, -7, 10, 2, 8, 0, 8, 8}, { 6, -8, 0, 3, 6, 3, 9, -1, 0}, { 10, -6, -6, -3, -2, 0, -2, -5, 3}, { -1, 6, -1, 1, 2, 7, 10, -4, -7}, { -9, 7, -7, -5, 2, -10, -4, 1, -9}, { -3, 6, -9, -3, 1, -10, -10, -8, -3}, { -8, 1, -9, 1, 4, -10, -9, -2, -7}, { -2, -6, -6, 3, 4, -9, 1, -6, -5}};

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

                    struct matrix_t arr_2 = {.width = -7, .height = 7};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 219: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST219(void)
{
    // informacje o teście
    test_start(219, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 9, .height = -1};

                    int array[20][9] = {{ -10, 2, 7, 8, -1, -2, 10, 9, -10}, { 3, -3, 4, 5, -3, 2, 9, 10, 2}, { -9, 8, -2, 9, 9, -10, 4, -9, 2}, { 4, -8, 2, -6, 7, -6, -1, 0, 10}, { 0, 3, 3, -9, 5, -4, -8, -6, 3}, { 2, 4, 6, 4, 1, 2, 5, -10, -7}, { -7, 3, 3, -4, -7, 4, -4, -3, 3}, { -8, -8, -2, -3, -6, 7, 0, -10, 0}, { -2, 8, -9, 1, 7, 8, 2, -8, -2}, { -10, 4, 9, -5, 3, -2, 10, -5, 3}, { -1, -5, 8, 10, -1, -9, 9, -6, -4}, { 6, -9, -8, 1, 3, -4, 4, -4, -9}, { 9, -5, -3, -4, -9, -7, 1, 10, 5}, { -7, -4, 10, 10, 10, 8, -5, 8, 5}, { 0, 8, -10, 1, -5, 5, 8, 0, 8}, { 1, 9, 2, 9, 1, -10, 4, -1, 8}, { -8, -4, 6, 7, 5, -6, 0, 8, -2}, { -10, -1, 4, -4, -3, 6, 9, -3, -6}, { -10, 5, 3, 10, -7, -7, -7, 9, 9}, { 10, 2, 0, 0, -3, -1, 2, -5, 7}};

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

                    struct matrix_t arr_2 = {.width = -10, .height = -6};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 220: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST220(void)
{
    // informacje o teście
    test_start(220, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 4, .height = 10};

                    int array[20][9] = {{ 1, 7, -4, 10, -10, -7, -3, 4, 5}, { -6, 3, 2, -4, 8, -10, -4, 7, 6}, { 3, -2, 7, -9, -4, 6, -7, -3, 9}, { -9, 8, -7, -2, -5, 8, -3, 4, -6}, { 9, 1, -2, 1, -10, 8, -4, 6, 3}, { -8, -4, -4, 9, -10, -5, -10, 1, -3}, { -7, 6, -2, 9, -3, -2, -5, 9, 6}, { 4, 1, 2, -8, -5, -3, -3, 3, 10}, { 5, 6, -7, -9, -4, -1, 6, 2, 4}, { -6, -2, 0, 9, -9, 6, 8, 6, -1}, { 7, 10, -2, 0, 1, -1, 2, -3, 4}, { -6, 9, 3, 7, -2, 10, -1, -5, -2}, { 3, -8, 6, 3, -10, 1, 3, -3, 7}, { -3, 4, -2, 9, 9, -6, -7, -4, 8}, { 7, -2, -8, -4, 2, -3, 5, -10, -5}, { -5, -6, -3, 3, -2, -6, -10, 9, 8}, { -3, -3, 2, 6, 1, 2, -1, 6, -5}, { 1, -5, -9, -4, 4, 2, -4, -7, -6}, { -7, 1, -9, -2, 3, 1, -7, -6, -8}, { 2, -8, 7, 5, 3, 6, 8, -10, 3}};

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

                    struct matrix_t arr_2 = {.width = 6, .height = 4};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 221: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST221(void)
{
    // informacje o teście
    test_start(221, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 10, .height = 6};

                    int array[20][9] = {{ -4, -8, -5, 5, 10, 8, 5, 6, 4}, { 9, 4, -6, 8, 8, -8, 10, 8, 4}, { -3, -1, -9, -5, -9, -9, -8, -10, -7}, { -1, 10, 1, 5, -8, -7, -9, -3, -1}, { -7, 3, 2, -9, 9, -10, 9, -10, 7}, { 3, -7, 2, -1, 1, -6, 3, -7, 5}, { -5, -4, 5, -9, 9, 7, 1, 7, 7}, { -4, -9, 5, 6, -6, 10, 5, 7, -7}, { -4, -3, 2, 0, -6, -2, 5, -8, 3}, { -9, -6, -10, 6, 4, 0, -2, 2, -9}, { -9, -1, 7, 2, -4, -1, -7, 8, -4}, { -10, -2, 10, -7, -2, -7, 8, 1, -6}, { 6, 10, 7, 2, 5, 10, -2, 1, 1}, { -7, -6, -8, 0, 10, 8, 7, -2, -4}, { 9, -9, -7, 4, -4, 0, -10, 1, -1}, { -10, 10, 1, -8, -6, 6, -2, 6, 8}, { -10, -7, -10, -4, 3, 10, 0, -4, -9}, { 10, 1, -8, -3, -2, 4, 3, 3, 8}, { 8, -4, 3, 5, -10, 6, 3, 5, -4}, { 5, 2, -1, -6, 3, 9, 6, 6, 7}};

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
                    arr.height = 21;

                    struct matrix_t arr_2 = {.width = -5, .height = 10};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 222: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST222(void)
{
    // informacje o teście
    test_start(222, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -9, .height = 5};

                    int array[20][9] = {{ 9, -9, 9, -2, 5, -1, 8, -9, 4}, { -6, -4, -9, 7, -10, -9, -2, 1, -8}, { 5, 8, 5, 9, -3, -10, -1, 3, -3}, { -9, 1, 5, 6, 8, -5, 5, 3, -3}, { 10, 1, 9, -6, 8, 8, -4, 2, -4}, { 3, 5, -4, -7, 7, 0, -4, 1, -7}, { 2, -7, 0, -10, 9, -4, 7, -5, -3}, { 10, -1, 0, 8, -8, -7, -10, -5, 4}, { 6, 9, -10, 4, 4, -5, 8, -8, -5}, { -9, -2, -4, 3, -6, 9, 10, 8, 9}, { 7, 8, 4, -4, -6, -10, -6, 2, -8}, { 1, 5, 6, -2, -4, -8, 1, -2, 4}, { 6, 8, -5, -6, -1, -5, -10, -10, -9}, { 3, -1, -10, -10, 6, -1, -4, -7, -3}, { 8, 9, 7, -1, -1, -6, 10, 10, 5}, { 5, -8, 9, -10, 6, 6, 1, -3, 9}, { 3, -4, 7, -5, 1, 0, -2, -4, 1}, { -5, -7, 1, 3, 7, -10, -6, 9, 4}, { -1, 2, 0, 1, -5, 4, 2, 8, 4}, { 0, -5, -3, 5, -1, -5, 2, 5, -7}};

                    int res = matrix_create(&arr, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 10;
                    arr.height = 20;

                    struct matrix_t arr_2 = {.width = -8, .height = 6};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 223: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST223(void)
{
    // informacje o teście
    test_start(223, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -10, .height = 2};

                    int array[20][9] = {{ 1, 6, 8, 0, -2, 2, -3, -7, 9}, { -2, 1, 5, -7, -2, 1, -8, -4, 5}, { -3, 3, 1, -7, -6, 1, 6, 0, 10}, { -3, -3, 7, -6, -10, 6, -10, 9, 9}, { 9, 4, -3, 3, -2, -9, -3, -8, 8}, { 2, -4, 5, 1, 5, 2, 0, 10, -2}, { 7, -10, 10, -4, -10, 2, 8, -3, -10}, { 1, -9, 2, 1, 3, -8, -7, -2, -3}, { -10, -1, -10, -3, 1, 6, 3, 4, -2}, { -2, -1, 4, -8, -7, -8, -8, 3, -10}, { -3, 4, -7, 10, 4, -8, 6, 7, 3}, { 9, -10, -4, 5, 5, 3, 2, 10, 4}, { -2, 10, -8, -4, 7, 7, -1, 1, 7}, { -6, 0, -1, 6, 9, 7, 0, 7, -2}, { -5, -4, -6, -7, 9, -1, -6, -9, 0}, { -9, 0, 1, 10, 1, 6, 10, 10, -6}, { 10, -8, -4, 0, -3, 5, -6, 4, 2}, { -10, 5, 10, -2, -2, 5, -1, 8, 6}, { 0, 0, 10, -4, 9, -7, 9, 5, 2}, { 2, -8, 2, 6, -2, 10, 1, 6, 5}};

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
                    arr.height = 20;

                    struct matrix_t arr_2 = {.width = 7, .height = 7};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 10;
                    arr_2.height = 20;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 224: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST224(void)
{
    // informacje o teście
    test_start(224, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -2, .height = -4};

                    int array[20][9] = {{ -1, 4, -2, -3, 9, 6, -3, 9, -4}, { -4, -4, 3, -7, 7, 10, 7, -5, -9}, { 1, 1, -1, -9, 9, -6, 9, 1, 4}, { -7, 10, 4, -2, 4, 2, 5, 5, -6}, { -5, 8, 3, 3, -5, 9, 3, -8, 9}, { 1, 7, 7, 5, -4, -2, -4, 4, -3}, { 5, 6, 9, 1, -7, -9, -2, 5, 10}, { 4, -5, 4, -10, -2, -1, -8, 2, 9}, { -6, 10, 1, -6, -9, -10, 0, -1, 6}, { 4, -3, 4, 7, -5, -5, 5, 9, 1}, { -6, 7, 5, -5, -5, -9, -2, 7, -6}, { 6, -6, 10, -5, 1, 0, 0, -4, 3}, { 6, 10, 2, 2, 4, -6, -8, 2, 5}, { 5, -2, -8, -8, -5, 4, -9, 1, 3}, { 5, -5, -3, 3, 8, -10, 0, 6, -6}, { -6, -3, 9, -1, 5, 5, 10, 0, 8}, { 8, -5, 10, -8, -7, -7, 1, -6, 10}, { -4, 1, -9, 1, -6, -10, 9, 7, -3}, { 7, -9, 10, -8, 9, -2, -3, -5, -2}, { -8, 4, -9, 3, -9, -9, 7, 8, 7}};

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
                    arr.height = 20;

                    struct matrix_t arr_2 = {.width = -6, .height = 5};

                    res = matrix_create(&arr_2, 9, 20);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        for (int j = 0; j < 9; ++j)
                            arr_2.ptr[i][j] = array[i][j];

                    arr_2.width = 9;
                    arr_2.height = 21;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 9;
                    arr.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 9;
                    arr_2.height = 20;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 225: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST225(void)
{
    // informacje o teście
    test_start(225, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = 20};

                int array[20][9] = {{ -1, 4, -2, -3, 9, 6, -3, 9, -4}, { -4, -4, 3, -7, 7, 10, 7, -5, -9}, { 1, 1, -1, -9, 9, -6, 9, 1, 4}, { -7, 10, 4, -2, 4, 2, 5, 5, -6}, { -5, 8, 3, 3, -5, 9, 3, -8, 9}, { 1, 7, 7, 5, -4, -2, -4, 4, -3}, { 5, 6, 9, 1, -7, -9, -2, 5, 10}, { 4, -5, 4, -10, -2, -1, -8, 2, 9}, { -6, 10, 1, -6, -9, -10, 0, -1, 6}, { 4, -3, 4, 7, -5, -5, 5, 9, 1}, { -6, 7, 5, -5, -5, -9, -2, 7, -6}, { 6, -6, 10, -5, 1, 0, 0, -4, 3}, { 6, 10, 2, 2, 4, -6, -8, 2, 5}, { 5, -2, -8, -8, -5, 4, -9, 1, 3}, { 5, -5, -3, 3, 8, -10, 0, 6, -6}, { -6, -3, 9, -1, 5, 5, 10, 0, 8}, { 8, -5, 10, -8, -7, -7, 1, -6, 10}, { -4, 1, -9, 1, -6, -10, 9, 7, -3}, { 7, -9, 10, -8, 9, -2, -3, -5, -2}, { -8, 4, -9, 3, -9, -9, 7, 8, 7}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                struct matrix_t arr_2 = {.ptr = NULL, .width = 9, .height = 20};

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_subtract(&arr, &arr_2);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 226: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST226(void)
{
    // informacje o teście
    test_start(226, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = 20};

                int array[20][9] = {{ -1, 4, -2, -3, 9, 6, -3, 9, -4}, { -4, -4, 3, -7, 7, 10, 7, -5, -9}, { 1, 1, -1, -9, 9, -6, 9, 1, 4}, { -7, 10, 4, -2, 4, 2, 5, 5, -6}, { -5, 8, 3, 3, -5, 9, 3, -8, 9}, { 1, 7, 7, 5, -4, -2, -4, 4, -3}, { 5, 6, 9, 1, -7, -9, -2, 5, 10}, { 4, -5, 4, -10, -2, -1, -8, 2, 9}, { -6, 10, 1, -6, -9, -10, 0, -1, 6}, { 4, -3, 4, 7, -5, -5, 5, 9, 1}, { -6, 7, 5, -5, -5, -9, -2, 7, -6}, { 6, -6, 10, -5, 1, 0, 0, -4, 3}, { 6, 10, 2, 2, 4, -6, -8, 2, 5}, { 5, -2, -8, -8, -5, 4, -9, 1, 3}, { 5, -5, -3, 3, 8, -10, 0, 6, -6}, { -6, -3, 9, -1, 5, 5, 10, 0, 8}, { 8, -5, 10, -8, -7, -7, 1, -6, 10}, { -4, 1, -9, 1, -6, -10, 9, 7, -3}, { 7, -9, 10, -8, 9, -2, -3, -5, -2}, { -8, 4, -9, 3, -9, -9, 7, 8, 7}};

                int res = matrix_create(&arr, 9, 20);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    for (int j = 0; j < 9; ++j)
                        arr.ptr[i][j] = array[i][j];

                struct matrix_t arr_2 = {.ptr = NULL, .width = 9, .height = 20};

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_subtract(&arr_2, &arr);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 227: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST227(void)
{
    // informacje o teście
    test_start(227, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = 20};

                int array[20][9] = {{ -1, 4, -2, -3, 9, 6, -3, 9, -4}, { -4, -4, 3, -7, 7, 10, 7, -5, -9}, { 1, 1, -1, -9, 9, -6, 9, 1, 4}, { -7, 10, 4, -2, 4, 2, 5, 5, -6}, { -5, 8, 3, 3, -5, 9, 3, -8, 9}, { 1, 7, 7, 5, -4, -2, -4, 4, -3}, { 5, 6, 9, 1, -7, -9, -2, 5, 10}, { 4, -5, 4, -10, -2, -1, -8, 2, 9}, { -6, 10, 1, -6, -9, -10, 0, -1, 6}, { 4, -3, 4, 7, -5, -5, 5, 9, 1}, { -6, 7, 5, -5, -5, -9, -2, 7, -6}, { 6, -6, 10, -5, 1, 0, 0, -4, 3}, { 6, 10, 2, 2, 4, -6, -8, 2, 5}, { 5, -2, -8, -8, -5, 4, -9, 1, 3}, { 5, -5, -3, 3, 8, -10, 0, 6, -6}, { -6, -3, 9, -1, 5, 5, 10, 0, 8}, { 8, -5, 10, -8, -7, -7, 1, -6, 10}, { -4, 1, -9, 1, -6, -10, 9, 7, -3}, { 7, -9, 10, -8, 9, -2, -3, -5, -2}, { -8, 4, -9, 3, -9, -9, 7, 8, 7}};

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
                struct matrix_t *arr_t = matrix_subtract(&arr, NULL);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 228: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST228(void)
{
    // informacje o teście
    test_start(228, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = 20};

                int array[20][9] = {{ -1, 4, -2, -3, 9, 6, -3, 9, -4}, { -4, -4, 3, -7, 7, 10, 7, -5, -9}, { 1, 1, -1, -9, 9, -6, 9, 1, 4}, { -7, 10, 4, -2, 4, 2, 5, 5, -6}, { -5, 8, 3, 3, -5, 9, 3, -8, 9}, { 1, 7, 7, 5, -4, -2, -4, 4, -3}, { 5, 6, 9, 1, -7, -9, -2, 5, 10}, { 4, -5, 4, -10, -2, -1, -8, 2, 9}, { -6, 10, 1, -6, -9, -10, 0, -1, 6}, { 4, -3, 4, 7, -5, -5, 5, 9, 1}, { -6, 7, 5, -5, -5, -9, -2, 7, -6}, { 6, -6, 10, -5, 1, 0, 0, -4, 3}, { 6, 10, 2, 2, 4, -6, -8, 2, 5}, { 5, -2, -8, -8, -5, 4, -9, 1, 3}, { 5, -5, -3, 3, 8, -10, 0, 6, -6}, { -6, -3, 9, -1, 5, 5, 10, 0, 8}, { 8, -5, 10, -8, -7, -7, 1, -6, 10}, { -4, 1, -9, 1, -6, -10, 9, 7, -3}, { 7, -9, 10, -8, 9, -2, -3, -5, -2}, { -8, 4, -9, 3, -9, -9, 7, 8, 7}};

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
                struct matrix_t *arr_t = matrix_subtract(NULL, &arr);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 229: Sprawdzanie poprawności działania funkcji matrix_subtract
//
void UTEST229(void)
{
    // informacje o teście
    test_start(229, "Sprawdzanie poprawności działania funkcji matrix_subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_subtract(NULL, NULL);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_subtract() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 230: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST230(void)
{
    // informacje o teście
    test_start(230, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -2, .height = -2};
                    struct matrix_t arr_2 = {.width = 3, .height = 0};

                    int array[8][6] = {{ 7, -7, 4, -3, -10, 0}, { 4, 2, 2, 6, -7, 9}, { -4, 8, 1, -1, 3, 3}, { -9, -7, 3, 3, 3, 4}, { 1, -6, -4, 2, -3, -7}, { 5, 10, -3, 2, -9, -1}, { 3, -3, -2, -9, 7, 4}, { 7, -6, 2, -7, -7, -9}};
                    int array_2[6][8] = {{ 4, -7, -7, -6, -6, -10, -7, -1}, { 7, 4, -4, -1, -8, 3, -6, -4}, { 5, 7, 4, -9, 7, 3, 2, 3}, { 6, -4, 6, -1, 3, 7, 7, 4}, { -3, 4, -7, 5, -5, -3, -8, 1}, { 1, 3, 10, 3, 1, 6, -2, 3}};

                    int expected_array[8][8] = {{ 11, -77, 47, -118, 83, -70, 60, 11}, { 106, -31, 147, -58, 36, 89, 44, 38}, { 33, 92, 3, 32, -48, 69, -55, -17}, { -57, 68, 140, 58, 129, 114, 100, 73}, { -44, -100, -36, -2, 28, -59, 73, -5}, { 113, -63, -22, -63, -81, 6, -13, -58}, { -90, 29, -80, 59, -66, -105, -134, -14}, { -34, -86, -100, -109, 25, -164, 16, -39}};

                    int res = matrix_create(&arr, 6, 8);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 8, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 8, 6);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 6, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_multiply() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 8, "Funkcja matrix_multiply() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 8, "Funkcja matrix_multiply() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 8; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_multiply() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 231: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST231(void)
{
    // informacje o teście
    test_start(231, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -9, .height = 6};
                    struct matrix_t arr_2 = {.width = 9, .height = 6};

                    int array[18][8] = {{ -5, 5, -1, 5, 3, 3, 5, 7}, { 6, 1, -7, 4, -8, -6, -1, -8}, { 2, 5, -9, -10, -6, 2, -6, -8}, { 6, 7, -7, 0, -9, 4, -8, 10}, { 0, 1, 9, 0, 9, 8, 4, 5}, { 10, -6, 10, -5, -7, -5, -1, 7}, { 3, -5, -1, 9, 8, 7, 0, 7}, { 1, -3, -8, 8, 5, -6, -10, -10}, { -2, 2, 4, 3, 9, 2, -1, 2}, { -2, 10, -1, -5, -7, 4, 2, -9}, { -9, -7, 7, -10, -2, -5, -3, 10}, { -3, -9, -8, -4, -1, -6, 8, 3}, { -5, -5, -2, -1, 4, -8, 0, -6}, { -8, 6, 9, 4, 7, 5, -1, 4}, { 4, 0, -4, -2, 0, -6, 3, 10}, { 4, 10, 10, -9, 5, 8, -3, -9}, { -8, 10, 7, 3, -6, -7, 10, 1}, { -5, 0, -8, -7, -2, 7, 4, 6}};
                    int array_2[8][18] = {{ -3, -3, 8, 1, -6, -3, -2, -10, -3, 5, -4, -8, 7, 6, 7, 6, -9, -9}, { -6, -3, 9, -5, -9, -4, -2, -2, -1, 6, -7, 1, 2, -4, 7, -1, -7, 9}, { 10, 4, -8, -7, -3, -4, 10, 7, -5, -1, -10, 6, 6, 9, 10, 2, 6, -8}, { 7, -5, 4, -8, -3, -4, 7, 7, 2, -3, -10, -8, 0, -10, 2, 6, -6, -4}, { -8, 9, -6, -10, -4, -9, 9, 9, -3, -8, -9, 10, -6, 5, -4, 8, -7, 7}, { 9, -10, -1, -1, 4, 10, -1, 3, -2, -2, -6, -3, -9, 5, 5, 3, 7, -10}, { -10, 7, 1, 1, 10, -7, -1, -4, -9, -6, -9, -9, -8, -10, -6, 10, 5, 1}, { 3, 4, 0, -8, -6, 1, 3, 5, -10, -6, 10, -5, 0, -1, -6, -4, -10, -6}};

                    int expected_array[18][18] = {{ -16, 31, 17, -147, -19, -46, 65, 119, -105, -111, -75, -60, -116, -136, -69, 48, -71, 32}, { -70, -120, 182, 167, 10, 1, -145, -209, 149, 161, 36, -134, 112, -123, 43, -15, -38, 46}, { -94, -155, 121, 236, 20, 158, -248, -227, 162, 207, 163, 43, 36, 59, 57, -141, 59, 119}, { 88, -204, 209, 18, -166, 169, -143, -110, 1, 131, 226, -163, 96, -10, 65, -165, -194, -106}, { 59, 82, -121, -202, -30, -64, 172, 175, -175, -145, -212, 60, -102, 117, 47, 133, 10, -106}, { 113, 61, -28, 28, -65, 1, 21, -92, -114, 49, 124, -67, 213, 167, 85, -53, -19, -246}, { 94, -13, -32, -180, -43, -16, 143, 164, -89, -161, -101, -83, -106, 7, -45, 132, -129, -156}, { -33, -71, 43, 34, -63, -36, 11, 13, 243, 63, -2, 85, 57, -29, -8, 3, -111, 141}, { 17, 63, -75, -173, -77, -82, 147, 166, -52, -93, -140, 101, -50, 49, 14, 72, -64, 22}, { -54, -128, 102, 135, 58, 70, -157, -146, 76, 156, -71, 5, -10, -37, 126, -42, 149, 103}, { 100, 177, -217, -1, 24, 66, 52, 112, -78, -80, 290, 159, 46, 122, -121, -194, 96, -25}, { -162, 143, -37, 130, 177, -11, -86, -80, -37, -95, 198, -80, -91, -132, -264, -7, 41, 69}, { -104, 119, -89, 58, 72, -75, 19, 21, 92, -30, 37, 125, -9, -32, -112, -3, 50, 164}, { 117, 44, -114, -241, -87, -54, 193, 261, -81, -109, -184, 136, -69, 35, 63, 33, 1, 12}, { -120, 103, 65, -23, -60, -59, -29, -62, -111, -36, 153, -99, 34, -62, -124, -24, -175, 7}, { 0, -49, -35, -33, -81, -9, 22, -17, -4, 113, -252, 208, 30, 268, 272, 50, 104, 16}, { -57, 97, 35, -62, 18, -141, 33, 20, -83, 0, -122, -42, 25, -221, 13, 1, 59, 126}, { -57, -18, 5, 76, 115, 141, -130, -38, -63, -54, 170, -59, -166, -53, -146, -67, 62, 21}};

                    int res = matrix_create(&arr, 8, 18);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 18, 8);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 18, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 18, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 8, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 18; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_multiply() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 18, "Funkcja matrix_multiply() powinna ustawić szerokość macierzy na 18, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 18, "Funkcja matrix_multiply() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 18; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_multiply() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 232: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST232(void)
{
    // informacje o teście
    test_start(232, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -6, .height = -1};
                    struct matrix_t arr_2 = {.width = -5, .height = 9};

                    int array[17][1] = {{ -8}, { -4}, { -7}, { 4}, { 10}, { 0}, { -2}, { 3}, { -8}, { -8}, { -5}, { -6}, { 10}, { -7}, { -1}, { 3}, { 10}};
                    int array_2[1][17] = {{ -9, 10, 3, -5, -2, 10, 3, -5, 9, 9, 1, 10, -4, 1, 6, 5, -10}};

                    int expected_array[17][17] = {{ 72, -80, -24, 40, 16, -80, -24, 40, -72, -72, -8, -80, 32, -8, -48, -40, 80}, { 36, -40, -12, 20, 8, -40, -12, 20, -36, -36, -4, -40, 16, -4, -24, -20, 40}, { 63, -70, -21, 35, 14, -70, -21, 35, -63, -63, -7, -70, 28, -7, -42, -35, 70}, { -36, 40, 12, -20, -8, 40, 12, -20, 36, 36, 4, 40, -16, 4, 24, 20, -40}, { -90, 100, 30, -50, -20, 100, 30, -50, 90, 90, 10, 100, -40, 10, 60, 50, -100}, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, { 18, -20, -6, 10, 4, -20, -6, 10, -18, -18, -2, -20, 8, -2, -12, -10, 20}, { -27, 30, 9, -15, -6, 30, 9, -15, 27, 27, 3, 30, -12, 3, 18, 15, -30}, { 72, -80, -24, 40, 16, -80, -24, 40, -72, -72, -8, -80, 32, -8, -48, -40, 80}, { 72, -80, -24, 40, 16, -80, -24, 40, -72, -72, -8, -80, 32, -8, -48, -40, 80}, { 45, -50, -15, 25, 10, -50, -15, 25, -45, -45, -5, -50, 20, -5, -30, -25, 50}, { 54, -60, -18, 30, 12, -60, -18, 30, -54, -54, -6, -60, 24, -6, -36, -30, 60}, { -90, 100, 30, -50, -20, 100, 30, -50, 90, 90, 10, 100, -40, 10, 60, 50, -100}, { 63, -70, -21, 35, 14, -70, -21, 35, -63, -63, -7, -70, 28, -7, -42, -35, 70}, { 9, -10, -3, 5, 2, -10, -3, 5, -9, -9, -1, -10, 4, -1, -6, -5, 10}, { -27, 30, 9, -15, -6, 30, 9, -15, 27, 27, 3, 30, -12, 3, 18, 15, -30}, { -90, 100, 30, -50, -20, 100, 30, -50, 90, 90, 10, 100, -40, 10, 60, 50, -100}};

                    int res = matrix_create(&arr, 1, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 17, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_multiply() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 17, "Funkcja matrix_multiply() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 17, "Funkcja matrix_multiply() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 17; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_multiply() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 233: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST233(void)
{
    // informacje o teście
    test_start(233, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -2, .height = 0};
                    struct matrix_t arr_2 = {.width = 6, .height = -1};

                    int array[1][8] = {{ -6, -8, 7, 8, 3, 3, 0, 2}};
                    int array_2[8][1] = {{ 0}, { 9}, { 5}, { -10}, { -9}, { 6}, { 5}, { 3}};

                    int expected_array[1][1] = {{ -120}};

                    int res = matrix_create(&arr, 8, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 1, 8);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 8, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_multiply() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_multiply() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_multiply() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_multiply() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 234: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST234(void)
{
    // informacje o teście
    test_start(234, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -3, .height = -7};
                    struct matrix_t arr_2 = {.width = -3, .height = 9};

                    int array[1][1] = {{ -7}};
                    int array_2[1][1] = {{ -6}};

                    int expected_array[1][1] = {{ 42}};

                    int res = matrix_create(&arr, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];


                    res = matrix_create(&arr_2, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr_2.ptr[i][j] = array_2[i][j];


                    printf("#####START#####");                            
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t != NULL, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr_t != &arr, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(arr_t->ptr != NULL, "Funkcja matrix_multiply() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_t->width == 1, "Funkcja matrix_multiply() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_t->width);
                    test_error(arr_t->height == 1, "Funkcja matrix_multiply() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_t->height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            ok += arr_t->ptr[i][j] != expected_array[i][j];

                    if (ok)
                    {
                        printf("Zawartość macierzy po dodawaniu\n");
                        matrix_display(arr_t);    
                    }
                    test_error(ok == 0, "Funkcja matrix_multiply() niepoprawnie dodała macierz");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 235: Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 344 bajtów)
//
void UTEST235(void)
{
    // informacje o teście
    test_start(235, "Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 344 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(344);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = -10};
                struct matrix_t arr_2 = {.width = -4, .height = 4};

                int array[4][5] = {{ -9, -3, 0, 1, 5}, { -5, -10, -9, 4, -3}, { 9, 3, 10, 0, -5}, { -4, 10, 10, 7, -5}};
                int array_2[5][4] = {{ -5, -2, -6, 4}, { 7, -4, -4, 5}, { 2, -9, 7, 3}, { -4, 4, 2, -4}, { -9, 3, 2, -10}};

                int expected_array[4][4] = {{ -25, 49, 78, -105}, { -52, 138, 9, -83}, { 41, -135, -6, 131}, { 127, -109, 58, 86}};

                int res = matrix_create(&arr, 5, 4);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
                test_error(arr.height == 4, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 4, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 4; ++i)
                    for (int j = 0; j < 5; ++j)
                        arr.ptr[i][j] = array[i][j];


                res = matrix_create(&arr_2, 4, 5);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr_2.width == 4, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 4, a ustawiła na %d", arr_2.width);
                test_error(arr_2.height == 5, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 5, a ustawiła na %d", arr_2.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 5; ++i)
                    for (int j = 0; j < 4; ++j)
                        arr_2.ptr[i][j] = array_2[i][j];


                printf("#####START#####");                            
                struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                printf("#####END#####");

                test_error(arr_t != NULL, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr_t != &arr, "Funkcja matrix_multiply() powinna zwrócić adres zaalokowanej pamięci, a zwróciła adres macierzy przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                test_error(arr_t->ptr != NULL, "Funkcja matrix_multiply() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr_t->width == 4, "Funkcja matrix_multiply() powinna ustawić szerokość macierzy na 4, a ustawiła na %d", arr_t->width);
                test_error(arr_t->height == 4, "Funkcja matrix_multiply() powinna ustawić wysokość macierzy na 4, a ustawiła na %d", arr_t->height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int ok = 0;

                for (int i = 0; i < 4; ++i)
                    for (int j = 0; j < 4; ++j)
                        ok += arr_t->ptr[i][j] != expected_array[i][j];

                if (ok)
                {
                    printf("Zawartość macierzy po dodawaniu\n");
                    matrix_display(arr_t);    
                }
                test_error(ok == 0, "Funkcja matrix_multiply() niepoprawnie dodała macierz");

                printf("#####START#####");
                matrix_destroy(&arr);
                printf("#####END#####");

                printf("#####START#####");
                matrix_destroy(&arr_2);
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
//  Test 236: Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 603 bajtów)
//
void UTEST236(void)
{
    // informacje o teście
    test_start(236, "Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 603 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(603);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -6, .height = 2};
                    struct matrix_t arr_2 = {.width = 0, .height = 1};

                    int array[8][6] = {{ 4, -5, -8, -5, 3, 8}, { -4, 4, 1, 1, -2, 8}, { -10, -6, 4, -1, 9, -7}, { 5, -4, 2, -1, -5, -3}, { -9, 3, -3, 6, 0, 2}, { 3, 2, -3, -6, -6, 2}, { -5, -4, 7, 3, 10, -8}, { 5, -7, 1, 6, 8, 5}};

                    int res = matrix_create(&arr, 6, 8);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 6, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr.width);
                    test_error(arr.height == 8, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 6; ++j)
                            arr.ptr[i][j] = array[i][j];

                    res = matrix_create(&arr_2, 8, 6);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 6, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr_2.ptr[i][j] = array[j][i];


                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 237: Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 2493 bajtów)
//
void UTEST237(void)
{
    // informacje o teście
    test_start(237, "Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 2493 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2493);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 10, .height = -4};
                    struct matrix_t arr_2 = {.width = 10, .height = 2};

                    int array[18][8] = {{ 3, 9, 2, 6, 7, 3, -2, -9}, { 10, 1, 4, -10, -9, 4, -10, -4}, { 6, 5, 7, 6, 0, -8, -7, -10}, { -9, 4, -1, 0, 5, -5, -1, -6}, { 1, -8, 7, -10, -4, -6, 5, 0}, { 2, 2, 2, 2, -7, -7, 3, 9}, { 2, 4, -10, 6, 9, 2, -2, 8}, { -5, 2, 5, 10, 6, 9, -3, -1}, { -2, -3, 2, 6, -5, 2, -2, 7}, { 2, -1, 5, -10, 4, -2, 9, 7}, { -1, -1, -3, 6, -3, 9, -4, -10}, { -5, -9, -6, 5, -5, -7, -6, -8}, { 5, 1, 9, -6, 10, 1, 9, 2}, { 10, 8, 3, -9, -8, 1, -7, 6}, { 3, -2, 1, 4, 2, 6, -7, 10}, { -4, 4, -2, 3, -10, -9, -6, -2}, { 0, -1, -10, -10, 8, 4, 0, 9}, { 8, -3, 9, 3, -9, 5, 5, -8}};

                    int res = matrix_create(&arr, 8, 18);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                    test_error(arr.height == 18, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 18, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 18; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr.ptr[i][j] = array[i][j];

                    res = matrix_create(&arr_2, 18, 8);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 18, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 18, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 8, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 18; ++j)
                            arr_2.ptr[i][j] = array[j][i];


                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 238: Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 358 bajtów)
//
void UTEST238(void)
{
    // informacje o teście
    test_start(238, "Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 358 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(358);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 7, .height = 9};
                    struct matrix_t arr_2 = {.width = 4, .height = -4};

                    int array[17][1] = {{ 10}, { 7}, { -1}, { 2}, { 4}, { 5}, { 10}, { -3}, { 5}, { -10}, { 6}, { -2}, { 4}, { 5}, { -5}, { -7}, { -9}};

                    int res = matrix_create(&arr, 1, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    res = matrix_create(&arr_2, 17, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];


                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 239: Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 139 bajtów)
//
void UTEST239(void)
{
    // informacje o teście
    test_start(239, "Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 139 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(139);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 7, .height = 6};
                    struct matrix_t arr_2 = {.width = -10, .height = -3};

                    int array[1][8] = {{ -7, 1, 9, 7, 5, 6, 3, -8}};

                    int res = matrix_create(&arr, 8, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 8, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 8; ++j)
                            arr.ptr[i][j] = array[i][j];

                    res = matrix_create(&arr_2, 1, 8);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 8, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 8, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr_2.ptr[i][j] = array[j][i];


                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 240: Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 43 bajtów)
//
void UTEST240(void)
{
    // informacje o teście
    test_start(240, "Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 43 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(43);
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -9, .height = 2};
                    struct matrix_t arr_2 = {.width = -5, .height = -10};

                    int array[1][1] = {{ -6}};

                    int res = matrix_create(&arr, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                    test_error(arr.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr.ptr[i][j] = array[i][j];

                    res = matrix_create(&arr_2, 1, 1);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 1, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 1, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            arr_2.ptr[i][j] = array[j][i];


                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 241: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST241(void)
{
    // informacje o teście
    test_start(241, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 0, .height = 4};

                    int array[17][7] = {{ 9, 9, -6, -3, 10, 8, 2}, { -3, 1, 2, -1, 6, 0, 2}, { -2, -4, 10, -4, 7, 1, -10}, { 4, -7, -3, -1, 7, 9, 0}, { -7, 4, 9, -9, -6, 7, 0}, { -10, 2, 2, 9, 3, -1, 8}, { 4, 0, -5, 6, -1, 3, -8}, { -3, 9, 10, 5, -8, 4, -2}, { 9, 2, 6, 9, -7, -1, 7}, { -9, 0, -2, -8, -4, 1, 0}, { -4, -8, -3, -10, 2, -8, 9}, { -10, -3, 8, -10, 6, 10, -8}, { -2, -9, -8, 5, -7, -4, -5}, { 2, 6, -3, 6, 10, 7, 10}, { 3, -7, -2, -9, 6, 6, -6}, { -7, 1, 9, 2, -7, 10, 10}, { -9, 10, 4, -3, 9, 4, -4}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 7;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = -1, .height = 1};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = -17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 242: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST242(void)
{
    // informacje o teście
    test_start(242, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -3, .height = 8};

                    int array[17][7] = {{ -9, -4, 6, -7, 6, 10, -3}, { 4, 6, -2, -10, 10, 0, -7}, { 10, -2, -10, -1, 8, -4, -3}, { 0, -9, -6, 9, -8, -8, -5}, { 3, -10, 2, 4, -8, -6, -6}, { -1, 1, -3, 8, 1, 3, 6}, { 10, 0, 9, -2, -9, 1, 0}, { 8, -2, 8, -1, -9, 3, 1}, { 4, -9, 9, 10, 8, -5, -8}, { 1, 2, 10, -9, -9, -4, 4}, { -9, 8, 4, 5, 9, 10, -3}, { 9, 1, -3, 3, -1, 6, 7}, { -1, 1, 7, -8, 1, -3, -8}, { -3, 5, -4, 1, 9, 5, -6}, { -9, -6, 1, 4, -7, -5, -9}, { -10, 7, -9, 7, -8, -10, 5}, { -1, -4, -5, 5, 7, -10, -5}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 7;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = -10, .height = 3};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = -17;
                    arr_2.height = -7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 243: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST243(void)
{
    // informacje o teście
    test_start(243, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -6, .height = -1};

                    int array[17][7] = {{ -1, 2, 5, -9, -6, 5, 5}, { 3, -10, 2, -1, -4, 6, -4}, { -5, 7, -1, 5, -8, -10, 5}, { 7, -3, 10, 9, -9, 10, 3}, { -5, -1, 5, -8, -3, 10, -5}, { 8, -4, -5, -5, -9, -3, -10}, { -5, -8, -7, 4, -4, 2, -1}, { 1, 3, -5, 6, -10, 1, -9}, { -7, -5, 10, 0, -7, -6, -8}, { -5, 4, -5, 10, 7, -9, -3}, { -3, -8, 4, 5, 10, -1, -3}, { 4, 0, 5, -9, -7, -8, 2}, { -5, -9, 1, 7, 9, 7, -6}, { 2, 6, 7, -8, -1, 6, -3}, { 10, -10, -2, 4, 10, 1, 8}, { 8, -9, 0, 7, -8, -3, -1}, { -9, -4, 1, -2, -9, 1, 1}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 7;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = 0, .height = 6};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 17;
                    arr_2.height = -7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 244: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST244(void)
{
    // informacje o teście
    test_start(244, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 3, .height = 10};

                    int array[17][7] = {{ 10, 0, -4, -1, 9, -9, -5}, { -3, -7, -4, 10, -4, -7, 1}, { -9, -6, -3, 1, 3, 6, -7}, { 2, -5, 2, 10, 3, -2, 2}, { -5, -1, -9, 10, -8, 1, 1}, { 6, 1, 2, -8, -8, -5, 2}, { -4, -9, -6, 4, 3, 2, 1}, { -5, 9, -6, 7, -5, -6, 0}, { 0, -9, -2, 0, 5, 6, 8}, { -10, -3, 5, -4, -7, -10, 4}, { -3, 4, -8, 9, 0, 1, 9}, { -2, 0, 9, 7, -7, -5, -8}, { 2, 10, 9, -7, 4, -2, -5}, { 1, 4, 2, -10, 0, 3, 2}, { -5, -1, -1, 7, 1, 5, -10}, { -4, 6, -10, 10, 3, -9, -10}, { 8, -4, 5, -9, 4, 2, -5}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 7;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = 4, .height = 7};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 0;
                    arr_2.height = 7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 245: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST245(void)
{
    // informacje o teście
    test_start(245, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -5, .height = 0};

                    int array[17][7] = {{ -9, 10, -1, -9, -6, -2, -7}, { 1, -3, 7, 4, 7, -10, -10}, { 2, 7, 0, 6, -10, 4, 2}, { 2, -1, -5, 1, -8, 8, -7}, { -2, 3, 6, -9, 2, 9, 0}, { 2, 1, -5, -10, -5, 10, 1}, { 1, 6, -9, -4, -2, -1, -8}, { 8, -9, -6, -3, 4, -5, 7}, { -3, 0, 2, 8, 4, -7, -7}, { 0, 2, 4, -6, 2, -10, -8}, { 1, 6, 9, 3, -8, 0, -5}, { 7, 0, 8, -7, -4, 6, 3}, { 9, 10, 9, -8, 4, -6, 4}, { 4, 4, -4, -4, 9, 0, 5}, { -4, 0, 6, 8, -1, -2, -2}, { -4, 3, 1, 3, 3, -1, -3}, { -1, 9, 10, 2, -3, 8, -6}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 7;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = 1, .height = 8};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 1;
                    arr_2.height = 17;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 246: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST246(void)
{
    // informacje o teście
    test_start(246, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 0, .height = 8};

                    int array[17][7] = {{ -6, 2, 7, -3, -10, -5, -5}, { 2, -6, -1, 9, 7, 10, -10}, { -8, -4, 1, -10, -10, 6, 1}, { 6, 8, -1, 2, 8, 6, -3}, { -8, -4, 10, -4, 8, -8, 5}, { -10, 3, 7, 2, 0, 2, 5}, { -2, -4, -5, -6, -3, -9, 3}, { 9, -6, -1, -6, 2, -8, -5}, { 6, -7, 0, -8, 3, 1, 0}, { 2, -3, 5, 1, 2, 7, 10}, { 0, -1, 5, 9, 2, -9, 5}, { 9, -10, 0, 1, 3, -7, 2}, { -4, -1, 10, 6, -9, -5, -6}, { 1, -2, -7, -4, 3, 6, -1}, { 9, -4, -5, 9, -2, 2, 1}, { 8, 5, 6, -9, 9, 8, 5}, { 2, -3, -4, 6, 6, 6, -6}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 7;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = 0, .height = 8};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 1;
                    arr_2.height = 0;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 247: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST247(void)
{
    // informacje o teście
    test_start(247, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 6, .height = 4};

                    int array[17][7] = {{ -5, 8, 4, 8, 3, 3, -4}, { -3, 4, 10, -3, -1, 2, 8}, { -9, -2, 1, -7, 0, -3, -9}, { 9, -7, -8, 3, 3, 0, 6}, { 7, -5, -2, -7, -6, 0, -7}, { 4, -2, 6, -2, 1, 0, -5}, { -3, 3, -6, -6, -2, 1, 1}, { -5, -1, 8, -4, -7, 5, 8}, { -8, 9, -7, 4, -10, -6, -5}, { -6, 10, -7, 2, 2, 1, 2}, { -2, 10, -10, 6, -1, 5, 7}, { 4, 0, 8, 5, 9, 7, 9}, { -8, 3, -6, -2, -6, -8, -1}, { -10, 6, 4, 3, -6, 2, 1}, { 6, -9, -9, -3, 5, 8, -2}, { 4, 8, -7, -1, -2, -6, -4}, { -2, -3, 5, 0, 5, 8, 0}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 7;
                    arr.height = -17;

                    struct matrix_t arr_2 = {.width = -9, .height = 3};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 248: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST248(void)
{
    // informacje o teście
    test_start(248, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 5, .height = -3};

                    int array[17][7] = {{ 2, -9, -10, -3, -6, 0, 8}, { 0, -10, 8, 4, 0, 10, -4}, { -10, 8, -9, 3, -3, 9, 7}, { -8, 8, 6, 5, 6, -3, 8}, { -1, 8, 10, -10, -5, 6, 9}, { 8, -5, -8, -9, -4, 2, -6}, { -5, -6, -6, -10, -9, 10, 4}, { 9, 9, -6, -4, 4, 7, 7}, { -7, 3, 3, 5, 3, 7, 0}, { 7, 3, -8, -8, 5, 1, -3}, { 6, 5, -6, 1, 5, -10, 0}, { 8, 0, -7, -2, 6, -8, 9}, { -10, -9, -7, 6, 4, -8, -7}, { -1, -8, -2, -8, -3, -6, 8}, { 2, 7, -1, -2, -8, -4, 1}, { 2, 0, -1, 1, -4, 7, -10}, { -6, -1, -2, 9, -2, 7, -1}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = -7;
                    arr.height = -17;

                    struct matrix_t arr_2 = {.width = -3, .height = -4};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 249: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST249(void)
{
    // informacje o teście
    test_start(249, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -4, .height = -10};

                    int array[17][7] = {{ -10, -7, 0, -7, 1, 10, -8}, { 5, 8, -4, 8, 10, -3, -4}, { 6, 2, 4, 9, 0, -5, 2}, { 10, 9, 0, 5, 3, -6, -7}, { -2, -9, -4, -3, -4, 5, -8}, { 7, -1, -10, 10, 10, 1, 4}, { 4, 5, 2, 1, 7, 4, 5}, { -1, -5, -9, 4, -7, 4, 5}, { 5, -3, 10, 8, -4, -8, 10}, { -6, 1, -9, 0, 9, -7, -2}, { 1, -4, 0, 9, 7, 3, 3}, { 3, -8, 2, 9, -2, 10, -10}, { -6, 0, -1, 6, -5, -8, 2}, { 3, 7, -5, -6, 7, -9, 7}, { 6, -5, 5, -6, 2, 5, -8}, { 8, 6, -6, 7, 6, 1, 4}, { 1, -9, 10, 10, 6, -10, 2}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = -7;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = 4, .height = 4};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 250: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST250(void)
{
    // informacje o teście
    test_start(250, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 5, .height = 10};

                    int array[17][7] = {{ -4, 0, -1, 7, 3, -9, 6}, { -6, -2, -4, 5, -3, -8, -6}, { 5, -2, -7, -7, -6, 8, 2}, { 9, 8, 10, -9, 3, 9, -10}, { -9, -7, -1, 8, -7, -9, -8}, { -6, 7, 8, -2, 2, 5, 0}, { -6, 5, 4, -7, 8, 1, 4}, { 1, -9, -8, -3, 10, 0, 4}, { -8, -2, 1, -1, 6, 3, -3}, { -2, 2, -4, -5, -10, -3, -7}, { 8, -8, 1, 3, -2, 5, 1}, { 0, -4, -10, -3, -2, 6, -2}, { 4, 6, 10, 6, 5, -8, 6}, { -7, 4, -2, 0, 8, 2, 7}, { -4, -5, -4, 0, -6, 0, -7}, { -4, 1, -6, 5, 3, -1, -2}, { 6, 2, 8, 7, -1, 5, 10}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 7;
                    arr.height = 0;

                    struct matrix_t arr_2 = {.width = 5, .height = -4};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 251: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST251(void)
{
    // informacje o teście
    test_start(251, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -4, .height = 8};

                    int array[17][7] = {{ 1, -6, 3, 3, 7, 6, 8}, { 4, 0, 7, 1, -6, -1, 0}, { -7, -9, 2, 1, 6, 6, -7}, { 10, 9, -3, -10, -9, -5, 2}, { -10, -9, -5, -5, 8, 0, -6}, { -8, -8, -3, 5, 4, -6, 2}, { 8, -10, -10, 9, -8, 5, 8}, { 6, 7, -9, 8, -9, 10, -8}, { -5, -2, -4, -2, -2, 2, -5}, { -8, 10, 2, 7, -10, 3, 3}, { 6, 6, 4, 10, 1, -8, 4}, { 6, 2, 4, -4, 7, 10, 6}, { -4, 10, 2, 7, -7, -7, -7}, { 7, 1, 1, 10, 2, 4, -7}, { 7, -3, 6, 8, 5, -3, -5}, { -6, -2, 7, 0, -4, 3, 4}, { 3, 3, 6, 5, -10, -10, 6}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 0;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = 0, .height = 0};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 252: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST252(void)
{
    // informacje o teście
    test_start(252, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 2, .height = -6};

                    int array[17][7] = {{ 8, -2, 1, -7, 10, -10, -5}, { -4, 10, 7, 5, -3, 8, -10}, { 9, 0, 7, 5, -1, 3, -9}, { -9, 6, -9, -5, 0, 1, 9}, { 0, -1, 9, -1, 8, 3, 10}, { -2, -6, -5, -8, 5, 3, 3}, { 3, -3, -7, -10, 10, -6, -9}, { 5, -9, -4, 7, -3, 5, 2}, { 8, -5, 4, 8, 9, 4, -6}, { -3, 1, -3, 5, -6, -3, 10}, { -7, 2, -10, -5, 6, -2, 2}, { -2, -7, 2, 8, -5, 7, 8}, { 6, -2, 2, -1, 8, -3, 2}, { 2, 7, 5, 10, 3, 7, 7}, { -5, -5, -7, 9, -1, 4, 8}, { 6, -5, -4, -9, -9, -7, 1}, { 7, -4, -6, -5, -7, -9, -4}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 0;
                    arr.height = 0;

                    struct matrix_t arr_2 = {.width = -7, .height = 6};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 253: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST253(void)
{
    // informacje o teście
    test_start(253, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = 1, .height = -5};

                    int array[17][7] = {{ 5, -9, -8, 0, 3, -7, -4}, { 1, 5, -3, 7, -7, -4, -6}, { -3, -8, -6, 0, 3, -1, 7}, { 9, -3, 1, -6, -4, 5, 4}, { -7, 3, -3, -5, 0, -8, -6}, { -1, 9, 0, -7, -5, -3, 2}, { 9, -10, -10, 8, 3, 2, -2}, { 1, -5, 0, 5, 6, 6, -6}, { 6, 7, -6, 6, -2, 4, 0}, { -5, 10, -4, 6, -5, 2, -3}, { 0, -2, -8, 1, 9, -4, -7}, { -5, 5, 3, 4, -1, 7, 8}, { 10, -5, -1, 6, -3, -6, -8}, { -3, 10, 7, 5, 7, -6, 7}, { 9, -8, 7, 10, -10, -3, -1}, { -7, 3, 2, -1, -1, 5, 4}, { 6, -3, 10, -3, 0, 9, -1}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 8;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = 8, .height = 2};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 254: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST254(void)
{
    // informacje o teście
    test_start(254, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct matrix_t arr = {.width = -7, .height = -9};

                    int array[17][7] = {{ -6, -1, 3, 5, -5, 7, 0}, { -8, 4, 8, 4, -1, 5, -1}, { -2, -9, 2, -10, -3, -4, -4}, { -10, 1, 5, -7, 2, -8, -4}, { -2, 5, -7, -4, 9, 2, -5}, { 1, -5, 3, 9, 6, 0, -2}, { 6, 4, 6, 1, 6, 9, -10}, { -8, -10, -8, -4, -9, -4, -7}, { -3, -3, 2, 6, 7, 3, 1}, { 5, -6, -10, -9, -8, 5, -1}, { 0, 3, -7, 1, -2, 5, -9}, { 9, 1, -8, -10, -8, -5, 0}, { 10, -10, 1, 10, 0, 7, -6}, { -4, -7, 1, 9, -8, -10, -9}, { -10, -7, -7, -9, -6, 4, 0}, { -6, 1, -7, 2, 7, -5, -5}, { 4, 2, 1, -9, -4, 2, 5}};

                    int res = matrix_create(&arr, 7, 17);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 17; ++i)
                        for (int j = 0; j < 7; ++j)
                            arr.ptr[i][j] = array[i][j];

                    arr.width = 7;
                    arr.height = 17;

                    struct matrix_t arr_2 = {.width = -10, .height = -6};

                    res = matrix_create(&arr_2, 17, 7);

                    test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                    test_error(arr_2.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr_2.width == 17, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 17, a ustawiła na %d", arr_2.width);
                    test_error(arr_2.height == 7, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 7, a ustawiła na %d", arr_2.height);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 17; ++j)
                            arr_2.ptr[i][j] = array[j][i];

                    arr_2.width = 17;
                    arr_2.height = 8;

                    printf("#####START#####");
                    struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                    printf("#####END#####");

                    test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

                    arr.width = 7;
                    arr.height = 17;

                    printf("#####START#####");
                    matrix_destroy(&arr);
                    printf("#####END#####");

                    arr_2.width = 17;
                    arr_2.height = 7;

                    printf("#####START#####");
                    matrix_destroy(&arr_2);
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
//  Test 255: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST255(void)
{
    // informacje o teście
    test_start(255, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = 17};

                int array[17][7] = {{ -6, -1, 3, 5, -5, 7, 0}, { -8, 4, 8, 4, -1, 5, -1}, { -2, -9, 2, -10, -3, -4, -4}, { -10, 1, 5, -7, 2, -8, -4}, { -2, 5, -7, -4, 9, 2, -5}, { 1, -5, 3, 9, 6, 0, -2}, { 6, 4, 6, 1, 6, 9, -10}, { -8, -10, -8, -4, -9, -4, -7}, { -3, -3, 2, 6, 7, 3, 1}, { 5, -6, -10, -9, -8, 5, -1}, { 0, 3, -7, 1, -2, 5, -9}, { 9, 1, -8, -10, -8, -5, 0}, { 10, -10, 1, 10, 0, 7, -6}, { -4, -7, 1, 9, -8, -10, -9}, { -10, -7, -7, -9, -6, 4, 0}, { -6, 1, -7, 2, 7, -5, -5}, { 4, 2, 1, -9, -4, 2, 5}};

                int res = matrix_create(&arr, 7, 17);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    for (int j = 0; j < 7; ++j)
                        arr.ptr[i][j] = array[i][j];

                struct matrix_t arr_2 = {.ptr = NULL, .width = 17, .height = 7};

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_multiply(&arr, &arr_2);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 256: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST256(void)
{
    // informacje o teście
    test_start(256, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = 17};

                int array[17][7] = {{ -6, -1, 3, 5, -5, 7, 0}, { -8, 4, 8, 4, -1, 5, -1}, { -2, -9, 2, -10, -3, -4, -4}, { -10, 1, 5, -7, 2, -8, -4}, { -2, 5, -7, -4, 9, 2, -5}, { 1, -5, 3, 9, 6, 0, -2}, { 6, 4, 6, 1, 6, 9, -10}, { -8, -10, -8, -4, -9, -4, -7}, { -3, -3, 2, 6, 7, 3, 1}, { 5, -6, -10, -9, -8, 5, -1}, { 0, 3, -7, 1, -2, 5, -9}, { 9, 1, -8, -10, -8, -5, 0}, { 10, -10, 1, 10, 0, 7, -6}, { -4, -7, 1, 9, -8, -10, -9}, { -10, -7, -7, -9, -6, 4, 0}, { -6, 1, -7, 2, 7, -5, -5}, { 4, 2, 1, -9, -4, 2, 5}};

                int res = matrix_create(&arr, 7, 17);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    for (int j = 0; j < 7; ++j)
                        arr.ptr[i][j] = array[i][j];

                struct matrix_t arr_2 = {.ptr = NULL, .width = 17, .height = 7};

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_multiply(&arr_2, &arr);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 257: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST257(void)
{
    // informacje o teście
    test_start(257, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = 17};

                int array[17][7] = {{ -6, -1, 3, 5, -5, 7, 0}, { -8, 4, 8, 4, -1, 5, -1}, { -2, -9, 2, -10, -3, -4, -4}, { -10, 1, 5, -7, 2, -8, -4}, { -2, 5, -7, -4, 9, 2, -5}, { 1, -5, 3, 9, 6, 0, -2}, { 6, 4, 6, 1, 6, 9, -10}, { -8, -10, -8, -4, -9, -4, -7}, { -3, -3, 2, 6, 7, 3, 1}, { 5, -6, -10, -9, -8, 5, -1}, { 0, 3, -7, 1, -2, 5, -9}, { 9, 1, -8, -10, -8, -5, 0}, { 10, -10, 1, 10, 0, 7, -6}, { -4, -7, 1, 9, -8, -10, -9}, { -10, -7, -7, -9, -6, 4, 0}, { -6, 1, -7, 2, 7, -5, -5}, { 4, 2, 1, -9, -4, 2, 5}};

                int res = matrix_create(&arr, 7, 17);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    for (int j = 0; j < 7; ++j)
                        arr.ptr[i][j] = array[i][j];

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_multiply(&arr, NULL);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 258: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST258(void)
{
    // informacje o teście
    test_start(258, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = 17};

                int array[17][7] = {{ -6, -1, 3, 5, -5, 7, 0}, { -8, 4, 8, 4, -1, 5, -1}, { -2, -9, 2, -10, -3, -4, -4}, { -10, 1, 5, -7, 2, -8, -4}, { -2, 5, -7, -4, 9, 2, -5}, { 1, -5, 3, 9, 6, 0, -2}, { 6, 4, 6, 1, 6, 9, -10}, { -8, -10, -8, -4, -9, -4, -7}, { -3, -3, 2, 6, 7, 3, 1}, { 5, -6, -10, -9, -8, 5, -1}, { 0, 3, -7, 1, -2, 5, -9}, { 9, 1, -8, -10, -8, -5, 0}, { 10, -10, 1, 10, 0, 7, -6}, { -4, -7, 1, 9, -8, -10, -9}, { -10, -7, -7, -9, -6, 4, 0}, { -6, 1, -7, 2, 7, -5, -5}, { 4, 2, 1, -9, -4, 2, 5}};

                int res = matrix_create(&arr, 7, 17);

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
                test_error(arr.height == 17, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 17, a ustawiła na %d", arr.height);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    for (int j = 0; j < 7; ++j)
                        arr.ptr[i][j] = array[i][j];

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_multiply(NULL, &arr);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 259: Sprawdzanie poprawności działania funkcji matrix_multiply
//
void UTEST259(void)
{
    // informacje o teście
    test_start(259, "Sprawdzanie poprawności działania funkcji matrix_multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                struct matrix_t *arr_t = matrix_multiply(NULL, NULL);
                printf("#####END#####");

                test_error(arr_t == NULL, "Funkcja matrix_multiply() powinna przypisać NULL pod wskaźnik przekazany w parametrze w przypadku niepowodzenia alokacji pamięci");

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
//  Test 260: Sprawdzanie poprawności działania funkcji matrix_display
//
void UTEST260(void)
{
    // informacje o teście
    test_start(260, "Sprawdzanie poprawności działania funkcji matrix_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct matrix_t arr = {.ptr = NULL, .width = 4, .height = 7};
        
            printf("\n***TEST 1***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            printf("\n***TEST 2***\n\n");
            printf("***START***\n");
            matrix_display(NULL);
            printf("***END***\n");

        
            int res = matrix_create(&arr, 7, 13);
            int array[13][7] = {{ -3, 10, -6, 8, 6, -2, 9}, { 3, 5, -10, -6, -6, 10, -6}, { 6, 7, 2, -1, -3, 8, -4}, { 10, -3, 5, 9, -1, -3, 4}, { -7, -3, -9, 2, 8, 3, 7}, { 8, 5, 6, -9, 3, 3, 4}, { 1, -9, -10, 10, -9, 1, 9}, { -5, 6, -7, 8, 10, 6, 0}, { -1, 6, 10, -7, 1, 2, -4}, { -4, -10, -8, -4, 9, -7, -6}, { -5, 6, 5, 8, -6, 9, 2}, { 3, 1, -4, -1, -8, -2, 4}, { 4, -6, -4, -2, -9, -6, 8}};

            test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
            test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr.width == 7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr.width);
            test_error(arr.height == 13, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 13, a ustawiła na %d", arr.height);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 13; ++i)
                for (int j = 0; j < 7; ++j)
                    arr.ptr[i][j] = array[i][j];


            arr.width = 0;
            arr.height = 13;

            printf("\n***TEST 3***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = -7;
            arr.height = 13;

            printf("\n***TEST 4***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = -7;
            arr.height = -13;

            printf("\n***TEST 5***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = 7;
            arr.height = -13;

            printf("\n***TEST 6***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = 7;
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

            arr.width = 7;
            arr.height = 13;

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
//  Test 1: Reakcja na brak pamięci - limit ustawiony na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
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
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 20 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 20 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(20);
    
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
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 388 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 388 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(388);
    
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
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 756 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 756 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(756);
    
    //
    // -----------
    //
    
            printf("***START***\n");
            int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
            printf("\n***END***\n");
            test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code);
        
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
            UTEST13, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 532 bajtów)
            UTEST14, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 104 bajtów)
            UTEST15, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 102080 bajtów)
            UTEST16, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST17, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 120 bajtów)
            UTEST18, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 136 bajtów)
            UTEST19, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 152 bajtów)
            UTEST20, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 168 bajtów)
            UTEST21, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 184 bajtów)
            UTEST22, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 200 bajtów)
            UTEST23, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 216 bajtów)
            UTEST24, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 232 bajtów)
            UTEST25, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 248 bajtów)
            UTEST26, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 264 bajtów)
            UTEST27, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 280 bajtów)
            UTEST28, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 296 bajtów)
            UTEST29, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 312 bajtów)
            UTEST30, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 328 bajtów)
            UTEST31, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 344 bajtów)
            UTEST32, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST33, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST34, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST35, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST36, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST37, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST38, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST39, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST40, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST41, // Sprawdzanie poprawności działania funkcji matrix_create_struct
            UTEST42, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 304 bajtów)
            UTEST43, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 88 bajtów)
            UTEST44, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 296816 bajtów)
            UTEST45, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST46, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST47, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 112 bajtów)
            UTEST48, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 136 bajtów)
            UTEST49, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 160 bajtów)
            UTEST50, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 184 bajtów)
            UTEST51, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 208 bajtów)
            UTEST52, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 232 bajtów)
            UTEST53, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 256 bajtów)
            UTEST54, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 280 bajtów)
            UTEST55, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 304 bajtów)
            UTEST56, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 328 bajtów)
            UTEST57, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 352 bajtów)
            UTEST58, // Sprawdzanie reakcji funkcji matrix_create_struct na limit pamięci (limit sterty ustawiono na 376 bajtów)
            UTEST59, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST60, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST61, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST62, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST63, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST64, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST65, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST66, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST67, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST68, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST69, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST70, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST71, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST72, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST73, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST74, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST75, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST76, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST77, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST78, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST79, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST80, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST81, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST82, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST83, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST84, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST85, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST86, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST87, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST88, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST89, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST90, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST91, // Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST92, // Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST93, // Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 32 bajtów)
            UTEST94, // Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 52 bajtów)
            UTEST95, // Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST96, // Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST97, // Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 32 bajtów)
            UTEST98, // Sprawdzanie reakcji funkcji matrix_load_b na limit pamięci (limit sterty ustawiono na 52 bajtów)
            UTEST99, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST100, // Sprawdzanie poprawności działania funkcji matrix_load_b
            UTEST101, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST102, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST103, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST104, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST105, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST106, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST107, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST108, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST109, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST110, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST111, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST112, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST113, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST114, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST115, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST116, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST117, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST118, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST119, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST120, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST121, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST122, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST123, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST124, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST125, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST126, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST127, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST128, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST129, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST130, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST131, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST132, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST133, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST134, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST135, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 48 bajtów)
            UTEST136, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 68 bajtów)
            UTEST137, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 88 bajtów)
            UTEST138, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 108 bajtów)
            UTEST139, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST140, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST141, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 48 bajtów)
            UTEST142, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 68 bajtów)
            UTEST143, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 88 bajtów)
            UTEST144, // Sprawdzanie reakcji funkcji matrix_load_t na limit pamięci (limit sterty ustawiono na 108 bajtów)
            UTEST145, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST146, // Sprawdzanie poprawności działania funkcji matrix_load_t
            UTEST147, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST148, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST149, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST150, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST151, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST152, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 128 bajtów)
            UTEST153, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 288 bajtów)
            UTEST154, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 672 bajtów)
            UTEST155, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 473 bajtów)
            UTEST156, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 87 bajtów)
            UTEST157, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 29 bajtów)
            UTEST158, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST159, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST160, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST161, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST162, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST163, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST164, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST165, // Sprawdzanie poprawności działania funkcji matrix_copy
            UTEST166, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST167, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST168, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST169, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST170, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST171, // Sprawdzanie reakcji funkcji matrix_add na limit pamięci (limit sterty ustawiono na 208 bajtów)
            UTEST172, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 278 bajtów)
            UTEST173, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 1355 bajtów)
            UTEST174, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 294 bajtów)
            UTEST175, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 74 bajtów)
            UTEST176, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 23 bajtów)
            UTEST177, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST178, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST179, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST180, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST181, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST182, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST183, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST184, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST185, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST186, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST187, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST188, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST189, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST190, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST191, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST192, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST193, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST194, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST195, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST196, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST197, // Sprawdzanie poprawności działania funkcji matrix_add
            UTEST198, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST199, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST200, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST201, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST202, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST203, // Sprawdzanie reakcji funkcji matrix_subtract na limit pamięci (limit sterty ustawiono na 232 bajtów)
            UTEST204, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 359 bajtów)
            UTEST205, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 1372 bajtów)
            UTEST206, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 287 bajtów)
            UTEST207, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 77 bajtów)
            UTEST208, // Sprawdzanie reakcji funkcji matrix_copy na limit pamięci (limit sterty ustawiono na 28 bajtów)
            UTEST209, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST210, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST211, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST212, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST213, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST214, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST215, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST216, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST217, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST218, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST219, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST220, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST221, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST222, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST223, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST224, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST225, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST226, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST227, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST228, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST229, // Sprawdzanie poprawności działania funkcji matrix_subtract
            UTEST230, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST231, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST232, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST233, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST234, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST235, // Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 344 bajtów)
            UTEST236, // Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 603 bajtów)
            UTEST237, // Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 2493 bajtów)
            UTEST238, // Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 358 bajtów)
            UTEST239, // Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 139 bajtów)
            UTEST240, // Sprawdzanie reakcji funkcji matrix_multiply na limit pamięci (limit sterty ustawiono na 43 bajtów)
            UTEST241, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST242, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST243, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST244, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST245, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST246, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST247, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST248, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST249, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST250, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST251, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST252, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST253, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST254, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST255, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST256, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST257, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST258, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST259, // Sprawdzanie poprawności działania funkcji matrix_multiply
            UTEST260, // Sprawdzanie poprawności działania funkcji matrix_display
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
            test_summary(260); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 20 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 388 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 756 bajtów
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
            test_summary(4); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}