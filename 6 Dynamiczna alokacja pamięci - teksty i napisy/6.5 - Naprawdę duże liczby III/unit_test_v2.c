/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Naprawdę duże liczby III
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-30 17:25:36.266994
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
//  Test 1: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1040 bajtów)
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1040 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1040);
    
    //
    // -----------
    //
    

                struct big_numbers_t arr;

                int err_code = create(&arr, 64);

                test_error(err_code == 0, "Funkcja create() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr.big_number != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr.size == 0, "Funkcja create() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr.size);
                    test_error(arr.capacity == 64, "Funkcja create() powinna ustawić pojemność tablicy na 64, a ustawiła na %d", arr.capacity);

                    destroy(&arr);

                }

                test_no_heap_leakage();
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
//  Test 2: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 3600 bajtów)
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 3600 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3600);
    
    //
    // -----------
    //
    

                struct big_numbers_t arr;

                int err_code = create(&arr, 224);

                test_error(err_code == 0, "Funkcja create() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr.big_number != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr.size == 0, "Funkcja create() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr.size);
                    test_error(arr.capacity == 224, "Funkcja create() powinna ustawić pojemność tablicy na 224, a ustawiła na %d", arr.capacity);

                    destroy(&arr);

                }

                test_no_heap_leakage();
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
//  Test 3: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 88128 bajtów)
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 88128 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(88128);
    
    //
    // -----------
    //
    

                struct big_numbers_t arr;

                int err_code = create(&arr, 5507);

                test_error(err_code == 0, "Funkcja create() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr.big_number != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr.size == 0, "Funkcja create() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr.size);
                    test_error(arr.capacity == 5507, "Funkcja create() powinna ustawić pojemność tablicy na 5507, a ustawiła na %d", arr.capacity);

                    destroy(&arr);

                }

                test_no_heap_leakage();
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
//  Test 4: Sprawdzanie poprawności działania funkcji create
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct big_numbers_t arr;

                int err_code = create(&arr, 0);

                test_error(err_code == 1, "Funkcja create() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr.big_number != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr.size == 0, "Funkcja create() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr.size);
                    test_error(arr.capacity == 0, "Funkcja create() powinna ustawić pojemność tablicy na 0, a ustawiła na %d", arr.capacity);

                    destroy(&arr);

                }

                test_no_heap_leakage();
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
//  Test 5: Sprawdzanie poprawności działania funkcji create
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct big_numbers_t arr;

                int err_code = create(&arr, -19);

                test_error(err_code == 1, "Funkcja create() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr.big_number != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr.size == 0, "Funkcja create() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr.size);
                    test_error(arr.capacity == -19, "Funkcja create() powinna ustawić pojemność tablicy na -19, a ustawiła na %d", arr.capacity);

                    destroy(&arr);

                }

                test_no_heap_leakage();
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
//  Test 6: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                struct big_numbers_t arr;

                int err_code = create(&arr, 36);

                test_error(err_code == 2, "Funkcja create() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);

                test_no_heap_leakage();
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
//  Test 7: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 99 bajtów)
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 99 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(99);
    
    //
    // -----------
    //
    

                struct big_numbers_t arr;

                int err_code = create(&arr, 36);

                test_error(err_code == 2, "Funkcja create() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);

                test_no_heap_leakage();
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
//  Test 8: Sprawdzanie poprawności działania funkcji create
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                   int err_code = create(NULL, 10);

                   test_error(err_code == 1, "Funkcja create() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

                   test_no_heap_leakage();
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
//  Test 9: Sprawdzanie poprawności działania funkcji destroy
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            destroy(NULL);

            test_no_heap_leakage();
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
//  Test 10: Sprawdzanie poprawności działania funkcji create_big_numbers (limit sterty ustawiono na 568 bajtów)
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji create_big_numbers (limit sterty ustawiono na 568 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(568);
    
    //
    // -----------
    //
    

                struct big_numbers_t *arr;

                int err_code = create_big_numbers(&arr, 69);

                test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_big_numbers() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 69, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 69, a ustawiła na %d", arr->capacity);

                    destroy_big_numbers(&arr);

                }

                test_no_heap_leakage();
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
//  Test 11: Sprawdzanie poprawności działania funkcji create_big_numbers (limit sterty ustawiono na 672 bajtów)
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji create_big_numbers (limit sterty ustawiono na 672 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(672);
    
    //
    // -----------
    //
    

                struct big_numbers_t *arr;

                int err_code = create_big_numbers(&arr, 82);

                test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_big_numbers() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 82, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 82, a ustawiła na %d", arr->capacity);

                    destroy_big_numbers(&arr);

                }

                test_no_heap_leakage();
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
//  Test 12: Sprawdzanie poprawności działania funkcji create_big_numbers (limit sterty ustawiono na 28216 bajtów)
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji create_big_numbers (limit sterty ustawiono na 28216 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(28216);
    
    //
    // -----------
    //
    

                struct big_numbers_t *arr;

                int err_code = create_big_numbers(&arr, 3525);

                test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_big_numbers() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 3525, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 3525, a ustawiła na %d", arr->capacity);

                    destroy_big_numbers(&arr);

                }

                test_no_heap_leakage();
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
//  Test 13: Sprawdzanie poprawności działania funkcji create_big_numbers
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji create_big_numbers", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct big_numbers_t *arr;

                int err_code = create_big_numbers(&arr, 0);

                test_error(err_code == 1, "Funkcja create_big_numbers() powinna zwrócić kod błędu 1, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_big_numbers() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 0, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 0, a ustawiła na %d", arr->capacity);

                    destroy_big_numbers(&arr);

                }

                test_no_heap_leakage();
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
//  Test 14: Sprawdzanie poprawności działania funkcji create_big_numbers
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji create_big_numbers", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct big_numbers_t *arr;

                int err_code = create_big_numbers(&arr, -20);

                test_error(err_code == 1, "Funkcja create_big_numbers() powinna zwrócić kod błędu 1, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_big_numbers() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == -20, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na -20, a ustawiła na %d", arr->capacity);

                    destroy_big_numbers(&arr);

                }

                test_no_heap_leakage();
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
//  Test 15: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                struct big_numbers_t *arr;

                int err_code = create_big_numbers(&arr, 55);

                test_error(err_code == 2, "Funkcja create_big_numbers() powinna zwrócić kod błędu 2, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr == NULL, "Funkcja create_big_numbers() powinna zwrócić NULL");

                test_no_heap_leakage();
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
//  Test 16: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                struct big_numbers_t *arr;

                int err_code = create_big_numbers(&arr, 55);

                test_error(err_code == 2, "Funkcja create_big_numbers() powinna zwrócić kod błędu 2, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr == NULL, "Funkcja create_big_numbers() powinna zwrócić NULL");

                test_no_heap_leakage();
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
//  Test 17: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 440 bajtów)
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 440 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(440);
    
    //
    // -----------
    //
    

                struct big_numbers_t *arr;

                int err_code = create_big_numbers(&arr, 55);

                test_error(err_code == 2, "Funkcja create_big_numbers() powinna zwrócić kod błędu 2, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr == NULL, "Funkcja create_big_numbers() powinna zwrócić NULL");

                test_no_heap_leakage();
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
//  Test 18: Sprawdzanie poprawności działania funkcji create_big_numbers
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji create_big_numbers", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                   int err_code = create_big_numbers(NULL, 9);

                   test_error(err_code == 1, "Funkcja create_big_numbers() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

                   test_no_heap_leakage();
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
//  Test 19: Sprawdzanie poprawności działania funkcji create_big_numbers
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji create_big_numbers", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct big_numbers_t *arr;

            int err_code = create_big_numbers(&arr, 15);
            test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            arr->size = -19;
           
            destroy_big_numbers(&arr);

            arr->size = 0;

            destroy_big_numbers(&arr);
                
            test_no_heap_leakage();
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
//  Test 20: Sprawdzanie poprawności działania funkcji create_big_numbers
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji create_big_numbers", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct big_numbers_t *arr;

            int err_code = create_big_numbers(&arr, 15);
            test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            arr->capacity = -17;

            destroy_big_numbers(&arr);

            arr->capacity = 15;

            destroy_big_numbers(&arr);

            test_no_heap_leakage();
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
//  Test 21: Sprawdzanie poprawności działania funkcji create_big_numbers
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji create_big_numbers", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct big_numbers_t *arr;

            int err_code = create_big_numbers(&arr, 15);
            test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            arr->size = 32;

            destroy_big_numbers(&arr);

            arr->size = 0;

            destroy_big_numbers(&arr);

            test_no_heap_leakage();
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
//  Test 22: Sprawdzanie poprawności działania funkcji create_big_numbers
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji create_big_numbers", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

              struct big_numbers_t *arr;

              int err_code = create_big_numbers(&arr, 15);
              test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

              char **big_number = arr->big_number;
              arr->big_number = NULL;
        
              destroy_big_numbers(&arr);

              arr->big_number = big_number;

              destroy_big_numbers(&arr);

              test_no_heap_leakage();
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
//  Test 23: Sprawdzanie poprawności działania funkcji add_big_number (limit sterty ustawiony na 130)
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji add_big_number (limit sterty ustawiony na 130)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(130);
    
    //
    // -----------
    //
    

               char *tab[] = { "-130", "-552", "603", "-695", "-618", "720", "-28", "-179", "-266" };
               
               struct big_numbers_t *arr;

               int err_code = create_big_numbers(&arr, 9);
               test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

               onerror_terminate();

               test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
               test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
               test_error(arr->capacity == 9, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

               onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

               for (int i = 0; i < 9; ++i)
               {
                   int err_code = add_big_number(arr, *(tab + i));
                   test_error(err_code == 0, "Funkcja add_big_number() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                   test_error(arr->size == i + 1, "Funkcja add_big_number() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                   test_error(arr->capacity == 9, "Funkcja add_big_number() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 9 na %d", arr->capacity);
               }

               for (int i = 0; i < 9; ++i)
                   test_error(strcmp(*(arr->big_number + i), *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), *(arr->big_number + i));


               onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

               destroy_big_numbers(&arr);

               test_no_heap_leakage();
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
//  Test 24: Sprawdzanie poprawności działania funkcji add_big_number (limit sterty ustawiony na 130)
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji add_big_number (limit sterty ustawiony na 130)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(130);
    
    //
    // -----------
    //
    

               char *tab[] = { "-130", "-552", "603", "-695", "-618", "720", "-28", "-179", "-266" };

               struct big_numbers_t *arr;

               int err_code = create_big_numbers(&arr, 9);
               test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

               onerror_terminate();

               test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
               test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
               test_error(arr->capacity == 9, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

               onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

               for (int i = 0; i < 9; ++i)
               {
                   int err_code = add_big_number(arr, *(tab + i));
                   test_error(err_code == 0, "Funkcja add_big_number() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                   test_error(arr->size == i + 1, "Funkcja add_big_number() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                   test_error(arr->capacity == 9, "Funkcja add_big_number() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 9 na %d", arr->capacity);
               }

               for (int i = 0; i < 9; ++i)
                   test_error(strcmp(*(arr->big_number + i), *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), *(arr->big_number + i));


               onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

               err_code = add_big_number(arr, "244");
               test_error(err_code == 3, "Funkcja add_big_number() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
               test_error(arr->size == 9, "Funkcja add_big_number() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 9, arr->size);
               test_error(arr->capacity == 9, "Funkcja add_big_number() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 9 na %d", arr->capacity);


               destroy_big_numbers(&arr);

               test_no_heap_leakage();
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
//  Test 25: Sprawdzanie poprawności działania funkcji add_big_number (limit sterty ustawiony na 113)
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji add_big_number (limit sterty ustawiony na 113)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(113);
    
    //
    // -----------
    //
    

               char *tab[] = { "301", "-496", "931", "612", "786", "192", "352", "402", "-262", "-662" };

               struct big_numbers_t *arr;

               int err_code = create_big_numbers(&arr, 10);
               test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

               onerror_terminate();

               test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
               test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
               test_error(arr->capacity == 10, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->capacity);

               onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

               for (int i = 0; i < 4; ++i)
               {
                   int err_code = add_big_number(arr, *(tab + i));
                   test_error(err_code == 0, "Funkcja add_big_number() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                   onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                   test_error(arr->size == i + 1, "Funkcja add_big_number() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                   test_error(arr->capacity == 10, "Funkcja add_big_number() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 10 na %d", arr->capacity);
               }

               for (int i = 0; i < 4; ++i)
                   test_error(strcmp(*(arr->big_number + i), *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), *(arr->big_number + i));

               for (int i = 4; i < 10; ++i)
               {
                   int err_code = add_big_number(arr, *(tab + i));
                   test_error(err_code == 2, "Funkcja add_big_number() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                   onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                   test_error(arr->size == 4, "Funkcja add_big_number() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 4, arr->size);
                   test_error(arr->capacity == 10, "Funkcja add_big_number() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 10 na %d", arr->capacity);
               }

               for (int i = 0; i < 4; ++i)
                   test_error(strcmp(*(arr->big_number + i), *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), *(arr->big_number + i));
                   
               onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

               destroy_big_numbers(&arr);

               test_no_heap_leakage();
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
//  Test 26: Sprawdzanie poprawności działania funkcji create_big_numbers
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji create_big_numbers", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "-662";

            struct big_numbers_t *arr;

            int err_code = create_big_numbers(&arr, 10);
            test_error(err_code == 0, "Funkcja create_big_numbers() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            onerror_terminate();

            test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 10, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->size = -7;

            err_code = add_big_number(arr, add_word);

            test_error(err_code == 1, "Funkcja create_big_numbers() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 0;

            destroy_big_numbers(&arr);

            test_no_heap_leakage();
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
//  Test 27: Sprawdzanie poprawności działania funkcji add_big_number
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji add_big_number", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "-662";

            struct big_numbers_t *arr;

            int err_code = create_big_numbers(&arr, 10);
            test_error(arr != NULL, "Funkcja create_big_numbers() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 10, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->size = -3;
            arr->capacity = arr->size + 1;

            err_code = add_big_number(arr, add_word);

            test_error(err_code == 1, "Funkcja add_big_number() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 0;
            arr->capacity = 10;

            destroy_big_numbers(&arr);

            test_no_heap_leakage();
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
//  Test 28: Sprawdzanie poprawności działania funkcji add_big_number
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji add_big_number", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "-662";

            struct big_numbers_t *arr;

            int err_code = create_big_numbers(&arr, 10);
            test_error(arr != NULL, "Funkcja create_big_numbers() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->big_number != NULL, "Funkcja create_big_numbers() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_big_numbers() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 10, "Funkcja create_big_numbers() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            char **temp_big_number = arr->big_number;
            arr->big_number = NULL;

            err_code = add_big_number(arr, add_word);

            test_error(err_code == 1, "Funkcja add_big_number() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->big_number = temp_big_number;

            destroy_big_numbers(&arr);

            test_no_heap_leakage();
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
//  Test 29: Sprawdzanie poprawności działania funkcji add_big_number
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji add_big_number", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "-662";

            int err_code = add_big_number(NULL, add_word);

            test_error(err_code == 1, "Funkcja add_big_number() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
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
//  Test 30: Sprawdzanie poprawności działania funkcji add_big_number
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji add_big_number", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct big_numbers_t arr;

            int err_code = add_big_number(&arr, NULL);

            test_error(err_code == 1, "Funkcja add_big_number() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
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
//  Test 31: Sprawdzanie poprawności działania funkcji add_big_number
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji add_big_number", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = add_big_number(NULL, NULL);

            test_error(err_code == 1, "Funkcja add_big_number() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            test_no_heap_leakage();
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
//  Test 32: Sprawdzanie poprawności działania funkcji add_big_number
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji add_big_number", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "0-9", "06", "6\n", "\n5\n", "", "4-5\n", "8bLBFNqfChyQeO", "-9.10" };

            struct big_numbers_t arr;

            int err_code = create(&arr, 8);
            test_error(err_code == 0, "Funkcja create() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(arr.big_number != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr.size == 0, "Funkcja create() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 0, arr.size);
            test_error(arr.capacity == 8, "Funkcja create() powinna ustawić pojemność tablicy na 8, a ustawiła na %d", arr.capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 8; ++i)
            {
                err_code = add_big_number(&arr, *(tab + i));
                test_error(err_code == 1, "Funkcja add_big_number() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);
                test_error(arr.size == 0, "Funkcja add_big_number() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 0, arr.size);
                test_error(arr.capacity == 8, "Funkcja add_big_number() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 8 na %d", arr.capacity);
            }
            
            destroy(&arr);

            test_no_heap_leakage();
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
//  Test 33: Sprawdzanie poprawności działania funkcji display
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct big_numbers_t arr;
            char *tab[] = {"5", "7", "-8", "-2", "10", "-5"};
            arr.big_number = tab;

    //-------------1-----------------------

            printf("***START***\n");
            display(NULL);
            printf("***END***\n");


    //-------------2-----------------------

            arr.capacity = 6 - 1;
            arr.size = 6;

            printf("***START***\n");
            display(&arr);
            printf("***END***\n");


    //-------------3-----------------------

            arr.capacity = 6;
            arr.size = -40;

            printf("***START***\n");
            display(&arr);
            printf("***END***\n");


    //-------------4-----------------------

            arr.capacity = 6 - 1;
            arr.size = 0;

            printf("***START***\n");
            display(&arr);
            printf("***END***\n");

    //-------------5-----------------------

            arr.capacity = 6;
            arr.size = 6;
            arr.big_number = NULL;

            printf("***START***\n");
            display(&arr);
            printf("***END***\n");

    //-------------6-----------------------

            arr.capacity = 6;
            arr.size = 6;
            arr.big_number = tab;

            printf("***START***\n");
            display(&arr);
            printf("***END***\n");

    //-------------7-----------------------

            arr.capacity = 6;
            arr.size = 6 - 1;


            printf("***START***\n");
            display(&arr);
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
//  Test 1: Reakcja na brak pamięci (limit sterty ustawiono na 0 bajtów)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

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
//  Test 2: Reakcja na brak pamięci (limit sterty ustawiono na 16 bajtów)
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

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
//  Test 3: Reakcja na brak pamięci (limit sterty ustawiono na 60 bajtów)
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci (limit sterty ustawiono na 60 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(60);
    
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
//  Test 4: Reakcja na brak pamięci (limit sterty ustawiono na 200 bajtów)
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci (limit sterty ustawiono na 200 bajtów)", __LINE__);

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
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Reakcja na brak pamięci (limit sterty ustawiono na 302 bajtów)
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci (limit sterty ustawiono na 302 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(302);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1040 bajtów)
            UTEST2, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 3600 bajtów)
            UTEST3, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 88128 bajtów)
            UTEST4, // Sprawdzanie poprawności działania funkcji create
            UTEST5, // Sprawdzanie poprawności działania funkcji create
            UTEST6, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
            UTEST7, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 99 bajtów)
            UTEST8, // Sprawdzanie poprawności działania funkcji create
            UTEST9, // Sprawdzanie poprawności działania funkcji destroy
            UTEST10, // Sprawdzanie poprawności działania funkcji create_big_numbers (limit sterty ustawiono na 568 bajtów)
            UTEST11, // Sprawdzanie poprawności działania funkcji create_big_numbers (limit sterty ustawiono na 672 bajtów)
            UTEST12, // Sprawdzanie poprawności działania funkcji create_big_numbers (limit sterty ustawiono na 28216 bajtów)
            UTEST13, // Sprawdzanie poprawności działania funkcji create_big_numbers
            UTEST14, // Sprawdzanie poprawności działania funkcji create_big_numbers
            UTEST15, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
            UTEST16, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
            UTEST17, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 440 bajtów)
            UTEST18, // Sprawdzanie poprawności działania funkcji create_big_numbers
            UTEST19, // Sprawdzanie poprawności działania funkcji create_big_numbers
            UTEST20, // Sprawdzanie poprawności działania funkcji create_big_numbers
            UTEST21, // Sprawdzanie poprawności działania funkcji create_big_numbers
            UTEST22, // Sprawdzanie poprawności działania funkcji create_big_numbers
            UTEST23, // Sprawdzanie poprawności działania funkcji add_big_number (limit sterty ustawiony na 130)
            UTEST24, // Sprawdzanie poprawności działania funkcji add_big_number (limit sterty ustawiony na 130)
            UTEST25, // Sprawdzanie poprawności działania funkcji add_big_number (limit sterty ustawiony na 113)
            UTEST26, // Sprawdzanie poprawności działania funkcji create_big_numbers
            UTEST27, // Sprawdzanie poprawności działania funkcji add_big_number
            UTEST28, // Sprawdzanie poprawności działania funkcji add_big_number
            UTEST29, // Sprawdzanie poprawności działania funkcji add_big_number
            UTEST30, // Sprawdzanie poprawności działania funkcji add_big_number
            UTEST31, // Sprawdzanie poprawności działania funkcji add_big_number
            UTEST32, // Sprawdzanie poprawności działania funkcji add_big_number
            UTEST33, // Sprawdzanie poprawności działania funkcji display
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
            MTEST1, // Reakcja na brak pamięci (limit sterty ustawiono na 0 bajtów)
            MTEST2, // Reakcja na brak pamięci (limit sterty ustawiono na 16 bajtów)
            MTEST3, // Reakcja na brak pamięci (limit sterty ustawiono na 60 bajtów)
            MTEST4, // Reakcja na brak pamięci (limit sterty ustawiono na 200 bajtów)
            MTEST5, // Reakcja na brak pamięci (limit sterty ustawiono na 302 bajtów)
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
            test_summary(5); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}