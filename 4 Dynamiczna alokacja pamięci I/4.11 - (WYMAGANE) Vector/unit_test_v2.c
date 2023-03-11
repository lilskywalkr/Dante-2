/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Vector
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-03 17:27:36.023948
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
//  Test 1: Sprawdzanie poprawności działania funkcji vector_create
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji vector_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t ptr = { .size = -5, .capacity = -6 };

                printf("#####START#####");
                int res = vector_create(&ptr, -63);
                printf("#####END#####");

                test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                if (!1)
                {           
            
                    test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                    test_error(ptr.capacity == -63, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na -63, a ustawiła na %d", ptr.capacity);

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
//  Test 2: Sprawdzanie poprawności działania funkcji vector_create
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji vector_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t ptr = { .size = -3, .capacity = -8 };

                printf("#####START#####");
                int res = vector_create(&ptr, 0);
                printf("#####END#####");

                test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                if (!1)
                {           
            
                    test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                    test_error(ptr.capacity == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.capacity);

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
//  Test 3: Sprawdzanie poprawności działania funkcji vector_create
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji vector_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t ptr = { .size = 3, .capacity = -8 };

                printf("#####START#####");
                int res = vector_create(&ptr, 40);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                if (!0)
                {           
            
                    test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                    test_error(ptr.capacity == 40, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 40, a ustawiła na %d", ptr.capacity);

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
//  Test 4: Sprawdzanie poprawności działania funkcji vector_create
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji vector_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t ptr = { .size = 9, .capacity = -10 };

                printf("#####START#####");
                int res = vector_create(&ptr, 1376);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                if (!0)
                {           
            
                    test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                    test_error(ptr.capacity == 1376, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 1376, a ustawiła na %d", ptr.capacity);

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
//  Test 5: Sprawdzanie reakcji funkcji create_vector_int na limit pamięci (limit sterty ustawiono na 212 bajtów)
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie reakcji funkcji create_vector_int na limit pamięci (limit sterty ustawiono na 212 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(212);
    
    //
    // -----------
    //
    

                struct vector_t ptr = { .size = 5, .capacity = -4 };

                printf("#####START#####");
                int res = vector_create(&ptr, 53);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 53, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 53, a ustawiła na %d", ptr.capacity);

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
//  Test 6: Sprawdzanie reakcji funkcji create_vector_int na limit pamięci (limit sterty ustawiono na 125 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie reakcji funkcji create_vector_int na limit pamięci (limit sterty ustawiono na 125 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(125);
    
    //
    // -----------
    //
    

                struct vector_t ptr = { .size = 5, .capacity = 1 };

                printf("#####START#####");
                int res = vector_create(&ptr, 53);
                printf("#####END#####");

                test_error(res == 2, "Funkcja vector_create() powinna zwrócić wartość 2, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji vector_create
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji vector_create", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = vector_create(NULL, 53);
                printf("#####END#####");

                test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji vector_create_struct
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji vector_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t *ptr;

                printf("#####START#####");
                int res = vector_create_struct(&ptr, -71);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika na strukturę vector_t, a przypisała NULL");
                test_error(res == 1, "Funkcja vector_create_struct() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {           
        
                    test_error(ptr->ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze vector_t, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == -71, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na -71, a ustawiła na %d", ptr->capacity);

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
//  Test 9: Sprawdzanie poprawności działania funkcji vector_create_struct
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji vector_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t *ptr;

                printf("#####START#####");
                int res = vector_create_struct(&ptr, 0);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika na strukturę vector_t, a przypisała NULL");
                test_error(res == 1, "Funkcja vector_create_struct() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!1)
                {           
        
                    test_error(ptr->ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze vector_t, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 0, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->capacity);

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
//  Test 10: Sprawdzanie poprawności działania funkcji vector_create_struct
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji vector_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t *ptr;

                printf("#####START#####");
                int res = vector_create_struct(&ptr, 35);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika na strukturę vector_t, a przypisała NULL");
                test_error(res == 0, "Funkcja vector_create_struct() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {           
        
                    test_error(ptr->ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze vector_t, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 35, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na 35, a ustawiła na %d", ptr->capacity);

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
//  Test 11: Sprawdzanie poprawności działania funkcji vector_create_struct
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji vector_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t *ptr;

                printf("#####START#####");
                int res = vector_create_struct(&ptr, 9256);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika na strukturę vector_t, a przypisała NULL");
                test_error(res == 0, "Funkcja vector_create_struct() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {           
        
                    test_error(ptr->ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze vector_t, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 9256, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na 9256, a ustawiła na %d", ptr->capacity);

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
//  Test 12: Sprawdzanie reakcji funkcji vector_create_struct na limit pamięci (limit sterty ustawiono na 416 bajtów)
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie reakcji funkcji vector_create_struct na limit pamięci (limit sterty ustawiono na 416 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(416);
    
    //
    // -----------
    //
    

                struct vector_t *ptr;

                printf("#####START#####");
                int res = vector_create_struct(&ptr, 100);
                printf("#####END#####");

         
                test_error(ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika na strukturę vector_t, a przypisała NULL");
                test_error(res == 0, "Funkcja vector_create_struct() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->ptr != NULL, "Funkcja vector_create_struct() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze vector_t, a przypisała NULL");
                test_error(ptr->size == 0, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                test_error(ptr->capacity == 100, "Funkcja vector_create_struct() powinna ustawić wartość pola size w strukturze na 100, a ustawiła na %d", ptr->capacity);

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
//  Test 13: Sprawdzanie reakcji funkcji vector_create_struct na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji vector_create_struct na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                struct vector_t *ptr;

                printf("#####START#####");
                int res = vector_create_struct(&ptr, 100);
                printf("#####END#####");

                test_error(res == 2, "Funkcja vector_create_struct() powinna zwrócić wartość 2, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie reakcji funkcji vector_create_struct na limit pamięci (limit sterty ustawiono na 81 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie reakcji funkcji vector_create_struct na limit pamięci (limit sterty ustawiono na 81 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(81);
    
    //
    // -----------
    //
    

                struct vector_t *ptr;

                printf("#####START#####");
                int res = vector_create_struct(&ptr, 100);
                printf("#####END#####");

                test_error(res == 2, "Funkcja vector_create_struct() powinna zwrócić wartość 2, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji vector_create_struct
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji vector_create_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = vector_create_struct(NULL, 100);
                printf("#####END#####");

                test_error(res == 1, "Funkcja vector_create_struct() powinna zwrócić wartość 1, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji vector_push_back
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji vector_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int vector[] = {-90, -18, 73, 31, -11, -59, -100, -67, 32, -67, -90, 96, -67, -35, -60};
        
                struct vector_t ptr = { .size = 0, .capacity = 4 };

                printf("#####START#####");
                int res = vector_create(&ptr, 15);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 15, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 15, a ustawiła na %d", ptr.capacity);

                for (int i = 0; i < 15; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
                        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 15, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 15, a ustawiła na %d", ptr.capacity);
                        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                int additional = -84;
                printf("#####START#####");
                res = vector_push_back(&ptr, additional);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr.size == 16, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 16, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 30, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 30, a ustawiła na %d", ptr.capacity);
                
                int j;
                
                for (j = 0; j < 15; ++j)
                    test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
                
                test_error(ptr.ptr[j] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, additional, ptr.ptr[j]);
                
                
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
//  Test 17: Sprawdzanie poprawności działania funkcji vector_push_back
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji vector_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int vector[] = {70, -88, 33, -68, -74, 48, 34, -16, 68, 50, 31, 47, -84, 51, 53, 74, 74, 41, 62, 27, -38, -74, 16, 49, 28, -53, -80, -31, 50, 95, 27, 50, 69, -31, 38, -83, -5, -79, 65, -25, -43, -14, 2, -50, 30, 60, -14, -7, 83, -10, -4, -71, 94, -64, 21, 6, -30, -35, -6, 56, 33, 64, -84, 37, -72, 41, 88, -61};
        
                struct vector_t ptr = { .size = -3, .capacity = 3 };

                printf("#####START#####");
                int res = vector_create(&ptr, 68);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 68, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 68, a ustawiła na %d", ptr.capacity);

                for (int i = 0; i < 68; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
                        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 68, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 68, a ustawiła na %d", ptr.capacity);
                        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }

                int additional = -71;
                printf("#####START#####");
                res = vector_push_back(&ptr, additional);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                test_error(ptr.size == 69, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 69, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 136, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 136, a ustawiła na %d", ptr.capacity);
                
                int j;
                
                for (j = 0; j < 68; ++j)
                    test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
                
                test_error(ptr.ptr[j] == additional, "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, additional, ptr.ptr[j]);
                
                
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
//  Test 18: Sprawdzanie reakcji funkcji vector_push_back na limit pamięci (limit sterty ustawiono na 48 bajtów)
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie reakcji funkcji vector_push_back na limit pamięci (limit sterty ustawiono na 48 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(48);
    
    //
    // -----------
    //
    

            const int vector[] = {93, 18, 59, 60, 69, -25, 86, 1, -64, 70, 18, 5};

            struct vector_t ptr = { .size = -7, .capacity = 4 };

            printf("#####START#####");
            int res = vector_create(&ptr, 6);
            printf("#####END#####");

            test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
            test_error(ptr.capacity == 6, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 6, a ustawiła na %d", ptr.capacity);

            for (int i = 0; i < 6; ++i)
            {
                    printf("#####START#####");
                    res = vector_push_back(&ptr, vector[i]);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                    test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                    test_error(ptr.capacity == 6, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 6, a ustawiła na %d", ptr.capacity);

                    for (int j = 0; j <= i; ++j)
                        test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            }

            for (int i = 6; i < 12; ++i)
            {
                    printf("#####START#####");
                    res = vector_push_back(&ptr, vector[i]);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                    test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                    test_error(ptr.capacity == 12, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 12, a ustawiła na %d", ptr.capacity);

                    for (int j = 0; j <= i; ++j)
                        test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
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
//  Test 19: Sprawdzanie reakcji funkcji vector_push_back na limit pamięci (limit sterty ustawiono na 24 bajtów)
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie reakcji funkcji vector_push_back na limit pamięci (limit sterty ustawiono na 24 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(24);
    
    //
    // -----------
    //
    

            const int vector[] = {93, 18, 59, 60, 69, -25, 86, 1, -64, 70, 18, 5};

            struct vector_t ptr = { .size = 0, .capacity = 10 };

            printf("#####START#####");
            int res = vector_create(&ptr, 6);
            printf("#####END#####");

            test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
            test_error(ptr.capacity == 6, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 6, a ustawiła na %d", ptr.capacity);

            int i;
            for (i = 0; i < 6; ++i)
            {
                    printf("#####START#####");
                    res = vector_push_back(&ptr, vector[i]);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                    test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                    test_error(ptr.capacity == 6, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 6, a ustawiła na %d", ptr.capacity);

                    for (int j = 0; j <= i; ++j)
                        test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            }

            printf("#####START#####");
            res = vector_push_back(&ptr, vector[i]);
            printf("#####END#####");

            test_error(res == 2, "Funkcja vector_push_back() powinna zwrócić wartość 2, a zwróciła %d", res);
            test_error(ptr.size == i, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i, ptr.size);
            test_error(ptr.capacity == 6, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 6, a ustawiła na %d", ptr.capacity);

            for (int j = 0; j < i; ++j)
                test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

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
//  Test 20: Sprawdzanie poprawności działania funkcji vector_push_back
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji vector_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int vector[] = {22, -46, -80, 94, 79, -97, -19, 43, 2, -8};
                struct vector_t ptr = { .ptr = vector, .size = -6, .capacity = 3 };
                    
                printf("#####START#####");
                int res = vector_push_back(&ptr, -77);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji vector_push_back
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji vector_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int vector[] = {22, -46, -80, 94, 79, -97, -19, 43, 2, -8};
                struct vector_t ptr = { .ptr = vector, .size = 0, .capacity = -5 };
                    
                printf("#####START#####");
                int res = vector_push_back(&ptr, -35);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji vector_push_back
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji vector_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int vector[] = {22, -46, -80, 94, 79, -97, -19, 43, 2, -8};
                struct vector_t ptr = { .ptr = vector, .size = 11, .capacity = 6 };
                    
                printf("#####START#####");
                int res = vector_push_back(&ptr, -91);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji vector_push_back
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji vector_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int vector[] = {22, -46, -80, 94, 79, -97, -19, 43, 2, -8};
                struct vector_t ptr = { .ptr = vector, .size = 0, .capacity = 0 };
                    
                printf("#####START#####");
                int res = vector_push_back(&ptr, -1);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji vector_push_back
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji vector_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int vector[] = {22, -46, -80, 94, 79, -97, -19, 43, 2, -8};
                struct vector_t ptr = { .ptr = vector, .size = 18, .capacity = -7 };
                    
                printf("#####START#####");
                int res = vector_push_back(&ptr, 13);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji vector_push_back
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji vector_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int vector[] = {22, -46, -80, 94, 79, -97, -19, 43, 2, -8};
                struct vector_t ptr = { .ptr = vector, .size = -13, .capacity = -3 };
                    
                printf("#####START#####");
                int res = vector_push_back(&ptr, -3);
                printf("#####END#####");
        
                test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji vector_push_back
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji vector_push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = vector_push_back(NULL, 53);
            printf("#####END#####");

            test_error(res == 1, "Funkcja vector_create() powinna zwrócić wartość 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {65, 42, -65, -68, -65, -88, -31, 78, 28, -88, -30, -57, -36, 8};
                const int expected_vector[] = {42, -65, -68, -65, -88, -31, 78, 28, -88, -30, -57, -36, 8};

                struct vector_t ptr = { .size = 14, .capacity = 14 };

                printf("#####START#####");
                int res = vector_create(&ptr, 14);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 14, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 14, a ustawiła na %d", ptr.capacity);
        
                int i;
                for (i = 0; i < 14; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 14, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 14, a ustawiła na %d", ptr.capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                printf("#####START#####");
                res = vector_erase(&ptr, 65);
                printf("#####END#####");

                test_error(res == 1, "Funkcja vector_erase() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 13, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 13, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 14, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 14, a ustawiła na %d", ptr.capacity);

                for (int j = 0; j < 13; ++j)
                    test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 28: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {68};
                const int expected_vector[] = {0};

                struct vector_t ptr = { .size = 1, .capacity = 1 };

                printf("#####START#####");
                int res = vector_create(&ptr, 1);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 1, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 1, a ustawiła na %d", ptr.capacity);
        
                int i;
                for (i = 0; i < 1; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 1, a ustawiła na %d", ptr.capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                printf("#####START#####");
                res = vector_erase(&ptr, 68);
                printf("#####END#####");

                test_error(res == 1, "Funkcja vector_erase() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 1, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 1, a ustawiła na %d", ptr.capacity);

                for (int j = 0; j < 0; ++j)
                    test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 29: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {19};
                const int expected_vector[] = {19};

                struct vector_t ptr = { .size = 1, .capacity = 1 };

                printf("#####START#####");
                int res = vector_create(&ptr, 1);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 1, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 1, a ustawiła na %d", ptr.capacity);
        
                int i;
                for (i = 0; i < 1; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 1, a ustawiła na %d", ptr.capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                printf("#####START#####");
                res = vector_erase(&ptr, 20);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_erase() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 1, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 1, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 1, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 1, a ustawiła na %d", ptr.capacity);

                for (int j = 0; j < 1; ++j)
                    test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 30: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {99, -6, 51, 96, 54, 41, -73, 6, 17, 41, 15, -38, -96, 60, -5, -36, -37, -76, -64, -74, -19, 62, 73, 59};
                const int expected_vector[] = {99, -6, 51, 96, 54, 41, -73, 6, 17, 41, 15, -38, -96, 60, -5, -36, -37, -76, -64, -74, -19, 62, 73};

                struct vector_t ptr = { .size = 24, .capacity = 24 };

                printf("#####START#####");
                int res = vector_create(&ptr, 24);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 24, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 24, a ustawiła na %d", ptr.capacity);
        
                int i;
                for (i = 0; i < 24; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 24, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 24, a ustawiła na %d", ptr.capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                printf("#####START#####");
                res = vector_erase(&ptr, 59);
                printf("#####END#####");

                test_error(res == 1, "Funkcja vector_erase() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 23, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 23, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 24, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 24, a ustawiła na %d", ptr.capacity);

                for (int j = 0; j < 23; ++j)
                    test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 31: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {-14, 97, -85, -52, 33, 18, 9, 91, 71, 51, -49, -1, 45, 33, -46, 59, 19, -56, 66, 3, -53, 1, 5, 58, -23, 61, -38, -80, 48, -16};
                const int expected_vector[] = {-14, 97, -85, -52, 33, 18, 9, 91, 71, 51, -49, -1, 45, 33, -46, 59, 19, -56, 66, 3, -53, 1, 5, 58, 61, -38, -80, 48, -16};

                struct vector_t ptr = { .size = 30, .capacity = 30 };

                printf("#####START#####");
                int res = vector_create(&ptr, 30);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 30, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 30, a ustawiła na %d", ptr.capacity);
        
                int i;
                for (i = 0; i < 30; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 30, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 30, a ustawiła na %d", ptr.capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                printf("#####START#####");
                res = vector_erase(&ptr, -23);
                printf("#####END#####");

                test_error(res == 1, "Funkcja vector_erase() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 29, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 29, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 30, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 30, a ustawiła na %d", ptr.capacity);

                for (int j = 0; j < 29; ++j)
                    test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 32: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {10, -3, 5, -5, 0, 7, -5, -2, -9, 1, 6, 8, -9, 1, -4, -10, -6, 7, 9, -8, 9, -1, -6, -1, 8, -10, 2, 5, -4, 10, -3, 4, -8, -10, 2, 10, -8, 7, -6, 8, 1, 9, 4, -10, 2, -6, 9, 10, 2, -8};
                const int expected_vector[] = {10, -3, 5, -5, 7, -5, -2, -9, 1, 6, 8, -9, 1, -4, -10, -6, 7, 9, -8, 9, -1, -6, -1, 8, -10, 2, 5, -4, 10, -3, 4, -8, -10, 2, 10, -8, 7, -6, 8, 1, 9, 4, -10, 2, -6, 9, 10, 2, -8};

                struct vector_t ptr = { .size = 50, .capacity = 50 };

                printf("#####START#####");
                int res = vector_create(&ptr, 50);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 50, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 50, a ustawiła na %d", ptr.capacity);
        
                int i;
                for (i = 0; i < 50; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 50, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 50, a ustawiła na %d", ptr.capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                printf("#####START#####");
                res = vector_erase(&ptr, 0);
                printf("#####END#####");

                test_error(res == 1, "Funkcja vector_erase() powinna zwrócić wartość 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 49, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 49, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 50, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 50, a ustawiła na %d", ptr.capacity);

                for (int j = 0; j < 49; ++j)
                    test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 33: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
                const int expected_vector[] = {0};

                struct vector_t ptr = { .size = 44, .capacity = 44 };

                printf("#####START#####");
                int res = vector_create(&ptr, 44);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 44, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 44, a ustawiła na %d", ptr.capacity);
        
                int i;
                for (i = 0; i < 44; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 44, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 44, a ustawiła na %d", ptr.capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                printf("#####START#####");
                res = vector_erase(&ptr, -1);
                printf("#####END#####");

                test_error(res == 44, "Funkcja vector_erase() powinna zwrócić wartość 44, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 0, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 22, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 22, a ustawiła na %d", ptr.capacity);

                for (int j = 0; j < 0; ++j)
                    test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 34: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                const int expected_vector[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

                struct vector_t ptr = { .size = 45, .capacity = 45 };

                printf("#####START#####");
                int res = vector_create(&ptr, 45);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 45, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 45, a ustawiła na %d", ptr.capacity);
        
                int i;
                for (i = 0; i < 45; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 45, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 45, a ustawiła na %d", ptr.capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                printf("#####START#####");
                res = vector_erase(&ptr, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_erase() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 45, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 45, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 45, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 45, a ustawiła na %d", ptr.capacity);

                for (int j = 0; j < 45; ++j)
                    test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 35: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {32, 59, 68, 98, -8, -22, 3, 12, 33, -74, -54, 74, -61, 66, 24, -48, 17, 11, -34, -89, -58, -66, 23, 50, -58, -33, -95, 24, -59, -3, -98, 18, -28, -56, 14, -39, -69, -97, 25, -83, 87, 46, -48, 38, -20};
                const int expected_vector[] = {32, 59, 68, 98, -8, -22, 3, 12, 33, -74, -54, 74, -61, 66, 24, -48, 17, 11, -34, -89, -58, -66, 23, 50, -58, -33, -95, 24, -59, -3, -98, 18, -28, -56, 14, -39, -69, -97, 25, -83, 87, 46, -48, 38, -20};

                struct vector_t ptr = { .size = 45, .capacity = 45 };

                printf("#####START#####");
                int res = vector_create(&ptr, 45);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 45, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 45, a ustawiła na %d", ptr.capacity);
        
                int i;
                for (i = 0; i < 45; ++i)
                {
                        printf("#####START#####");
                        res = vector_push_back(&ptr, vector[i]);
                        printf("#####END#####");
        
                        test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                        test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                        test_error(ptr.capacity == 45, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 45, a ustawiła na %d", ptr.capacity);
        
                        for (int j = 0; j <= i; ++j)
                            test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);
        
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }


                printf("#####START#####");
                res = vector_erase(&ptr, -55);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_erase() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.size == 45, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 45, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 45, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 45, a ustawiła na %d", ptr.capacity);

                for (int j = 0; j < 45; ++j)
                    test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 36: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            struct vector_t ptr = { .size = 0, .capacity = 10 };
                    
            printf("#####START#####");
            int res = vector_create(&ptr, 10);
            printf("#####END#####");
                
            test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
            test_error(ptr.capacity == 10, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 10, a ustawiła na %d", ptr.capacity);
        
            printf("#####START#####");
            res = vector_erase(&ptr, -8);
            printf("#####END#####");

            test_error(res == 0, "Funkcja vector_erase() powinna zwrócić wartość 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(ptr.size == 0, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
            test_error(ptr.capacity == 5, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 5, a ustawiła na %d", ptr.capacity);

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
//  Test 37: Sprawdzanie reakcji funkcji vector_erase na limit pamięci (limit sterty ustawiono na 204 bajtów)
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie reakcji funkcji vector_erase na limit pamięci (limit sterty ustawiono na 204 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(204);
    
    //
    // -----------
    //
    

            int vector[] = {-1, 7, -10, -5, -1, -1, -1, -1, -1, -1, 8, 1, -1, -1, -1, -1, -1, 1, -1, -1, -1, -1, -1, -8, -1, -1, -1, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -8, -1, -1, -6, -1, -1, -1, -1};
            const int expected_vector[] = {7, -10, -5, 8, 1, 1, -8, 10, -8, -6};

            struct vector_t ptr = { .size = 51, .capacity = 51 };

            printf("#####START#####");
            int res = vector_create(&ptr, 51);
            printf("#####END#####");

            test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
            test_error(ptr.capacity == 51, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 51, a ustawiła na %d", ptr.capacity);

            int i;
            for (i = 0; i < 51; ++i)
            {
                    printf("#####START#####");
                    res = vector_push_back(&ptr, vector[i]);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja vector_push_back() powinna zwrócić wartość 0, a zwróciła %d", res);
                    test_error(ptr.size == i + 1, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na %d, a ustawiła na %d", i + 1, ptr.size);
                    test_error(ptr.capacity == 51, "Funkcja vector_push_back() powinna ustawić wartość pola size w strukturze na 51, a ustawiła na %d", ptr.capacity);

                    for (int j = 0; j <= i; ++j)
                        test_error(ptr.ptr[j] == vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, vector[j], ptr.ptr[j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            }


            printf("#####START#####");
            res = vector_erase(&ptr, -1);
            printf("#####END#####");

            test_error(res == 41, "Funkcja vector_erase() powinna zwrócić wartość 41, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(ptr.size == 10, "Funkcja vector_erase() powinna ustawić wartość pola size w strukturze na 10, a ustawiła na %d", ptr.size);
            test_error(ptr.capacity == 25, "Funkcja vector_erase() powinna ustawić wartość pola capacity w strukturze na 25, a ustawiła na %d", ptr.capacity);

            for (int j = 0; j < 10; ++j)
                test_error(ptr.ptr[j] == expected_vector[j], "Wartość pod indeksem %d jest nieprawidłowa; powinno być %d, a jest %d", j, expected_vector[j], ptr.ptr[j]);

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
//  Test 38: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {-52, 45, -28, -60, -76, -80, -12, 79, 72, 77, 42, 85, 50, 64, -55, 28, -63, 14, 28};
                struct vector_t ptr = { .ptr = vector, .size = -2, .capacity = 9 };

                printf("#####START#####");
                int res = vector_erase(&ptr, -77);
                printf("#####END#####");

                test_error(res == -1, "Funkcja vector_erase() powinna zwrócić wartość -1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {-52, 45, -28, -60, -76, -80, -12, 79, 72, 77, 42, 85, 50, 64, -55, 28, -63, 14, 28};
                struct vector_t ptr = { .ptr = vector, .size = 0, .capacity = -10 };

                printf("#####START#####");
                int res = vector_erase(&ptr, -76);
                printf("#####END#####");

                test_error(res == -1, "Funkcja vector_erase() powinna zwrócić wartość -1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {-52, 45, -28, -60, -76, -80, -12, 79, 72, 77, 42, 85, 50, 64, -55, 28, -63, 14, 28};
                struct vector_t ptr = { .ptr = vector, .size = 17, .capacity = 2 };

                printf("#####START#####");
                int res = vector_erase(&ptr, -56);
                printf("#####END#####");

                test_error(res == -1, "Funkcja vector_erase() powinna zwrócić wartość -1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {-52, 45, -28, -60, -76, -80, -12, 79, 72, 77, 42, 85, 50, 64, -55, 28, -63, 14, 28};
                struct vector_t ptr = { .ptr = vector, .size = 0, .capacity = 0 };

                printf("#####START#####");
                int res = vector_erase(&ptr, 52);
                printf("#####END#####");

                test_error(res == -1, "Funkcja vector_erase() powinna zwrócić wartość -1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {-52, 45, -28, -60, -76, -80, -12, 79, 72, 77, 42, 85, 50, 64, -55, 28, -63, 14, 28};
                struct vector_t ptr = { .ptr = vector, .size = 16, .capacity = -10 };

                printf("#####START#####");
                int res = vector_erase(&ptr, 95);
                printf("#####END#####");

                test_error(res == -1, "Funkcja vector_erase() powinna zwrócić wartość -1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int vector[] = {-52, 45, -28, -60, -76, -80, -12, 79, 72, 77, 42, 85, 50, 64, -55, 28, -63, 14, 28};
                struct vector_t ptr = { .ptr = vector, .size = -11, .capacity = -1 };

                printf("#####START#####");
                int res = vector_erase(&ptr, 76);
                printf("#####END#####");

                test_error(res == -1, "Funkcja vector_erase() powinna zwrócić wartość -1, a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji vector_erase
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji vector_erase", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = vector_erase(NULL, 41);
            printf("#####END#####");

            test_error(res == -1, "Funkcja vector_create() powinna zwrócić wartość -1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji vector_destroy
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji vector_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t ptr;

                printf("#####START#####");
                int res = vector_create(&ptr, 19);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja vector_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze vector_t, a przypisała NULL");
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 19, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 19, a ustawiła na %d", ptr.capacity);

                printf("#####START#####");
                vector_destroy(&ptr);
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
//  Test 46: Sprawdzanie poprawności działania funkcji vector_destroy
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji vector_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t ptr;

                printf("#####START#####");
                int res = vector_create(&ptr, 19);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr.ptr != NULL, "Funkcja vector_create() powinna przypisać adres zaalokowanej pamięci do wskaźnika ptr w strukturze vector_t, a przypisała NULL");
                test_error(ptr.size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr.size);
                test_error(ptr.capacity == 19, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 19, a ustawiła na %d", ptr.capacity);

                printf("#####START#####");
                vector_destroy(&ptr);
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
//  Test 47: Sprawdzanie poprawności działania funkcji vector_destroy
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji vector_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            printf("#####START#####");
            vector_destroy(NULL);
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
//  Test 48: Sprawdzanie poprawności działania funkcji vector_destroy
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji vector_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct vector_t ptr = { .ptr = NULL, .size = 8, .capacity = 16 };

            printf("#####START#####");
            vector_destroy(&ptr);
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
//  Test 49: Sprawdzanie poprawności działania funkcji vector_destroy_struct
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji vector_destroy_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t *ptr;

                printf("#####START#####");
                int res = vector_create_struct(&ptr, 100);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                test_error(ptr->capacity == 100, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 100, a ustawiła na %d", ptr->capacity);

                printf("#####START#####");
                vector_destroy_struct(&ptr);
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
//  Test 50: Sprawdzanie poprawności działania funkcji vector_destroy_struct
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji vector_destroy_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct vector_t *ptr;

                printf("#####START#####");
                int res = vector_create_struct(&ptr, 9203);
                printf("#####END#####");

                test_error(res == 0, "Funkcja vector_create() powinna zwrócić wartość 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->size == 0, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                test_error(ptr->capacity == 9203, "Funkcja vector_create() powinna ustawić wartość pola size w strukturze na 9203, a ustawiła na %d", ptr->capacity);

                printf("#####START#####");
                vector_destroy_struct(&ptr);
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
//  Test 51: Sprawdzanie poprawności działania funkcji vector_destroy_struct
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji vector_destroy_struct", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            printf("#####START#####");
            vector_destroy_struct(NULL);
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
//  Test 52: Sprawdzanie poprawności działania funkcji vector_display
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji vector_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int vector[] = {-52, 45, -28, -60, -76, -80, -12, 79, 72, 77, 42, 85, 50, 64, -55, 28, -63, 14, 28};

            struct vector_t arr;
            arr.ptr = vector;

    //-------------1-----------------------

            printf("***START***\n");
            vector_display(NULL);
            printf("***END***\n");


    //-------------2-----------------------

            arr.capacity = 18;
            arr.size = 19;

            printf("***START***\n");
            vector_display(&arr);
            printf("***END***\n");


    //-------------3-----------------------

            arr.capacity = 19;
            arr.size = -19;

            printf("***START***\n");
            vector_display(&arr);
            printf("***END***\n");


    //-------------4-----------------------

            arr.capacity = 19;
            arr.size = 0;

            printf("***START***\n");
            vector_display(&arr);
            printf("***END***\n");

    //-------------5-----------------------

            arr.capacity = 19;
            arr.size = 19;
            arr.ptr = NULL;

            printf("***START***\n");
            vector_display(&arr);
            printf("***END***\n");

    //-------------6-----------------------

            arr.capacity = 19;
            arr.size = 19;
            arr.ptr = vector;

            printf("***START***\n");
            vector_display(&arr);
            printf("***END***\n");

    //-------------7-----------------------

            arr.capacity = 19;
            arr.size = 19 - 1;

            printf("***START***\n");
            vector_display(&arr);
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
            UTEST1, // Sprawdzanie poprawności działania funkcji vector_create
            UTEST2, // Sprawdzanie poprawności działania funkcji vector_create
            UTEST3, // Sprawdzanie poprawności działania funkcji vector_create
            UTEST4, // Sprawdzanie poprawności działania funkcji vector_create
            UTEST5, // Sprawdzanie reakcji funkcji create_vector_int na limit pamięci (limit sterty ustawiono na 212 bajtów)
            UTEST6, // Sprawdzanie reakcji funkcji create_vector_int na limit pamięci (limit sterty ustawiono na 125 bajtów)
            UTEST7, // Sprawdzanie poprawności działania funkcji vector_create
            UTEST8, // Sprawdzanie poprawności działania funkcji vector_create_struct
            UTEST9, // Sprawdzanie poprawności działania funkcji vector_create_struct
            UTEST10, // Sprawdzanie poprawności działania funkcji vector_create_struct
            UTEST11, // Sprawdzanie poprawności działania funkcji vector_create_struct
            UTEST12, // Sprawdzanie reakcji funkcji vector_create_struct na limit pamięci (limit sterty ustawiono na 416 bajtów)
            UTEST13, // Sprawdzanie reakcji funkcji vector_create_struct na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST14, // Sprawdzanie reakcji funkcji vector_create_struct na limit pamięci (limit sterty ustawiono na 81 bajtów)
            UTEST15, // Sprawdzanie poprawności działania funkcji vector_create_struct
            UTEST16, // Sprawdzanie poprawności działania funkcji vector_push_back
            UTEST17, // Sprawdzanie poprawności działania funkcji vector_push_back
            UTEST18, // Sprawdzanie reakcji funkcji vector_push_back na limit pamięci (limit sterty ustawiono na 48 bajtów)
            UTEST19, // Sprawdzanie reakcji funkcji vector_push_back na limit pamięci (limit sterty ustawiono na 24 bajtów)
            UTEST20, // Sprawdzanie poprawności działania funkcji vector_push_back
            UTEST21, // Sprawdzanie poprawności działania funkcji vector_push_back
            UTEST22, // Sprawdzanie poprawności działania funkcji vector_push_back
            UTEST23, // Sprawdzanie poprawności działania funkcji vector_push_back
            UTEST24, // Sprawdzanie poprawności działania funkcji vector_push_back
            UTEST25, // Sprawdzanie poprawności działania funkcji vector_push_back
            UTEST26, // Sprawdzanie poprawności działania funkcji vector_push_back
            UTEST27, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST28, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST29, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST30, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST31, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST32, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST33, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST34, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST35, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST36, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST37, // Sprawdzanie reakcji funkcji vector_erase na limit pamięci (limit sterty ustawiono na 204 bajtów)
            UTEST38, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST39, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST40, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST41, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST42, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST43, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST44, // Sprawdzanie poprawności działania funkcji vector_erase
            UTEST45, // Sprawdzanie poprawności działania funkcji vector_destroy
            UTEST46, // Sprawdzanie poprawności działania funkcji vector_destroy
            UTEST47, // Sprawdzanie poprawności działania funkcji vector_destroy
            UTEST48, // Sprawdzanie poprawności działania funkcji vector_destroy
            UTEST49, // Sprawdzanie poprawności działania funkcji vector_destroy_struct
            UTEST50, // Sprawdzanie poprawności działania funkcji vector_destroy_struct
            UTEST51, // Sprawdzanie poprawności działania funkcji vector_destroy_struct
            UTEST52, // Sprawdzanie poprawności działania funkcji vector_display
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
            test_summary(52); // wszystkie testy muszą zakończyć się sukcesem
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