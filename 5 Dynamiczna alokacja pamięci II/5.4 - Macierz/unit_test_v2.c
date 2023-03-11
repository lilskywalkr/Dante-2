/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Macierz
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-07 07:25:47.040759
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



        struct matrix_t{

          int **ptr;
          int width;
          int height;
        };

    


//
//  Test 1: Sprawdzanie poprawności działania funkcji destroy_array_2d
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji destroy_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct matrix_t arr = {.ptr = NULL, .width = 0, .height = 0};

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
//  Test 2: Sprawdzanie poprawności działania funkcji destroy_array_2d
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji destroy_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct matrix_t arr = {.ptr = NULL, .width = 1, .height = -2};

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
//  Test 3: Sprawdzanie poprawności działania funkcji destroy_array_2d
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji destroy_array_2d", __LINE__);

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
    

                struct matrix_t arr = {.width = 9, .height = -9};
                int width = 9, height = 20;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
                    test_error(arr.height == 20, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 20, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = -4, .height = -10};
                int width = 12, height = 6;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 12, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 12, a ustawiła na %d", arr.width);
                    test_error(arr.height == 6, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = 2, .height = 7};
                int width = 591, height = 720;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 591, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 591, a ustawiła na %d", arr.width);
                    test_error(arr.height == 720, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 720, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = -3, .height = -2};
                int width = 0, height = 17;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 0, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 0, a ustawiła na %d", arr.width);
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
    

                struct matrix_t arr = {.width = -1, .height = -5};
                int width = 1, height = 0;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
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
    

                struct matrix_t arr = {.width = 4, .height = -7};
                int width = 5, height = -15;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == 5, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr.width);
                    test_error(arr.height == -15, "Funkcja matrix_create() powinna ustawić wysokość macierzy na -15, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = -8, .height = -3};
                int width = -7, height = 11;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == -7, "Funkcja matrix_create() powinna ustawić szerokość macierzy na -7, a ustawiła na %d", arr.width);
                    test_error(arr.height == 11, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 11, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = 3, .height = -4};
                int width = -3, height = -13;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja matrix_create() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr.width == -3, "Funkcja matrix_create() powinna ustawić szerokość macierzy na -3, a ustawiła na %d", arr.width);
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
    

                struct matrix_t arr = {.width = 2, .height = 8};
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
//  Test 13: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 180 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 180 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(180);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -8, .height = 1};
                int width = 1, height = 15;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 1, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr.width);
                test_error(arr.height == 15, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 15, a ustawiła na %d", arr.height);

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
//  Test 14: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 408 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 408 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(408);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -1, .height = -8};
                int width = 15, height = 6;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 15, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 15, a ustawiła na %d", arr.width);
                test_error(arr.height == 6, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 6, a ustawiła na %d", arr.height);

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
//  Test 15: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 1459192 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 1459192 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1459192);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -4, .height = -1};
                int width = 992, height = 367;        

                printf("#####START#####");
                int res = matrix_create(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr.width == 992, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 992, a ustawiła na %d", arr.width);
                test_error(arr.height == 367, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 367, a ustawiła na %d", arr.height);

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
    

                struct matrix_t arr = {.width = -10, .height = -6};
                int width = 992, height = 367;        

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
//  Test 17: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 112 bajtów)
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 112 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(112);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = 5};
                int width = 992, height = 367;        

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
//  Test 18: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 132 bajtów)
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 132 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(132);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -9, .height = 3};
                int width = 992, height = 367;        

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
    

                struct matrix_t arr = {.width = 5, .height = 10};
                int width = 992, height = 367;        

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
//  Test 20: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 172 bajtów)
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 172 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(172);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 1, .height = -10};
                int width = 992, height = 367;        

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
//  Test 21: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 192 bajtów)
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 192 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(192);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -9, .height = 9};
                int width = 992, height = 367;        

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
//  Test 22: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 212 bajtów)
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 212 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(212);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 1, .height = -1};
                int width = 992, height = 367;        

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
//  Test 23: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 232 bajtów)
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 232 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(232);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 3, .height = 10};
                int width = 992, height = 367;        

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
//  Test 24: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 252 bajtów)
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 252 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(252);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 2, .height = 8};
                int width = 992, height = 367;        

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
//  Test 25: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 272 bajtów)
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 272 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(272);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -1, .height = 3};
                int width = 992, height = 367;        

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
//  Test 26: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 292 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 292 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(292);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -10, .height = 8};
                int width = 992, height = 367;        

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
//  Test 27: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 312 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 312 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(312);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = -3};
                int width = 992, height = 367;        

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
//  Test 28: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 332 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 332 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(332);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 9, .height = 7};
                int width = 992, height = 367;        

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
//  Test 29: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 352 bajtów)
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 352 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(352);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = 7, .height = -3};
                int width = 992, height = 367;        

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
//  Test 30: Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 372 bajtów)
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 372 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(372);
    
    //
    // -----------
    //
    

                struct matrix_t arr = {.width = -1, .height = -2};
                int width = 992, height = 367;        

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
//  Test 31: Sprawdzanie poprawności działania funkcji matrix_create
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji matrix_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int width = 1, height = 19;        

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
//  Test 32: Sprawdzanie poprawności działania funkcji matrix_display
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji matrix_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct matrix_t arr = {.ptr = NULL, .width = 4, .height = 4};
        
            printf("\n***TEST 1***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            printf("\n***TEST 2***\n\n");
            printf("***START***\n");
            matrix_display(NULL);
            printf("***END***\n");

        
            int res = matrix_create(&arr, 9, 19);
            int array[19][9] = {{ 2, 3, 0, 6, 2, -1, -2, 3, 2}, { -2, -3, -8, 5, -8, 0, -3, 0, -4}, { 5, 4, -10, 4, -8, -3, 1, 8, 4}, { 5, 3, 5, -8, 7, 7, 1, 1, 1}, { 0, 2, 2, -2, -9, 7, 9, 8, -3}, { 10, -2, -5, -9, 3, 1, 3, -5, 7}, { 0, -3, -4, 4, -9, -1, -1, 9, -4}, { 0, 3, -2, 5, 4, 5, 5, -7, -9}, { -1, 3, 6, -3, -6, -3, 7, 4, 7}, { -2, -3, -6, 4, -9, -9, -3, 7, -10}, { -7, 6, -4, -9, 4, 4, 2, -4, -2}, { 3, 8, 3, -9, -3, -5, 8, 7, -10}, { -3, 4, 3, 2, -5, 3, 6, 2, 10}, { 2, 8, -4, -2, -5, -8, -5, -2, 5}, { 2, 3, -3, -3, -8, 10, -4, 5, 3}, { 7, -9, -5, -10, 3, -8, -6, 4, -10}, { -3, -4, -2, -5, 7, 5, 9, -9, 5}, { -10, -10, -4, 1, 10, -3, 9, 10, 10}, { -6, -10, -10, 8, 1, -2, -9, 8, 10}};

            test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
            test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
            test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 19; ++i)
                for (int j = 0; j < 9; ++j)
                    arr.ptr[i][j] = array[i][j];


            arr.width = 0;
            arr.height = 19;

            printf("\n***TEST 3***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = -9;
            arr.height = 19;

            printf("\n***TEST 4***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = -9;
            arr.height = -19;

            printf("\n***TEST 5***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = 9;
            arr.height = -19;

            printf("\n***TEST 6***\n\n");
            printf("***START***\n");
            matrix_display(&arr);
            printf("***END***\n");

            arr.width = 9;
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

            arr.width = 9;
            arr.height = 19;

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
//  Test 33: Sprawdzanie poprawności działania funkcji matrix_read
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji matrix_read", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct matrix_t arr = {.ptr = NULL, .width = 5, .height = 9};

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


            res = matrix_create(&arr, 9, 19);
            int array[19][9] = {{ 2, 3, 0, 6, 2, -1, -2, 3, 2}, { -2, -3, -8, 5, -8, 0, -3, 0, -4}, { 5, 4, -10, 4, -8, -3, 1, 8, 4}, { 5, 3, 5, -8, 7, 7, 1, 1, 1}, { 0, 2, 2, -2, -9, 7, 9, 8, -3}, { 10, -2, -5, -9, 3, 1, 3, -5, 7}, { 0, -3, -4, 4, -9, -1, -1, 9, -4}, { 0, 3, -2, 5, 4, 5, 5, -7, -9}, { -1, 3, 6, -3, -6, -3, 7, 4, 7}, { -2, -3, -6, 4, -9, -9, -3, 7, -10}, { -7, 6, -4, -9, 4, 4, 2, -4, -2}, { 3, 8, 3, -9, -3, -5, 8, 7, -10}, { -3, 4, 3, 2, -5, 3, 6, 2, 10}, { 2, 8, -4, -2, -5, -8, -5, -2, 5}, { 2, 3, -3, -3, -8, 10, -4, 5, 3}, { 7, -9, -5, -10, 3, -8, -6, 4, -10}, { -3, -4, -2, -5, 7, 5, 9, -9, 5}, { -10, -10, -4, 1, 10, -3, 9, 10, 10}, { -6, -10, -10, 8, 1, -2, -9, 8, 10}};

            test_error(res == 0, "Funkcja matrix_create() powinna zwrócić 0");
            test_error(arr.ptr != NULL, "Funkcja matrix_create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr.width == 9, "Funkcja matrix_create() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr.width);
            test_error(arr.height == 19, "Funkcja matrix_create() powinna ustawić wysokość macierzy na 19, a ustawiła na %d", arr.height);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem);

            arr.width = 0;
            arr.height = 19;

            printf("\n***TEST 3***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = -9;
            arr.height = 19;

            printf("\n***TEST 4***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = -9;
            arr.height = -19;

            printf("\n***TEST 5***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = 9;
            arr.height = -19;

            printf("\n***TEST 6***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 1, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 1, a zwróciła %d", res);

            arr.width = 9;
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

            arr.width = 9;
            arr.height = 19;

            printf("\n***TEST 9***\n\n");
            printf("#####START#####");
            res = matrix_read(&arr);
            printf("#####END#####");
            test_error(res == 0, "Funkcja matrix_read() zwróciła nieprawidłową wartość, powinna zwrócić 0, a zwróciła %d", res);

            int ok = 0;
            
            for (int i = 0; i < 19; ++i)
                for (int j = 0; j < 9; ++j)
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
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 152 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 152 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(152);
    
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
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 188 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 188 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(188);
    
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
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 224 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 224 bajtów", __LINE__);

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
//  Test 5: Reakcja na brak pamięci - limit ustawiony na 260 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit ustawiony na 260 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(260);
    
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
//  Test 6: Reakcja na brak pamięci - limit ustawiony na 296 bajtów
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na brak pamięci - limit ustawiony na 296 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(296);
    
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
//  Test 7: Reakcja na brak pamięci - limit ustawiony na 332 bajtów
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na brak pamięci - limit ustawiony na 332 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(332);
    
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
//  Test 8: Reakcja na brak pamięci - limit ustawiony na 368 bajtów
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na brak pamięci - limit ustawiony na 368 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(368);
    
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
//  Test 9: Reakcja na brak pamięci - limit ustawiony na 404 bajtów
//
void MTEST9(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(9, "Reakcja na brak pamięci - limit ustawiony na 404 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(404);
    
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
//  Test 10: Reakcja na brak pamięci - limit ustawiony na 440 bajtów
//
void MTEST10(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(10, "Reakcja na brak pamięci - limit ustawiony na 440 bajtów", __LINE__);

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
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Reakcja na brak pamięci - limit ustawiony na 476 bajtów
//
void MTEST11(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(11, "Reakcja na brak pamięci - limit ustawiony na 476 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(476);
    
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
//  Test 12: Reakcja na brak pamięci - limit ustawiony na 512 bajtów
//
void MTEST12(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(12, "Reakcja na brak pamięci - limit ustawiony na 512 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(512);
    
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
//  Test 13: Reakcja na brak pamięci - limit ustawiony na 548 bajtów
//
void MTEST13(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(13, "Reakcja na brak pamięci - limit ustawiony na 548 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(548);
    
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
//  Test 14: Reakcja na brak pamięci - limit ustawiony na 584 bajtów
//
void MTEST14(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(14, "Reakcja na brak pamięci - limit ustawiony na 584 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(584);
    
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
//  Test 15: Reakcja na brak pamięci - limit ustawiony na 620 bajtów
//
void MTEST15(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(15, "Reakcja na brak pamięci - limit ustawiony na 620 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(620);
    
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
//  Test 16: Reakcja na brak pamięci - limit ustawiony na 656 bajtów
//
void MTEST16(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(16, "Reakcja na brak pamięci - limit ustawiony na 656 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(656);
    
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
//  Test 17: Reakcja na brak pamięci - limit ustawiony na 692 bajtów
//
void MTEST17(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(17, "Reakcja na brak pamięci - limit ustawiony na 692 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(692);
    
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
//  Test 18: Reakcja na brak pamięci - limit ustawiony na 728 bajtów
//
void MTEST18(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(18, "Reakcja na brak pamięci - limit ustawiony na 728 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(728);
    
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
//  Test 19: Reakcja na brak pamięci - limit ustawiony na 764 bajtów
//
void MTEST19(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(19, "Reakcja na brak pamięci - limit ustawiony na 764 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(764);
    
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
//  Test 20: Reakcja na brak pamięci - limit ustawiony na 800 bajtów
//
void MTEST20(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(20, "Reakcja na brak pamięci - limit ustawiony na 800 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(800);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji destroy_array_2d
            UTEST2, // Sprawdzanie poprawności działania funkcji destroy_array_2d
            UTEST3, // Sprawdzanie poprawności działania funkcji destroy_array_2d
            UTEST4, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST5, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST6, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST7, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST8, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST9, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST10, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST11, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST12, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST13, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 180 bajtów)
            UTEST14, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 408 bajtów)
            UTEST15, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 1459192 bajtów)
            UTEST16, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST17, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 112 bajtów)
            UTEST18, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 132 bajtów)
            UTEST19, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 152 bajtów)
            UTEST20, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 172 bajtów)
            UTEST21, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 192 bajtów)
            UTEST22, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 212 bajtów)
            UTEST23, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 232 bajtów)
            UTEST24, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 252 bajtów)
            UTEST25, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 272 bajtów)
            UTEST26, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 292 bajtów)
            UTEST27, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 312 bajtów)
            UTEST28, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 332 bajtów)
            UTEST29, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 352 bajtów)
            UTEST30, // Sprawdzanie reakcji funkcji matrix_create na limit pamięci (limit sterty ustawiono na 372 bajtów)
            UTEST31, // Sprawdzanie poprawności działania funkcji matrix_create
            UTEST32, // Sprawdzanie poprawności działania funkcji matrix_display
            UTEST33, // Sprawdzanie poprawności działania funkcji matrix_read
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
            test_summary(33); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 152 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 188 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 224 bajtów
            MTEST5, // Reakcja na brak pamięci - limit ustawiony na 260 bajtów
            MTEST6, // Reakcja na brak pamięci - limit ustawiony na 296 bajtów
            MTEST7, // Reakcja na brak pamięci - limit ustawiony na 332 bajtów
            MTEST8, // Reakcja na brak pamięci - limit ustawiony na 368 bajtów
            MTEST9, // Reakcja na brak pamięci - limit ustawiony na 404 bajtów
            MTEST10, // Reakcja na brak pamięci - limit ustawiony na 440 bajtów
            MTEST11, // Reakcja na brak pamięci - limit ustawiony na 476 bajtów
            MTEST12, // Reakcja na brak pamięci - limit ustawiony na 512 bajtów
            MTEST13, // Reakcja na brak pamięci - limit ustawiony na 548 bajtów
            MTEST14, // Reakcja na brak pamięci - limit ustawiony na 584 bajtów
            MTEST15, // Reakcja na brak pamięci - limit ustawiony na 620 bajtów
            MTEST16, // Reakcja na brak pamięci - limit ustawiony na 656 bajtów
            MTEST17, // Reakcja na brak pamięci - limit ustawiony na 692 bajtów
            MTEST18, // Reakcja na brak pamięci - limit ustawiony na 728 bajtów
            MTEST19, // Reakcja na brak pamięci - limit ustawiony na 764 bajtów
            MTEST20, // Reakcja na brak pamięci - limit ustawiony na 800 bajtów
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
            test_summary(20); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}