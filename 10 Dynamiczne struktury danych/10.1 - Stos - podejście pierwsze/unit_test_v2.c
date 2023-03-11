/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Stos - podejście pierwsze
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-22 20:55:56.221357
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
//  Test 1: Sprawdzanie poprawności działania funkcji stack_init
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji stack_init", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct stack_t *ptr;

                    printf("#####START#####");
                    int res = stack_init(&ptr, -83);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja stack_init() powinna zwrócić wartość 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    if (!1)
                    {           

                        test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                        test_error(ptr->capacity == -83, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na -83, a ustawiła na %d", ptr->capacity);
                        test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");

                        stack_free(ptr);
                        
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
//  Test 2: Sprawdzanie poprawności działania funkcji stack_init
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji stack_init", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct stack_t *ptr;

                    printf("#####START#####");
                    int res = stack_init(&ptr, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja stack_init() powinna zwrócić wartość 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    if (!1)
                    {           

                        test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                        test_error(ptr->capacity == 0, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 0, a ustawiła na %d", ptr->capacity);
                        test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");

                        stack_free(ptr);
                        
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
//  Test 3: Sprawdzanie poprawności działania funkcji stack_init
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji stack_init", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct stack_t *ptr;

                    printf("#####START#####");
                    int res = stack_init(&ptr, 78);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    if (!0)
                    {           

                        test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                        test_error(ptr->capacity == 78, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 78, a ustawiła na %d", ptr->capacity);
                        test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");

                        stack_free(ptr);
                        
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
//  Test 4: Sprawdzanie poprawności działania funkcji stack_init
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji stack_init", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    struct stack_t *ptr;

                    printf("#####START#####");
                    int res = stack_init(&ptr, 9149);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    if (!0)
                    {           

                        test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                        test_error(ptr->capacity == 9149, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 9149, a ustawiła na %d", ptr->capacity);
                        test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");

                        stack_free(ptr);
                        
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
//  Test 5: Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 88 bajtów)
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 88 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(88);
    
    //
    // -----------
    //
    

                    struct stack_t *ptr;

                    printf("#####START#####");
                    int res = stack_init(&ptr, 18);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                    test_error(ptr->capacity == 18, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 18, a ustawiła na %d", ptr->capacity);
                    test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");

                    stack_free(ptr);
                    
                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        

                    struct stack_t *ptr;

                    printf("#####START#####");
                    int res = stack_init(&ptr, 18);
                    printf("#####END#####");

                    test_error(res == 2, "Funkcja stack_init() powinna zwrócić wartość 2, a zwróciła %d", res);
                    test_error(ptr == NULL, "Funkcja stack_init() powinna przypisać NULL pod ptr przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    
        

                    struct stack_t *ptr;

                    printf("#####START#####");
                    int res = stack_init(&ptr, 18);
                    printf("#####END#####");

                    test_error(res == 2, "Funkcja stack_init() powinna zwrócić wartość 2, a zwróciła %d", res);
                    test_error(ptr == NULL, "Funkcja stack_init() powinna przypisać NULL pod ptr przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 60 bajtów)
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 60 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(60);
    
    //
    // -----------
    //
    
        

                    struct stack_t *ptr;

                    printf("#####START#####");
                    int res = stack_init(&ptr, 18);
                    printf("#####END#####");

                    test_error(res == 2, "Funkcja stack_init() powinna zwrócić wartość 2, a zwróciła %d", res);
                    test_error(ptr == NULL, "Funkcja stack_init() powinna przypisać NULL pod ptr przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji stack_init
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji stack_init", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    printf("#####START#####");
                    int res = stack_init(NULL, 18);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja stack_init() powinna zwrócić wartość 1, a zwróciła %d", res);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                const int array[] = {1, -89, 81, 60, -5, -58, 60, 83, 6, -50, 51, -53, -15};
        
                struct stack_t *ptr;

                printf("#####START#####");
                int res = stack_init(&ptr, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 13, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 13, a ustawiła na %d", ptr->capacity);
                test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");

                for (int i = 0; i < 13; ++i)
                {
                        printf("#####START#####");
                        res = stack_push(ptr, array[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr->head == i + 1, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i + 1, ptr->head);
                        test_error(ptr->capacity == 13, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 13, a ustawiła na %d", ptr->capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
        
                int additional = 16;
                printf("#####START#####");
                res = stack_push(ptr, additional);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr->head == 14, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na 14, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 26, "Funkcja stack_push() powinna ustawić wartość pola size w strukturze na 26, a ustawiła na %d", ptr->capacity);
        
                int j;
        
                for (j = 0; j < 13; ++j)
                    test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);
        
                test_error(ptr->data[j] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, additional, ptr->data[j]);
        
                stack_free(ptr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                const int array[] = {-66, -13, -52, -91, 38, 5, 34, -48, -92, 98, 62, -41, 66, -10, 99, 51, -99, -82, -65, 1, -5, -54, 33, 49, -50, -8, -44, 7, 45, 1, 11, 87, -95, 54, 57, -41, 54, 52, -42, -42, 57, 76, 11, 73, -10, -31, -29, -50, -12, 56, -13, 66, -34, -38, -78, 31, -4};
        
                struct stack_t *ptr;

                printf("#####START#####");
                int res = stack_init(&ptr, 57);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 57, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 57, a ustawiła na %d", ptr->capacity);
                test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");

                for (int i = 0; i < 57; ++i)
                {
                        printf("#####START#####");
                        res = stack_push(ptr, array[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr->head == i + 1, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i + 1, ptr->head);
                        test_error(ptr->capacity == 57, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 57, a ustawiła na %d", ptr->capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
        
                int additional = 97;
                printf("#####START#####");
                res = stack_push(ptr, additional);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr->head == 58, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na 58, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 114, "Funkcja stack_push() powinna ustawić wartość pola size w strukturze na 114, a ustawiła na %d", ptr->capacity);
        
                int j;
        
                for (j = 0; j < 57; ++j)
                    test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);
        
                test_error(ptr->data[j] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, additional, ptr->data[j]);
        
                stack_free(ptr);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie reakcji funkcji stack_push na limit pamięci (limit sterty ustawiono na 124 bajtów)
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie reakcji funkcji stack_push na limit pamięci (limit sterty ustawiono na 124 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(124);
    
    //
    // -----------
    //
    

            const int array[] = {-30, -92, 95, -28, 91, -84, -77, -83, 91, 59, 77, 60, 18, 3, -4, 89, -30, -67};

            struct stack_t *ptr;

            printf("#####START#####");
            int res = stack_init(&ptr, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
            test_error(ptr->capacity == 9, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 9, a ustawiła na %d", ptr->capacity);
            test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");

            for (int i = 0; i < 9; ++i)
            {
                    printf("#####START#####");
                    res = stack_push(ptr, array[i]);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                    test_error(ptr->head == i + 1, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i + 1, ptr->head);
                    test_error(ptr->capacity == 9, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 9, a ustawiła na %d", ptr->capacity);

                    for (int j = 0; j <= i; ++j)
                        test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            }

            for (int i = 9; i < 2 * 9; ++i)
            {
                    printf("#####START#####");
                    res = stack_push(ptr, array[i]);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                    test_error(ptr->head == i + 1, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i + 1, ptr->head);
                    test_error(ptr->capacity == 18, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 18, a ustawiła na %d", ptr->capacity);

                    for (int j = 0; j <= i; ++j)
                        test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            }


            stack_free(ptr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie reakcji funkcji array_push_back na limit pamięci (limit sterty ustawiono na 52 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji array_push_back na limit pamięci (limit sterty ustawiono na 52 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(52);
    
    //
    // -----------
    //
    

            const int array[] = {-30, -92, 95, -28, 91, -84, -77, -83, 91, 59, 77, 60, 18, 3, -4, 89, -30, -67};

            struct stack_t *ptr;

            printf("#####START#####");
            int res = stack_init(&ptr, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
            test_error(ptr->capacity == 9, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 9, a ustawiła na %d", ptr->capacity);
            test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");

            int i = 0;

            for (; i < 9; ++i)
            {
                    printf("#####START#####");
                    res = stack_push(ptr, array[i]);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                    test_error(ptr->head == i + 1, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i + 1, ptr->head);
                    test_error(ptr->capacity == 9, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 9, a ustawiła na %d", ptr->capacity);

                    for (int j = 0; j <= i; ++j)
                        test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            }
            
            printf("#####START#####");
            res = stack_push(ptr, array[i]);
            printf("#####END#####");

            test_error(res == 2, "Funkcja stack_push() powinna zwrócić wartość 2, a zwróciła %d", res);
            test_error(ptr->head == i, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i, ptr->head);
            test_error(ptr->capacity == 9, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 9, a ustawiła na %d", ptr->capacity);

            for (int j = 0; j < i; ++j)
                test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_free(ptr);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {23, -28, 80, 84, 25, -91, -29, -62, 44, -7};
                struct stack_t ptr = { .data = array, .head = -5, .capacity = 4 };

                printf("#####START#####");
                int res = stack_push(&ptr, -79);
                printf("#####END#####");

                test_error(res == 1, "Funkcja stack_push() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {23, -28, 80, 84, 25, -91, -29, -62, 44, -7};
                struct stack_t ptr = { .data = array, .head = 0, .capacity = -9 };

                printf("#####START#####");
                int res = stack_push(&ptr, 13);
                printf("#####END#####");

                test_error(res == 1, "Funkcja stack_push() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {23, -28, 80, 84, 25, -91, -29, -62, 44, -7};
                struct stack_t ptr = { .data = array, .head = 15, .capacity = 7 };

                printf("#####START#####");
                int res = stack_push(&ptr, -7);
                printf("#####END#####");

                test_error(res == 1, "Funkcja stack_push() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {23, -28, 80, 84, 25, -91, -29, -62, 44, -7};
                struct stack_t ptr = { .data = array, .head = 0, .capacity = 0 };

                printf("#####START#####");
                int res = stack_push(&ptr, -33);
                printf("#####END#####");

                test_error(res == 1, "Funkcja stack_push() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {23, -28, 80, 84, 25, -91, -29, -62, 44, -7};
                struct stack_t ptr = { .data = array, .head = 16, .capacity = -5 };

                printf("#####START#####");
                int res = stack_push(&ptr, -51);
                printf("#####END#####");

                test_error(res == 1, "Funkcja stack_push() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {23, -28, 80, 84, 25, -91, -29, -62, 44, -7};
                struct stack_t ptr = { .data = array, .head = -14, .capacity = -9 };

                printf("#####START#####");
                int res = stack_push(&ptr, -31);
                printf("#####END#####");

                test_error(res == 1, "Funkcja stack_push() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct stack_t ptr = { .data = NULL, .head = 10, .capacity = 17 };

            printf("#####START#####");
            int res = stack_push(&ptr, -54);
            printf("#####END#####");

            test_error(res == 1, "Funkcja stack_push() powinna zwrócić wartość 1, a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = stack_push(NULL, 67);
            printf("#####END#####");

            test_error(res == 1, "Funkcja stack_push() powinna zwrócić wartość 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {73, -73, -70, 13, 80, -81, -44, -32, -12, 27};

                struct stack_t *ptr;

                printf("#####START#####");
                int res = stack_init(&ptr, 10);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 10, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 10, a ustawiła na %d", ptr->capacity);
                test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = 3;

                stack_pop(ptr, &err_code);

                test_error(err_code == 2, "Funkcja stack_pop() powinna ustawić kod błędu na 2, a zwróciła %d", err_code);

                for (int i = 0; i < 10; ++i)
                {
                        printf("#####START#####");
                        res = stack_push(ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr->head == i + 1, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i + 1, ptr->head);
                        test_error(ptr->capacity == 10, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 10, a ustawiła na %d", ptr->capacity);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                int additional = 89;
                printf("#####START#####");
                res = stack_push(ptr, additional);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr->head == 11, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na 11, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 20, "Funkcja stack_push() powinna ustawić wartość pola size w strukturze na 20, a ustawiła na %d", ptr->capacity);

                int j;

                for (j = 0; j < 10; ++j)
                    test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                test_error(ptr->data[j] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, additional, ptr->data[j]);

                err_code = 1;

                res = stack_pop(ptr, &err_code);

                test_error(res == additional, "Funkcja stack_pop zwróciła nieprawidłową wartość; powinna zwrócić %d, a jest %d", additional, res);
                test_error(err_code == 0, "Funkcja stack_pop() powinna ustawić kod błędu na 0, a zwróciła %d", err_code);

                for (j = 9; j >= 0; --j)
                {

                    int err_code = 3;
        
                    res = stack_pop(ptr, &err_code);
        
                    test_error(res == array[j], "Funkcja stack_pop zwróciła nieprawidłową wartość; powinna zwrócić %d, a jest %d", j, array[j], res);
                    test_error(ptr->head == j, "Funkcja stack_pop() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", j, ptr->head);
                    test_error(ptr->capacity == 20, "Funkcja stack_pop() powinna ustawić wartość pola size w strukturze na 20, a ustawiła na %d", ptr->capacity);
                    test_error(err_code == 0, "Funkcja stack_pop() powinna ustawić kod błędu na 0, a zwróciła %d", err_code);
                }

                err_code = 3;

                stack_pop(ptr, &err_code);

                test_error(err_code == 2, "Funkcja stack_pop() powinna ustawić kod błędu na 2, a zwróciła %d", err_code);

                stack_free(ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {80, -17, -76, -33, 72, 0, 44, 86, 98, 79, 92, -4, -62, 25, -61, 87, -5, -27, 71, 75, 96, -91, 63, -70, 20, 35, 51, 30, 88, -48, 38, -59, -77, -61, 16, -31, -32, 55, -85, 8, 9, -40, -11, 94, 34, -97, 29, -28, 25, -52, 36, -85, -40, -46, -50, 42, -93, -56, 44, -88, -87, -25, -44, 20, 70, 17, -42, -10, -48, -48, 98, -93, 11, 84, -48, 21, -63, -72, 29, 79, -26, 83, -45, 13, -77, 35, -12, 47, -71, -50, -51, -23};

                struct stack_t *ptr;

                printf("#####START#####");
                int res = stack_init(&ptr, 92);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 92, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 92, a ustawiła na %d", ptr->capacity);
                test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = 2;

                stack_pop(ptr, &err_code);

                test_error(err_code == 2, "Funkcja stack_pop() powinna ustawić kod błędu na 2, a zwróciła %d", err_code);

                for (int i = 0; i < 92; ++i)
                {
                        printf("#####START#####");
                        res = stack_push(ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr->head == i + 1, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i + 1, ptr->head);
                        test_error(ptr->capacity == 92, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 92, a ustawiła na %d", ptr->capacity);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                int additional = 79;
                printf("#####START#####");
                res = stack_push(ptr, additional);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr->head == 93, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na 93, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 184, "Funkcja stack_push() powinna ustawić wartość pola size w strukturze na 184, a ustawiła na %d", ptr->capacity);

                int j;

                for (j = 0; j < 92; ++j)
                    test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                test_error(ptr->data[j] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, additional, ptr->data[j]);

                err_code = 1;

                res = stack_pop(ptr, &err_code);

                test_error(res == additional, "Funkcja stack_pop zwróciła nieprawidłową wartość; powinna zwrócić %d, a jest %d", additional, res);
                test_error(err_code == 0, "Funkcja stack_pop() powinna ustawić kod błędu na 0, a zwróciła %d", err_code);

                for (j = 91; j >= 0; --j)
                {

                    int err_code = 0;
        
                    res = stack_pop(ptr, &err_code);
        
                    test_error(res == array[j], "Funkcja stack_pop zwróciła nieprawidłową wartość; powinna zwrócić %d, a jest %d", j, array[j], res);
                    test_error(ptr->head == j, "Funkcja stack_pop() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", j, ptr->head);
                    test_error(ptr->capacity == 184, "Funkcja stack_pop() powinna ustawić wartość pola size w strukturze na 184, a ustawiła na %d", ptr->capacity);
                    test_error(err_code == 0, "Funkcja stack_pop() powinna ustawić kod błędu na 0, a zwróciła %d", err_code);
                }

                err_code = 0;

                stack_pop(ptr, &err_code);

                test_error(err_code == 2, "Funkcja stack_pop() powinna ustawić kod błędu na 2, a zwróciła %d", err_code);

                stack_free(ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {73, -73, -70, 13, 80, -81, -44, -32, -12, 27};

                struct stack_t *ptr;

                printf("#####START#####");
                int res = stack_init(&ptr, 10);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 10, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 10, a ustawiła na %d", ptr->capacity);
                test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                stack_pop(ptr, NULL);

                for (int i = 0; i < 10; ++i)
                {
                        printf("#####START#####");
                        res = stack_push(ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr->head == i + 1, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i + 1, ptr->head);
                        test_error(ptr->capacity == 10, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 10, a ustawiła na %d", ptr->capacity);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                int additional = -34;
                printf("#####START#####");
                res = stack_push(ptr, additional);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr->head == 11, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na 11, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 20, "Funkcja stack_push() powinna ustawić wartość pola size w strukturze na 20, a ustawiła na %d", ptr->capacity);

                int j;

                for (j = 0; j < 10; ++j)
                    test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                test_error(ptr->data[j] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, additional, ptr->data[j]);

                res = stack_pop(ptr, NULL);

                test_error(res == additional, "Funkcja stack_pop zwróciła nieprawidłową wartość; powinna zwrócić %d, a jest %d", additional, res);

                for (j = 9; j >= 0; --j)
                {
                    res = stack_pop(ptr, NULL);

                    test_error(res == array[j], "Funkcja stack_pop zwróciła nieprawidłową wartość; powinna zwrócić %d, a jest %d", j, array[j], res);
                    test_error(ptr->head == j, "Funkcja stack_pop() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", j, ptr->head);
                    test_error(ptr->capacity == 20, "Funkcja stack_pop() powinna ustawić wartość pola size w strukturze na 20, a ustawiła na %d", ptr->capacity);
                }

                stack_pop(ptr, NULL);

                stack_free(ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {80, -17, -76, -33, 72, 0, 44, 86, 98, 79, 92, -4, -62, 25, -61, 87, -5, -27, 71, 75, 96, -91, 63, -70, 20, 35, 51, 30, 88, -48, 38, -59, -77, -61, 16, -31, -32, 55, -85, 8, 9, -40, -11, 94, 34, -97, 29, -28, 25, -52, 36, -85, -40, -46, -50, 42, -93, -56, 44, -88, -87, -25, -44, 20, 70, 17, -42, -10, -48, -48, 98, -93, 11, 84, -48, 21, -63, -72, 29, 79, -26, 83, -45, 13, -77, 35, -12, 47, -71, -50, -51, -23};

                struct stack_t *ptr;

                printf("#####START#####");
                int res = stack_init(&ptr, 92);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_init() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->head == 0, "Funkcja stack_init() powinna ustawić wartość pola head w strukturze na 0, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 92, "Funkcja stack_init() powinna ustawić wartość pola capacity w strukturze na 92, a ustawiła na %d", ptr->capacity);
                test_error(ptr->data != NULL, "Funkcja stack_init() powinna przypisać adres przydzielonej pamięci pod pole data w strukturze, a przypisała NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                stack_pop(ptr, NULL);

                for (int i = 0; i < 92; ++i)
                {
                        printf("#####START#####");
                        res = stack_push(ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr->head == i + 1, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", i + 1, ptr->head);
                        test_error(ptr->capacity == 92, "Funkcja stack_push() powinna ustawić wartość pola capacity w strukturze na 92, a ustawiła na %d", ptr->capacity);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                int additional = -33;
                printf("#####START#####");
                res = stack_push(ptr, additional);
                printf("#####END#####");

                test_error(res == 0, "Funkcja stack_push() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr->head == 93, "Funkcja stack_push() powinna ustawić wartość pola head w strukturze na 93, a ustawiła na %d", ptr->head);
                test_error(ptr->capacity == 184, "Funkcja stack_push() powinna ustawić wartość pola size w strukturze na 184, a ustawiła na %d", ptr->capacity);

                int j;

                for (j = 0; j < 92; ++j)
                    test_error(ptr->data[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr->data[j]);

                test_error(ptr->data[j] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, additional, ptr->data[j]);

                res = stack_pop(ptr, NULL);

                test_error(res == additional, "Funkcja stack_pop zwróciła nieprawidłową wartość; powinna zwrócić %d, a jest %d", additional, res);

                for (j = 91; j >= 0; --j)
                {
                    res = stack_pop(ptr, NULL);

                    test_error(res == array[j], "Funkcja stack_pop zwróciła nieprawidłową wartość; powinna zwrócić %d, a jest %d", j, array[j], res);
                    test_error(ptr->head == j, "Funkcja stack_pop() powinna ustawić wartość pola head w strukturze na %d, a ustawiła na %d", j, ptr->head);
                    test_error(ptr->capacity == 184, "Funkcja stack_pop() powinna ustawić wartość pola size w strukturze na 184, a ustawiła na %d", ptr->capacity);
                }

                stack_pop(ptr, NULL);

                stack_free(ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = -1, .capacity = 8 };
                
                int err_code = 3;

                printf("#####START#####");
                stack_pop(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = 0, .capacity = -2 };
                
                int err_code = 0;

                printf("#####START#####");
                stack_pop(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = 17, .capacity = 7 };
                
                int err_code = 1;

                printf("#####START#####");
                stack_pop(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = 0, .capacity = 0 };
                
                int err_code = 1;

                printf("#####START#####");
                stack_pop(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = 12, .capacity = -5 };
                
                int err_code = 1;

                printf("#####START#####");
                stack_pop(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = -15, .capacity = -9 };
                
                int err_code = 2;

                printf("#####START#####");
                stack_pop(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct stack_t ptr = { .data = NULL, .head = 8, .capacity = 17 };

            int err_code = 2;

            printf("#####START#####");
            stack_pop(&ptr, &err_code);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = 2;

            printf("#####START#####");
            stack_pop(NULL, &err_code);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a zwróciła %d", err_code);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = -1, .capacity = 8 };

                printf("#####START#####");
                stack_pop(&ptr, NULL);
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
//  Test 35: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = 0, .capacity = -2 };

                printf("#####START#####");
                stack_pop(&ptr, NULL);
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
//  Test 36: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = 17, .capacity = 7 };

                printf("#####START#####");
                stack_pop(&ptr, NULL);
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
//  Test 37: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = 0, .capacity = 0 };

                printf("#####START#####");
                stack_pop(&ptr, NULL);
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
//  Test 38: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = 12, .capacity = -5 };

                printf("#####START#####");
                stack_pop(&ptr, NULL);
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
//  Test 39: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-8, -93, 2, 53, -77, 3, 40, 75, 73, -63};
                struct stack_t ptr = { .data = array, .head = -15, .capacity = -9 };

                printf("#####START#####");
                stack_pop(&ptr, NULL);
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
//  Test 40: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct stack_t ptr = { .data = NULL, .head = 3, .capacity = 20 };


            printf("#####START#####");
            stack_pop(&ptr, NULL);
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
//  Test 41: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            printf("#####START#####");
            stack_pop(NULL, NULL);
            printf("#####END#####");

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji stack_free
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji stack_free", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            stack_free(NULL);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji array_display
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji array_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {53, 23, 70, -69, 73, -63, -43, 8, -75, -3, -78, 90, 61, -81, 42, 14, 21};

                struct stack_t arr;
                arr.data = array;

        //-------------1-----------------------

                printf("***START***\n");
                stack_display(NULL);
                printf("***END***\n");


        //-------------2-----------------------

                arr.capacity = 16;
                arr.head = 17;

                printf("***START***\n");
                stack_display(&arr);
                printf("***END***\n");


        //-------------3-----------------------

                arr.capacity = 17;
                arr.head = -17;

                printf("***START***\n");
                stack_display(&arr);
                printf("***END***\n");


        //-------------4-----------------------

                arr.capacity = 17;
                arr.head = 0;

                printf("***START***\n");
                stack_display(&arr);
                printf("***END***\n");

        //-------------5-----------------------

                arr.capacity = 17;
                arr.head = 17;
                arr.data = NULL;

                printf("***START***\n");
                stack_display(&arr);
                printf("***END***\n");

        //-------------6-----------------------

                arr.capacity = 17;
                arr.head = 17;
                arr.data = array;

                printf("***START***\n");
                stack_display(&arr);
                printf("***END***\n");

        //-------------7-----------------------

                arr.capacity = 17;
                arr.head = 17 - 1;

                printf("***START***\n");
                stack_display(&arr);
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

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
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

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Reakcja na brak pamięci (limit sterty ustawiono na 56 bajtów)
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci (limit sterty ustawiono na 56 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(56);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
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
            UTEST1, // Sprawdzanie poprawności działania funkcji stack_init
            UTEST2, // Sprawdzanie poprawności działania funkcji stack_init
            UTEST3, // Sprawdzanie poprawności działania funkcji stack_init
            UTEST4, // Sprawdzanie poprawności działania funkcji stack_init
            UTEST5, // Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 88 bajtów)
            UTEST6, // Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST7, // Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST8, // Sprawdzanie reakcji funkcji stack_init na limit pamięci (limit sterty ustawiono na 60 bajtów)
            UTEST9, // Sprawdzanie poprawności działania funkcji stack_init
            UTEST10, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST11, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST12, // Sprawdzanie reakcji funkcji stack_push na limit pamięci (limit sterty ustawiono na 124 bajtów)
            UTEST13, // Sprawdzanie reakcji funkcji array_push_back na limit pamięci (limit sterty ustawiono na 52 bajtów)
            UTEST14, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST15, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST16, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST17, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST18, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST19, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST20, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST21, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST22, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST23, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST24, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST25, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST26, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST27, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST28, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST29, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST30, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST31, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST32, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST33, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST34, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST35, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST36, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST37, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST38, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST39, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST40, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST41, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST42, // Sprawdzanie poprawności działania funkcji stack_free
            UTEST43, // Sprawdzanie poprawności działania funkcji array_display
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
            test_summary(43); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST3, // Reakcja na brak pamięci (limit sterty ustawiono na 56 bajtów)
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
            test_summary(3); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}