/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Słownik
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-04-02 12:15:11.245446
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
//  Test 1: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 448 bajtów)
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 448 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(448);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;
        
                int err_code = 3;
        
                arr = create_dictionary(27, &err_code);
            
                test_error(err_code == 0, "Funkcja create_dictionary() przypisać kod błędu 0, a przypisała %d", err_code);
                
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
        
                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
            
                    onerror_terminate(); 
            
                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 27, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 27, a ustawiła na %d", arr->capacity);
            
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
//  Test 2: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 3536 bajtów)
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 3536 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3536);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;
        
                int err_code = 2;
        
                arr = create_dictionary(220, &err_code);
            
                test_error(err_code == 0, "Funkcja create_dictionary() przypisać kod błędu 0, a przypisała %d", err_code);
                
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
        
                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
            
                    onerror_terminate(); 
            
                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 220, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 220, a ustawiła na %d", arr->capacity);
            
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
//  Test 3: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 87344 bajtów)
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 87344 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(87344);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;
        
                int err_code = 0;
        
                arr = create_dictionary(5458, &err_code);
            
                test_error(err_code == 0, "Funkcja create_dictionary() przypisać kod błędu 0, a przypisała %d", err_code);
                
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
        
                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
            
                    onerror_terminate(); 
            
                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 5458, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 5458, a ustawiła na %d", arr->capacity);
            
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
        
                int err_code = 1;
        
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
        
                int err_code = 3;
        
                arr = create_dictionary(-76, &err_code);
            
                test_error(err_code == 1, "Funkcja create_dictionary() przypisać kod błędu 1, a przypisała %d", err_code);
                
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {
        
                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
            
                    onerror_terminate(); 
            
                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == -76, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na -76, a ustawiła na %d", arr->capacity);
            
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
//  Test 6: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 448 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 448 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(448);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(27, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 27, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 27, a ustawiła na %d", arr->capacity);

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
//  Test 7: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 3536 bajtów)
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 3536 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3536);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(220, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 220, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 220, a ustawiła na %d", arr->capacity);

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
//  Test 8: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 87344 bajtów)
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 87344 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(87344);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(5458, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == 5458, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 5458, a ustawiła na %d", arr->capacity);

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

                arr = create_dictionary(-76, NULL);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {

                    test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

                    onerror_terminate(); 

                    test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                    test_error(arr->capacity == -76, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na -76, a ustawiła na %d", arr->capacity);

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
        
                arr = create_dictionary(70, &err_code);
        
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
        
                arr = create_dictionary(70, &err_code);
        
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
//  Test 13: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1120 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1120 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1120);
    
    //
    // -----------
    //
    
        
                struct dictionary_t *arr;
        
                int err_code = 2;
        
                arr = create_dictionary(70, &err_code);
        
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

                arr = create_dictionary(70, NULL);

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

                arr = create_dictionary(70, NULL);

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
//  Test 16: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1120 bajtów)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1120 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1120);
    
    //
    // -----------
    //
    

                struct dictionary_t *arr;

                arr = create_dictionary(70, NULL);

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
//  Test 18: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiony na 221)
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiony na 221)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(221);
    
    //
    // -----------
    //
    

            char *tab[] = { "sudden", "happen", "possible", "plan", "necessary", "full", "unit", "believe", "told" };

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
//  Test 19: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiony na 371)
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiony na 371)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(371);
    
    //
    // -----------
    //
    

            char *tab[] = { "sudden", "happen", "possible", "plan", "necessary", "full", "unit", "believe", "told" };
            char *add_word = "round";

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
    

            char *add_word = "round";

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
    

            char *add_word = "round";

            struct dictionary_t *arr;

            arr = create_dictionary(9, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 9, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 9, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->size = -9;
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
    

            char *add_word = "round";

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
    

            char *add_word = "round";

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
//  Test 26: Sprawdzanie poprawności działania funkcji dictionary_add_word
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji dictionary_add_word", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *tab[] = { "north", "tree", "term", "select", "left", "sentence", "chord", "life", "occur", "field", "try", "double", "free", "fast", "sun", "shoulder", "million", "perhaps", "thin", "reach", "select", "tree", "shoulder", "million", "fast", "occur", "million", "tree", "north", "term", "sun", "sun", "tree", "shoulder", "occur", "term", "chord", "tree", "tree", "perhaps" };
            const int array[] = {2, 6, 3, 2, 1, 1, 2, 1, 3, 1, 1, 1, 1, 2, 3, 3, 3, 2, 1, 1};

            struct dictionary_t *arr;

            arr = create_dictionary(20, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 20; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (int i = 0; i < 20; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            for (int i = 20; i < 40; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == 20, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 20, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (int i = 0; i < 20; ++i)
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
//  Test 27: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 143 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 143 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(143);
    
    //
    // -----------
    //
    
        
                char *tab[] = { "past", "now", "star", "sight", "fire", "sharp" };
                char *add_word = "pick";
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(6, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 6, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 6, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < 6; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                    test_error(arr->capacity == 6, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 6 na %d", arr->capacity);
                }
        
                for (int i = 0; i < 6; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }
        
                int err_code = dictionary_add_word(arr, add_word);
        
                test_error(err_code == 2, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                test_error(arr->size == 6, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 6, arr->size);
                test_error(arr->capacity == 6, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 6 na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < 6; ++i)
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
//  Test 28: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 239 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 239 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(239);
    
    //
    // -----------
    //
    
        
                char *tab[] = { "past", "now", "star", "sight", "fire", "sharp" };
                char *add_word = "pick";
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(6, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 6, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 6, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < 6; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                    test_error(arr->capacity == 6, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 6 na %d", arr->capacity);
                }
        
                for (int i = 0; i < 6; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }
        
                int err_code = dictionary_add_word(arr, add_word);
        
                test_error(err_code == 2, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                test_error(arr->size == 6, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 6, arr->size);
                test_error(arr->capacity == 12, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 12 na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < 6; ++i)
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
//  Test 29: Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 239 bajtów)
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 239 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(239);
    
    //
    // -----------
    //
    

            char *tab[] = { "past", "now", "star", "sight", "fire", "sharp" };
            char *add_word = "pick";

            struct dictionary_t *arr;

            arr = create_dictionary(12, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 12, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 12, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 6; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 12, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 12 na %d", arr->capacity);
            }

            for (int i = 0; i < 6; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            int err_code = dictionary_add_word(arr, add_word);

            test_error(err_code == 2, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(arr->size == 6, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", 6, arr->size);
            test_error(arr->capacity == 12, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 12 na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 6; ++i)
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
    

            char *tab[] = { "soil", "imagine", "cost", "listen", "begin", "thousand", "idea", "group", "reason", "dog", "answer", "climb", "tail", "against", "phrase", "person", "though" };

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

            struct word_count_t* wc = dictionary_find_word(arr, *(tab + 6));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 6)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 6), wc->word);
            test_error(wc->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 1, wc->counter);


            wc = dictionary_find_word(arr, *(tab + 0));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 0)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 0), wc->word);
            test_error(wc->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 1, wc->counter);

            wc = dictionary_find_word(arr, *(tab + 17 - 1));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 17 - 1)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 17 - 1), wc->word);
            test_error(wc->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 1, wc->counter);

            for (i = 0; i < 4; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + 6));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(strcmp((arr->wc + 6)->word, *(tab + 6)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", 6, *(tab + 6), (arr->wc + 6)->word);
                test_error((arr->wc + 6)->counter == i + 2, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + 6)->word, i + 2, (arr->wc + 6)->counter);
            }


            wc = dictionary_find_word(arr, *(tab + 6));

            test_error(wc != NULL, "Funkcja dictionary_find_word() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(strcmp(wc->word, *(tab + 6)) ==  0, "Wyraz zapisany w strukturze zwróconej przez funkcję find jest niewłaściwy, powinno być %s, a jest %s", i, *(tab + 6), wc->word);
            test_error(wc->counter == 4 + 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", wc->word, 4 + 1, wc->counter);


            wc = dictionary_find_word(arr, "history");
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
    
        
                char *tab[] = { "dark", "made", "short", "cover", "check", "busy", "hurry", "molecule", "place", "rule", "complete", "sent", "present", "stream", "degree", "stone", "neighbor", "village", "death", "first" };
        
                struct dictionary_t *arr;
        
                arr = create_dictionary(20, NULL);
                test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");
        
                onerror_terminate();
        
                test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
                test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int i = 0;
        
                for (; i < 20; ++i)
                {
                    int err_code = dictionary_add_word(arr, *(tab + i));
                    test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                    test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
                }
        
                for (i = 0; i < 20; ++i)
                {
                    test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                    test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
                }
        
        
                struct word_count_t* wc = dictionary_find_word(arr, "['s', 'st', 'sto', 's']");
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
    

            char *tab[] = { "dark", "made", "short", "cover", "check", "busy", "hurry", "molecule", "place", "rule", "complete", "sent", "present", "stream", "degree", "stone", "neighbor", "village", "death", "first" };

            struct dictionary_t *arr;

            arr = create_dictionary(20, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 20; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (i = 0; i < 20; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }


            arr->size = -6;

            struct word_count_t* wc = dictionary_find_word(arr, "['s', 'st', 'sto', 's']");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            arr->size = 20;

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
    

            char *tab[] = { "dark", "made", "short", "cover", "check", "busy", "hurry", "molecule", "place", "rule", "complete", "sent", "present", "stream", "degree", "stone", "neighbor", "village", "death", "first" };

            struct dictionary_t *arr;

            arr = create_dictionary(20, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 20; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (i = 0; i < 20; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            arr->size = -9;
            arr->capacity = arr->size + 1;

            struct word_count_t* wc = dictionary_find_word(arr, "['s', 'st', 'sto', 's']");
            test_error(wc == NULL, "Funkcja dictionary_find_word() powinna zwrócić NULL");

            arr->size = 20;
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
    

            char *tab[] = { "dark", "made", "short", "cover", "check", "busy", "hurry", "molecule", "place", "rule", "complete", "sent", "present", "stream", "degree", "stone", "neighbor", "village", "death", "first" };

            struct dictionary_t *arr;

            arr = create_dictionary(20, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 20; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (i = 0; i < 20; ++i)
            {
                test_error(strcmp((arr->wc + i)->word, *(tab + i)) ==  0, "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %s, a jest %s", i, *(tab + i), (arr->wc + i)->word);
                test_error((arr->wc + i)->counter == 1, "Liczba wystąpień słowa %s jest nieprawidłowa, powinno być %d, a jest %d", (arr->wc + i)->word, 1, (arr->wc + i)->counter);
            }

            struct word_count_t *temp_wc = arr->wc;
            arr->wc = NULL;

            struct word_count_t* wc = dictionary_find_word(arr, "['s', 'st', 'sto', 's']");
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
    

            char *tab[] = { "dark", "made", "short", "cover", "check", "busy", "hurry", "molecule", "place", "rule", "complete", "sent", "present", "stream", "degree", "stone", "neighbor", "village", "death", "first" };

            struct dictionary_t *arr;

            arr = create_dictionary(20, NULL);
            test_error(arr != NULL, "Funkcja create_dictionary() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");

            onerror_terminate();

            test_error(arr->wc != NULL, "Funkcja create_dictionary() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->size == 0, "Funkcja create_dictionary() powinna ustawić liczbę elementów w tablicy na 0, a ustawiła na %d", arr->size);
            test_error(arr->capacity == 20, "Funkcja create_dictionary() powinna ustawić pojemność tablicy na 20, a ustawiła na %d", arr->capacity);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int i = 0;

            for (; i < 20; ++i)
            {
                int err_code = dictionary_add_word(arr, *(tab + i));
                test_error(err_code == 0, "Funkcja dictionary_add_word() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(arr->size == i + 1, "Funkcja dictionary_add_word() powinna ustawić liczbę elementów w tablicy na %d, a ustawiła na %d", i + 1, arr->size);
                test_error(arr->capacity == 20, "Funkcja dictionary_add_word() nie powinna zmieniać ustawienia pojemności tablicy, a zmieniła z 20 na %d", arr->capacity);
            }

            for (i = 0; i < 20; ++i)
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
    

            char *add_word = "['s', 'st', 'sto', 's']";

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
//  Test 37: Sprawdzanie poprawności działania funkcji dictionary_find_word
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji dictionary_find_word", __LINE__);

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
//  Test 38: Sprawdzanie poprawności działania funkcji display
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct dictionary_t *arr;
            char *tab[] = {"engine", "word", "wheel", "end", "market", "fresh", "his", "women", "mean"};

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
            arr->size = -23;

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
            UTEST1, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 448 bajtów)
            UTEST2, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 3536 bajtów)
            UTEST3, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 87344 bajtów)
            UTEST4, // Sprawdzanie poprawności działania funkcji create
            UTEST5, // Sprawdzanie poprawności działania funkcji create
            UTEST6, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 448 bajtów)
            UTEST7, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 3536 bajtów)
            UTEST8, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 87344 bajtów)
            UTEST9, // Sprawdzanie poprawności działania funkcji create
            UTEST10, // Sprawdzanie poprawności działania funkcji create
            UTEST11, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
            UTEST12, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
            UTEST13, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1120 bajtów)
            UTEST14, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
            UTEST15, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
            UTEST16, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 1120 bajtów)
            UTEST17, // Sprawdzanie poprawności działania funkcji create
            UTEST18, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiony na 221)
            UTEST19, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiony na 371)
            UTEST20, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST21, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST22, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST23, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST24, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST25, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST26, // Sprawdzanie poprawności działania funkcji dictionary_add_word
            UTEST27, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 143 bajtów)
            UTEST28, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 239 bajtów)
            UTEST29, // Sprawdzanie poprawności działania funkcji dictionary_add_word (limit sterty ustawiono na 239 bajtów)
            UTEST30, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST31, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST32, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST33, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST34, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST35, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST36, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST37, // Sprawdzanie poprawności działania funkcji dictionary_find_word
            UTEST38, // Sprawdzanie poprawności działania funkcji display
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
            test_summary(38); // wszystkie testy muszą zakończyć się sukcesem
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