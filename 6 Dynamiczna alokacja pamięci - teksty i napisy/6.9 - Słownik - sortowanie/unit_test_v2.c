/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Słownik - sortowanie
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-04-08 21:40:31.172900
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
//  Test 1: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(400);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 1;

                arr = create_dictionary(24, &err_code);

                test_error(err_code == 0, "Funkcja create_dictionary() przypisać kod błędu 0, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 24, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 24, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
//  Test 2: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11776 bajtów)
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11776 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(11776);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 1;

                arr = create_dictionary(735, &err_code);

                test_error(err_code == 0, "Funkcja create_dictionary() przypisać kod błędu 0, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 735, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 735, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
//  Test 3: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 64880 bajtów)
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 64880 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(64880);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 0;

                arr = create_dictionary(4054, &err_code);

                test_error(err_code == 0, "Funkcja create_dictionary() przypisać kod błędu 0, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 4054, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 4054, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
    

                struct dictionary_t *arr;

                int err_code = 0;

                arr = create_dictionary(0, &err_code);

                test_error(err_code == 1, "Funkcja create_dictionary() przypisać kod błędu 1, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 0, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 0, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
    

                struct dictionary_t *arr;

                int err_code = 1;

                arr = create_dictionary(-32, &err_code);

                test_error(err_code == 1, "Funkcja create_dictionary() przypisać kod błędu 1, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == -32, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na -32, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
//  Test 6: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(400);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(24, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 24, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 24, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
//  Test 7: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11776 bajtów)
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11776 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(11776);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(735, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 735, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 735, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
//  Test 8: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 64880 bajtów)
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 64880 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(64880);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(4054, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 4054, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 4054, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
//  Test 9: Sprawdzanie poprawności działania funkcji create
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(0, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 0, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 0, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
//  Test 10: Sprawdzanie poprawności działania funkcji create
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(-32, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == -32, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na -32, a ustawiła na %d", arr->capacity);

                    destroy_dictionary(&arr);

                }
                else
                    test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");


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
//  Test 11: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 2;

                arr = create_dictionary(25, &err_code);

                test_error(err_code == 2, "Funkcja create_dictionary() przypisać kod błędu 2, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

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
//  Test 12: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 0;

                arr = create_dictionary(25, &err_code);

                test_error(err_code == 2, "Funkcja create_dictionary() przypisać kod błędu 2, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

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
//  Test 13: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(400);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                int err_code = 2;

                arr = create_dictionary(25, &err_code);

                test_error(err_code == 2, "Funkcja create_dictionary() przypisać kod błędu 2, a przypisała %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

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
//  Test 14: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(25, NULL);

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

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
//  Test 15: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(25, NULL);

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

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
//  Test 16: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(400);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(25, NULL);

                test_error(arr == NULL, "Funkcja create_dictionary() powinna zwrócić NULL");

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
//  Test 17: Sprawdzanie poprawności działania funkcji create
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            destroy_dictionary(NULL);

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
//  Test 18: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "on", "write", "weight", "village", "imagine", "early", "idea", "late", "century" };
            char *add_word = "ready";

            struct dictionary_t *arr;

            arr = create_dictionary(9, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 9, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 9; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 9, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 9 na %d", arr->capacity);
            }

            for (int i = 0; i < 9; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(arr->size == 10, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 10, arr->size);
            test_error(arr->capacity == 18, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 18 na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 9; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            test_error(strcmp((arr->wc + 9)->word, add_word) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", 9, add_word, (arr->wc + 9)->word);
            test_error((arr->wc + 9)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + 9)->word, 1, (arr->wc + 9)->counter);

            destroy_dictionary(&arr);

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
//  Test 19: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "ready";

            struct dictionary_t *arr;

            arr = create_dictionary(9, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 9, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->size = -6;

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 0;

            destroy_dictionary(&arr);

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
//  Test 20: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "ready";

            struct dictionary_t *arr;

            arr = create_dictionary(9, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 9, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->size = -5;
            arr->capacity = arr->size + 1;

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 0;
            arr->capacity = 9;

            destroy_dictionary(&arr);

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
//  Test 21: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "ready";

            struct dictionary_t *arr;

            arr = create_dictionary(9, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 9, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

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
//  Test 22: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "ready";

            int err_code = dictionary_add_word(NULL, add_word);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

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
//  Test 23: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct dictionary_t arr;

            int err_code = dictionary_add_word(&arr, NULL);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

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
//  Test 24: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = dictionary_add_word(NULL, NULL);

            test_error(err_code == 1, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

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
//  Test 25: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "speak", "bone", "think", "hole", "produce", "morning", "chance", "instant", "begin", "spend", "locate", "stay", "better", "small", "boy", "shoulder", "together", "insect", "locate", "chance", "shoulder", "chance", "small", "stay", "boy", "stay", "hole", "speak", "locate", "stay", "insect", "locate", "chance", "chance", "shoulder", "shoulder" };
            const int array[] = {2, 1, 1, 2, 1, 1, 5, 1, 1, 1, 4, 4, 1, 2, 2, 4, 1, 2};

            struct dictionary_t *arr;

            arr = create_dictionary(18, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 18, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 18, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 18; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 18, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 18 na %d", arr->capacity);
            }

            for (int i = 0; i < 18; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            for (int i = 18; i < 36; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == 18, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 18, arr->size);
                test_error(arr->capacity == 18, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 18 na %d", arr->capacity);
            }

            for (int i = 0; i < 18; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == array[i], "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, array[i], (arr->wc + i)->counter);
            }

            destroy_dictionary(&arr);

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
//  Test 26: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 248 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 248 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(248);
    
    //
    // -----------
    //
    

                char *tab[] = { "master", "favor", "me", "station", "apple", "temperature", "corn", "difficult", "machine", "season" };
                char *add_word = "sure";

                struct dictionary_t *arr;

                arr = create_dictionary(10, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 10, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 10; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                    test_error(arr->capacity == 10, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 10 na %d", arr->capacity);
                }

                for (int i = 0; i < 10; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }

                int err_code = dictionary_add_word(arr, add_word);

                test_error(err_code == 2, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                test_error(arr->size == 10, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 10, arr->size);
                test_error(arr->capacity == 10, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 10 na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 10; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

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
//  Test 27: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 408 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 408 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(408);
    
    //
    // -----------
    //
    

                char *tab[] = { "master", "favor", "me", "station", "apple", "temperature", "corn", "difficult", "machine", "season" };
                char *add_word = "sure";

                struct dictionary_t *arr;

                arr = create_dictionary(10, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 10, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 10; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                    test_error(arr->capacity == 10, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 10 na %d", arr->capacity);
                }

                for (int i = 0; i < 10; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }

                int err_code = dictionary_add_word(arr, add_word);

                test_error(err_code == 2, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                test_error(arr->size == 10, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 10, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 10; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

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
//  Test 28: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 408 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 408 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(408);
    
    //
    // -----------
    //
    

            char *tab[] = { "master", "favor", "me", "station", "apple", "temperature", "corn", "difficult", "machine", "season" };
            char *add_word = "sure";

            struct dictionary_t *arr;

            arr = create_dictionary(20, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 10; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (int i = 0; i < 10; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 2, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(arr->size == 10, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 10, arr->size);
            test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 10; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            destroy_dictionary(&arr);

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
//  Test 29: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "against", "night", "start", "which", "store", "a", "surprise", "use", "great", "reach", "good", "while", "tire", "double", "suffix", "string", "sheet", "middle" };

            struct dictionary_t *arr;

            arr = create_dictionary(18, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 18, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 18, a ustawiła na %d", arr->capacity);


            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 18; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 18, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 18 na %d", arr->capacity);
            }

            for (i = 0; i < 18; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t* wc = dictionary_find_word(arr, *(tab + 13));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 13)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 13), wc->word);
            test_error(wc->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 1, wc->counter);


            wc = dictionary_find_word(arr, *(tab + 0));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 0)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 0), wc->word);
            test_error(wc->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 1, wc->counter);

            wc = dictionary_find_word(arr, *(tab + 18 - 1));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 18 - 1)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 18 - 1), wc->word);
            test_error(wc->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 1, wc->counter);

            for (i = 0; i < 5; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + 13));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(strcmp((arr->wc + 13)->word, *(tab + 13)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", 13, *(tab + 13), (arr->wc + 13)->word);
                test_error((arr->wc + 13)->counter == i + 2, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + 13)->word, i + 2, (arr->wc + 13)->counter);
            }


            wc = dictionary_find_word(arr, *(tab + 13));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 13)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 13), wc->word);
            test_error(wc->counter == 5 + 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 5 + 1, wc->counter);


            wc = dictionary_find_word(arr, "knew");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            destroy_dictionary(&arr);

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
//  Test 30: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "verb", "part", "kept", "town", "several", "grand", "huge", "world", "evening", "what", "before", "throw", "course", "fear", "noun", "thank", "mass" };

                struct dictionary_t *arr;

                arr = create_dictionary(17, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 17; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                    test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
                }

                for (i = 0; i < 17; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }


                struct word_count_t* wc = dictionary_find_word(arr, "['p', 'pa', 'par', 'p']");
                test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

                destroy_dictionary(&arr);

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
//  Test 31: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "verb", "part", "kept", "town", "several", "grand", "huge", "world", "evening", "what", "before", "throw", "course", "fear", "noun", "thank", "mass" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }


            arr->size = -3;

            struct word_count_t* wc = dictionary_find_word(arr, "['p', 'pa', 'par', 'p']");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            arr->size = 17;

            destroy_dictionary(&arr);

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
//  Test 32: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "verb", "part", "kept", "town", "several", "grand", "huge", "world", "evening", "what", "before", "throw", "course", "fear", "noun", "thank", "mass" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            arr->size = -7;
            arr->capacity = arr->size + 1;

            struct word_count_t* wc = dictionary_find_word(arr, "['p', 'pa', 'par', 'p']");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            arr->size = 17;
            arr->capacity = arr->size;

            destroy_dictionary(&arr);

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
//  Test 33: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "verb", "part", "kept", "town", "several", "grand", "huge", "world", "evening", "what", "before", "throw", "course", "fear", "noun", "thank", "mass" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

            struct word_count_t* wc = dictionary_find_word(arr, "['p', 'pa', 'par', 'p']");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

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
//  Test 34: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "verb", "part", "kept", "town", "several", "grand", "huge", "world", "evening", "what", "before", "throw", "course", "fear", "noun", "thank", "mass" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t* wc = dictionary_find_word(arr, NULL);
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            destroy_dictionary(&arr);

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
//  Test 35: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *add_word = "['p', 'pa', 'par', 'p']";

            struct word_count_t* wc = dictionary_find_word(NULL, add_word);
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

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
//  Test 36: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct word_count_t* wc = dictionary_find_word(NULL, NULL);

            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

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
//  Test 37: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *tab[] = { "Porro" };
                char *sorted_tab[] = { "Porro" };
                int sorted_count[] = { 1 };
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(1, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 1, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i = 0;
        
                for (; i < 1; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }
        
                test_error(arr->size == 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 1, arr->size);
        
                int err_code = dictionary_sort_alphabetically(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (i = 0; i < 1; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
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
//  Test 38: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *tab[] = { "Porro", "magnam" };
                char *sorted_tab[] = { "Porro", "magnam" };
                int sorted_count[] = { 1, 1 };
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(2, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 2, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 2, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i = 0;
        
                for (; i < 2; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }
        
                test_error(arr->size == 2, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 2, arr->size);
        
                int err_code = dictionary_sort_alphabetically(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (i = 0; i < 2; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
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
//  Test 39: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *tab[] = { "Porro", "magnam", "dolore", "dolore", "quisquam", "etincidunt", "Dolor", "numquam", "velit", "est", "Labore", "dolorem", "adipisci", "adipisci", "adipisci", "voluptatem", "etincidunt", "Est", "ut", "neque", "sed", "quaerat", "dolorem", "aliquam", "quiquia", "Dolore", "labore", "porro", "dolor", "Etincidunt", "tempora", "sed", "aliquam", "tempora", "labore", "magnam", "quisquam", "Voluptatem", "dolorem", "labore", "non", "magnam", "numquam", "velit", "ipsum", "Ipsum", "dolorem", "quaerat", "quisquam", "Sit", "dolor", "amet", "etincidunt", "quisquam", "labore", "Velit", "ipsum", "magnam", "eius", "est", "velit", "modi", "quisquam", "Sit", "magnam", "labore", "numquam", "quisquam" };
                char *sorted_tab[] = { "Dolor", "Dolore", "Est", "Etincidunt", "Ipsum", "Labore", "Porro", "Sit", "Velit", "Voluptatem", "adipisci", "aliquam", "amet", "dolor", "dolore", "dolorem", "eius", "est", "etincidunt", "ipsum", "labore", "magnam", "modi", "neque", "non", "numquam", "porro", "quaerat", "quiquia", "quisquam", "sed", "tempora", "ut", "velit", "voluptatem" };
                int sorted_count[] = { 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 3, 2, 1, 2, 2, 4, 1, 2, 3, 2, 5, 5, 1, 1, 1, 3, 1, 2, 1, 6, 2, 2, 1, 3, 1 };
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(68, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 68, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 68, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i = 0;
        
                for (; i < 68; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }
        
                test_error(arr->size == 35, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 35, arr->size);
        
                int err_code = dictionary_sort_alphabetically(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (i = 0; i < 35; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
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
//  Test 40: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *tab[] = { "Modi", "numquam", "quaerat", "dolorem", "quaerat", "porro", "numquam", "est", "Dolorem", "est", "magnam", "quiquia", "sit", "ut", "Sit", "adipisci", "quaerat", "dolorem", "Dolore", "porro", "adipisci", "sit", "porro", "Tempora", "adipisci", "neque", "adipisci", "velit", "dolorem", "numquam", "magnam", "Porro", "eius", "consectetur", "magnam", "Labore", "dolor", "eius", "non", "etincidunt", "numquam", "non", "Consectetur", "tempora", "dolorem", "labore", "eius", "amet", "Amet", "numquam", "ipsum", "aliquam", "numquam", "amet", "quiquia", "Numquam", "aliquam", "aliquam", "est", "Ipsum", "labore", "porro", "consectetur", "etincidunt", "Est", "tempora", "magnam", "quaerat", "Quiquia", "adipisci", "sed", "eius", "magnam", "Est", "porro", "non", "amet", "quaerat", "quiquia", "magnam", "adipisci", "Neque", "non", "voluptatem", "est", "dolorem", "consectetur", "Dolor", "consectetur", "quaerat", "neque", "est", "Magnam", "velit", "est", "eius", "quiquia", "adipisci", "eius", "Quaerat", "ut", "velit", "eius", "eius", "amet", "velit", "numquam", "Numquam", "velit", "amet", "numquam", "etincidunt", "Velit", "sed", "amet", "sit", "adipisci", "est", "labore", "Magnam", "aliquam", "eius", "voluptatem", "ipsum", "ut", "numquam", "Consectetur", "voluptatem", "est", "numquam", "quiquia", "amet", "quisquam", "magnam", "Non", "eius", "amet", "neque", "Neque", "aliquam", "porro", "est", "tempora", "Velit", "quaerat", "porro", "amet", "sit", "Numquam", "non", "dolorem", "amet", "Voluptatem", "neque", "sed", "magnam", "quisquam", "quaerat", "dolore", "Sed", "modi", "dolorem", "aliquam", "non", "neque", "Ut", "etincidunt", "dolore", "dolore", "porro", "quisquam", "Non", "consectetur", "dolorem", "porro", "quaerat", "aliquam", "porro", "est", "Adipisci", "consectetur", "velit", "eius", "sed", "numquam", "Quaerat", "etincidunt", "etincidunt", "est", "non", "eius", "quisquam", "ut", "Neque", "labore", "porro", "ut", "tempora", "dolore", "numquam", "adipisci", "Tempora", "velit", "est", "tempora", "Quiquia", "quiquia", "ut", "labore", "neque", "Sed", "numquam", "quaerat", "tempora", "quaerat", "modi", "etincidunt", "est", "Dolor", "adipisci", "non", "dolorem", "eius", "adipisci", "Adipisci", "ipsum", "ut", "ut", "magnam", "etincidunt", "consectetur", "Modi", "est", "velit", "non", "est", "neque", "Neque", "etincidunt", "eius", "ipsum", "consectetur", "ipsum", "Quisquam", "quisquam", "dolorem", "porro", "eius", "tempora", "amet", "labore", "Labore", "dolore", "dolore", "sit", "modi", "numquam", "dolore", "consectetur", "Amet", "velit", "ipsum", "eius", "dolor", "dolore", "ut", "etincidunt", "Dolorem", "consectetur", "est", "magnam", "dolorem", "etincidunt", "dolor", "Voluptatem", "sit", "dolor", "quisquam", "non", "dolorem", "sed", "sit", "Dolorem", "aliquam", "velit", "sit", "modi", "amet", "Sit", "numquam", "neque", "porro", "voluptatem", "etincidunt", "ipsum", "Voluptatem", "ipsum", "velit", "dolore", "sit", "quaerat", "Eius", "sed", "modi", "quaerat", "Tempora", "etincidunt", "dolore", "porro", "non", "Est", "consectetur", "etincidunt", "quaerat", "Numquam", "quaerat", "velit", "adipisci", "Amet", "eius", "quaerat", "consectetur", "dolore", "etincidunt", "labore", "Etincidunt", "eius", "eius", "dolorem", "Ipsum", "dolore", "dolorem", "sed", "numquam", "etincidunt", "Magnam", "eius", "est", "tempora", "Porro", "aliquam", "numquam", "sed", "non", "eius", "quaerat", "sit", "Consectetur", "non", "est", "tempora", "sed", "non", "modi", "etincidunt", "Non", "magnam", "aliquam", "non", "Dolor", "neque", "ipsum", "quiquia", "eius", "neque", "non", "Dolore", "numquam", "est", "amet", "consectetur", "amet", "porro", "Quaerat", "dolore", "numquam", "aliquam", "quisquam", "dolorem", "Non", "labore", "neque", "ut", "adipisci", "adipisci", "ut", "labore", "Etincidunt", "voluptatem", "consectetur", "aliquam", "dolore", "sit", "Amet", "adipisci", "consectetur", "quaerat", "Sed", "ipsum", "etincidunt", "velit", "neque", "Labore", "ut", "non", "sed", "Neque", "voluptatem", "amet", "dolor", "est", "tempora", "labore", "est", "Ut", "neque", "non", "consectetur", "aliquam", "porro", "numquam", "sit", "Ipsum", "magnam", "amet", "etincidunt", "adipisci", "voluptatem", "labore", "neque", "Aliquam", "dolorem", "est", "quaerat", "eius", "tempora", "sed", "Magnam", "ipsum", "dolor", "ut", "dolor", "etincidunt", "ut", "quisquam", "Sed", "modi", "sed", "etincidunt", "non", "magnam", "Etincidunt", "magnam", "quisquam", "adipisci", "modi", "labore", "non", "Adipisci", "modi", "numquam", "modi", "porro", "ipsum", "neque", "Dolore", "adipisci", "ut", "velit", "Quisquam", "etincidunt", "tempora", "velit", "labore", "ipsum", "dolore", "dolor", "Etincidunt", "etincidunt", "amet", "eius", "modi", "adipisci", "modi", "Sit", "etincidunt", "consectetur", "sed", "non", "Quaerat", "quiquia", "voluptatem", "est", "dolore", "Magnam", "voluptatem", "est", "dolor", "dolore", "ut", "velit", "quaerat", "Ut", "quiquia", "consectetur", "amet", "Ipsum", "amet", "labore", "eius", "etincidunt", "porro", "Numquam", "quiquia", "ut", "dolor", "est", "velit", "magnam", "est", "Tempora", "etincidunt", "tempora", "modi", "Velit", "quisquam", "sed", "dolorem", "voluptatem", "eius", "etincidunt", "eius", "Porro", "tempora", "consectetur", "quiquia", "Non", "adipisci", "ipsum", "numquam", "Velit", "adipisci", "consectetur", "voluptatem", "numquam", "Ipsum", "ut", "labore", "sed", "Labore", "eius", "voluptatem", "quisquam", "est", "eius", "porro", "sed", "Neque", "porro", "sit", "quiquia", "ipsum", "Velit", "amet", "sed", "amet", "porro", "Aliquam", "adipisci", "eius", "tempora", "quiquia", "Adipisci", "dolorem", "velit", "adipisci", "magnam", "neque", "Quisquam", "porro", "dolorem", "quisquam", "Quisquam", "labore", "labore", "ipsum", "dolorem", "Magnam", "neque", "aliquam", "est", "porro", "tempora", "Quaerat", "etincidunt", "neque", "labore", "ut", "modi", "non", "etincidunt", "Voluptatem", "porro", "dolor", "non", "est", "quiquia", "Ut", "numquam", "magnam", "tempora", "amet", "dolor", "Etincidunt", "voluptatem", "neque", "labore", "Consectetur", "adipisci", "dolorem", "dolore", "porro", "dolorem", "Dolore", "consectetur", "amet", "dolor", "Quiquia", "aliquam", "amet", "quaerat", "quiquia", "Non", "eius", "quiquia", "numquam", "sed", "magnam", "Consectetur", "labore", "etincidunt", "neque", "quaerat", "quaerat", "consectetur", "dolorem", "Sit", "dolor", "labore", "numquam", "non", "velit", "eius", "ipsum", "Est", "numquam", "eius", "eius", "velit", "dolor", "quaerat", "Non", "eius", "est", "consectetur", "etincidunt", "dolor", "Dolor", "dolorem", "sit", "neque", "velit", "eius", "Voluptatem", "tempora", "quaerat", "sit", "Tempora", "quiquia", "neque", "porro", "ipsum", "quiquia", "Dolorem", "tempora", "neque", "voluptatem", "non", "voluptatem", "Consectetur", "modi", "est", "dolor", "ipsum", "aliquam", "Quaerat", "tempora", "quisquam", "quisquam", "magnam", "Porro", "non", "magnam", "labore", "sed", "aliquam", "adipisci", "Numquam", "ut", "numquam", "est", "Dolor", "quaerat", "etincidunt", "consectetur", "dolor", "Ut", "consectetur", "quiquia", "non", "amet", "modi", "quisquam", "ut", "Sed", "eius", "dolorem", "amet", "modi", "magnam", "voluptatem", "consectetur", "Porro", "etincidunt", "porro", "modi", "ut", "dolorem", "Modi", "amet", "quisquam", "quisquam", "dolorem", "adipisci", "consectetur" };
                char *sorted_tab[] = { "Adipisci", "Aliquam", "Amet", "Consectetur", "Dolor", "Dolore", "Dolorem", "Eius", "Est", "Etincidunt", "Ipsum", "Labore", "Magnam", "Modi", "Neque", "Non", "Numquam", "Porro", "Quaerat", "Quiquia", "Quisquam", "Sed", "Sit", "Tempora", "Ut", "Velit", "Voluptatem", "adipisci", "aliquam", "amet", "consectetur", "dolor", "dolore", "dolorem", "eius", "est", "etincidunt", "ipsum", "labore", "magnam", "modi", "neque", "non", "numquam", "porro", "quaerat", "quiquia", "quisquam", "sed", "sit", "tempora", "ut", "velit", "voluptatem" };
                int sorted_count[] = { 4, 2, 4, 6, 5, 4, 4, 1, 4, 5, 5, 4, 6, 3, 6, 7, 6, 5, 6, 3, 4, 5, 4, 5, 5, 5, 5, 26, 17, 27, 27, 18, 18, 27, 37, 32, 33, 19, 22, 21, 18, 23, 27, 28, 27, 26, 19, 17, 19, 15, 20, 22, 21, 16 };
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(745, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 745, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 745, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i = 0;
        
                for (; i < 745; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }
        
                test_error(arr->size == 54, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 54, arr->size);
        
                int err_code = dictionary_sort_alphabetically(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (i = 0; i < 54; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
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
//  Test 41: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "baby", "wait", "come", "death", "collect", "card", "story", "guess", "simple", "once", "always", "white", "name", "wire", "stream", "molecule", "brown", "plural", "find" };

            struct dictionary_t *arr;

            arr = create_dictionary(19, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 19, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 19; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 19, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 19 na %d", arr->capacity);
            }

            for (i = 0; i < 19; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }


            arr->size = -10;

            int err_code = dictionary_sort_alphabetically(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);
        
            arr->size = 19;

            destroy_dictionary(&arr);

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
//  Test 42: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "baby", "wait", "come", "death", "collect", "card", "story", "guess", "simple", "once", "always", "white", "name", "wire", "stream", "molecule", "brown", "plural", "find" };

            struct dictionary_t *arr;

            arr = create_dictionary(19, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 19, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 19; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 19, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 19 na %d", arr->capacity);
            }

            for (i = 0; i < 19; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            arr->size = -8;
            arr->capacity = arr->size + 1;

            int err_code = dictionary_sort_alphabetically(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 19;
            arr->capacity = arr->size;

            destroy_dictionary(&arr);

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
//  Test 43: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "baby", "wait", "come", "death", "collect", "card", "story", "guess", "simple", "once", "always", "white", "name", "wire", "stream", "molecule", "brown", "plural", "find" };

            struct dictionary_t *arr;

            arr = create_dictionary(19, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 19, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 19; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 19, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 19 na %d", arr->capacity);
            }

            for (i = 0; i < 19; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

            int err_code = dictionary_sort_alphabetically(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

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
//  Test 44: Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = dictionary_sort_alphabetically(NULL);
            test_error(err_code == 1, "Funkcja dictionary_sort_alphabetically() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

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
//  Test 45: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "Porro" };
                char *sorted_tab[] = { "Porro" };
                int sorted_count[] = { 1 };

                struct dictionary_t *arr;

                arr = create_dictionary(1, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 1, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 1; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }

                test_error(arr->size == 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 1, arr->size);

                int err_code = dictionary_sort_occurence(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                for (i = 0; i < 1; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

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
//  Test 46: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "Porro", "dolorem" };
                char *sorted_tab[] = { "Porro", "dolorem" };
                int sorted_count[] = { 1, 1 };

                struct dictionary_t *arr;

                arr = create_dictionary(2, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 2, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 2, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 2; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }

                test_error(arr->size == 2, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 2, arr->size);

                int err_code = dictionary_sort_occurence(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                for (i = 0; i < 2; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

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
//  Test 47: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "Porro", "dolorem", "sit", "dolorem", "ut", "quisquam", "est", "Modi", "amet", "eius", "quaerat", "quisquam", "Dolorem", "dolorem", "ipsum", "non", "etincidunt", "voluptatem", "Sed", "non", "sit", "ipsum", "neque", "Eius", "labore", "etincidunt", "adipisci", "ut", "modi", "Dolore", "quisquam", "adipisci", "amet", "quaerat", "Porro", "ipsum", "dolor", "eius", "quaerat", "magnam", "Numquam", "modi", "etincidunt", "magnam", "est", "dolorem", "quiquia", "etincidunt" };
                char *sorted_tab[] = { "dolorem", "etincidunt", "ipsum", "quaerat", "quisquam", "Porro", "adipisci", "amet", "eius", "est", "magnam", "modi", "non", "sit", "ut", "Dolore", "Dolorem", "Eius", "Modi", "Numquam", "Sed", "dolor", "labore", "neque", "quiquia", "voluptatem" };
                int sorted_count[] = { 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

                struct dictionary_t *arr;

                arr = create_dictionary(48, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 48, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 48, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 48; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }

                test_error(arr->size == 26, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 26, arr->size);

                int err_code = dictionary_sort_occurence(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                for (i = 0; i < 26; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

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
//  Test 48: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *tab[] = { "Neque", "magnam", "etincidunt", "tempora", "est", "quaerat", "Quaerat", "etincidunt", "est", "amet", "Quaerat", "ipsum", "tempora", "dolor", "dolor", "sit", "amet", "ut", "Modi", "amet", "consectetur", "magnam", "consectetur", "Sit", "adipisci", "velit", "aliquam", "adipisci", "dolore", "Dolor", "quaerat", "quaerat", "est", "numquam", "voluptatem", "dolore", "Non", "quiquia", "sed", "est", "Quiquia", "velit", "non", "eius", "dolor", "magnam", "dolorem", "Non", "neque", "adipisci", "quaerat", "modi", "etincidunt", "porro", "Labore", "labore", "eius", "tempora", "velit", "ut", "Etincidunt", "quisquam", "tempora", "quiquia", "modi", "amet", "Adipisci", "adipisci", "quisquam", "dolorem", "modi", "etincidunt", "Adipisci", "neque", "neque", "numquam", "quiquia", "amet", "Ipsum", "ipsum", "quisquam", "tempora", "aliquam", "dolor", "consectetur", "amet", "Non", "amet", "adipisci", "dolorem", "est", "Voluptatem", "quaerat", "quaerat", "velit", "dolorem", "porro", "Porro", "dolorem", "amet", "velit", "dolor", "porro", "numquam", "Est", "porro", "dolore", "ipsum", "eius", "quaerat", "numquam", "Dolor", "aliquam", "est", "labore", "sit", "labore", "quaerat", "Adipisci", "amet", "tempora", "sed", "consectetur", "Quiquia", "neque", "non", "porro", "labore", "eius", "adipisci", "Labore", "non", "est", "ut", "Aliquam", "ipsum", "sit", "quiquia", "Eius", "aliquam", "labore", "dolor", "est", "non", "Non", "tempora", "sed", "tempora", "adipisci", "etincidunt", "modi", "ipsum", "Voluptatem", "numquam", "quiquia", "sit", "non", "Voluptatem", "magnam", "porro", "modi", "etincidunt", "magnam", "modi", "Sed", "labore", "labore", "sit", "Voluptatem", "sed", "quiquia", "labore", "eius", "aliquam", "ut", "Adipisci", "dolor", "magnam", "adipisci", "eius", "amet", "Amet", "dolore", "amet", "quisquam", "sed", "labore", "ut", "labore", "Aliquam", "etincidunt", "porro", "neque", "consectetur", "numquam", "est", "Voluptatem", "amet", "ipsum", "sed", "amet", "tempora", "quisquam", "numquam", "Labore", "amet", "non", "velit", "dolorem", "dolor", "est", "non", "Etincidunt", "tempora", "ut", "quisquam", "adipisci", "neque", "dolor", "Ipsum", "non", "magnam", "non", "eius", "amet", "velit", "Voluptatem", "est", "amet", "modi", "aliquam", "Sed", "tempora", "etincidunt", "etincidunt", "labore", "magnam", "Neque", "quisquam", "consectetur", "numquam", "tempora", "quaerat", "adipisci", "Sit", "numquam", "dolorem", "voluptatem", "velit", "dolore", "quaerat", "Sed", "adipisci", "amet", "tempora", "Numquam", "quaerat", "quaerat", "sit", "dolore", "quaerat", "labore", "dolorem", "Ipsum", "eius", "consectetur", "eius", "Velit", "eius", "dolorem", "sed", "labore", "dolorem", "porro", "adipisci", "Voluptatem", "dolorem", "sit", "consectetur", "magnam", "non", "consectetur", "Aliquam", "voluptatem", "ut", "porro", "Ut", "non", "sit", "neque", "est", "velit", "adipisci", "ut", "Dolorem", "neque", "ut", "eius", "Porro", "sed", "modi", "magnam", "voluptatem", "sed", "dolore", "labore", "Aliquam", "numquam", "neque", "ut", "labore", "Consectetur", "quaerat", "non", "ipsum", "numquam", "eius", "eius", "Tempora", "neque", "sed", "eius", "Quaerat", "sit", "numquam", "modi", "adipisci", "dolorem", "numquam", "sed", "Non", "aliquam", "dolor", "etincidunt", "voluptatem", "modi", "est", "Voluptatem", "labore", "quisquam", "dolorem", "velit", "Porro", "magnam", "eius", "labore", "Sed", "quaerat", "ipsum", "dolore", "Ipsum", "dolore", "modi", "dolorem", "consectetur", "ut", "tempora", "Neque", "neque", "est", "eius", "labore", "adipisci", "Quisquam", "non", "aliquam", "sed", "dolore", "sit", "Eius", "amet", "quaerat", "magnam", "Ut", "non", "velit", "non", "quisquam", "Est", "quiquia", "adipisci", "adipisci", "neque", "dolore", "porro", "Quaerat", "tempora", "numquam", "velit", "labore", "Dolore", "porro", "modi", "sit", "Magnam", "tempora", "amet", "dolor", "ut", "non", "ut", "Dolor", "non", "quaerat", "velit", "Sed", "tempora", "quiquia", "magnam", "quaerat", "quisquam", "est", "Etincidunt", "neque", "porro", "quaerat", "quisquam", "consectetur", "Labore", "velit", "neque", "adipisci", "Tempora", "consectetur", "neque", "tempora", "etincidunt", "porro", "eius", "Quaerat", "consectetur", "dolorem", "numquam", "adipisci", "Velit", "tempora", "quiquia", "porro", "Ut", "magnam", "dolore", "aliquam", "Velit", "quiquia", "non", "neque", "Etincidunt", "aliquam", "neque", "quisquam", "eius", "Labore", "non", "numquam", "quaerat", "porro", "dolore", "labore", "modi", "Sed", "voluptatem", "non", "labore", "velit", "Magnam", "est", "magnam", "dolorem", "quisquam", "modi", "voluptatem", "numquam", "Dolore", "dolor", "velit", "dolorem", "Sed", "labore", "aliquam", "modi", "adipisci", "modi", "eius", "Quisquam", "dolor", "dolor", "porro", "labore", "dolorem", "non", "consectetur", "Sed", "non", "aliquam", "quiquia", "non", "eius", "modi", "etincidunt", "Consectetur", "velit", "ut", "neque", "velit", "sed", "Est", "velit", "non", "quaerat", "ut", "neque", "Sit", "sed", "adipisci", "aliquam", "eius", "Quaerat", "dolore", "tempora", "labore", "modi", "Dolorem", "etincidunt", "neque", "ipsum", "est", "Amet", "quiquia", "eius", "quisquam", "numquam", "Quaerat", "sit", "consectetur", "dolor", "Sit", "neque", "dolorem", "neque", "amet", "porro", "sit", "Consectetur", "eius", "magnam", "dolor", "ut", "porro", "Porro", "numquam", "eius", "quiquia", "Quaerat", "sit", "magnam", "velit", "sed", "dolor", "numquam", "velit", "Neque", "dolorem", "sed", "etincidunt", "voluptatem", "Porro", "sed", "consectetur", "magnam", "porro", "modi", "quaerat", "Eius", "ut", "sit", "quisquam", "amet", "Neque", "ut", "etincidunt", "dolorem", "neque", "Amet", "ut", "adipisci", "modi", "Numquam", "aliquam", "voluptatem", "consectetur", "dolor", "eius", "voluptatem", "Non", "voluptatem", "consectetur", "porro", "Sed", "modi", "eius", "etincidunt", "porro", "Dolorem", "dolorem", "dolore", "sed", "modi", "quiquia", "Adipisci", "est", "eius", "dolorem", "etincidunt", "ut", "Tempora", "eius", "sed", "porro", "Amet", "ipsum", "etincidunt", "porro", "magnam", "non", "Neque", "neque", "non", "etincidunt", "Modi", "dolore", "sit", "dolore", "dolor", "Voluptatem", "sed", "eius", "amet", "porro", "aliquam", "magnam", "consectetur", "Tempora", "magnam", "adipisci", "etincidunt", "neque", "Quiquia", "sit", "eius", "ut", "non", "Magnam", "aliquam", "porro", "dolore", "non", "quiquia", "etincidunt", "etincidunt", "Eius", "numquam", "tempora", "sed", "Ut", "labore", "dolore", "modi", "neque", "quisquam", "Dolorem", "quaerat", "etincidunt", "voluptatem", "neque", "magnam" };
                char *sorted_tab[] = { "eius", "non", "neque", "labore", "porro", "adipisci", "dolorem", "etincidunt", "modi", "quaerat", "amet", "magnam", "numquam", "sed", "tempora", "ut", "velit", "consectetur", "dolor", "dolore", "est", "sit", "aliquam", "quisquam", "quiquia", "voluptatem", "ipsum", "Sed", "Voluptatem", "Quaerat", "Neque", "Non", "Adipisci", "Labore", "Porro", "Aliquam", "Amet", "Dolorem", "Eius", "Etincidunt", "Ipsum", "Sit", "Tempora", "Ut", "Consectetur", "Dolor", "Est", "Magnam", "Quiquia", "Velit", "Dolore", "Modi", "Numquam", "Quisquam" };
                int sorted_count[] = { 30, 28, 27, 25, 25, 23, 23, 23, 23, 23, 22, 22, 21, 21, 21, 21, 21, 19, 19, 19, 18, 17, 16, 16, 15, 12, 10, 9, 9, 8, 6, 6, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2 };

                struct dictionary_t *arr;

                arr = create_dictionary(675, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                onerror_terminate();

                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 675, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 675, a ustawiła na %d", arr->capacity);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int i = 0;

                for (; i < 675; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                }

                test_error(arr->size == 54, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 54, arr->size);

                int err_code = dictionary_sort_occurence(arr);
                test_error(err_code == 0, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                for (i = 0; i < 54; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }

                destroy_dictionary(&arr);

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
//  Test 49: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "party", "told", "meet", "million", "thousand", "race", "fact", "whose", "save", "miss", "city", "heart", "bear", "poem", "salt", "want", "market" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }


            arr->size = -8;

            int err_code = dictionary_sort_occurence(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 17;

            destroy_dictionary(&arr);

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
//  Test 50: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "party", "told", "meet", "million", "thousand", "race", "fact", "whose", "save", "miss", "city", "heart", "bear", "poem", "salt", "want", "market" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            arr->size = -6;
            arr->capacity = arr->size + 1;

            int err_code = dictionary_sort_occurence(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->size = 17;
            arr->capacity = arr->size;

            destroy_dictionary(&arr);

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
//  Test 51: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "party", "told", "meet", "million", "thousand", "race", "fact", "whose", "save", "miss", "city", "heart", "bear", "poem", "salt", "want", "market" };

            struct dictionary_t *arr;

            arr = create_dictionary(17, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 17, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 17; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 17, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 17 na %d", arr->capacity);
            }

            for (i = 0; i < 17; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

            int err_code = dictionary_sort_occurence(arr);
            test_error(err_code == 1, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

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
//  Test 52: Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji dictionary_sort_occurence", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = dictionary_sort_occurence(NULL);
            test_error(err_code == 1, "Funkcja dictionary_sort_occurence() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

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
//  Test 53: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *sorted_tab[] = { "Ipsum" };
                int sorted_count[] = { 1 };
        
                int err_code = 1;
                struct dictionary_t *arr = load_dictionary_b("sense.bin", &err_code);
        
                test_error(arr != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(err_code == 0, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->wc != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 1, "Funkcja load_dictionary_b() powinna ustawić liczbę elementów w tablicy na 1, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 1, "Funkcja load_dictionary_b() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i;
        
                for (i = 0; i < 1; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
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
//  Test 54: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *sorted_tab[] = { "Ipsum", "etincidunt" };
                int sorted_count[] = { 1, 1 };
        
                int err_code = 3;
                struct dictionary_t *arr = load_dictionary_b("can.bin", &err_code);
        
                test_error(arr != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(err_code == 0, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->wc != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 2, "Funkcja load_dictionary_b() powinna ustawić liczbę elementów w tablicy na 2, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 2, "Funkcja load_dictionary_b() powinna ustawić pojemność tablicy na 2, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i;
        
                for (i = 0; i < 2; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
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
//  Test 55: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *sorted_tab[] = { "Ipsum", "etincidunt", "velit", "ipsum", "Magnam", "dolore", "numquam", "Sed", "voluptatem", "consectetur", "quaerat", "labore", "Voluptatem", "porro", "modi", "Quiquia", "amet", "non", "eius", "Etincidunt", "est", "adipisci", "neque", "Dolore", "tempora", "sit", "Ut", "dolorem", "quisquam", "Non", "Dolor", "ut", "aliquam", "Eius", "Adipisci", "sed", "magnam", "Consectetur" };
                int sorted_count[] = { 2, 3, 5, 6, 1, 2, 4, 1, 5, 8, 2, 2, 1, 1, 4, 1, 2, 3, 2, 1, 3, 3, 2, 1, 3, 4, 3, 4, 2, 1, 1, 3, 1, 1, 1, 3, 2, 1 };
        
                int err_code = 2;
                struct dictionary_t *arr = load_dictionary_b("shoulder.bin", &err_code);
        
                test_error(arr != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(err_code == 0, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->wc != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 38, "Funkcja load_dictionary_b() powinna ustawić liczbę elementów w tablicy na 38, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 38, "Funkcja load_dictionary_b() powinna ustawić pojemność tablicy na 38, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i;
        
                for (i = 0; i < 38; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
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
//  Test 56: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *sorted_tab[] = { "Neque", "etincidunt", "ipsum", "labore", "velit", "consectetur", "eius", "Velit", "neque", "porro", "sit", "dolore", "Numquam", "modi", "magnam", "Etincidunt", "amet", "voluptatem", "Sit", "aliquam", "tempora", "sed", "Dolor", "non", "quiquia", "dolorem", "ut", "Ipsum", "dolor", "adipisci", "Aliquam", "Non", "Magnam", "quisquam", "Dolorem", "quaerat", "Consectetur", "numquam", "Amet", "Voluptatem", "Adipisci", "Labore", "Porro", "est", "Sed", "Modi", "Dolore", "Est", "Tempora" };
                int sorted_count[] = { 5, 11, 12, 14, 10, 11, 11, 2, 20, 14, 11, 15, 5, 18, 17, 7, 11, 12, 3, 13, 10, 14, 2, 7, 8, 13, 7, 3, 16, 14, 3, 5, 3, 16, 1, 12, 4, 8, 3, 1, 5, 3, 1, 6, 2, 1, 2, 2, 2 };
        
                int err_code = 1;
                struct dictionary_t *arr = load_dictionary_b("rise.bin", &err_code);
        
                test_error(arr != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(err_code == 0, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->wc != NULL, "Funkcja load_dictionary_b() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 49, "Funkcja load_dictionary_b() powinna ustawić liczbę elementów w tablicy na 49, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 49, "Funkcja load_dictionary_b() powinna ustawić pojemność tablicy na 49, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i;
        
                for (i = 0; i < 49; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
                }
        
                destroy_dictionary(&arr);
        
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
//  Test 57: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 3;
                struct dictionary_t *arr = load_dictionary_b("wrote.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 2, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);


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
//  Test 58: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 3;
                struct dictionary_t *arr = load_dictionary_b("beat.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 3, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);


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
//  Test 59: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 2;
                struct dictionary_t *arr = load_dictionary_b("beauty.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 3, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);


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
//  Test 60: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 2;
                struct dictionary_t *arr = load_dictionary_b("govern.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 3, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);


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
//  Test 61: Sprawdzanie poprawności działania funkcji load_dictionary_b
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji load_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = 4;
                struct dictionary_t *arr = load_dictionary_b("window.bin", &err_code);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");
                test_error(err_code == 3, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);


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
//  Test 62: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
                int err_code = 1;
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 63: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(20);
    
    //
    // -----------
    //
    
                int err_code = 0;
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 64: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(100);
    
    //
    // -----------
    //
    
                int err_code = 1;
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 65: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 672 bajtów)
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 672 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(672);
    
    //
    // -----------
    //
    
                int err_code = 1;
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 66: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 692 bajtów)
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 692 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(692);
    
    //
    // -----------
    //
    
                int err_code = 2;
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 67: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 947 bajtów)
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 947 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(947);
    
    //
    // -----------
    //
    
                int err_code = 3;
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", &err_code);

                test_error(err_code == 4, "Funkcja load_dictionary_b() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 68: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 69: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(20);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 70: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(100);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 71: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 672 bajtów)
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 672 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(672);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 72: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 692 bajtów)
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 692 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(692);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 73: Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 947 bajtów)
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 947 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(947);
    
    //
    // -----------
    //
    
                struct dictionary_t *arr;

                arr = load_dictionary_b("cook.bin", NULL);

                test_error(arr == NULL, "Funkcja load_dictionary_b() powinna zwrócić NULL");

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
//  Test 74: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *sorted_tab[] = { "Aliquam", "quisquam", "dolorem", "tempora", "Sed", "consectetur", "sed", "labore", "Ut", "velit", "numquam", "magnam", "Quaerat", "voluptatem", "quaerat", "amet", "Dolor", "non", "Voluptatem", "aliquam", "eius", "quiquia", "dolor", "ipsum", "Consectetur", "dolore", "modi", "sit", "est", "Non" };
            char *tab[] = { "Aliquam", "quisquam", "dolorem", "tempora", "Sed", "dolorem", "consectetur", "sed", "labore", "Ut", "velit", "sed", "numquam", "consectetur", "magnam", "velit", "Quaerat", "voluptatem", "quaerat", "magnam", "amet", "voluptatem", "velit", "Dolor", "consectetur", "non", "quisquam", "Voluptatem", "quaerat", "aliquam", "magnam", "quisquam", "eius", "Sed", "quiquia", "dolor", "numquam", "quisquam", "ipsum", "quisquam", "Consectetur", "dolore", "ipsum", "quisquam", "Consectetur", "amet", "modi", "sit", "est", "dolor", "Non", "quisquam", "labore", "quiquia", "quiquia", "dolor", "dolorem" };
            int sorted_count[] = { 1, 7, 3, 1, 2, 3, 2, 2, 1, 3, 2, 3, 1, 2, 2, 2, 1, 1, 1, 1, 1, 3, 3, 2, 2, 1, 1, 1, 1, 1 };

            struct dictionary_t *arr;

            arr = create_dictionary(57, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 57, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 57, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 57; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            }

            for (i = 0; i < 30; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
            }

            int err_code = save_dictionary_b(arr, "eight.bin");
            test_error(err_code == 0, "Funkcja save_dictionary_b() powinna zwrócić wartość 0, a zwróciła %d", err_code);


            destroy_dictionary(&arr);

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
//  Test 75: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "Non", "Modi", "eius", "non", "est", "ipsum", "amet", "voluptatem", "Ut", "adipisci", "neque", "dolore", "tempora", "dolor", "sit", "labore", "quisquam", "magnam", "Velit", "modi", "consectetur", "Ipsum", "dolorem", "quaerat", "porro", "Quaerat", "ut", "Labore", "sed", "Porro", "velit", "Dolorem" };

            struct dictionary_t *arr;

            arr = create_dictionary(32, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 32, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 32, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 32; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 32, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 32 na %d", arr->capacity);
            }

            for (i = 0; i < 32; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }


            arr->size = -10;

            int err_code = save_dictionary_b(arr, "eight.bin");
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            arr->size = 32;

            destroy_dictionary(&arr);

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
//  Test 76: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "Non", "Modi", "eius", "non", "est", "ipsum", "amet", "voluptatem", "Ut", "adipisci", "neque", "dolore", "tempora", "dolor", "sit", "labore", "quisquam", "magnam", "Velit", "modi", "consectetur", "Ipsum", "dolorem", "quaerat", "porro", "Quaerat", "ut", "Labore", "sed", "Porro", "velit", "Dolorem" };

            struct dictionary_t *arr;

            arr = create_dictionary(32, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 32, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 32, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 32; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 32, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 32 na %d", arr->capacity);
            }

            for (i = 0; i < 32; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            arr->size = -7;
            arr->capacity = arr->size + 1;

            int err_code = save_dictionary_b(arr, "eight.bin");
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            arr->size = 32;
            arr->capacity = arr->size;

            destroy_dictionary(&arr);

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
//  Test 77: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "Non", "Modi", "eius", "non", "est", "ipsum", "amet", "voluptatem", "Ut", "adipisci", "neque", "dolore", "tempora", "dolor", "sit", "labore", "quisquam", "magnam", "Velit", "modi", "consectetur", "Ipsum", "dolorem", "quaerat", "porro", "Quaerat", "ut", "Labore", "sed", "Porro", "velit", "Dolorem" };

            struct dictionary_t *arr;

            arr = create_dictionary(32, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 32, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 32, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 32; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 32, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 32 na %d", arr->capacity);
            }

            for (i = 0; i < 32; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

           int err_code = save_dictionary_b(arr, "eight.bin");
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            arr->wc = temp_wc;

            destroy_dictionary(&arr);

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
//  Test 78: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "Non", "Modi", "eius", "non", "est", "ipsum", "amet", "voluptatem", "Ut", "adipisci", "neque", "dolore", "tempora", "dolor", "sit", "labore", "quisquam", "magnam", "Velit", "modi", "consectetur", "Ipsum", "dolorem", "quaerat", "porro", "Quaerat", "ut", "Labore", "sed", "Porro", "velit", "Dolorem" };

            struct dictionary_t *arr;

            arr = create_dictionary(32, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 32, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 32, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 32; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 32, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 32 na %d", arr->capacity);
            }

            for (i = 0; i < 32; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

           int err_code = save_dictionary_b(arr, NULL);
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

            destroy_dictionary(&arr);

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
//  Test 79: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = save_dictionary_b(NULL, "eight.bin");
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

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
//  Test 80: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = save_dictionary_b(NULL, NULL);
            test_error(err_code == 1, "Funkcja save_dictionary_b() powinna zwrócić wartość 1, a zwróciła %d", err_code);

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
//  Test 81: Sprawdzanie poprawności działania funkcji save_dictionary_b
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji save_dictionary_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    

            char *sorted_tab[] = { "Voluptatem", "adipisci", "etincidunt", "porro", "consectetur", "ut", "quaerat", "sit", "Eius", "neque", "labore", "dolor", "voluptatem", "modi", "magnam", "aliquam", "Dolor", "quisquam", "amet", "dolorem", "Ipsum", "quiquia", "Quisquam", "numquam", "Porro", "est", "Modi", "ipsum", "non", "Ut", "Dolorem", "eius", "Amet", "dolore", "Numquam", "sed", "Quiquia", "Magnam", "Quaerat", "tempora", "Est", "velit", "Dolore", "Etincidunt" };
            char *tab[] = { "Voluptatem", "adipisci", "etincidunt", "porro", "consectetur", "ut", "quaerat", "sit", "Eius", "neque", "labore", "dolor", "voluptatem", "modi", "magnam", "aliquam", "Dolor", "aliquam", "quisquam", "quisquam", "amet", "porro", "dolorem", "labore", "Ipsum", "quaerat", "magnam", "dolorem", "dolor", "quiquia", "Quisquam", "dolorem", "voluptatem", "numquam", "quiquia", "aliquam", "Porro", "modi", "magnam", "voluptatem", "amet", "sit", "est", "quaerat", "Modi", "neque", "ipsum", "labore", "non", "Ut", "non", "sit", "quiquia", "quaerat", "numquam", "Dolorem", "quaerat", "eius", "numquam", "modi", "adipisci", "dolorem", "Amet", "magnam", "ut", "numquam", "dolore", "Dolor", "neque", "modi", "quiquia", "non", "Numquam", "sed", "quisquam", "dolorem", "Amet", "modi", "consectetur", "aliquam", "Quiquia", "dolor", "etincidunt", "adipisci", "Magnam", "aliquam", "modi", "voluptatem", "est", "Quisquam", "est", "dolore", "aliquam", "Quaerat", "neque", "ut", "magnam", "magnam", "consectetur", "tempora", "Est", "amet", "velit", "neque", "ipsum", "voluptatem", "velit", "aliquam", "Dolore", "ut", "ut", "dolor", "Quaerat", "voluptatem", "quaerat", "neque", "Etincidunt", "sit", "ipsum", "adipisci" };
            int sorted_count[] = { 1, 4, 2, 2, 3, 5, 6, 4, 1, 6, 3, 4, 6, 6, 6, 7, 2, 3, 3, 5, 1, 4, 2, 4, 1, 3, 1, 3, 3, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1 };

            struct dictionary_t *arr;

            arr = create_dictionary(120, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 120, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 120, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 120; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            }

            for (i = 0; i < 44; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(sorted_tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(sorted_tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == *(sorted_count + i), "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, *(sorted_count + i), (arr->wc + i)->counter);
            }

            int err_code = save_dictionary_b(arr, "eight.bin");
            test_error(err_code == 2, "Funkcja save_dictionary_b() powinna zwrócić wartość 2, a zwróciła %d", err_code);


            destroy_dictionary(&arr);

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
//  Test 82: Sprawdzanie poprawności działania funkcji display
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct dictionary_t *arr;
            char *tab[] = {"teach", "show", "port", "ring", "will", "oxygen", "quite", "black", "area"};

            arr = create_dictionary(9, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate(); 

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 9, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 9; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 9, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 9 na %d", arr->capacity);
            }


    //-------------1-----------------------

            printf("***START***\n");
            dictionary_display(NULL);
            printf("***END***\n");


    //-------------2-----------------------

            arr->capacity = 9 - 1;
            arr->size = 9;

            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");


    //-------------3-----------------------

            arr->capacity = 9;
            arr->size = -10;

            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");


    //-------------4-----------------------

            arr->capacity = 9 - 1;
            arr->size = 0;

            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");

    //-------------5-----------------------

            arr->capacity = 9;
            arr->size = 9;

            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");

    //-------------6-----------------------


            arr->capacity = 9;
            arr->size = 9 - 1;


            printf("***START***\n");
            dictionary_display(arr);
            printf("***END***\n");

            arr->size = 9;


            destroy_dictionary(&arr);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci; limit ustawiono na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci; limit ustawiono na 0 bajtów", __LINE__);

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
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Reakcja na brak pamięci; limit ustawiono na 50 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci; limit ustawiono na 50 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(50);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Reakcja na brak pamięci; limit ustawiono na 226 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci; limit ustawiono na 226 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(226);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Reakcja na brak pamięci; limit ustawiono na 350 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci; limit ustawiono na 350 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(350);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Reakcja na brak pamięci; limit ustawiono na 50 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci; limit ustawiono na 50 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(50);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 2);
    
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

//
//  Test 7: Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 2);
    
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

//
//  Test 8: Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)", __LINE__);

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
                test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)
//
void MTEST9(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(9, "Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)", __LINE__);

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
            UTEST1, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)
            UTEST2, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11776 bajtów)
            UTEST3, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 64880 bajtów)
            UTEST4, // Sprawdzanie poprawności działania funkcji create
            UTEST5, // Sprawdzanie poprawności działania funkcji create
            UTEST6, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)
            UTEST7, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 11776 bajtów)
            UTEST8, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 64880 bajtów)
            UTEST9, // Sprawdzanie poprawności działania funkcji create
            UTEST10, // Sprawdzanie poprawności działania funkcji create
            UTEST11, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
            UTEST12, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
            UTEST13, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)
            UTEST14, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
            UTEST15, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
            UTEST16, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 400 bajtów)
            UTEST17, // Sprawdzanie poprawności działania funkcji create
            UTEST18, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST19, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST20, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST21, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST22, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST23, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST24, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST25, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST26, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 248 bajtów)
            UTEST27, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 408 bajtów)
            UTEST28, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 408 bajtów)
            UTEST29, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST30, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST31, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST32, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST33, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST34, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST35, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST36, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST37, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST38, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST39, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST40, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST41, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST42, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST43, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST44, // Sprawdzanie poprawności działania funkcji dictionary_sort_alphabetically
            UTEST45, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST46, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST47, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST48, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST49, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST50, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST51, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST52, // Sprawdzanie poprawności działania funkcji dictionary_sort_occurence
            UTEST53, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST54, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST55, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST56, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST57, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST58, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST59, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST60, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST61, // Sprawdzanie poprawności działania funkcji load_dictionary_b
            UTEST62, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)
            UTEST63, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)
            UTEST64, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)
            UTEST65, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 672 bajtów)
            UTEST66, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 692 bajtów)
            UTEST67, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 947 bajtów)
            UTEST68, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 0 bajtów)
            UTEST69, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 20 bajtów)
            UTEST70, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 100 bajtów)
            UTEST71, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 672 bajtów)
            UTEST72, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 692 bajtów)
            UTEST73, // Sprawdzanie poprawności działania funkcji load_dictionary_b (limit sterty ustawiony na 947 bajtów)
            UTEST74, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST75, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST76, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST77, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST78, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST79, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST80, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST81, // Sprawdzanie poprawności działania funkcji save_dictionary_b
            UTEST82, // Sprawdzanie poprawności działania funkcji display
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
            test_summary(82); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci; limit ustawiono na 0 bajtów
            MTEST2, // Reakcja na brak pamięci; limit ustawiono na 50 bajtów
            MTEST3, // Reakcja na brak pamięci; limit ustawiono na 226 bajtów
            MTEST4, // Reakcja na brak pamięci; limit ustawiono na 350 bajtów
            MTEST5, // Reakcja na brak pamięci; limit ustawiono na 50 bajtów
            MTEST6, // Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)
            MTEST7, // Reakcja na błąd funkcji fopen (dozwolone 2-krotne wywołanie fopen)
            MTEST8, // Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)
            MTEST9, // Reakcja na błąd funkcji fopen (dozwolone 1-krotne wywołanie fopen)
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
            test_summary(9); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}