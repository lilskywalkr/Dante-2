/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Bufor cykliczny
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-27 22:36:29.420300
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
//  Test 1: Sprawdzanie poprawności działania funkcji circular_buffer_create
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji circular_buffer_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t ptr = { .begin = 2, .end = 2, .capacity = -2, .full = 1 };

                printf("#####START#####");
                int res = circular_buffer_create(&ptr, -98);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_create() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {           

                    test_error(ptr.ptr != NULL, "Funkcja create_circular_buffer() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr.capacity == -98, "Funkcja circular_buffer_create() powinna ustawić wartość pola capacity w strukturze na -98, a ustawiła na %d", ptr.capacity);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                    test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

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
//  Test 2: Sprawdzanie poprawności działania funkcji circular_buffer_create
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji circular_buffer_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t ptr = { .begin = 7, .end = -3, .capacity = 7, .full = 0 };

                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 0);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_create() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {           

                    test_error(ptr.ptr != NULL, "Funkcja create_circular_buffer() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr.capacity == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola capacity w strukturze na 0, a ustawiła na %d", ptr.capacity);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                    test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

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
//  Test 3: Sprawdzanie poprawności działania funkcji circular_buffer_create
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji circular_buffer_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t ptr = { .begin = 10, .end = 6, .capacity = 5, .full = 1 };

                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 58);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {           

                    test_error(ptr.ptr != NULL, "Funkcja create_circular_buffer() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr.capacity == 58, "Funkcja circular_buffer_create() powinna ustawić wartość pola capacity w strukturze na 58, a ustawiła na %d", ptr.capacity);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                    test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

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
//  Test 4: Sprawdzanie poprawności działania funkcji circular_buffer_create
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji circular_buffer_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t ptr = { .begin = 2, .end = 7, .capacity = -1, .full = 0 };

                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 5816);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {           

                    test_error(ptr.ptr != NULL, "Funkcja create_circular_buffer() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr.capacity == 5816, "Funkcja circular_buffer_create() powinna ustawić wartość pola capacity w strukturze na 5816, a ustawiła na %d", ptr.capacity);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                    test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

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
//  Test 5: Sprawdzanie reakcji funkcji circular_buffer_create na limit pamięci (limit sterty ustawiono na 200 bajtów)
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie reakcji funkcji circular_buffer_create na limit pamięci (limit sterty ustawiono na 200 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(200);
    
    //
    // -----------
    //
    

                struct circular_buffer_t ptr = { .begin = 2, .end = -7, .capacity = 1, .full = 1 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 50);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać do pola ptr w strukturze adres zaalokowanej pamięci, a przypisała NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.capacity == 50, "Funkcja circular_buffer_create() powinna ustawić wartość pola capacity w strukturze na 50, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

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
//  Test 6: Sprawdzanie reakcji funkcji circular_buffer_create na limit pamięci (limit sterty ustawiono na 110 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie reakcji funkcji circular_buffer_create na limit pamięci (limit sterty ustawiono na 110 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(110);
    
    //
    // -----------
    //
    

                struct circular_buffer_t ptr = { .begin = 9, .end = -5, .capacity = 8, .full = 0 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 50);
                printf("#####END#####");

                test_error(res == 2, "Funkcja circular_buffer_create() powinna zwrócić wartość 2, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji circular_buffer_create
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji circular_buffer_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = circular_buffer_create(NULL, 50);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_create() powinna zwrócić wartość 1, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji circular_buffer_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t *ptr;

                printf("#####START#####");
                int res = circular_buffer_create_struct(&ptr, -100);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {           

                    test_error(ptr->ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr->capacity == -100, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola capacity w strukturze na -100, a ustawiła na %d", ptr->capacity);
                    test_error(ptr->begin == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr->begin);
                    test_error(ptr->end == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr->end);
                    test_error(ptr->full == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr->full);

                    free(ptr->ptr);
                    free(ptr);

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
//  Test 9: Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji circular_buffer_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t *ptr;

                printf("#####START#####");
                int res = circular_buffer_create_struct(&ptr, 0);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {           

                    test_error(ptr->ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr->capacity == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola capacity w strukturze na 0, a ustawiła na %d", ptr->capacity);
                    test_error(ptr->begin == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr->begin);
                    test_error(ptr->end == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr->end);
                    test_error(ptr->full == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr->full);

                    free(ptr->ptr);
                    free(ptr);

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
//  Test 10: Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji circular_buffer_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t *ptr;

                printf("#####START#####");
                int res = circular_buffer_create_struct(&ptr, 96);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {           

                    test_error(ptr->ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr->capacity == 96, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola capacity w strukturze na 96, a ustawiła na %d", ptr->capacity);
                    test_error(ptr->begin == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr->begin);
                    test_error(ptr->end == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr->end);
                    test_error(ptr->full == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr->full);

                    free(ptr->ptr);
                    free(ptr);

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
//  Test 11: Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji circular_buffer_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t *ptr;

                printf("#####START#####");
                int res = circular_buffer_create_struct(&ptr, 4358);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {           

                    test_error(ptr->ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr->capacity == 4358, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola capacity w strukturze na 4358, a ustawiła na %d", ptr->capacity);
                    test_error(ptr->begin == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr->begin);
                    test_error(ptr->end == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr->end);
                    test_error(ptr->full == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr->full);

                    free(ptr->ptr);
                    free(ptr);

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
//  Test 12: Sprawdzanie reakcji funkcji circular_buffer_create_struct na limit pamięci (limit sterty ustawiono na 96 bajtów)
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie reakcji funkcji circular_buffer_create_struct na limit pamięci (limit sterty ustawiono na 96 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(104);
    
    //
    // -----------
    //
    

                struct circular_buffer_t *ptr;

                printf("#####START#####");
                int res = circular_buffer_create_struct(&ptr, 20);
                printf("#####END#####");


                test_error(ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika na strukturę circular_buffer_t, a przypisała NULL");
                test_error(res == 0, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr->capacity == 20, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola capacity w strukturze na 20, a ustawiła na %d", ptr->capacity);
                test_error(ptr->begin == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr->begin);
                test_error(ptr->end == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr->end);
                test_error(ptr->full == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr->full);

                free(ptr->ptr);
                free(ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie reakcji funkcji circular_buffer_create_struct na limit pamięci (limit sterty ustawiono na 24 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji circular_buffer_create_struct na limit pamięci (limit sterty ustawiono na 24 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(24);
    
    //
    // -----------
    //
    

                struct circular_buffer_t *ptr;

                printf("#####START#####");
                int res = circular_buffer_create_struct(&ptr, 20);
                printf("#####END#####");

                test_error(res == 2, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 2, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie reakcji funkcji circular_buffer_create_struct na limit pamięci (limit sterty ustawiono na 65 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie reakcji funkcji circular_buffer_create_struct na limit pamięci (limit sterty ustawiono na 65 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(65);
    
    //
    // -----------
    //
    

                struct circular_buffer_t *ptr;

                printf("#####START#####");
                int res = circular_buffer_create_struct(&ptr, 20);
                printf("#####END#####");

                test_error(res == 2, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 2, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji circular_buffer_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = circular_buffer_create_struct(NULL, 20);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 1, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji circular_buffer_destroy
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji circular_buffer_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t ptr;

                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 20);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 20, "Funkcja circular_buffer_create() powinna ustawić wartość pola capacity w strukturze na 20, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                printf("#####START#####");
                circular_buffer_destroy(&ptr);
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
//  Test 17: Sprawdzanie poprawności działania funkcji circular_buffer_destroy
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji circular_buffer_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t ptr;

                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 20);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 20, "Funkcja circular_buffer_create() powinna ustawić wartość pola capacity w strukturze na 20, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                printf("#####START#####");
                circular_buffer_destroy(&ptr);
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
//  Test 18: Sprawdzanie poprawności działania funkcji circular_buffer_destroy
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji circular_buffer_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            printf("#####START#####");
            circular_buffer_destroy(NULL);
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
//  Test 19: Sprawdzanie poprawności działania funkcji circular_buffer_destroy
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji circular_buffer_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct circular_buffer_t ptr = { .begin = 4, .end = 5, .capacity = 15, .ptr = NULL };

            printf("#####START#####");
            circular_buffer_destroy(&ptr);
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
//  Test 20: Sprawdzanie poprawności działania funkcji circular_buffer_destroy_struct
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji circular_buffer_destroy_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t *ptr;

                printf("#####START#####");
                int res = circular_buffer_create_struct(&ptr, 20);
                printf("#####END#####");


                test_error(ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika na strukturę circular_buffer_t, a przypisała NULL");
                test_error(res == 0, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr->capacity == 20, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola size w strukturze na 20, a ustawiła na %d", ptr->capacity);
                test_error(ptr->begin == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr->begin);
                test_error(ptr->end == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr->end);
                test_error(ptr->full == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr->full);

                printf("#####START#####");
                circular_buffer_destroy_struct(&ptr);
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
//  Test 21: Sprawdzanie poprawności działania funkcji circular_buffer_destroy_struct
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji circular_buffer_destroy_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct circular_buffer_t *ptr;

                printf("#####START#####");
                int res = circular_buffer_create_struct(&ptr, 20);
                printf("#####END#####");


                test_error(ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika na strukturę circular_buffer_t, a przypisała NULL");
                test_error(res == 0, "Funkcja circular_buffer_create_struct() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr->capacity == 20, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola size w strukturze na 20, a ustawiła na %d", ptr->capacity);
                test_error(ptr->begin == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr->begin);
                test_error(ptr->end == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr->end);
                test_error(ptr->full == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr->full);

                printf("#####START#####");
                circular_buffer_destroy_struct(&ptr);
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
//  Test 22: Sprawdzanie poprawności działania funkcji circular_buffer_destroy_struct
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji circular_buffer_destroy_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            printf("#####START#####");
            circular_buffer_destroy_struct(NULL);
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
//  Test 23: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-40, 59, 41, 75, 93, -83, -60, -95, -4, 71, 13, -51, 52};

                struct circular_buffer_t ptr = { .begin = 6, .end = -10, .capacity = 3, .full = 0 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 13, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 13, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 13; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 13, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 13, ptr.end);
                        test_error(ptr.capacity == 13, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 13, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 12), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 13 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                int additional = 24;

                printf("#####START#####");
                res = circular_buffer_push_back(&ptr, additional);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr.begin == 1, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 1, a ustawiła na %d", ptr.begin);
                test_error(ptr.capacity == 13, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola size w strukturze na 13, a ustawiła na %d", ptr.capacity);
                test_error(ptr.full == 1, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na 1, a ustawiła na %d", ptr.full);
                test_error(ptr.end == 1, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na 1, a ustawiła na %d", ptr.end);

                test_error(ptr.ptr[0] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", 0, additional, ptr.ptr[0]);


                for (int j = 1; j < 13; ++j)
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
//  Test 24: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {47, 7, -59, 96, -27, 51, 68, -66, 70, 20, -5, -43, -69, -88, -12, -95, 4, 69, 63, 21, 91, 61, -7, -75, 53, 73, -37, 75, -2, -99, 50, 38, 77, -57, 18, -19, 56, 66, -2, 26, -94, 95, 42, -13, 63, -59, 61, -83, -19, -41, -55, -100, -95, -38, -99, 38, 74, -56, 90, -73, 24, 20, -55, 94, -66, -50, 58, -58, -86, 97, -23, 27, -54, 64, 7, 62, 47, -49, -31, 44, 53};

                struct circular_buffer_t ptr = { .begin = -4, .end = 9, .capacity = 8, .full = 0 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 81);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 81, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 81, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 81; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 81, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 81, ptr.end);
                        test_error(ptr.capacity == 81, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 81, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 80), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 81 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                int additional = -40;

                printf("#####START#####");
                res = circular_buffer_push_back(&ptr, additional);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr.begin == 1, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 1, a ustawiła na %d", ptr.begin);
                test_error(ptr.capacity == 81, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola size w strukturze na 81, a ustawiła na %d", ptr.capacity);
                test_error(ptr.full == 1, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na 1, a ustawiła na %d", ptr.full);
                test_error(ptr.end == 1, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na 1, a ustawiła na %d", ptr.end);

                test_error(ptr.ptr[0] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", 0, additional, ptr.ptr[0]);


                for (int j = 1; j < 81; ++j)
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
//  Test 25: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -6, .capacity = 8 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, -42);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = -2 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, -43);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 18, .capacity = 8 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, -36);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = 0 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, -10);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 15, .capacity = -5 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, 77);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -14, .capacity = -10 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, 6);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .end = -3, .capacity = 8 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, -42);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = -7 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, -81);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .end = 13, .capacity = 1 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, -45);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = 0 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, 45);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .end = 19, .capacity = -2 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, 55);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {88, 45, 58, -9, -82, -86, -20, 82, 62, 28, -95, -23, -54, 39, 17, 59};
                struct circular_buffer_t ptr = { .ptr = array, .end = -15, .capacity = -10 };

                printf("#####START#####");
                int res = circular_buffer_push_back(&ptr, -16);
                printf("#####END#####");

                test_error(res == 1, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji circular_buffer_push_back
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji circular_buffer_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = circular_buffer_push_back(NULL, 10);
            printf("#####END#####");

            test_error(res == 1, "Funkcja circular_buffer_create() powinna zwrócić wartość 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-100, 81, -22, -23, -89, 38, -61, 64, 69, 27, -53, -90, 49, -8, 0, -73, -44, -11, -28, -22};

                struct circular_buffer_t ptr = { .begin = -3, .end = -6, .capacity = 2, .full = 0 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 20);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 20, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 20, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 20; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 20, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 20, ptr.end);
                        test_error(ptr.capacity == 20, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 20, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 19), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 20 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 0; i < 20; ++i)
                {
                    int err_code = 2;            
                    int value = circular_buffer_pop_front(&ptr, &err_code);
                    test_error(err_code == 0, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 0, err_code);
                    test_error(ptr.begin == (i + 1) % 20, "Funkcja circular_buffer_pop_front() powinna ustawić begin na %d, a ustawiła na %d", (i + 1) % 20, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_front() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_front() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == 0, "Funkcja circular_buffer_pop_front() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                    test_error(ptr.capacity == 20, "Funkcja circular_buffer_pop_front() powinna ustawić wartość pola size w strukturze na 20, a ustawiła na %d", ptr.capacity);

                }

                int err_code = 2;            

                circular_buffer_pop_front(&ptr, &err_code);
                test_error(err_code == 2, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 2, err_code);

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
//  Test 39: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-29, -7, -39, 3, 13, -17, -21, 50, -22, 38, 79, 31, 53, -88, 20, -71, 11, 87, 11, 40, -64, -77, 75, 31, 15, 79, -94, 57, -48, -84, 1, 98, 17, 30, -36, -73, 72, -65, 99, 0, -56, -79, -4, 65, 79, -21, 72, -34, 79, 46, 80, -5, -56};

                struct circular_buffer_t ptr = { .begin = -5, .end = 8, .capacity = 1, .full = 0 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 53);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 53, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 53, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 53; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 53, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 53, ptr.end);
                        test_error(ptr.capacity == 53, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 53, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 52), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 53 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 0; i < 53; ++i)
                {
                    int err_code = 1;            
                    int value = circular_buffer_pop_front(&ptr, &err_code);
                    test_error(err_code == 0, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 0, err_code);
                    test_error(ptr.begin == (i + 1) % 53, "Funkcja circular_buffer_pop_front() powinna ustawić begin na %d, a ustawiła na %d", (i + 1) % 53, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_front() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_front() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == 0, "Funkcja circular_buffer_pop_front() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                    test_error(ptr.capacity == 53, "Funkcja circular_buffer_pop_front() powinna ustawić wartość pola size w strukturze na 53, a ustawiła na %d", ptr.capacity);

                }

                int err_code = 3;            

                circular_buffer_pop_front(&ptr, &err_code);
                test_error(err_code == 2, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 2, err_code);

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
//  Test 40: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -9, .capacity = 5 };
                
                int err_code = 3;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = -2 };
                
                int err_code = 1;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 20, .capacity = 6 };
                
                int err_code = 3;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = 0 };
                
                int err_code = 1;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 20, .capacity = -5 };
                
                int err_code = 2;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -11, .capacity = -5 };
                
                int err_code = 2;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .end = -9, .capacity = 1 };
                
                int err_code = 2;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = -3 };
                
                int err_code = 3;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .end = 20, .capacity = 8 };
                
                int err_code = 1;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = 0 };
                
                int err_code = 3;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .end = 16, .capacity = -1 };
                
                int err_code = 0;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-18, -15, 28, -26, -100, -81, -72, 44, -47, -16, 38};
                struct circular_buffer_t ptr = { .ptr = array, .end = -16, .capacity = -4 };
                
                int err_code = 0;            

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                
            int err_code = 1;      

            printf("#####START#####");
            circular_buffer_pop_front(NULL, &err_code);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja circular_buffer_pop_front() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-26, -38, 65, -58, 57, -83, -88, -96, -82, 43, 50, -63, -36, 63, -68};

                struct circular_buffer_t ptr = { .begin = -3, .end = 2, .capacity = 3, .full = 1 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 15);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 15, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola size w strukturze na 15, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 15; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 15, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 15, ptr.end);
                        test_error(ptr.capacity == 15, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 15, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 14), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 15 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 0; i < 15; ++i)
                {
                    int value = circular_buffer_pop_front(&ptr, NULL);
                    test_error(ptr.begin == (i + 1) % 15, "Funkcja circular_buffer_pop_front() powinna ustawić begin na %d, a ustawiła na %d", (i + 1) % 15, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_front() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_front() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == 0, "Funkcja circular_buffer_pop_front() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                    test_error(ptr.capacity == 15, "Funkcja circular_buffer_pop_front() powinna ustawić wartość pola capacity w strukturze na 15, a ustawiła na %d", ptr.capacity);

                }

                circular_buffer_pop_front(&ptr, NULL);

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
//  Test 54: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-22, -67, 93, -1, 88, 47, 34, -98, 100, -76, -65, 70, 95, 57, -94, -86, -62, 36, 23, -57, -34, 42, -95, -55, -73, -75, -1, -13, 7, -9, -42, 21, -100, -78, 4, 68, -49, 37, 5, -88, -70, -100, -74, 26, -97, 42, 41, 49, -38, -96, 3, 91, 13, 26, 73, -19, 52, -75, 69, 3, 31, 8, -56, 9, 95, -14, -15};

                struct circular_buffer_t ptr = { .begin = 0, .end = 5, .capacity = -7, .full = 1 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 67);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 67, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola size w strukturze na 67, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create_struct() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 67; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 67, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 67, ptr.end);
                        test_error(ptr.capacity == 67, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 67, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 66), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 67 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 0; i < 67; ++i)
                {
                    int value = circular_buffer_pop_front(&ptr, NULL);
                    test_error(ptr.begin == (i + 1) % 67, "Funkcja circular_buffer_pop_front() powinna ustawić begin na %d, a ustawiła na %d", (i + 1) % 67, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_front() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_front() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == 0, "Funkcja circular_buffer_pop_front() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                    test_error(ptr.capacity == 67, "Funkcja circular_buffer_pop_front() powinna ustawić wartość pola capacity w strukturze na 67, a ustawiła na %d", ptr.capacity);

                }

                circular_buffer_pop_front(&ptr, NULL);

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
//  Test 55: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -2, .capacity = 6 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 56: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = -10 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 57: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 18, .capacity = 4 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 58: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = 0 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 59: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 14, .capacity = -4 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 60: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -15, .capacity = -9 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 61: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .end = -2, .capacity = 8 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 62: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = -2 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 63: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .end = 20, .capacity = 7 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 64: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = 0 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 65: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .end = 14, .capacity = -10 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 66: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-60, -9, -38, -83, 77, 95, 2, -8, 97, -76, 79, -67, 6};
                struct circular_buffer_t ptr = { .ptr = array, .end = -15, .capacity = -9 };

                printf("#####START#####");
                circular_buffer_pop_front(&ptr, NULL);
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
//  Test 67: Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            circular_buffer_pop_front(NULL, NULL);
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
//  Test 68: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-80, -48, 32, 17, 47, 37, 33, 98, -94, -98, 49, 78, 46};

                struct circular_buffer_t ptr = { .begin = -10, .end = -10, .capacity = 1, .full = 1 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 13, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 13, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 13; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 13, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 13, ptr.end);
                        test_error(ptr.capacity == 13, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 13, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 12), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 13 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 12; i >= 0; --i)
                {
                    int err_code = 2;            
                    int value = circular_buffer_pop_back(&ptr, &err_code);
                    test_error(err_code == 0, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 0, err_code);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_pop_back() powinna ustawić begin na %d, a ustawiła na %d", 0, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_back() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_back() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == i, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", i, ptr.end);
                    test_error(ptr.capacity == 13, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola capacity w strukturze na 13, a ustawiła na %d", ptr.capacity);

                }

                int err_code = 1;            

                circular_buffer_pop_back(&ptr, &err_code);
                test_error(err_code == 2, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 2, err_code);

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
//  Test 69: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-15, -34, 63, 82, 26, -69, 53, -37, 6, -55, -22, -95, -81, -91, -50, 86, -46, -92, 22, -7, 9, -67, 14, -46, -57, -40, -43, 76, 8, -44, -92, 71, -83, 96, 41, 0, -28, -54, 49, -98, -54, -79, -79, -37, -59, 43, -31, -53, 84, 25, -23, -69, 23, 10, 50, 25, 21, -78, 95};

                struct circular_buffer_t ptr = { .begin = 7, .end = -6, .capacity = -6, .full = 0 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 59);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 59, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 59, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 59; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 59, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 59, ptr.end);
                        test_error(ptr.capacity == 59, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 59, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 58), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 59 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 58; i >= 0; --i)
                {
                    int err_code = 0;            
                    int value = circular_buffer_pop_back(&ptr, &err_code);
                    test_error(err_code == 0, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 0, err_code);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_pop_back() powinna ustawić begin na %d, a ustawiła na %d", 0, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_back() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_back() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == i, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", i, ptr.end);
                    test_error(ptr.capacity == 59, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola capacity w strukturze na 59, a ustawiła na %d", ptr.capacity);

                }

                int err_code = 1;            

                circular_buffer_pop_back(&ptr, &err_code);
                test_error(err_code == 2, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 2, err_code);

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
//  Test 70: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -4, .capacity = 6 };

                int err_code = 3;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 71: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = -3 };

                int err_code = 0;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 72: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 11, .capacity = 2 };

                int err_code = 2;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 73: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = 0 };

                int err_code = 1;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 74: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 19, .capacity = -1 };

                int err_code = 2;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 75: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -14, .capacity = -5 };

                int err_code = 3;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 76: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .end = -1, .capacity = 9 };

                int err_code = 3;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 77: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = -9 };

                int err_code = 0;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 78: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .end = 18, .capacity = 7 };

                int err_code = 1;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 79: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = 0 };

                int err_code = 3;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 80: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .end = 13, .capacity = -10 };

                int err_code = 0;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 81: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-33, -45, 38, -55, -10, 52, -25, 11, -37, 7, 87, -46, 41, 96, 20, 67, 54, -98, -1, -45};
                struct circular_buffer_t ptr = { .ptr = array, .end = -12, .capacity = -1 };

                int err_code = 1;            

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, &err_code);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 82: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = 0;      

            printf("#####START#####");
            circular_buffer_pop_back(NULL, &err_code);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja circular_buffer_pop_back() powinna ustawić kod błędu na %d, a ustawiła na %d", 1, err_code);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 83: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {24, 13, 33, -6, -24, 69, 62, 89, -16, 93, -91, 2, 51, 51, -71};

                struct circular_buffer_t ptr = { .begin = 3, .end = -7, .capacity = 3, .full = 0 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 15);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 15, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 15, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 15; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 15, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 15, ptr.end);
                        test_error(ptr.capacity == 15, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 15, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 14), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 15 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 14; i >= 0; --i)
                {
                    int value = circular_buffer_pop_back(&ptr, NULL);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_pop_back() powinna ustawić begin na %d, a ustawiła na %d", 0, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_back() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_back() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == i, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", i, ptr.end);
                    test_error(ptr.capacity == 15, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola capacity w strukturze na 15, a ustawiła na %d", ptr.capacity);

                }

                circular_buffer_pop_back(&ptr, NULL);

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
//  Test 84: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {36, 51, 20, 84, 65, -95, -86, -58, -41, -73, -49, 44, -27, 16, 98, 39, 49, 97, -27, -53, 56, 98, 45, 51, -28, -41, 73, -60, -55, -35, 52, -49, -33, 48, -5, 94, -86, -61, 97, 41, -33, 52, -79, 80, -42, 37, 68, 84, -57, 61, 36, 9, -88, 96, 95, 77, 86, -55, 62, 51, 98, 38, -59, -2, -74, -29, -15, 52, 51, -34, -93, -54, 68, -51, -49, -96, -33, 66, 83, -77, 35, -60, 3};

                struct circular_buffer_t ptr = { .begin = 1, .end = -5, .capacity = -7, .full = 1 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 83);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 83, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 83, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 83; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 83, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 83, ptr.end);
                        test_error(ptr.capacity == 83, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 83, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 82), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 83 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 82; i >= 0; --i)
                {
                    int value = circular_buffer_pop_back(&ptr, NULL);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_pop_back() powinna ustawić begin na %d, a ustawiła na %d", 0, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_back() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_back() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == i, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", i, ptr.end);
                    test_error(ptr.capacity == 83, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola capacity w strukturze na 83, a ustawiła na %d", ptr.capacity);

                }

                circular_buffer_pop_back(&ptr, NULL);

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
//  Test 85: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -2, .capacity = 2 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 86: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = -4 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 87: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 12, .capacity = 5 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 88: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = 0 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 89: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 11, .capacity = -9 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 90: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -18, .capacity = -8 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 91: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .end = -7, .capacity = 6 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 92: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = -6 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 93: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .end = 20, .capacity = 9 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 94: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = 0 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 95: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .end = 11, .capacity = -1 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 96: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-17, 7, -20, -58, 93, 27, -3, -9, 23, -57, 48, -83};
                struct circular_buffer_t ptr = { .ptr = array, .end = -12, .capacity = -6 };

                printf("#####START#####");
                circular_buffer_pop_back(&ptr, NULL);
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
//  Test 97: Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji circular_buffer_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            circular_buffer_pop_back(NULL, NULL);
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
//  Test 98: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-27, -66, 3, 90, 3, 37, 42, -73, -3, 54, -77, -8, 87, -94};

                struct circular_buffer_t ptr = { .begin = 9, .end = -7, .capacity = 4, .full = 1 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 14);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 14, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 14, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 14; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 14, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 14, ptr.end);
                        test_error(ptr.capacity == 14, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 14, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 13), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 14 - 1), ptr.full);
                        test_error(circular_buffer_full(&ptr) == (i == 13), "Funkcja circular_buffer_full() powinna zwrócić %d, a zwróciła %d", (i == 13), circular_buffer_full(&ptr));

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 13; i >= 0; --i)
                {
                    int value = circular_buffer_pop_back(&ptr, NULL);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_pop_back() powinna ustawić begin na %d, a ustawiła na %d", 0, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_back() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_back() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == i, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", i, ptr.end);
                    test_error(ptr.capacity == 14, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola capacity w strukturze na 14, a ustawiła na %d", ptr.capacity);
                    test_error(circular_buffer_full(&ptr) == 0, "Funkcja circular_buffer_full() powinna zwrócić 0, a zwróciła %d", circular_buffer_full(&ptr));

                }

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
//  Test 99: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {26, 34, -57, -25, -99, -90, -30, 63, 44, -29, -52, -41, -97, 32, 59, 81, 94, 73, 98, -75, -2, 3, -50, 92, 37, 99, 17, 5, -68, -82, -43, 0, -37, -52, 44, 77, 48, 49, -78, -16, -24, 35, 96, 34, -57, 94, 80, 89, -55, -30, 90, 21, 37, -23, 46, -20, -85, -42, 7, -14, 97, 67, -41, 87, 84, -36, 72, -51, -62, -11};

                struct circular_buffer_t ptr = { .begin = -8, .end = -3, .capacity = -2, .full = 0 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 70);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 70, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 70, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                for (int i = 0; i < 70; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 70, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 70, ptr.end);
                        test_error(ptr.capacity == 70, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 70, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 69), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 70 - 1), ptr.full);
                        test_error(circular_buffer_full(&ptr) == (i == 69), "Funkcja circular_buffer_full() powinna zwrócić %d, a zwróciła %d", (i == 69), circular_buffer_full(&ptr));

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 69; i >= 0; --i)
                {
                    int value = circular_buffer_pop_back(&ptr, NULL);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_pop_back() powinna ustawić begin na %d, a ustawiła na %d", 0, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_back() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_back() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == i, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", i, ptr.end);
                    test_error(ptr.capacity == 70, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola capacity w strukturze na 70, a ustawiła na %d", ptr.capacity);
                    test_error(circular_buffer_full(&ptr) == 0, "Funkcja circular_buffer_full() powinna zwrócić 0, a zwróciła %d", circular_buffer_full(&ptr));

                }

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
//  Test 100: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -8, .capacity = 2 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 101: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = -5 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 102: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 12, .capacity = 7 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 103: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = 0 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 104: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 15, .capacity = -6 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 105: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -19, .capacity = -8 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 106: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .end = -10, .capacity = 4 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 107: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = -7 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 108: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .end = 14, .capacity = 10 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 109: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = 0 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 110: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .end = 15, .capacity = -4 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 111: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {77, 22, 57, -84, 65, 91, -59, 31, -72, 29, -42, -17, -18};
                struct circular_buffer_t ptr = { .ptr = array, .end = -18, .capacity = -8 };

                printf("#####START#####");
                int err_code = circular_buffer_full(&ptr);
                printf("#####END#####");
                
                test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 112: Sprawdzanie poprawności działania funkcji circular_buffer_full
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji circular_buffer_full", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = circular_buffer_full(NULL);
            printf("#####END#####");

            test_error(err_code == -1, "Funkcja circular_buffer_full() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 113: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-6, -82, 28, -45, 72, -37, -36, 78, 41, -100, 82, 59, 31, 75, 75, -64, -91, 75, -90};

                struct circular_buffer_t ptr = { .begin = 7, .end = 2, .capacity = -2, .full = 1 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 19);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 19, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 19, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);
                test_error(circular_buffer_empty(&ptr) == 1, "Funkcja circular_buffer_empty() powinna zwrócić %d, a zwróciła %d", 1, circular_buffer_empty(&ptr));
                
                
                for (int i = 0; i < 19; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 19, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 19, ptr.end);
                        test_error(ptr.capacity == 19, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 19, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 18), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 19 - 1), ptr.full);
                        test_error(circular_buffer_empty(&ptr) == 0, "Funkcja circular_buffer_empty() powinna zwrócić %d, a zwróciła %d", 0, circular_buffer_empty(&ptr));

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 18; i >= 0; --i)
                {
                    int value = circular_buffer_pop_back(&ptr, NULL);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_pop_back() powinna ustawić begin na %d, a ustawiła na %d", 0, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_back() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_back() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == i, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", i, ptr.end);
                    test_error(ptr.capacity == 19, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola capacity w strukturze na 19, a ustawiła na %d", ptr.capacity);
                    test_error(circular_buffer_empty(&ptr) == (i == 0), "Funkcja circular_buffer_empty() powinna zwrócić %d, a zwróciła %d", i == 0, circular_buffer_empty(&ptr));

                }

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
//  Test 114: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int array[] = {-93, 46, -74, 2, -60, 26, -13, 1, -57, 51, -31, -76, -99, -37, -3, -45, 48, -59, 58, 0, 60, -91, 49, 50, 50, -20, -54, -13, 74, -80, -9, 58, -51, -100, 38, 83, -30, -99, -66, 84, -6, 14, -15, -69, 50, -5, 72, -26, -78, 59, 98, 65, -63};

                struct circular_buffer_t ptr = { .begin = 1, .end = -1, .capacity = -7, .full = 0 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 53);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 53, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 53, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);
                test_error(circular_buffer_empty(&ptr) == 1, "Funkcja circular_buffer_empty() powinna zwrócić %d, a zwróciła %d", 1, circular_buffer_empty(&ptr));
                
                
                for (int i = 0; i < 53; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 53, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 53, ptr.end);
                        test_error(ptr.capacity == 53, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 53, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 52), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 53 - 1), ptr.full);
                        test_error(circular_buffer_empty(&ptr) == 0, "Funkcja circular_buffer_empty() powinna zwrócić %d, a zwróciła %d", 0, circular_buffer_empty(&ptr));

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                for (int i = 52; i >= 0; --i)
                {
                    int value = circular_buffer_pop_back(&ptr, NULL);
                    test_error(ptr.begin == 0, "Funkcja circular_buffer_pop_back() powinna ustawić begin na %d, a ustawiła na %d", 0, ptr.begin);
                    test_error(value == array[i], "Funkcja circular_buffer_pop_back() powinna zwrócić wartość %d, a zwróciła na %d", array[i], value);
                    test_error(ptr.full == 0, "Funkcja circular_buffer_pop_back() powinna ustawić full na %d, a ustawiła na %d", 0, ptr.full);
                    test_error(ptr.end == i, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", i, ptr.end);
                    test_error(ptr.capacity == 53, "Funkcja circular_buffer_pop_back() powinna ustawić wartość pola capacity w strukturze na 53, a ustawiła na %d", ptr.capacity);
                    test_error(circular_buffer_empty(&ptr) == (i == 0), "Funkcja circular_buffer_empty() powinna zwrócić %d, a zwróciła %d", i == 0, circular_buffer_empty(&ptr));

                }

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
//  Test 115: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -3, .capacity = 6 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 116: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = -7 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 117: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 14, .capacity = 5 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 118: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = 0 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 119: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .begin = 11, .capacity = -8 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 120: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .begin = -19, .capacity = -10 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 121: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .end = -3, .capacity = 4 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 122: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = -6 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 123: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .end = 13, .capacity = 1 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 124: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = 0 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 125: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .end = 16, .capacity = -4 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 126: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {-94, -99, 51, -20, 57, -71, 80, -70, -99, -46, 29, 72, 67};
                struct circular_buffer_t ptr = { .ptr = array, .end = -18, .capacity = -1 };

                printf("#####START#####");
                int err_code = circular_buffer_empty(&ptr);
                printf("#####END#####");

                test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 127: Sprawdzanie poprawności działania funkcji circular_buffer_empty
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzanie poprawności działania funkcji circular_buffer_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = circular_buffer_empty(NULL);
            printf("#####END#####");

            test_error(err_code == -1, "Funkcja circular_buffer_empty() powinna ustawić kod błędu na %d, a ustawiła na %d", -1, err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 128: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST128(void)
{
    // informacje o teście
    test_start(128, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .begin = -7, .capacity = 7 };

                    printf("\n***TEST 1***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 129: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST129(void)
{
    // informacje o teście
    test_start(129, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = -4 };

                    printf("\n***TEST 2***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 130: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST130(void)
{
    // informacje o teście
    test_start(130, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .begin = 18, .capacity = 3 };

                    printf("\n***TEST 3***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 131: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST131(void)
{
    // informacje o teście
    test_start(131, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .begin = 0, .capacity = 0 };

                    printf("\n***TEST 4***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 132: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST132(void)
{
    // informacje o teście
    test_start(132, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .begin = 19, .capacity = -7 };

                    printf("\n***TEST 5***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 133: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST133(void)
{
    // informacje o teście
    test_start(133, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .begin = -18, .capacity = -9 };

                    printf("\n***TEST 6***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 134: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST134(void)
{
    // informacje o teście
    test_start(134, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .end = -7, .capacity = 4 };

                    printf("\n***TEST 7***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 135: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST135(void)
{
    // informacje o teście
    test_start(135, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = -1 };

                    printf("\n***TEST 8***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 136: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST136(void)
{
    // informacje o teście
    test_start(136, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .end = 18, .capacity = 9 };

                    printf("\n***TEST 9***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 137: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST137(void)
{
    // informacje o teście
    test_start(137, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .end = 0, .capacity = 0 };

                    printf("\n***TEST 10***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 138: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST138(void)
{
    // informacje o teście
    test_start(138, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .end = 13, .capacity = -9 };

                    printf("\n***TEST 11***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 139: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST139(void)
{
    // informacje o teście
    test_start(139, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};
                    struct circular_buffer_t ptr = { .ptr = array, .end = -13, .capacity = -5 };

                    printf("\n***TEST 12***\n\n");
                    printf("***START***\n");
                    circular_buffer_display(&ptr);
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
//  Test 140: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST140(void)
{
    // informacje o teście
    test_start(140, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("\n***TEST 13***\n\n");
                printf("***START***\n");
                circular_buffer_display(NULL);
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
//  Test 141: Sprawdzanie poprawności działania funkcji circular_buffer_display
//
void UTEST141(void)
{
    // informacje o teście
    test_start(141, "Sprawdzanie poprawności działania funkcji circular_buffer_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[] = {98, -13, 6, 54, -97, 74, 88, -73, 93, 10, 8, 72, -85, -68, -60, 63, 29, -33, -84};

                struct circular_buffer_t ptr = { .begin = -3, .end = 1, .capacity = 8, .full = 1 };
                printf("#####START#####");
                int res = circular_buffer_create(&ptr, 19);
                printf("#####END#####");

                test_error(res == 0, "Funkcja circular_buffer_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja circular_buffer_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze circular_buffer_t, a przypisała NULL");
                test_error(ptr.capacity == 19, "Funkcja circular_buffer_create() powinna ustawić wartość pola size w strukturze na 19, a ustawiła na %d", ptr.capacity);
                test_error(ptr.begin == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                test_error(ptr.end == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola end w strukturze na 0, a ustawiła na %d", ptr.end);
                test_error(ptr.full == 0, "Funkcja circular_buffer_create() powinna ustawić wartość pola full w strukturze na 0, a ustawiła na %d", ptr.full);

                printf("\n***TEST 14***\n\n");
                printf("***START***\n");
                circular_buffer_display(&ptr);
                printf("***END***\n");

                for (int i = 0; i < 19; ++i)
                {
                        printf("#####START#####");
                        res = circular_buffer_push_back(&ptr, array[i]);
                        printf("#####END#####");

                        test_error(res == 0, "Funkcja circular_buffer_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.end == (i + 1) % 19, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola end w strukturze na %d, a ustawiła na %d", (i + 1) % 19, ptr.end);
                        test_error(ptr.capacity == 19, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola capacity w strukturze na 19, a ustawiła na %d", ptr.capacity);
                        test_error(ptr.begin == 0, "Funkcja circular_buffer_push_back() powinna ustawić wartość pola begin w strukturze na 0, a ustawiła na %d", ptr.begin);
                        test_error(ptr.full == (i == 18), "Funkcja circular_buffer_push_back() powinna ustawić wartość pola full w strukturze na %d, a ustawiła na %d", (i == 19 - 1), ptr.full);

                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == array[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, array[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                printf("\n***TEST 15***\n\n");
                printf("***START***\n");
                circular_buffer_display(&ptr);
                printf("***END***\n");
        
                circular_buffer_push_back(&ptr, array[0]);
                circular_buffer_push_back(&ptr, array[0]);
                
                printf("\n***TEST 16***\n\n");
                printf("***START***\n");
                circular_buffer_display(&ptr);
                printf("***END***\n");
        
                free(ptr.ptr);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci (limit sterty ustawiono na 44 bajtów)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci (limit sterty ustawiono na 44 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(44);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji circular_buffer_create
            UTEST2, // Sprawdzanie poprawności działania funkcji circular_buffer_create
            UTEST3, // Sprawdzanie poprawności działania funkcji circular_buffer_create
            UTEST4, // Sprawdzanie poprawności działania funkcji circular_buffer_create
            UTEST5, // Sprawdzanie reakcji funkcji circular_buffer_create na limit pamięci (limit sterty ustawiono na 200 bajtów)
            UTEST6, // Sprawdzanie reakcji funkcji circular_buffer_create na limit pamięci (limit sterty ustawiono na 110 bajtów)
            UTEST7, // Sprawdzanie poprawności działania funkcji circular_buffer_create
            UTEST8, // Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
            UTEST9, // Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
            UTEST10, // Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
            UTEST11, // Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
            UTEST12, // Sprawdzanie reakcji funkcji circular_buffer_create_struct na limit pamięci (limit sterty ustawiono na 96 bajtów)
            UTEST13, // Sprawdzanie reakcji funkcji circular_buffer_create_struct na limit pamięci (limit sterty ustawiono na 24 bajtów)
            UTEST14, // Sprawdzanie reakcji funkcji circular_buffer_create_struct na limit pamięci (limit sterty ustawiono na 65 bajtów)
            UTEST15, // Sprawdzanie poprawności działania funkcji circular_buffer_create_struct
            UTEST16, // Sprawdzanie poprawności działania funkcji circular_buffer_destroy
            UTEST17, // Sprawdzanie poprawności działania funkcji circular_buffer_destroy
            UTEST18, // Sprawdzanie poprawności działania funkcji circular_buffer_destroy
            UTEST19, // Sprawdzanie poprawności działania funkcji circular_buffer_destroy
            UTEST20, // Sprawdzanie poprawności działania funkcji circular_buffer_destroy_struct
            UTEST21, // Sprawdzanie poprawności działania funkcji circular_buffer_destroy_struct
            UTEST22, // Sprawdzanie poprawności działania funkcji circular_buffer_destroy_struct
            UTEST23, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST24, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST25, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST26, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST27, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST28, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST29, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST30, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST31, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST32, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST33, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST34, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST35, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST36, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST37, // Sprawdzanie poprawności działania funkcji circular_buffer_push_back
            UTEST38, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST39, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST40, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST41, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST42, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST43, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST44, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST45, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST46, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST47, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST48, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST49, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST50, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST51, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST52, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST53, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST54, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST55, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST56, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST57, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST58, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST59, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST60, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST61, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST62, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST63, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST64, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST65, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST66, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST67, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_front
            UTEST68, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST69, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST70, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST71, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST72, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST73, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST74, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST75, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST76, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST77, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST78, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST79, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST80, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST81, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST82, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST83, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST84, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST85, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST86, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST87, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST88, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST89, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST90, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST91, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST92, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST93, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST94, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST95, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST96, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST97, // Sprawdzanie poprawności działania funkcji circular_buffer_pop_back
            UTEST98, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST99, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST100, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST101, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST102, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST103, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST104, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST105, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST106, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST107, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST108, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST109, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST110, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST111, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST112, // Sprawdzanie poprawności działania funkcji circular_buffer_full
            UTEST113, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST114, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST115, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST116, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST117, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST118, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST119, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST120, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST121, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST122, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST123, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST124, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST125, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST126, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST127, // Sprawdzanie poprawności działania funkcji circular_buffer_empty
            UTEST128, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST129, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST130, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST131, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST132, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST133, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST134, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST135, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST136, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST137, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST138, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST139, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST140, // Sprawdzanie poprawności działania funkcji circular_buffer_display
            UTEST141, // Sprawdzanie poprawności działania funkcji circular_buffer_display
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
            test_summary(141); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci (limit sterty ustawiono na 44 bajtów)
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