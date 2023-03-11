/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Makra i struktury
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-22 19:25:38.923070
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




          struct array_int_t {
            int size; 
            int capacity; 
            int *data; 
          };
          
          struct array_double_t {
            int size; 
            int capacity; 
            double *data; 
          };
        
          DEFINE_ARRAY(intmax_t)
          CREATE_ARRAY(intmax_t)
          FREE_ARRAY(intmax_t)
          SAVE_ARRAY(intmax_t)
          SORT_ARRAY(intmax_t)
          LOAD_ARRAY(intmax_t)
        
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji create_array_int
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji create_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_int_t *ptr = create_array_int(-59);
                printf("#####END#####");


                if (!1)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_int() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(ptr->data != NULL, "Funkcja create_array_int() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_int() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == -59, "Funkcja create_array_int() powinna ustawić wartość pola capacity w strukturze na -59, a ustawiła na %d", ptr->capacity);

                    free_array_int(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_int() powinna zwrócić NULL");
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
//  Test 2: Sprawdzanie poprawności działania funkcji create_array_int
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji create_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_int_t *ptr = create_array_int(0);
                printf("#####END#####");


                if (!1)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_int() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(ptr->data != NULL, "Funkcja create_array_int() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_int() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 0, "Funkcja create_array_int() powinna ustawić wartość pola capacity w strukturze na 0, a ustawiła na %d", ptr->capacity);

                    free_array_int(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_int() powinna zwrócić NULL");
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
//  Test 3: Sprawdzanie poprawności działania funkcji create_array_int
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji create_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_int_t *ptr = create_array_int(10);
                printf("#####END#####");


                if (!0)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_int() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(ptr->data != NULL, "Funkcja create_array_int() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_int() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 10, "Funkcja create_array_int() powinna ustawić wartość pola capacity w strukturze na 10, a ustawiła na %d", ptr->capacity);

                    free_array_int(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_int() powinna zwrócić NULL");
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
//  Test 4: Sprawdzanie poprawności działania funkcji create_array_int
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji create_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_int_t *ptr = create_array_int(7075);
                printf("#####END#####");


                if (!0)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_int() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(ptr->data != NULL, "Funkcja create_array_int() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_int() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 7075, "Funkcja create_array_int() powinna ustawić wartość pola capacity w strukturze na 7075, a ustawiła na %d", ptr->capacity);

                    free_array_int(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_int() powinna zwrócić NULL");
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
//  Test 5: Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 156 bajtów)
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 156 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(156);
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_int_t *ptr = create_array_int(35);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja create_array_int() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->data != NULL, "Funkcja create_array_int() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                test_error(ptr->size == 0, "Funkcja create_array_int() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                test_error(ptr->capacity == 35, "Funkcja create_array_int() powinna ustawić wartość pola capacity w strukturze na 35, a ustawiła na %d", ptr->capacity);

                free_array_int(ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    printf("#####START#####");
                    struct array_int_t *ptr = create_array_int(35);
                    printf("#####END#####");
        
                    test_error(ptr == NULL, "Funkcja create_array_int() powinna zwrócić NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    
            
                    printf("#####START#####");
                    struct array_int_t *ptr = create_array_int(35);
                    printf("#####END#####");
        
                    test_error(ptr == NULL, "Funkcja create_array_int() powinna zwrócić NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 71 bajtów)
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 71 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(71);
    
    //
    // -----------
    //
    
            
                    printf("#####START#####");
                    struct array_int_t *ptr = create_array_int(35);
                    printf("#####END#####");
        
                    test_error(ptr == NULL, "Funkcja create_array_int() powinna zwrócić NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji create_array_double
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji create_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_double_t *ptr = create_array_double(-12);
                printf("#####END#####");


                if (!1)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_double() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(ptr->data != NULL, "Funkcja create_array_double() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_double() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == -12, "Funkcja create_array_double() powinna ustawić wartość pola capacity w strukturze na -12, a ustawiła na %d", ptr->capacity);

                    free_array_double(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_double() powinna zwrócić NULL");
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
//  Test 10: Sprawdzanie poprawności działania funkcji create_array_double
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji create_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_double_t *ptr = create_array_double(0);
                printf("#####END#####");


                if (!1)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_double() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(ptr->data != NULL, "Funkcja create_array_double() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_double() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 0, "Funkcja create_array_double() powinna ustawić wartość pola capacity w strukturze na 0, a ustawiła na %d", ptr->capacity);

                    free_array_double(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_double() powinna zwrócić NULL");
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
//  Test 11: Sprawdzanie poprawności działania funkcji create_array_double
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji create_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_double_t *ptr = create_array_double(69);
                printf("#####END#####");


                if (!0)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_double() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(ptr->data != NULL, "Funkcja create_array_double() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_double() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 69, "Funkcja create_array_double() powinna ustawić wartość pola capacity w strukturze na 69, a ustawiła na %d", ptr->capacity);

                    free_array_double(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_double() powinna zwrócić NULL");
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
//  Test 12: Sprawdzanie poprawności działania funkcji create_array_double
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji create_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_double_t *ptr = create_array_double(4198);
                printf("#####END#####");


                if (!0)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_double() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(ptr->data != NULL, "Funkcja create_array_double() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_double() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 4198, "Funkcja create_array_double() powinna ustawić wartość pola capacity w strukturze na 4198, a ustawiła na %d", ptr->capacity);

                    free_array_double(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_double() powinna zwrócić NULL");
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
//  Test 13: Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 136 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 136 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(136);
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_double_t *ptr = create_array_double(15);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja create_array_double() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->data != NULL, "Funkcja create_array_double() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                test_error(ptr->size == 0, "Funkcja create_array_double() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                test_error(ptr->capacity == 15, "Funkcja create_array_double() powinna ustawić wartość pola capacity w strukturze na 15, a ustawiła na %d", ptr->capacity);

                free_array_double(ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    printf("#####START#####");
                    struct array_double_t *ptr = create_array_double(15);
                    printf("#####END#####");

                    test_error(ptr == NULL, "Funkcja create_array_double() powinna zwrócić NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                    printf("#####START#####");
                    struct array_double_t *ptr = create_array_double(15);
                    printf("#####END#####");

                    test_error(ptr == NULL, "Funkcja create_array_double() powinna zwrócić NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 83 bajtów)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 83 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(83);
    
    //
    // -----------
    //
    

                    printf("#####START#####");
                    struct array_double_t *ptr = create_array_double(15);
                    printf("#####END#####");

                    test_error(ptr == NULL, "Funkcja create_array_double() powinna zwrócić NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji create_array_intmax_t
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji create_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_intmax_t_t *ptr = create_array_intmax_t(-26);
                printf("#####END#####");


                if (!1)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_intmax_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(ptr->data != NULL, "Funkcja create_array_intmax_t() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_intmax_t() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == -26, "Funkcja create_array_intmax_t() powinna ustawić wartość pola capacity w strukturze na -26, a ustawiła na %d", ptr->capacity);

                    free_array_intmax_t(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_intmax_t() powinna zwrócić NULL");
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
//  Test 18: Sprawdzanie poprawności działania funkcji create_array_intmax_t
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji create_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_intmax_t_t *ptr = create_array_intmax_t(0);
                printf("#####END#####");


                if (!1)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_intmax_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(ptr->data != NULL, "Funkcja create_array_intmax_t() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_intmax_t() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 0, "Funkcja create_array_intmax_t() powinna ustawić wartość pola capacity w strukturze na 0, a ustawiła na %d", ptr->capacity);

                    free_array_intmax_t(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_intmax_t() powinna zwrócić NULL");
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
//  Test 19: Sprawdzanie poprawności działania funkcji create_array_intmax_t
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji create_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_intmax_t_t *ptr = create_array_intmax_t(30);
                printf("#####END#####");


                if (!0)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_intmax_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(ptr->data != NULL, "Funkcja create_array_intmax_t() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_intmax_t() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 30, "Funkcja create_array_intmax_t() powinna ustawić wartość pola capacity w strukturze na 30, a ustawiła na %d", ptr->capacity);

                    free_array_intmax_t(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_intmax_t() powinna zwrócić NULL");
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
//  Test 20: Sprawdzanie poprawności działania funkcji create_array_intmax_t
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji create_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_intmax_t_t *ptr = create_array_intmax_t(2273);
                printf("#####END#####");


                if (!0)
                {           
                    test_error(ptr != NULL, "Funkcja create_array_intmax_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(ptr->data != NULL, "Funkcja create_array_intmax_t() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(ptr->size == 0, "Funkcja create_array_intmax_t() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                    test_error(ptr->capacity == 2273, "Funkcja create_array_intmax_t() powinna ustawić wartość pola capacity w strukturze na 2273, a ustawiła na %d", ptr->capacity);

                    free_array_intmax_t(ptr);

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                }
                else
                {
                    test_error(ptr == NULL, "Funkcja create_array_intmax_t() powinna zwrócić NULL");
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
//  Test 21: Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 256 bajtów)
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 256 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(256);
    
    //
    // -----------
    //
    


                printf("#####START#####");
                struct array_intmax_t_t *ptr = create_array_intmax_t(30);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja create_array_intmax_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(ptr->data != NULL, "Funkcja create_array_intmax_t() powinna przypisać do pola data adres zaalokowanej pamięci, a przypisała NULL");
                test_error(ptr->size == 0, "Funkcja create_array_intmax_t() powinna ustawić wartość pola size w strukturze na 0, a ustawiła na %d", ptr->size);
                test_error(ptr->capacity == 30, "Funkcja create_array_intmax_t() powinna ustawić wartość pola capacity w strukturze na 30, a ustawiła na %d", ptr->capacity);

                free_array_intmax_t(ptr);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    printf("#####START#####");
                    struct array_intmax_t_t *ptr = create_array_intmax_t(30);
                    printf("#####END#####");

                    test_error(ptr == NULL, "Funkcja create_array_intmax_t() powinna zwrócić NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 16 bajtów)
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                    printf("#####START#####");
                    struct array_intmax_t_t *ptr = create_array_intmax_t(30);
                    printf("#####END#####");

                    test_error(ptr == NULL, "Funkcja create_array_intmax_t() powinna zwrócić NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 33 bajtów)
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 33 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(33);
    
    //
    // -----------
    //
    

                    printf("#####START#####");
                    struct array_intmax_t_t *ptr = create_array_intmax_t(30);
                    printf("#####END#####");

                    test_error(ptr == NULL, "Funkcja create_array_intmax_t() powinna zwrócić NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-8, -1, -1, -1, -4, -2, -10, 0, -4, -7, -5, -4, -3};
                const int expected_array[] = {-10, -8, -7, -5, -4, -4, -4, -3, -2, -1, -1, -1, 0};

                struct array_int_t ptr = { .size = 13, .capacity = 13, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 13; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-10, -8, -7, -5, -4, -4, -4, -3, -2, -1, -1, -1, 0]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 13; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 26: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {6, 9, 8, 10, 1, 3, 8, 8, 1, 1, 10, 8, 9, 7, 6, 10, 0};
                const int expected_array[] = {0, 1, 1, 1, 3, 6, 6, 7, 8, 8, 8, 8, 9, 9, 10, 10, 10};

                struct array_int_t ptr = { .size = 17, .capacity = 17, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 17; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [0, 1, 1, 1, 3, 6, 6, 7, 8, 8, 8, 8, 9, 9, 10, 10, 10]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 17; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 27: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {1, -7, -5, 9, 9, -3, 1, 5, -1, -9, 3, -9, -1};
                const int expected_array[] = {-9, -9, -7, -5, -3, -1, -1, 1, 1, 3, 5, 9, 9};

                struct array_int_t ptr = { .size = 13, .capacity = 13, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 13; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-9, -9, -7, -5, -3, -1, -1, 1, 1, 3, 5, 9, 9]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 13; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 28: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {7, -8, 7, 8, 7, -8, 2, -10, -5, 2, -2, 5, -10, -4, -20};
                const int expected_array[] = {-10, -10, -8, -8, -5, -4, -2, 2, 2, 5, 7, 7, 7, 8};

                struct array_int_t ptr = { .size = 14, .capacity = 15, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 14; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-10, -10, -8, -8, -5, -4, -2, 2, 2, 5, 7, 7, 7, 8]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 14; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 29: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-6};
                const int expected_array[] = {-6};

                struct array_int_t ptr = { .size = 1, .capacity = 1, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-6]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 1; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 30: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {1, -9};
                const int expected_array[] = {-9, 1};

                struct array_int_t ptr = { .size = 2, .capacity = 2, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 2; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-9, 1]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 2; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 31: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-4, 29, -88, -26, 84, -10, -73, 94, 68, -90, 6, -73, -22, -65, 78, -24, -98, -97, -50, 35, 30, -49, -66, 96, -29, 13, -45, 20, 72, 51, 67, -68, -19, 8, -54, 84, -45, -98, -28, 26, -17, 39, -53, -12, 95, -50, -89, -56, -7, -96, -67, 90, -91, -64, 43, -65, -43, 13, 31, 4, -18, 100, 42, -51, -97, -100, -17, -67, -35, -86, -100, 18, 30, 19, -58, -7, -87, -57, 62, -3, 60, -56, -29, 55, 21, -7, 52, -89, -16, 28, 100, -57, 49, -70, 35, -12, -20, -57, 30, -4, 17, 40, -90, 92, -42, 93, 67, -7, -35, 74, 1, 52, 91, -49, -78, 50, -41, 92, -9, -79, -48, 27, -98, -96, -74, 38, -18, -97, 71, -96, -44, 82, -52, 55, 91, 20, -72, -70, 56, 18, -74, -97, -26, 1, 17, -41, 13, -86, -39, 76};
                const int expected_array[] = {-100, -100, -98, -98, -98, -97, -97, -97, -97, -96, -96, -96, -91, -90, -90, -89, -89, -88, -87, -86, -86, -79, -78, -74, -74, -73, -73, -72, -70, -70, -68, -67, -67, -66, -65, -65, -64, -58, -57, -57, -57, -56, -56, -54, -53, -52, -51, -50, -50, -49, -49, -48, -45, -45, -44, -43, -42, -41, -41, -39, -35, -35, -29, -29, -28, -26, -26, -24, -22, -20, -19, -18, -18, -17, -17, -16, -12, -12, -10, -9, -7, -7, -7, -7, -4, -4, -3, 1, 1, 4, 6, 8, 13, 13, 13, 17, 17, 18, 18, 19, 20, 20, 21, 26, 27, 28, 29, 30, 30, 30, 31, 35, 35, 38, 39, 40, 42, 43, 49, 50, 51, 52, 52, 55, 55, 56, 60, 62, 67, 67, 68, 71, 72, 74, 76, 78, 82, 84, 84, 90, 91, 91, 92, 92, 93, 94, 95, 96, 100, 100};

                struct array_int_t ptr = { .size = 150, .capacity = 150, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 150; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-100, -100, -98, -98, -98, -97, -97, -97, -97, -96, -96, -96, -91, -90, -90, -89, -89, -88, -87, -86, -86, -79, -78, -74, -74, -73, -73, -72, -70, -70, -68, -67, -67, -66, -65, -65, -64, -58, -57, -57, -57, -56, -56, -54, -53, -52, -51, -50, -50, -49, -49, -48, -45, -45, -44, -43, -42, -41, -41, -39, -35, -35, -29, -29, -28, -26, -26, -24, -22, -20, -19, -18, -18, -17, -17, -16, -12, -12, -10, -9, -7, -7, -7, -7, -4, -4, -3, 1, 1, 4, 6, 8, 13, 13, 13, 17, 17, 18, 18, 19, 20, 20, 21, 26, 27, 28, 29, 30, 30, 30, 31, 35, 35, 38, 39, 40, 42, 43, 49, 50, 51, 52, 52, 55, 55, 56, 60, 62, 67, 67, 68, 71, 72, 74, 76, 78, 82, 84, 84, 90, 91, 91, 92, 92, 93, 94, 95, 96, 100, 100]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 150; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 32: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-63, -55, 93, 17, 56, 9, 27, 2, 71, 5, 0, -51, -78, -19, -12, -23, -21, 55, -71, -84, 70, 31, 6, 88, -33, 56, -86, -98, 82, 18, 70, 11, -48, -79, 17, -17, 63, 23, 47, 33, 52, -30, -31, -50, -52, -41, -97, -44, -51, 61, 59, 17, 42, -83, -83, 54, -98, 15, 1, 41, 49, -73, -73, 66, 13, 5, -11, 66, -81, 90, -31, -18, -10, 81, 28, 9, 80, -58, -98, -40, -42, -35, 26, -19, 93, -83, 95, -3, 90, 4, -94, -85, -84, 41, 28, 52, -76, 78, 62, 99, -4, -32, 72, -76, 68, 47, -41, 59, 15, 31, -64, 3, -31, 73, 35, -99, 63, 36, 37, -20, -49, 65, -20, -90, 88, 8, -65, 38, -90, -33, -11, -31, -51, -7, -90, -6, 53, -55, 23, -49, 58, 27, 92, 43, -20, -17, -74, 11, 68, -66, 51, 22, 21, -96, 47, 43, -58, 64, 9, 53, 70};
                const int expected_array[] = {-99, -98, -98, -98, -97, -96, -94, -90, -90, -90, -86, -85, -84, -84, -83, -83, -83, -81, -79, -78, -76, -76, -74, -73, -73, -71, -66, -65, -64, -63, -58, -58, -55, -55, -52, -51, -51, -51, -50, -49, -49, -48, -44, -42, -41, -41, -40, -35, -33, -33, -32, -31, -31, -31, -31, -30, -23, -21, -20, -20, -20, -19, -19, -18, -17, -17, -12, -11, -11, -10, -7, -6, -4, -3, 0, 1, 2, 3, 4, 5, 5, 6, 8, 9, 9, 9, 11, 11, 13, 15, 15, 17, 17, 17, 18, 21, 22, 23, 23, 26, 27, 27, 28, 28, 31, 31, 33, 35, 36, 37, 38, 41, 41, 42, 43, 43, 47, 47, 47, 49, 51, 52, 52, 53, 53, 54, 55, 56, 56, 58, 59, 59, 61, 62, 63, 63, 64, 65, 66, 66, 68, 68, 70, 70, 70, 71, 72, 73, 78, 80, 81, 82, 88, 88, 90, 90, 92, 93, 93, 95, 99};

                struct array_int_t ptr = { .size = 161, .capacity = 161, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 161; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-99, -98, -98, -98, -97, -96, -94, -90, -90, -90, -86, -85, -84, -84, -83, -83, -83, -81, -79, -78, -76, -76, -74, -73, -73, -71, -66, -65, -64, -63, -58, -58, -55, -55, -52, -51, -51, -51, -50, -49, -49, -48, -44, -42, -41, -41, -40, -35, -33, -33, -32, -31, -31, -31, -31, -30, -23, -21, -20, -20, -20, -19, -19, -18, -17, -17, -12, -11, -11, -10, -7, -6, -4, -3, 0, 1, 2, 3, 4, 5, 5, 6, 8, 9, 9, 9, 11, 11, 13, 15, 15, 17, 17, 17, 18, 21, 22, 23, 23, 26, 27, 27, 28, 28, 31, 31, 33, 35, 36, 37, 38, 41, 41, 42, 43, 43, 47, 47, 47, 49, 51, 52, 52, 53, 53, 54, 55, 56, 56, 58, 59, 59, 61, 62, 63, 63, 64, 65, 66, 66, 68, 68, 70, 70, 70, 71, 72, 73, 78, 80, 81, 82, 88, 88, 90, 90, 92, 93, 93, 95, 99]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 161; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 33: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {1, 2, 10, -2, -5, 7, -1, 9, -7, -9, 2, 8, 3, 1, 9, -10, 2, -6};
                const int expected_array[] = {-10, -9, -7, -6, -5, -2, -1, 1, 1, 2, 2, 2, 3, 7, 8, 9, 9, 10};

                struct array_int_t ptr = { .size = -18, .capacity = 18, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < -18; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-10, -9, -7, -6, -5, -2, -1, 1, 1, 2, 2, 2, 3, 7, 8, 9, 9, 10]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < -18; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 34: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-6, 10, 1, -8, -4, 7, 8, 5, 10, -7, 2, 8, -5, 6, 0, -6};
                const int expected_array[] = {-8, -7, -6, -6, -5, -4, 0, 1, 2, 5, 6, 7, 8, 8, 10, 10};

                struct array_int_t ptr = { .size = 0, .capacity = 16, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 0; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-8, -7, -6, -6, -5, -4, 0, 1, 2, 5, 6, 7, 8, 8, 10, 10]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 0; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 35: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {2, 9, -8, 3, 1, 7, -5, 2, -5, 6, -9, 3, 0, -6, 9};
                const int expected_array[] = {-9, -8, -6, -5, -5, 0, 1, 2, 2, 3, 3, 6, 7, 9, 9};

                struct array_int_t ptr = { .size = 16, .capacity = 15, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 16; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-9, -8, -6, -5, -5, 0, 1, 2, 2, 3, 3, 6, 7, 9, 9]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 16; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 36: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {4, -10, 8, -4, -5, -5, -3, -1, 6, 6, 5, -2, -9, -4, 1, -5, 2};
                const int expected_array[] = {-10, -9, -5, -5, -5, -4, -4, -3, -2, -1, 1, 2, 4, 5, 6, 6, 8};

                struct array_int_t ptr = { .size = 0, .capacity = 0, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 0; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-10, -9, -5, -5, -5, -4, -4, -3, -2, -1, 1, 2, 4, 5, 6, 6, 8]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 0; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 37: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {1, -6, 5, 1, 2, 8, 6, -5, -4, -7, 7, 3, -6, -6, 2, -1, -7, 10, 4, 7};
                const int expected_array[] = {-7, -7, -6, -6, -6, -5, -4, -1, 1, 1, 2, 2, 3, 4, 5, 6, 7, 7, 8, 10};

                struct array_int_t ptr = { .size = 20, .capacity = -20, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 20; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-7, -7, -6, -6, -6, -5, -4, -1, 1, 1, 2, 2, 3, 4, 5, 6, 7, 7, 8, 10]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 20; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 38: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {3, 0, -6, -8, 2, -10, -3, 3, 6, 7, 7, -6, 5, -5, 2};
                const int expected_array[] = {-10, -8, -6, -6, -5, -3, 0, 2, 2, 3, 3, 5, 6, 7, 7};

                struct array_int_t ptr = { .size = 15, .capacity = 0, .data = input_array };


                printf("#####START#####");
                int res = sort_array_int(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 15; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-10, -8, -6, -6, -5, -3, 0, 2, 2, 3, 3, 5, 6, 7, 7]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_int: ");

                        for (int i = 0; i < 15; ++i)
                            printf("%d ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_int() niepoprawnie posortowała tablicę");
                    }
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
//  Test 39: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_int_t ptr = { .size = 1, .capacity = 9, .data = NULL };


            printf("#####START#####");
            int res = sort_array_int(&ptr);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja sort_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji sort_array_int
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji sort_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    



            printf("#####START#####");
            int res = sort_array_int(NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja sort_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {-8.732942, 0.082192, -1.658570, -1.539956, 8.878179, 4.339710, 8.491316, 4.143380, -3.360379, -4.807306, 9.398756, -8.513335, 7.821473, 7.409288, -5.740585, 6.397954, -0.592722, -7.839642, 1.200523};
                const double expected_array[] = {-8.732942, -8.513335, -7.839642, -5.740585, -4.807306, -3.360379, -1.658570, -1.539956, -0.592722, 0.082192, 1.200523, 4.143380, 4.339710, 6.397954, 7.409288, 7.821473, 8.491316, 8.878179, 9.398756};

                struct array_double_t ptr = { .size = 19, .capacity = 19, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 19; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-8.732942, -8.513335, -7.839642, -5.740585, -4.807306, -3.360379, -1.658570, -1.539956, -0.592722, 0.082192, 1.200523, 4.143380, 4.339710, 6.397954, 7.409288, 7.821473, 8.491316, 8.878179, 9.398756]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 19; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 42: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {-2.384332, -8.199819, 3.555809, -7.473378, -7.328064, -2.111363, 7.017709, 9.194132, 3.620410, 7.557857, -6.904985, 7.567299, -3.042054, -4.782137, -6.607829, -6.791860, 1.576243, -2.530561, -1.920882, 6.264564, -12.000000};
                const double expected_array[] = {-8.199819, -7.473378, -7.328064, -6.904985, -6.791860, -6.607829, -4.782137, -3.042054, -2.530561, -2.384332, -2.111363, -1.920882, 1.576243, 3.555809, 3.620410, 6.264564, 7.017709, 7.557857, 7.567299, 9.194132};

                struct array_double_t ptr = { .size = 20, .capacity = 21, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 20; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-8.199819, -7.473378, -7.328064, -6.904985, -6.791860, -6.607829, -4.782137, -3.042054, -2.530561, -2.384332, -2.111363, -1.920882, 1.576243, 3.555809, 3.620410, 6.264564, 7.017709, 7.557857, 7.567299, 9.194132]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 20; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 43: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {-0.993623};
                const double expected_array[] = {-0.993623};

                struct array_double_t ptr = { .size = 1, .capacity = 1, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 1; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-0.993623]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 1; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 44: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {-7.027693, 8.800145};
                const double expected_array[] = {-7.027693, 8.800145};

                struct array_double_t ptr = { .size = 2, .capacity = 2, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 2; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-7.027693, 8.800145]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 2; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 45: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {28.161246, -63.534960, -97.077538, -64.974405, -13.950176, 44.325666, -95.755286, 0.637250, -16.864798, -47.878432, -11.978364, -60.948186, -86.838540, -17.491478, 8.945225, -84.151343, -66.834649, -87.587613, -54.412533, -15.233368, -71.238630, -33.273224, 79.729582, -92.550817, -81.691495, -24.074970, 24.643974, -28.403306, 32.334107, 33.613419, 27.681343, 76.064172, 56.720537, 84.667046, -83.858914, -43.370643, -48.581937, -92.515256, 87.989704, -63.756185, -97.204265, -3.084980, 85.349227, -62.902290, -82.388175, 38.603847, 8.802394, -10.852364, -78.929984, 30.548647, -80.042728, 3.128802, -32.589757, 6.630811, -48.218540, 65.220044, 54.183968, -16.594274, -0.191990, 29.105513, -11.604211, 87.276236, 58.840973, -36.955691, 65.781657, 22.484170, -79.250072, -29.065451, -37.026690, -16.927246, -32.088801, 88.145785, 75.668774, -96.965449, -10.994797, -6.199157, 8.737559, -26.437759, -0.107088, -95.647472, -18.083796, 92.502269, -73.072481, -87.591332, 47.078101, 85.088154, -99.601783, 6.192223, -17.723713, -2.596748, -91.721595, 69.345769, 69.676208, 40.098377, 82.048153, 7.199812, -50.994055, 43.936214, -29.089946, -60.124087, 65.818893, -92.198370, 83.713462, -49.982203, 49.219622, -47.429453, -90.450014, 17.160792, -41.250807, -55.415615, -36.905140, -38.587425, 80.869912, 48.183843, 10.221940, -13.521915, -74.137350, -33.262652, 30.296339, -79.138529, -9.803428, -96.504042, -24.335546, -98.490621, -25.362185, 96.002239, -1.729007, 8.560698, -24.213724, -96.374743, 34.950759, -23.087484, -19.422719, 72.370268, 74.469128, -97.226138, 75.286045, -46.009411, 42.800730, -36.858008, 53.940643, -24.523536, -38.422448, -11.850008, -25.744871, -67.750262, 62.386124, -26.542725, -18.703250, -21.281974};
                const double expected_array[] = {-99.601783, -98.490621, -97.226138, -97.204265, -97.077538, -96.965449, -96.504042, -96.374743, -95.755286, -95.647472, -92.550817, -92.515256, -92.198370, -91.721595, -90.450014, -87.591332, -87.587613, -86.838540, -84.151343, -83.858914, -82.388175, -81.691495, -80.042728, -79.250072, -79.138529, -78.929984, -74.137350, -73.072481, -71.238630, -67.750262, -66.834649, -64.974405, -63.756185, -63.534960, -62.902290, -60.948186, -60.124087, -55.415615, -54.412533, -50.994055, -49.982203, -48.581937, -48.218540, -47.878432, -47.429453, -46.009411, -43.370643, -41.250807, -38.587425, -38.422448, -37.026690, -36.955691, -36.905140, -36.858008, -33.273224, -33.262652, -32.589757, -32.088801, -29.089946, -29.065451, -28.403306, -26.542725, -26.437759, -25.744871, -25.362185, -24.523536, -24.335546, -24.213724, -24.074970, -23.087484, -21.281974, -19.422719, -18.703250, -18.083796, -17.723713, -17.491478, -16.927246, -16.864798, -16.594274, -15.233368, -13.950176, -13.521915, -11.978364, -11.850008, -11.604211, -10.994797, -10.852364, -9.803428, -6.199157, -3.084980, -2.596748, -1.729007, -0.191990, -0.107088, 0.637250, 3.128802, 6.192223, 6.630811, 7.199812, 8.560698, 8.737559, 8.802394, 8.945225, 10.221940, 17.160792, 22.484170, 24.643974, 27.681343, 28.161246, 29.105513, 30.296339, 30.548647, 32.334107, 33.613419, 34.950759, 38.603847, 40.098377, 42.800730, 43.936214, 44.325666, 47.078101, 48.183843, 49.219622, 53.940643, 54.183968, 56.720537, 58.840973, 62.386124, 65.220044, 65.781657, 65.818893, 69.345769, 69.676208, 72.370268, 74.469128, 75.286045, 75.668774, 76.064172, 79.729582, 80.869912, 82.048153, 83.713462, 84.667046, 85.088154, 85.349227, 87.276236, 87.989704, 88.145785, 92.502269, 96.002239};

                struct array_double_t ptr = { .size = 150, .capacity = 150, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 150; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-99.601783, -98.490621, -97.226138, -97.204265, -97.077538, -96.965449, -96.504042, -96.374743, -95.755286, -95.647472, -92.550817, -92.515256, -92.198370, -91.721595, -90.450014, -87.591332, -87.587613, -86.838540, -84.151343, -83.858914, -82.388175, -81.691495, -80.042728, -79.250072, -79.138529, -78.929984, -74.137350, -73.072481, -71.238630, -67.750262, -66.834649, -64.974405, -63.756185, -63.534960, -62.902290, -60.948186, -60.124087, -55.415615, -54.412533, -50.994055, -49.982203, -48.581937, -48.218540, -47.878432, -47.429453, -46.009411, -43.370643, -41.250807, -38.587425, -38.422448, -37.026690, -36.955691, -36.905140, -36.858008, -33.273224, -33.262652, -32.589757, -32.088801, -29.089946, -29.065451, -28.403306, -26.542725, -26.437759, -25.744871, -25.362185, -24.523536, -24.335546, -24.213724, -24.074970, -23.087484, -21.281974, -19.422719, -18.703250, -18.083796, -17.723713, -17.491478, -16.927246, -16.864798, -16.594274, -15.233368, -13.950176, -13.521915, -11.978364, -11.850008, -11.604211, -10.994797, -10.852364, -9.803428, -6.199157, -3.084980, -2.596748, -1.729007, -0.191990, -0.107088, 0.637250, 3.128802, 6.192223, 6.630811, 7.199812, 8.560698, 8.737559, 8.802394, 8.945225, 10.221940, 17.160792, 22.484170, 24.643974, 27.681343, 28.161246, 29.105513, 30.296339, 30.548647, 32.334107, 33.613419, 34.950759, 38.603847, 40.098377, 42.800730, 43.936214, 44.325666, 47.078101, 48.183843, 49.219622, 53.940643, 54.183968, 56.720537, 58.840973, 62.386124, 65.220044, 65.781657, 65.818893, 69.345769, 69.676208, 72.370268, 74.469128, 75.286045, 75.668774, 76.064172, 79.729582, 80.869912, 82.048153, 83.713462, 84.667046, 85.088154, 85.349227, 87.276236, 87.989704, 88.145785, 92.502269, 96.002239]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 150; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 46: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {6.058645, 51.621711, 62.213613, 96.036863, -85.185087, 1.165847, 30.143008, -28.570106, -88.481365, 22.358362, 17.527334, 64.937705, 35.616665, -7.295970, 85.946901, 51.598876, 59.420436, 36.099543, 57.274030, -43.449725, 82.022580, -23.369836, 96.923729, 22.744512, -16.685687, -78.393099, 87.543231, -22.539272, 59.698646, -59.509557, 62.625847, 33.760920, -80.492400, 19.238833, 28.701915, -4.867224, 74.375009, -1.025410, 31.471714, 79.093439, 26.710824, -7.891939, 20.998102, -1.369993, 66.806049, 30.737544, -18.522483, -52.066799, -60.513142, 51.636398, -74.225460, -39.264916, 46.545662, -63.470580, 48.829172, 35.119533, -78.576268, 73.557366, 81.895211, 96.162197, 46.269918, -81.524515, 51.632079, -51.182461, 83.551184, 32.376992, 84.264956, -33.405149, -79.964961, 94.392728, -35.427939, -16.008501, 52.329521, 16.060586, 81.788370, -48.811164, 56.693850, -33.739343, -85.088185, -50.202533, -45.863954, -78.301629, 91.429310, 39.132310, 91.242460, 14.101272, -69.130073, 15.482681, 77.072407, 0.178746, -20.372476, -70.557797, 99.118227, 66.091853, 51.419059, 94.909387, 8.222459, 61.721879, 62.063310, 76.369878, -90.541497, -92.014536, 10.372977, 14.420588, -60.022605, -88.798067, 48.223759, -11.615728, -95.307072, -16.424073, 98.239473, 65.769251, 87.243270, -75.860306, -62.915562, -61.749753, -73.311902, 63.768364, 65.386600, -85.085746, 0.820456, 22.326239, 17.235846, -40.831606, -51.254708, 52.373922, -24.671523, -97.033587, 48.952097, 25.228404, 54.674626, -88.119471, -50.677501, -77.381635, 77.875628, -35.690794, 42.450997, 28.729249, 83.595291, 18.915232, -34.270265, -15.761460, 17.671506, -59.431602, 27.852644, 1.423117, -7.745106, -64.843186, -98.473434, -40.066583, 46.618128, -0.211999, 36.520537, 84.289041, 32.523061, -59.737115, 64.752420, -79.324835, 92.899209, -79.139759, 39.845345, -52.424964, 12.458074, -28.318323, 9.434445, -5.139184, 23.402497, 67.923669, 10.126991, 78.881095, 3.081887, -5.848755, -78.750130, -75.157328, -19.167399, -12.881811, 27.162793, 68.439263, -86.946889, -3.208659, 84.167229};
                const double expected_array[] = {-98.473434, -97.033587, -95.307072, -92.014536, -90.541497, -88.798067, -88.481365, -88.119471, -86.946889, -85.185087, -85.088185, -85.085746, -81.524515, -80.492400, -79.964961, -79.324835, -79.139759, -78.750130, -78.576268, -78.393099, -78.301629, -77.381635, -75.860306, -75.157328, -74.225460, -73.311902, -70.557797, -69.130073, -64.843186, -63.470580, -62.915562, -61.749753, -60.513142, -60.022605, -59.737115, -59.509557, -59.431602, -52.424964, -52.066799, -51.254708, -51.182461, -50.677501, -50.202533, -48.811164, -45.863954, -43.449725, -40.831606, -40.066583, -39.264916, -35.690794, -35.427939, -34.270265, -33.739343, -33.405149, -28.570106, -28.318323, -24.671523, -23.369836, -22.539272, -20.372476, -19.167399, -18.522483, -16.685687, -16.424073, -16.008501, -15.761460, -12.881811, -11.615728, -7.891939, -7.745106, -7.295970, -5.848755, -5.139184, -4.867224, -3.208659, -1.369993, -1.025410, -0.211999, 0.178746, 0.820456, 1.165847, 1.423117, 3.081887, 6.058645, 8.222459, 9.434445, 10.126991, 10.372977, 12.458074, 14.101272, 14.420588, 15.482681, 16.060586, 17.235846, 17.527334, 17.671506, 18.915232, 19.238833, 20.998102, 22.326239, 22.358362, 22.744512, 23.402497, 25.228404, 26.710824, 27.162793, 27.852644, 28.701915, 28.729249, 30.143008, 30.737544, 31.471714, 32.376992, 32.523061, 33.760920, 35.119533, 35.616665, 36.099543, 36.520537, 39.132310, 39.845345, 42.450997, 46.269918, 46.545662, 46.618128, 48.223759, 48.829172, 48.952097, 51.419059, 51.598876, 51.621711, 51.632079, 51.636398, 52.329521, 52.373922, 54.674626, 56.693850, 57.274030, 59.420436, 59.698646, 61.721879, 62.063310, 62.213613, 62.625847, 63.768364, 64.752420, 64.937705, 65.386600, 65.769251, 66.091853, 66.806049, 67.923669, 68.439263, 73.557366, 74.375009, 76.369878, 77.072407, 77.875628, 78.881095, 79.093439, 81.788370, 81.895211, 82.022580, 83.551184, 83.595291, 84.167229, 84.264956, 84.289041, 85.946901, 87.243270, 87.543231, 91.242460, 91.429310, 92.899209, 94.392728, 94.909387, 96.036863, 96.162197, 96.923729, 98.239473, 99.118227};

                struct array_double_t ptr = { .size = 181, .capacity = 181, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 181; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-98.473434, -97.033587, -95.307072, -92.014536, -90.541497, -88.798067, -88.481365, -88.119471, -86.946889, -85.185087, -85.088185, -85.085746, -81.524515, -80.492400, -79.964961, -79.324835, -79.139759, -78.750130, -78.576268, -78.393099, -78.301629, -77.381635, -75.860306, -75.157328, -74.225460, -73.311902, -70.557797, -69.130073, -64.843186, -63.470580, -62.915562, -61.749753, -60.513142, -60.022605, -59.737115, -59.509557, -59.431602, -52.424964, -52.066799, -51.254708, -51.182461, -50.677501, -50.202533, -48.811164, -45.863954, -43.449725, -40.831606, -40.066583, -39.264916, -35.690794, -35.427939, -34.270265, -33.739343, -33.405149, -28.570106, -28.318323, -24.671523, -23.369836, -22.539272, -20.372476, -19.167399, -18.522483, -16.685687, -16.424073, -16.008501, -15.761460, -12.881811, -11.615728, -7.891939, -7.745106, -7.295970, -5.848755, -5.139184, -4.867224, -3.208659, -1.369993, -1.025410, -0.211999, 0.178746, 0.820456, 1.165847, 1.423117, 3.081887, 6.058645, 8.222459, 9.434445, 10.126991, 10.372977, 12.458074, 14.101272, 14.420588, 15.482681, 16.060586, 17.235846, 17.527334, 17.671506, 18.915232, 19.238833, 20.998102, 22.326239, 22.358362, 22.744512, 23.402497, 25.228404, 26.710824, 27.162793, 27.852644, 28.701915, 28.729249, 30.143008, 30.737544, 31.471714, 32.376992, 32.523061, 33.760920, 35.119533, 35.616665, 36.099543, 36.520537, 39.132310, 39.845345, 42.450997, 46.269918, 46.545662, 46.618128, 48.223759, 48.829172, 48.952097, 51.419059, 51.598876, 51.621711, 51.632079, 51.636398, 52.329521, 52.373922, 54.674626, 56.693850, 57.274030, 59.420436, 59.698646, 61.721879, 62.063310, 62.213613, 62.625847, 63.768364, 64.752420, 64.937705, 65.386600, 65.769251, 66.091853, 66.806049, 67.923669, 68.439263, 73.557366, 74.375009, 76.369878, 77.072407, 77.875628, 78.881095, 79.093439, 81.788370, 81.895211, 82.022580, 83.551184, 83.595291, 84.167229, 84.264956, 84.289041, 85.946901, 87.243270, 87.543231, 91.242460, 91.429310, 92.899209, 94.392728, 94.909387, 96.036863, 96.162197, 96.923729, 98.239473, 99.118227]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 181; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 47: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {8.854213, -6.840677, 1.757123, -0.924728, 2.538078, -2.303047, 1.434647, 1.812600, -9.299434, -3.689708, 4.817430, 6.588797, -9.422139, 7.933186, -4.289498};
                const double expected_array[] = {-9.422139, -9.299434, -6.840677, -4.289498, -3.689708, -2.303047, -0.924728, 1.434647, 1.757123, 1.812600, 2.538078, 4.817430, 6.588797, 7.933186, 8.854213};

                struct array_double_t ptr = { .size = -15, .capacity = 15, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < -15; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-9.422139, -9.299434, -6.840677, -4.289498, -3.689708, -2.303047, -0.924728, 1.434647, 1.757123, 1.812600, 2.538078, 4.817430, 6.588797, 7.933186, 8.854213]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < -15; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 48: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {-3.511783, 9.834233, -2.342828, 0.893632, -7.265133, -1.857150, -7.353884, -1.133940, -3.628068, -5.237340, -3.361674, -8.259155, -1.123606, 0.230256, -8.606322};
                const double expected_array[] = {-8.606322, -8.259155, -7.353884, -7.265133, -5.237340, -3.628068, -3.511783, -3.361674, -2.342828, -1.857150, -1.133940, -1.123606, 0.230256, 0.893632, 9.834233};

                struct array_double_t ptr = { .size = 0, .capacity = 15, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 0; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-8.606322, -8.259155, -7.353884, -7.265133, -5.237340, -3.628068, -3.511783, -3.361674, -2.342828, -1.857150, -1.133940, -1.123606, 0.230256, 0.893632, 9.834233]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 0; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 49: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {-0.471154, 2.986618, 4.949559, 9.314996, -4.804503, -9.890756, -0.312136, 0.623257, 9.640654, -3.887626, -5.936324, 4.738533, 2.776277, -8.993506, -2.360186, 9.160133, 3.994075, -4.881024, 7.775721};
                const double expected_array[] = {-9.890756, -8.993506, -5.936324, -4.881024, -4.804503, -3.887626, -2.360186, -0.471154, -0.312136, 0.623257, 2.776277, 2.986618, 3.994075, 4.738533, 4.949559, 7.775721, 9.160133, 9.314996, 9.640654};

                struct array_double_t ptr = { .size = 20, .capacity = 19, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 20; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-9.890756, -8.993506, -5.936324, -4.881024, -4.804503, -3.887626, -2.360186, -0.471154, -0.312136, 0.623257, 2.776277, 2.986618, 3.994075, 4.738533, 4.949559, 7.775721, 9.160133, 9.314996, 9.640654]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 20; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 50: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {3.511626, 0.341498, -2.846931, 0.474379, -2.584274, 8.695016, -1.101934, -3.291869, 5.718685, -8.757100, -0.703882, 8.896670, -2.640997, -2.825545, -5.655342, 5.112545};
                const double expected_array[] = {-8.757100, -5.655342, -3.291869, -2.846931, -2.825545, -2.640997, -2.584274, -1.101934, -0.703882, 0.341498, 0.474379, 3.511626, 5.112545, 5.718685, 8.695016, 8.896670};

                struct array_double_t ptr = { .size = 0, .capacity = 0, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 0; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-8.757100, -5.655342, -3.291869, -2.846931, -2.825545, -2.640997, -2.584274, -1.101934, -0.703882, 0.341498, 0.474379, 3.511626, 5.112545, 5.718685, 8.695016, 8.896670]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 0; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 51: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {5.432967, 4.554520, 0.000249, 7.060540, -3.583690, -7.098233, 6.531497, 0.663453, 7.638561, 6.788524, -6.173647, 7.808831, 2.593389, -1.400743, 1.585898, 8.747390, 4.935304, 4.500756};
                const double expected_array[] = {-7.098233, -6.173647, -3.583690, -1.400743, 0.000249, 0.663453, 1.585898, 2.593389, 4.500756, 4.554520, 4.935304, 5.432967, 6.531497, 6.788524, 7.060540, 7.638561, 7.808831, 8.747390};

                struct array_double_t ptr = { .size = 18, .capacity = -18, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 18; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-7.098233, -6.173647, -3.583690, -1.400743, 0.000249, 0.663453, 1.585898, 2.593389, 4.500756, 4.554520, 4.935304, 5.432967, 6.531497, 6.788524, 7.060540, 7.638561, 7.808831, 8.747390]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 18; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 52: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {5.169658, -8.903376, -6.542824, -1.352473, 6.465755, -0.683918, 7.789724, -4.842715, 2.455928, 5.415937, -6.415409, -0.693592, 0.324464, 2.400550, -7.849765};
                const double expected_array[] = {-8.903376, -7.849765, -6.542824, -6.415409, -4.842715, -1.352473, -0.693592, -0.683918, 0.324464, 2.400550, 2.455928, 5.169658, 5.415937, 6.465755, 7.789724};

                struct array_double_t ptr = { .size = 15, .capacity = 0, .data = input_array };


                printf("#####START#####");
                int res = sort_array_double(&ptr);           
                printf("#####END#####");

                test_error(res == 1, "Funkcja sort_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                if (!1)
                {
                    int ok = 0;

                    for (int i = 0; i < 15; ++i)
                        ok += (ptr.data[i] > expected_array[i] + 0.005) || (ptr.data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-8.903376, -7.849765, -6.542824, -6.415409, -4.842715, -1.352473, -0.693592, -0.683918, 0.324464, 2.400550, 2.455928, 5.169658, 5.415937, 6.465755, 7.789724]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_double: ");

                        for (int i = 0; i < 15; ++i)
                            printf("%lf ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_double() niepoprawnie posortowała tablicę");
                    }
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
//  Test 53: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_double_t ptr = { .size = 4, .capacity = 8, .data = NULL };


            printf("#####START#####");
            int res = sort_array_double(&ptr);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja sort_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzanie poprawności działania funkcji sort_array_double
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji sort_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            printf("#####START#####");
            int res = sort_array_double(NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja sort_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 55: Sprawdzanie poprawności działania funkcji sort_array_intmax_t
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji sort_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t input_array[] = {3454364252245985802LL, 2423709544853642805LL, -6077384920426319893LL, -4571107936650087593LL, -1237292248171061098LL, -6374906132081964519LL, 2110153618668313147LL, 2158864868434340091LL, 2550466000528168110LL, 2698043531483195579LL, -2949282212110028409LL, -6217020316806935112LL, 8772109986002015965LL, -5252578864044334101LL, -8056713892230808558LL, -6652437733227831990LL, -3730291267548187733LL, -7615233807197375045LL};
                const intmax_t expected_array[] = {-8056713892230808558LL, -7615233807197375045LL, -6652437733227831990LL, -6374906132081964519LL, -6217020316806935112LL, -6077384920426319893LL, -5252578864044334101LL, -4571107936650087593LL, -3730291267548187733LL, -2949282212110028409LL, -1237292248171061098LL, 2110153618668313147LL, 2158864868434340091LL, 2423709544853642805LL, 2550466000528168110LL, 2698043531483195579LL, 3454364252245985802LL, 8772109986002015965LL};

                struct array_intmax_t_t ptr = { .size = 18, .capacity = 18, .data = input_array };


                printf("#####START#####");
                int res = sort_array_intmax_t(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_intmax_t() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 18; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-8056713892230808558, -7615233807197375045, -6652437733227831990, -6374906132081964519, -6217020316806935112, -6077384920426319893, -5252578864044334101, -4571107936650087593, -3730291267548187733, -2949282212110028409, -1237292248171061098, 2110153618668313147, 2158864868434340091, 2423709544853642805, 2550466000528168110, 2698043531483195579, 3454364252245985802, 8772109986002015965]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_intmax_t: ");

                        for (int i = 0; i < 18; ++i)
                            printf("%ld"" ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_intmax_t() niepoprawnie posortowała tablicę");
                    }
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
//  Test 56: Sprawdzanie poprawności działania funkcji sort_array_intmax_t
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji sort_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t input_array[] = {6849287394203399937LL, 2771719784083576917LL, -208996724717103459LL, 2110943071098743127LL, -2597936627597788279LL, -5625749616219177590LL, -7018584577136116472LL, 6993863310928810534LL, -5551682644160365066LL, -5934468463244776187LL, 1380479847605954378LL, -2767473147156777389LL, 8042990843240362158LL, 4722128733919623954LL, -32619324950578977LL, -2717625804349391315LL, 7251363769935922948LL, -5486045747622513610LL, 6859884655801463596LL, 6047957708794113177LL, 3578118937874170741LL, -8002551354135194722LL, 5271602314707580055LL, 1790825866564209864LL, -2164739030040344674LL, 5498000176776933423LL, 8452503410037490002LL, -1403297758776355263LL, 6916915383412339266LL, -2783061524016758146LL, 7741726846095756636LL, 334326160408796476LL, 5879240420443970926LL, -1563721780131878462LL, -1824085877603380863LL, -6223370370591398781LL, -7594894969871973794LL, 2809412909097831403LL, -4435816368711658807LL, 1199196577628558234LL, 6974643041082154870LL, -4909588036989852599LL, 2255943230854527008LL, 8302260378562610980LL, 4945090590974450516LL, 3108568523349426915LL, -4347084600953000576LL, 2667915388866122153LL, 3977550885348528549LL, -9102030232153205907LL, 3527742255555763801LL, -8851745644581696782LL, 3609473963120178946LL, -2514869538177807346LL, 852244445642031501LL, -3941617603473805042LL, 4017430467231755630LL, 8416581723926209139LL, -5432542197499893025LL, -6771796038273143437LL, -9151760573704131931LL, 7570028463133558893LL, 3716505217125681117LL};
                const intmax_t expected_array[] = {-9151760573704131931LL, -9102030232153205907LL, -8851745644581696782LL, -8002551354135194722LL, -7594894969871973794LL, -7018584577136116472LL, -6771796038273143437LL, -6223370370591398781LL, -5934468463244776187LL, -5625749616219177590LL, -5551682644160365066LL, -5486045747622513610LL, -5432542197499893025LL, -4909588036989852599LL, -4435816368711658807LL, -4347084600953000576LL, -3941617603473805042LL, -2783061524016758146LL, -2767473147156777389LL, -2717625804349391315LL, -2597936627597788279LL, -2514869538177807346LL, -2164739030040344674LL, -1824085877603380863LL, -1563721780131878462LL, -1403297758776355263LL, -208996724717103459LL, -32619324950578977LL, 334326160408796476LL, 852244445642031501LL, 1199196577628558234LL, 1380479847605954378LL, 1790825866564209864LL, 2110943071098743127LL, 2255943230854527008LL, 2667915388866122153LL, 2771719784083576917LL, 2809412909097831403LL, 3108568523349426915LL, 3527742255555763801LL, 3578118937874170741LL, 3609473963120178946LL, 3716505217125681117LL, 3977550885348528549LL, 4017430467231755630LL, 4722128733919623954LL, 4945090590974450516LL, 5271602314707580055LL, 5498000176776933423LL, 5879240420443970926LL, 6047957708794113177LL, 6849287394203399937LL, 6859884655801463596LL, 6916915383412339266LL, 6974643041082154870LL, 6993863310928810534LL, 7251363769935922948LL, 7570028463133558893LL, 7741726846095756636LL, 8042990843240362158LL, 8302260378562610980LL, 8416581723926209139LL, 8452503410037490002LL};

                struct array_intmax_t_t ptr = { .size = 63, .capacity = 63, .data = input_array };


                printf("#####START#####");
                int res = sort_array_intmax_t(&ptr);           
                printf("#####END#####");

                test_error(res == 0, "Funkcja sort_array_intmax_t() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    int ok = 0;

                    for (int i = 0; i < 63; ++i)
                        ok += (ptr.data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-9151760573704131931, -9102030232153205907, -8851745644581696782, -8002551354135194722, -7594894969871973794, -7018584577136116472, -6771796038273143437, -6223370370591398781, -5934468463244776187, -5625749616219177590, -5551682644160365066, -5486045747622513610, -5432542197499893025, -4909588036989852599, -4435816368711658807, -4347084600953000576, -3941617603473805042, -2783061524016758146, -2767473147156777389, -2717625804349391315, -2597936627597788279, -2514869538177807346, -2164739030040344674, -1824085877603380863, -1563721780131878462, -1403297758776355263, -208996724717103459, -32619324950578977, 334326160408796476, 852244445642031501, 1199196577628558234, 1380479847605954378, 1790825866564209864, 2110943071098743127, 2255943230854527008, 2667915388866122153, 2771719784083576917, 2809412909097831403, 3108568523349426915, 3527742255555763801, 3578118937874170741, 3609473963120178946, 3716505217125681117, 3977550885348528549, 4017430467231755630, 4722128733919623954, 4945090590974450516, 5271602314707580055, 5498000176776933423, 5879240420443970926, 6047957708794113177, 6849287394203399937, 6859884655801463596, 6916915383412339266, 6974643041082154870, 6993863310928810534, 7251363769935922948, 7570028463133558893, 7741726846095756636, 8042990843240362158, 8302260378562610980, 8416581723926209139, 8452503410037490002]\n");

                        printf("\nTablica po wywołaniu funkcji sort_array_intmax_t: ");

                        for (int i = 0; i < 63; ++i)
                            printf("%ld"" ", ptr.data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja sort_array_intmax_t() niepoprawnie posortowała tablicę");
                    }
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
//  Test 57: Sprawdzanie poprawności działania funkcji sort_array_intmax_t
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji sort_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_intmax_t_t ptr = { .size = 5, .capacity = 6, .data = NULL };


            printf("#####START#####");
            int res = sort_array_intmax_t(&ptr);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja sort_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 58: Sprawdzanie poprawności działania funkcji load_array_int
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji load_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int expected_array[] = {-1, 6, -8, -7, 10, 8, 1, -1, -2};

                struct array_int_t *ptr;

                printf("#####START#####");
                int res = load_array_int(&ptr, "fun.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja load_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_int() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 9, "Funkcja load_array_int() powinna przypisać 9 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 9, "Funkcja load_array_int() powinna przypisać 9 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 9; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-1, 6, -8, -7, 10, 8, 1, -1, -2]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_int: ");

                        for (int i = 0; i < 9; ++i)
                            printf("%d ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_int() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_int(ptr);            
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
//  Test 59: Sprawdzanie poprawności działania funkcji load_array_int
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji load_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int expected_array[] = {-7, -5, 8, -10, 5, 10, 10, -4, -7, 4, -6, -7, 6, 0, -1, -6, -10, 8, -1, -4, -1, 8, 2, 0, -4, -6, -3, -6, 9, -7, -7, -5, -10, -6, 3, -3, -4, -4, -1, 2, 1, 3, -1, -1, -7, 1, 0, 9, 7, 10, 0, -1, -7, 2, 7, -1, -4, -10, 9, 8, -7, -4, -10, 8, -4, 4, -8, 7, 1, 9, -9, -1, -4, -10, 7, -1, 7, -7, -5, -6, -8, -4, -10, 7, -5, -2, 3, -2, -5, 6, -5, -6, -5, -5, 0, 10, -3, -6, 0, 1, 7, -5, 4, 6, 8, 1, 7, 10, -10, -4, -6, -1, 8, 3, -9, -3, -2, 7, -1, -10, 4, 7, -4, 6, -1, -2, -8, 1, 4, -1, 3, 2, 2, -4, -8, -5, -3, -7, 3, -8, -5, 9, 7, -2, 0, 7, -9, 6, 7, 9, 4, 5, 7, 3, 3, 8, 8, -1, 2, 9, -7, 7, 8, -8, -9, 5, 8, -3, 9, -2, 5, 0, -5, 6, -6, 3, -9, -5, 0, 6, 0, 9, 1, 4, -1, 3, -5, 4, 7, 7, 7, 10, 10, 10, 4, -8, -1, -9, 4, 4, -4, -9, 9, -5, 4, 6, -8, 8, -9, 8, 2, 2, -10, 10, -10, 1, 1, 2, -5, 3, -7, -6, -3, -3, 3, -3, -6, 1, -7, -10, -7, 0, 10, -1, -3, 1, -2, -7, 5, -7, 4, -9, -9};

                struct array_int_t *ptr;

                printf("#####START#####");
                int res = load_array_int(&ptr, "broke.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja load_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_int() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 243, "Funkcja load_array_int() powinna przypisać 243 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 243, "Funkcja load_array_int() powinna przypisać 243 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 243; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-7, -5, 8, -10, 5, 10, 10, -4, -7, 4, -6, -7, 6, 0, -1, -6, -10, 8, -1, -4, -1, 8, 2, 0, -4, -6, -3, -6, 9, -7, -7, -5, -10, -6, 3, -3, -4, -4, -1, 2, 1, 3, -1, -1, -7, 1, 0, 9, 7, 10, 0, -1, -7, 2, 7, -1, -4, -10, 9, 8, -7, -4, -10, 8, -4, 4, -8, 7, 1, 9, -9, -1, -4, -10, 7, -1, 7, -7, -5, -6, -8, -4, -10, 7, -5, -2, 3, -2, -5, 6, -5, -6, -5, -5, 0, 10, -3, -6, 0, 1, 7, -5, 4, 6, 8, 1, 7, 10, -10, -4, -6, -1, 8, 3, -9, -3, -2, 7, -1, -10, 4, 7, -4, 6, -1, -2, -8, 1, 4, -1, 3, 2, 2, -4, -8, -5, -3, -7, 3, -8, -5, 9, 7, -2, 0, 7, -9, 6, 7, 9, 4, 5, 7, 3, 3, 8, 8, -1, 2, 9, -7, 7, 8, -8, -9, 5, 8, -3, 9, -2, 5, 0, -5, 6, -6, 3, -9, -5, 0, 6, 0, 9, 1, 4, -1, 3, -5, 4, 7, 7, 7, 10, 10, 10, 4, -8, -1, -9, 4, 4, -4, -9, 9, -5, 4, 6, -8, 8, -9, 8, 2, 2, -10, 10, -10, 1, 1, 2, -5, 3, -7, -6, -3, -3, 3, -3, -6, 1, -7, -10, -7, 0, 10, -1, -3, 1, -2, -7, 5, -7, 4, -9, -9]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_int: ");

                        for (int i = 0; i < 243; ++i)
                            printf("%d ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_int() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_int(ptr);            
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
//  Test 60: Sprawdzanie poprawności działania funkcji load_array_int
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji load_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int expected_array[] = {6, 6, -6, -10, 7, 3, 7, -8};

                struct array_int_t *ptr;

                printf("#####START#####");
                int res = load_array_int(&ptr, "step.bin");           
                printf("#####END#####");

                test_error(res == 3, "Funkcja load_array_int() powinna zwrócić wartość 3; a zwróciła %d", res);

                if (!3)
                {
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_int() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 8, "Funkcja load_array_int() powinna przypisać 8 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 8, "Funkcja load_array_int() powinna przypisać 8 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 8; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [6, 6, -6, -10, 7, 3, 7, -8]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_int: ");

                        for (int i = 0; i < 8; ++i)
                            printf("%d ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_int() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_int(ptr);            
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
//  Test 61: Sprawdzanie poprawności działania funkcji load_array_int
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji load_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int expected_array[] = {3, 5, 8, -6, -3, -7, -1, 9, 1, 4};

                struct array_int_t *ptr;

                printf("#####START#####");
                int res = load_array_int(&ptr, "teach.bin");           
                printf("#####END#####");

                test_error(res == 3, "Funkcja load_array_int() powinna zwrócić wartość 3; a zwróciła %d", res);

                if (!3)
                {
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_int() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 10, "Funkcja load_array_int() powinna przypisać 10 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 10, "Funkcja load_array_int() powinna przypisać 10 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 10; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [3, 5, 8, -6, -3, -7, -1, 9, 1, 4]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_int: ");

                        for (int i = 0; i < 10; ++i)
                            printf("%d ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_int() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_int(ptr);            
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
//  Test 62: Sprawdzanie poprawności działania funkcji load_array_int
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji load_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int expected_array[] = {6, 10, 8, -6, -6};

                struct array_int_t *ptr;

                printf("#####START#####");
                int res = load_array_int(&ptr, "change.bin");           
                printf("#####END#####");

                test_error(res == 3, "Funkcja load_array_int() powinna zwrócić wartość 3; a zwróciła %d", res);

                if (!3)
                {
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_int() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 5, "Funkcja load_array_int() powinna przypisać 5 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 5, "Funkcja load_array_int() powinna przypisać 5 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 5; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [6, 10, 8, -6, -6]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_int: ");

                        for (int i = 0; i < 5; ++i)
                            printf("%d ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_int() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_int(ptr);            
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
//  Test 63: Sprawdzanie poprawności działania funkcji load_array_int
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji load_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const int expected_array[] = {6, 10, 8, -6, -6};

                struct array_int_t *ptr;

                printf("#####START#####");
                int res = load_array_int(&ptr, "about.bin");           
                printf("#####END#####");

                test_error(res == 2, "Funkcja load_array_int() powinna zwrócić wartość 2; a zwróciła %d", res);

                if (!2)
                {
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_int() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 5, "Funkcja load_array_int() powinna przypisać 5 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 5, "Funkcja load_array_int() powinna przypisać 5 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 5; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [6, 10, 8, -6, -6]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_int: ");

                        for (int i = 0; i < 5; ++i)
                            printf("%d ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_int() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_int(ptr);            
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
//  Test 64: Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na 40 bajtów
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na 40 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(40);
    
    //
    // -----------
    //
    

            const int expected_array[] = {2, -9, -3, 5, -10, 6};

            struct array_int_t *ptr;

            printf("#####START#####");
            int res = load_array_int(&ptr, "except.bin");           
            printf("#####END#####");

            test_error(res == 0, "Funkcja load_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

            if (!0)
            {
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                test_error(ptr != NULL, "Funkcja load_array_int() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                test_error(ptr->size == 6, "Funkcja load_array_int() powinna przypisać 6 do pola size struktury, a przypisała %d", ptr->size);
                test_error(ptr->capacity == 6, "Funkcja load_array_int() powinna przypisać 6 do pola size struktury, a przypisała %d", ptr->capacity);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
                int ok = 0;

                for (int i = 0; i < 6; ++i)
                    ok += (ptr->data[i] != expected_array[i]);

                if (ok)
                {         
                    printf("Powinno być: [2, -9, -3, 5, -10, 6]\n");

                    printf("\nTablica po wywołaniu funkcji load_array_int: ");

                    for (int i = 0; i < 6; ++i)
                        printf("%d ", ptr->data[i]);            

                    printf("\n");

                    test_error(ok == 0, "Funkcja load_array_int() niepoprawnie wczytała tablicę");
                }

                free_array_int(ptr);            
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
//  Test 65: Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na 32 bajtów
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na 32 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(32);
    
    //
    // -----------
    //
    

            struct array_int_t *ptr;

            printf("#####START#####");
            int res = load_array_int(&ptr, "except.bin");           
            printf("#####END#####");

            test_error(res == 4, "Funkcja load_array_int() powinna zwrócić wartość 4; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 66: Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na bajtów
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = load_array_int(NULL, "except.bin");           
            printf("#####END#####");

            test_error(res == 1, "Funkcja load_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 67: Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na bajtów
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_int_t *ptr;

            printf("#####START#####");
            int res = load_array_int(&ptr, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja load_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 68: Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na bajtów
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = load_array_int(NULL, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja load_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 69: Sprawdzanie poprawności działania funkcji load_array_double
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji load_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const double expected_array[] = {-5.786190, -7.877356, 8.828190, 4.581318, -4.944564, 2.136243, 6.214021};

                struct array_double_t *ptr;

                printf("#####START#####");
                int res = load_array_double(&ptr, "ocean.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja load_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_double() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 7, "Funkcja load_array_double() powinna przypisać 7 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 7, "Funkcja load_array_double() powinna przypisać 7 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 7; ++i)
                        ok += (ptr->data[i] > expected_array[i] + 0.005) || (ptr->data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-5.786190, -7.877356, 8.828190, 4.581318, -4.944564, 2.136243, 6.214021]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_double: ");

                        for (int i = 0; i < 7; ++i)
                            printf("%f ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_double() niepoprawnie wczytała tablicę");
                    }

                    free_array_double(ptr);            
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
//  Test 70: Sprawdzanie poprawności działania funkcji load_array_double
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji load_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const double expected_array[] = {-0.725292, -3.101008, 2.487093, 7.625863, 2.397212, 5.138924, -3.110808, 2.410170, 7.189055, -1.756818, -1.122853, -9.703434, 7.121892, 5.049694, -2.932939, 5.497938, -6.734155, -1.941505, 0.745582, -3.987014, -8.434455, -6.721198, -0.388289, -0.384364, 7.314950, 1.226646, -9.358358, -9.677992, -7.179432, -2.450304, 8.451509, 6.878636, -4.866880, 6.775455, 4.456777, -7.298042, -2.194376, -0.681006, 2.078837, 5.767908, -3.275623, -1.453660, -7.933296, 1.116504, -3.851668, -4.072809, 5.199603, 0.486711, -9.459263, 8.847357, 9.512133, 3.067876, 2.156495, -9.349754, -0.404065, -5.415288, -0.946503, 2.194159, 0.075729, 4.118108, -1.712727, -0.611143, -1.263921, -2.710212, 8.911662, -4.574071, 4.534227, -2.915390, 1.785514, -5.582426, -7.627935, -7.022636, 0.954881, -3.658208, 8.161614, -2.022190, -8.803885, -8.518924, -6.180084, 2.130765, -2.312986, 2.157814, 0.974701, -1.976001, 0.207078, -4.787017, -7.075791, -4.918158, -8.601368, -9.307345, 7.713465, -5.521519, -6.675722, -5.422662, -1.149146, 6.381351, 4.983617, 2.385462, 3.221230, 2.107161, 1.471397, 7.718663, -7.277218, 6.908510, 6.994949, 7.945181, -6.013947, -7.777819, 3.692215, -1.940672, -7.499927, -5.601165, -7.827953, 6.558475, -9.541662, -5.332879, -6.756011, 1.727606, -1.505981, -8.520893, 8.368754, -1.793877, -7.361535, 5.470986, -5.463602, -6.176398, -0.253665, 4.579449, 5.459018, -5.470478, -4.609020, 5.327783, -5.634822, -9.604350, 9.126599, 4.041835, -4.556646, 2.969139, -1.004642, 9.424212, -1.219277, 6.519996, 4.712274, 2.301902, 8.795206, -1.972485, 5.095108, 3.716443, -4.632272, 3.025508, 1.120113, 5.951913, -4.431292, -1.719765, -8.461285, 9.759938, 7.393824, 2.765397, -6.280484, 2.013935, 1.827380, 4.314921, -8.443262, -6.361393, -1.654195, -3.297175, 4.566978, 9.818462, -7.326963, 9.307159, -1.894061, -0.832751, -4.097865, 7.837385, 5.570338, -8.286489, 3.084408, 4.317196, -5.621490, -8.016929, 8.700201, -3.070337, 1.139510, 1.659340, -3.336716, -7.255958, -6.374501, -5.637435, -9.631451, -1.812251, -7.045625, -2.935259, -9.680384, 2.161147, 6.124125, -3.055602, -9.566002, -3.577757, 3.196275, -0.932220, 5.067982, -1.080992, 9.866528, 1.026043, 2.527242, 8.183049, 3.430615, 7.081506, 5.082458, 5.432641, 2.960540, -3.173097, -9.349516, 7.898101, -0.149935, 1.012999, 0.713839, 7.028897, 4.799632, -3.253314, 2.616422, -1.809617, 5.051716, 3.248385, 2.282554, 3.240708, 2.241736, -6.046822, 5.423728, 9.502014, -2.455147, 9.226266, 7.753844, 0.458150, -5.196544, -1.487464, -9.094413, -8.977170, -7.049623, 9.565374, 9.996664, 9.931156, -1.677418, 7.006033, -0.820629, -0.431247, 0.759836, -7.071316, -0.665717, 3.639759, 0.264246, 7.532327, 3.718778, 0.433036, 0.794682, 7.294719, -9.106323, 6.797914, 3.975263, 2.323794, 2.546599, 3.496676, 5.914338, 2.022588, 5.039162, -3.536189, -4.612700, 9.704534, -1.018445, 0.322171, -0.111629, -2.791661, -8.577651, -1.838245, 5.771188, -1.109534, 2.371105, 5.126171, -3.154038, -8.888612, 3.255488, -8.957904, -8.592600, 5.421750, 7.368862, -3.300056, -8.207013, -3.165705, -0.480212, 0.216932, -0.555688, -3.010595, 2.980535, 8.949845, -5.720276, 5.619064};

                struct array_double_t *ptr;

                printf("#####START#####");
                int res = load_array_double(&ptr, "be.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja load_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_double() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 296, "Funkcja load_array_double() powinna przypisać 296 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 296, "Funkcja load_array_double() powinna przypisać 296 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 296; ++i)
                        ok += (ptr->data[i] > expected_array[i] + 0.005) || (ptr->data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-0.725292, -3.101008, 2.487093, 7.625863, 2.397212, 5.138924, -3.110808, 2.410170, 7.189055, -1.756818, -1.122853, -9.703434, 7.121892, 5.049694, -2.932939, 5.497938, -6.734155, -1.941505, 0.745582, -3.987014, -8.434455, -6.721198, -0.388289, -0.384364, 7.314950, 1.226646, -9.358358, -9.677992, -7.179432, -2.450304, 8.451509, 6.878636, -4.866880, 6.775455, 4.456777, -7.298042, -2.194376, -0.681006, 2.078837, 5.767908, -3.275623, -1.453660, -7.933296, 1.116504, -3.851668, -4.072809, 5.199603, 0.486711, -9.459263, 8.847357, 9.512133, 3.067876, 2.156495, -9.349754, -0.404065, -5.415288, -0.946503, 2.194159, 0.075729, 4.118108, -1.712727, -0.611143, -1.263921, -2.710212, 8.911662, -4.574071, 4.534227, -2.915390, 1.785514, -5.582426, -7.627935, -7.022636, 0.954881, -3.658208, 8.161614, -2.022190, -8.803885, -8.518924, -6.180084, 2.130765, -2.312986, 2.157814, 0.974701, -1.976001, 0.207078, -4.787017, -7.075791, -4.918158, -8.601368, -9.307345, 7.713465, -5.521519, -6.675722, -5.422662, -1.149146, 6.381351, 4.983617, 2.385462, 3.221230, 2.107161, 1.471397, 7.718663, -7.277218, 6.908510, 6.994949, 7.945181, -6.013947, -7.777819, 3.692215, -1.940672, -7.499927, -5.601165, -7.827953, 6.558475, -9.541662, -5.332879, -6.756011, 1.727606, -1.505981, -8.520893, 8.368754, -1.793877, -7.361535, 5.470986, -5.463602, -6.176398, -0.253665, 4.579449, 5.459018, -5.470478, -4.609020, 5.327783, -5.634822, -9.604350, 9.126599, 4.041835, -4.556646, 2.969139, -1.004642, 9.424212, -1.219277, 6.519996, 4.712274, 2.301902, 8.795206, -1.972485, 5.095108, 3.716443, -4.632272, 3.025508, 1.120113, 5.951913, -4.431292, -1.719765, -8.461285, 9.759938, 7.393824, 2.765397, -6.280484, 2.013935, 1.827380, 4.314921, -8.443262, -6.361393, -1.654195, -3.297175, 4.566978, 9.818462, -7.326963, 9.307159, -1.894061, -0.832751, -4.097865, 7.837385, 5.570338, -8.286489, 3.084408, 4.317196, -5.621490, -8.016929, 8.700201, -3.070337, 1.139510, 1.659340, -3.336716, -7.255958, -6.374501, -5.637435, -9.631451, -1.812251, -7.045625, -2.935259, -9.680384, 2.161147, 6.124125, -3.055602, -9.566002, -3.577757, 3.196275, -0.932220, 5.067982, -1.080992, 9.866528, 1.026043, 2.527242, 8.183049, 3.430615, 7.081506, 5.082458, 5.432641, 2.960540, -3.173097, -9.349516, 7.898101, -0.149935, 1.012999, 0.713839, 7.028897, 4.799632, -3.253314, 2.616422, -1.809617, 5.051716, 3.248385, 2.282554, 3.240708, 2.241736, -6.046822, 5.423728, 9.502014, -2.455147, 9.226266, 7.753844, 0.458150, -5.196544, -1.487464, -9.094413, -8.977170, -7.049623, 9.565374, 9.996664, 9.931156, -1.677418, 7.006033, -0.820629, -0.431247, 0.759836, -7.071316, -0.665717, 3.639759, 0.264246, 7.532327, 3.718778, 0.433036, 0.794682, 7.294719, -9.106323, 6.797914, 3.975263, 2.323794, 2.546599, 3.496676, 5.914338, 2.022588, 5.039162, -3.536189, -4.612700, 9.704534, -1.018445, 0.322171, -0.111629, -2.791661, -8.577651, -1.838245, 5.771188, -1.109534, 2.371105, 5.126171, -3.154038, -8.888612, 3.255488, -8.957904, -8.592600, 5.421750, 7.368862, -3.300056, -8.207013, -3.165705, -0.480212, 0.216932, -0.555688, -3.010595, 2.980535, 8.949845, -5.720276, 5.619064]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_double: ");

                        for (int i = 0; i < 296; ++i)
                            printf("%f ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_double() niepoprawnie wczytała tablicę");
                    }

                    free_array_double(ptr);            
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
//  Test 71: Sprawdzanie poprawności działania funkcji load_array_double
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji load_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const double expected_array[] = {-5.920429, -9.333190, 9.519339, 6.474462, 8.857001, 8.842110, -5.244998, 2.614779, 7.955028};

                struct array_double_t *ptr;

                printf("#####START#####");
                int res = load_array_double(&ptr, "course.bin");           
                printf("#####END#####");

                test_error(res == 3, "Funkcja load_array_double() powinna zwrócić wartość 3; a zwróciła %d", res);

                if (!3)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_double() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 9, "Funkcja load_array_double() powinna przypisać 9 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 9, "Funkcja load_array_double() powinna przypisać 9 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 9; ++i)
                        ok += (ptr->data[i] > expected_array[i] + 0.005) || (ptr->data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-5.920429, -9.333190, 9.519339, 6.474462, 8.857001, 8.842110, -5.244998, 2.614779, 7.955028]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_double: ");

                        for (int i = 0; i < 9; ++i)
                            printf("%f ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_double() niepoprawnie wczytała tablicę");
                    }

                    free_array_double(ptr);            
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
//  Test 72: Sprawdzanie poprawności działania funkcji load_array_double
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji load_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const double expected_array[] = {7.307484, 7.102670, -4.747272, 6.293370, -0.793915, -5.998550, 0.167937, -0.771587, 5.605915};

                struct array_double_t *ptr;

                printf("#####START#####");
                int res = load_array_double(&ptr, "finish.bin");           
                printf("#####END#####");

                test_error(res == 3, "Funkcja load_array_double() powinna zwrócić wartość 3; a zwróciła %d", res);

                if (!3)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_double() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 9, "Funkcja load_array_double() powinna przypisać 9 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 9, "Funkcja load_array_double() powinna przypisać 9 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 9; ++i)
                        ok += (ptr->data[i] > expected_array[i] + 0.005) || (ptr->data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [7.307484, 7.102670, -4.747272, 6.293370, -0.793915, -5.998550, 0.167937, -0.771587, 5.605915]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_double: ");

                        for (int i = 0; i < 9; ++i)
                            printf("%f ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_double() niepoprawnie wczytała tablicę");
                    }

                    free_array_double(ptr);            
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
//  Test 73: Sprawdzanie poprawności działania funkcji load_array_double
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji load_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const double expected_array[] = {-5.612385, 6.734295, -4.610213, -0.468414, -7.818245};

                struct array_double_t *ptr;

                printf("#####START#####");
                int res = load_array_double(&ptr, "me.bin");           
                printf("#####END#####");

                test_error(res == 3, "Funkcja load_array_double() powinna zwrócić wartość 3; a zwróciła %d", res);

                if (!3)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_double() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 5, "Funkcja load_array_double() powinna przypisać 5 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 5, "Funkcja load_array_double() powinna przypisać 5 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 5; ++i)
                        ok += (ptr->data[i] > expected_array[i] + 0.005) || (ptr->data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-5.612385, 6.734295, -4.610213, -0.468414, -7.818245]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_double: ");

                        for (int i = 0; i < 5; ++i)
                            printf("%f ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_double() niepoprawnie wczytała tablicę");
                    }

                    free_array_double(ptr);            
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
//  Test 74: Sprawdzanie poprawności działania funkcji load_array_double
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji load_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                const double expected_array[] = {-5.612385, 6.734295, -4.610213, -0.468414, -7.818245};

                struct array_double_t *ptr;

                printf("#####START#####");
                int res = load_array_double(&ptr, "road.bin");           
                printf("#####END#####");

                test_error(res == 2, "Funkcja load_array_double() powinna zwrócić wartość 2; a zwróciła %d", res);

                if (!2)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_double() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 5, "Funkcja load_array_double() powinna przypisać 5 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 5, "Funkcja load_array_double() powinna przypisać 5 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
                    int ok = 0;

                    for (int i = 0; i < 5; ++i)
                        ok += (ptr->data[i] > expected_array[i] + 0.005) || (ptr->data[i] < expected_array[i] - 0.005);

                    if (ok)
                    {         
                        printf("Powinno być: [-5.612385, 6.734295, -4.610213, -0.468414, -7.818245]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_double: ");

                        for (int i = 0; i < 5; ++i)
                            printf("%f ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_double() niepoprawnie wczytała tablicę");
                    }

                    free_array_double(ptr);            
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
//  Test 75: Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na 96 bajtów
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na 96 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(96);
    
    //
    // -----------
    //
    

            const double expected_array[] = {-9.665211, -6.320868, -2.863282, -7.988528, -7.812744, 2.628787, -4.608985, 5.512152, 7.708912, 2.760220};

            struct array_double_t *ptr;

            printf("#####START#####");
            int res = load_array_double(&ptr, "phrase.bin");           
            printf("#####END#####");

            test_error(res == 0, "Funkcja load_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

            if (!0)
            {
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                test_error(ptr != NULL, "Funkcja load_array_double() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                test_error(ptr->size == 10, "Funkcja load_array_double() powinna przypisać 10 do pola size struktury, a przypisała %d", ptr->size);
                test_error(ptr->capacity == 10, "Funkcja load_array_double() powinna przypisać 10 do pola size struktury, a przypisała %d", ptr->capacity);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int ok = 0;

                for (int i = 0; i < 10; ++i)
                        ok += (ptr->data[i] > expected_array[i] + 0.005) || (ptr->data[i] < expected_array[i] - 0.005);

                if (ok)
                {         
                    printf("Powinno być: [-9.665211, -6.320868, -2.863282, -7.988528, -7.812744, 2.628787, -4.608985, 5.512152, 7.708912, 2.760220]\n");

                    printf("\nTablica po wywołaniu funkcji load_array_double: ");

                    for (int i = 0; i < 10; ++i)
                        printf("%f ", ptr->data[i]);            

                    printf("\n");

                    test_error(ok == 0, "Funkcja load_array_double() niepoprawnie wczytała tablicę");
                }

                free_array_double(ptr);            
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
//  Test 76: Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na 39 bajtów
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na 39 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(39);
    
    //
    // -----------
    //
    

            struct array_double_t *ptr;

            printf("#####START#####");
            int res = load_array_double(&ptr, "phrase.bin");           
            printf("#####END#####");

            test_error(res == 4, "Funkcja load_array_double() powinna zwrócić wartość 4; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 77: Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na bajtów
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = load_array_double(NULL, "phrase.bin");           
            printf("#####END#####");

            test_error(res == 1, "Funkcja load_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 78: Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na bajtów
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_double_t *ptr;

            printf("#####START#####");
            int res = load_array_double(&ptr, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja load_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 79: Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na bajtów
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = load_array_double(NULL, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja load_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 80: Sprawdzanie poprawności działania funkcji load_array_intmax_t
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji load_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t expected_array[] = {-8766407403736192172LL, -3201369675462242596LL, 7527389619793437247LL, -7474191911350274475LL, 7810837836496146654LL, -6829318404592648985LL, 2164808606223490262LL, -3938407163569044460LL, -4021826259747713354LL, -8901460720324269292LL, 1154035416595633098LL, -6546663413486677963LL, -6135284816601958591LL, -9087850250834120424LL, -6759581797362394825LL, 7234633689643733611LL};

                struct array_intmax_t_t *ptr;


                printf("#####START#####");
                int res = load_array_intmax_t(&ptr, "throw.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja load_array_intmax_t() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_intmax_t() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 16, "Funkcja load_array_intmax_t() powinna przypisać 16 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 16, "Funkcja load_array_intmax_t() powinna przypisać 16 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 16; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-8766407403736192172, -3201369675462242596, 7527389619793437247, -7474191911350274475, 7810837836496146654, -6829318404592648985, 2164808606223490262, -3938407163569044460, -4021826259747713354, -8901460720324269292, 1154035416595633098, -6546663413486677963, -6135284816601958591, -9087850250834120424, -6759581797362394825, 7234633689643733611]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_intmax_t: ");

                        for (int i = 0; i < 16; ++i)
                            printf("%ld"" ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_intmax_t() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_intmax_t(ptr);

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
//  Test 81: Sprawdzanie poprawności działania funkcji load_array_intmax_t
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji load_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t expected_array[] = {2487763463918893311LL, 8779835970216898942LL, 283764233357722LL, -4197972997809123157LL, 7028460240305181929LL, 2670278777836749583LL, 4337246870244791886LL, -5776829641262177356LL, -4292945711485198407LL, -1454713037384933932LL, -320550928442359632LL, -3950417019918441316LL, -5140757887547411102LL, 6906845368004718932LL, -5549976372416110825LL, -24240968679240872LL, -7616623333539405941LL, -1980415088041693516LL, 2937641343713573245LL, 6787045725819188788LL, 6980672886962505988LL, 3389084636866435155LL, 7829438473248918454LL, 6168097070739676360LL, 8964149541720107126LL, -166386615511884176LL, 2273276160462871398LL, 4697362054907850119LL, 6058688175925408163LL, -1400246501606792004LL, 4520211150253891580LL, -2468573634120238368LL, -1029936311516143537LL, -7760384789703770936LL, 5315955855181051593LL, -2907585124341712628LL, 154435062442565783LL, -1846125470867658167LL, -5157895880553478685LL, -2093706649842281406LL, -8125140490618814584LL, 4223551199809040373LL, -4337891390303851259LL, -7566922091841518743LL, -838650689374485661LL, 8249696938487371618LL, -3580262617222230644LL, -4058644351176391782LL, -6097877312801456318LL, -2434674650698111121LL, -4623930495886453588LL, 9058749462496888342LL, -8691098784966648437LL, -6913608137225989411LL, 3210392966285299267LL, -353733807551675455LL, -1827717921361797575LL, 6400352865058377509LL, -8418635666526476086LL, 4447081590338906101LL, -6548302498512004765LL, -6823104768709720118LL, -5906716286598041978LL, -8321327432298305389LL};

                struct array_intmax_t_t *ptr;


                printf("#####START#####");
                int res = load_array_intmax_t(&ptr, "moment.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja load_array_intmax_t() powinna zwrócić wartość 0; a zwróciła %d", res);

                if (!0)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_intmax_t() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 64, "Funkcja load_array_intmax_t() powinna przypisać 64 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 64, "Funkcja load_array_intmax_t() powinna przypisać 64 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 64; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [2487763463918893311, 8779835970216898942, 283764233357722, -4197972997809123157, 7028460240305181929, 2670278777836749583, 4337246870244791886, -5776829641262177356, -4292945711485198407, -1454713037384933932, -320550928442359632, -3950417019918441316, -5140757887547411102, 6906845368004718932, -5549976372416110825, -24240968679240872, -7616623333539405941, -1980415088041693516, 2937641343713573245, 6787045725819188788, 6980672886962505988, 3389084636866435155, 7829438473248918454, 6168097070739676360, 8964149541720107126, -166386615511884176, 2273276160462871398, 4697362054907850119, 6058688175925408163, -1400246501606792004, 4520211150253891580, -2468573634120238368, -1029936311516143537, -7760384789703770936, 5315955855181051593, -2907585124341712628, 154435062442565783, -1846125470867658167, -5157895880553478685, -2093706649842281406, -8125140490618814584, 4223551199809040373, -4337891390303851259, -7566922091841518743, -838650689374485661, 8249696938487371618, -3580262617222230644, -4058644351176391782, -6097877312801456318, -2434674650698111121, -4623930495886453588, 9058749462496888342, -8691098784966648437, -6913608137225989411, 3210392966285299267, -353733807551675455, -1827717921361797575, 6400352865058377509, -8418635666526476086, 4447081590338906101, -6548302498512004765, -6823104768709720118, -5906716286598041978, -8321327432298305389]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_intmax_t: ");

                        for (int i = 0; i < 64; ++i)
                            printf("%ld"" ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_intmax_t() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_intmax_t(ptr);

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
//  Test 82: Sprawdzanie poprawności działania funkcji load_array_intmax_t
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji load_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t expected_array[] = {-9128180669013804817LL, -8974779084804011254LL, 1969771253071431437LL, 2646138590078295601LL, -8581675530039379266LL, -5167623254804536889LL, 580487526692527078LL, -5739472615997172288LL, -7711490933145412553LL, -1740667822407601611LL, 1827170252720390955LL};

                struct array_intmax_t_t *ptr;


                printf("#####START#####");
                int res = load_array_intmax_t(&ptr, "contain.bin");           
                printf("#####END#####");

                test_error(res == 3, "Funkcja load_array_intmax_t() powinna zwrócić wartość 3; a zwróciła %d", res);

                if (!3)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_intmax_t() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 11, "Funkcja load_array_intmax_t() powinna przypisać 11 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 11, "Funkcja load_array_intmax_t() powinna przypisać 11 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 11; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-9128180669013804817, -8974779084804011254, 1969771253071431437, 2646138590078295601, -8581675530039379266, -5167623254804536889, 580487526692527078, -5739472615997172288, -7711490933145412553, -1740667822407601611, 1827170252720390955]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_intmax_t: ");

                        for (int i = 0; i < 11; ++i)
                            printf("%ld"" ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_intmax_t() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_intmax_t(ptr);

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
//  Test 83: Sprawdzanie poprawności działania funkcji load_array_intmax_t
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji load_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t expected_array[] = {-357956470730825047LL, -2127412610045594757LL, 9025398006930699008LL, 6517988177226812807LL, 234288906808292360LL, 7258229264941160980LL, -3905721741308691767LL, -5804620263964321115LL, -753242568592673938LL, 6170911449531292177LL, 6419931473923114147LL, 5721446815431770062LL, 2685776565505598038LL};

                struct array_intmax_t_t *ptr;


                printf("#####START#####");
                int res = load_array_intmax_t(&ptr, "proper.bin");           
                printf("#####END#####");

                test_error(res == 3, "Funkcja load_array_intmax_t() powinna zwrócić wartość 3; a zwróciła %d", res);

                if (!3)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_intmax_t() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 13, "Funkcja load_array_intmax_t() powinna przypisać 13 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 13, "Funkcja load_array_intmax_t() powinna przypisać 13 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 13; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-357956470730825047, -2127412610045594757, 9025398006930699008, 6517988177226812807, 234288906808292360, 7258229264941160980, -3905721741308691767, -5804620263964321115, -753242568592673938, 6170911449531292177, 6419931473923114147, 5721446815431770062, 2685776565505598038]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_intmax_t: ");

                        for (int i = 0; i < 13; ++i)
                            printf("%ld"" ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_intmax_t() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_intmax_t(ptr);

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
//  Test 84: Sprawdzanie poprawności działania funkcji load_array_intmax_t
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji load_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t expected_array[] = {-5451801326051474316LL, -80867184748802065LL, 6235469472635968832LL, -8041562420173781613LL, 6280235697836640520LL, 252332156854649126LL, 1171644670735772499LL, -7966515773597604603LL, -3488775731340236403LL, -2021083149418100740LL, 4724549666734255398LL, 3346373732689721386LL, 2779232341760057723LL, -5788741253083747905LL, -6105899190493765813LL};

                struct array_intmax_t_t *ptr;


                printf("#####START#####");
                int res = load_array_intmax_t(&ptr, "quick.bin");           
                printf("#####END#####");

                test_error(res == 3, "Funkcja load_array_intmax_t() powinna zwrócić wartość 3; a zwróciła %d", res);

                if (!3)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_intmax_t() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 15, "Funkcja load_array_intmax_t() powinna przypisać 15 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 15, "Funkcja load_array_intmax_t() powinna przypisać 15 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 15; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-5451801326051474316, -80867184748802065, 6235469472635968832, -8041562420173781613, 6280235697836640520, 252332156854649126, 1171644670735772499, -7966515773597604603, -3488775731340236403, -2021083149418100740, 4724549666734255398, 3346373732689721386, 2779232341760057723, -5788741253083747905, -6105899190493765813]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_intmax_t: ");

                        for (int i = 0; i < 15; ++i)
                            printf("%ld"" ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_intmax_t() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_intmax_t(ptr);

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
//  Test 85: Sprawdzanie poprawności działania funkcji load_array_intmax_t
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji load_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t expected_array[] = {-5451801326051474316LL, -80867184748802065LL, 6235469472635968832LL, -8041562420173781613LL, 6280235697836640520LL, 252332156854649126LL, 1171644670735772499LL, -7966515773597604603LL, -3488775731340236403LL, -2021083149418100740LL, 4724549666734255398LL, 3346373732689721386LL, 2779232341760057723LL, -5788741253083747905LL, -6105899190493765813LL};

                struct array_intmax_t_t *ptr;


                printf("#####START#####");
                int res = load_array_intmax_t(&ptr, "tall.bin");           
                printf("#####END#####");

                test_error(res == 2, "Funkcja load_array_intmax_t() powinna zwrócić wartość 2; a zwróciła %d", res);

                if (!2)
                {
                
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(ptr != NULL, "Funkcja load_array_intmax_t() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                    test_error(ptr->size == 15, "Funkcja load_array_intmax_t() powinna przypisać 15 do pola size struktury, a przypisała %d", ptr->size);
                    test_error(ptr->capacity == 15, "Funkcja load_array_intmax_t() powinna przypisać 15 do pola size struktury, a przypisała %d", ptr->capacity);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    int ok = 0;

                    for (int i = 0; i < 15; ++i)
                        ok += (ptr->data[i] != expected_array[i]);

                    if (ok)
                    {         
                        printf("Powinno być: [-5451801326051474316, -80867184748802065, 6235469472635968832, -8041562420173781613, 6280235697836640520, 252332156854649126, 1171644670735772499, -7966515773597604603, -3488775731340236403, -2021083149418100740, 4724549666734255398, 3346373732689721386, 2779232341760057723, -5788741253083747905, -6105899190493765813]\n");

                        printf("\nTablica po wywołaniu funkcji load_array_intmax_t: ");

                        for (int i = 0; i < 15; ++i)
                            printf("%ld"" ", ptr->data[i]);            

                        printf("\n");

                        test_error(ok == 0, "Funkcja load_array_intmax_t() niepoprawnie wczytała tablicę");
                    }
                    
                    free_array_intmax_t(ptr);

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
//  Test 86: Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na 104 bajtów
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na 104 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(104);
    
    //
    // -----------
    //
    

            intmax_t expected_array[] = {4679590953437399801LL, 3151643603568899679LL, 7071089842546526161LL, -4365068391396552419LL, -6846681301775439398LL, 2525339893367268638LL, -1837942039854512273LL, -7901121112857005910LL, 8614690460757268073LL, 2790559163280384606LL, -4446666149056555858LL};

            struct array_intmax_t_t *ptr;


            printf("#####START#####");
            int res = load_array_intmax_t(&ptr, "perhaps.bin");           
            printf("#####END#####");

            test_error(res == 0, "Funkcja load_array_intmax_t() powinna zwrócić wartość 0; a zwróciła %d", res);

            if (!0)
            {
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                test_error(ptr != NULL, "Funkcja load_array_intmax_t() powinna przypisać adres zaalokowanej pamięci pod strukturę, a przypisała NULL");
                test_error(ptr->size == 11, "Funkcja load_array_intmax_t() powinna przypisać 11 do pola size struktury, a przypisała %d", ptr->size);
                test_error(ptr->capacity == 11, "Funkcja load_array_intmax_t() powinna przypisać 11 do pola size struktury, a przypisała %d", ptr->capacity);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
                int ok = 0;

                for (int i = 0; i < 11; ++i)
                    ok += (ptr->data[i] != expected_array[i]);

                if (ok)
                {         
                    printf("Powinno być: [4679590953437399801, 3151643603568899679, 7071089842546526161, -4365068391396552419, -6846681301775439398, 2525339893367268638, -1837942039854512273, -7901121112857005910, 8614690460757268073, 2790559163280384606, -4446666149056555858]\n");

                    printf("\nTablica po wywołaniu funkcji load_array_intmax_t: ");

                    for (int i = 0; i < 11; ++i)
                        printf("%ld"" ", ptr->data[i]);            

                    printf("\n");

                    test_error(ok == 0, "Funkcja load_array_intmax_t() niepoprawnie wczytała tablicę");
                }
                
                free_array_intmax_t(ptr);
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
//  Test 87: Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na 4 bajtów
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

            struct array_intmax_t_t *ptr;

            printf("#####START#####");
            int res = load_array_intmax_t(&ptr, "perhaps.bin");           
            printf("#####END#####");

            test_error(res == 4, "Funkcja load_array_intmax_t() powinna zwrócić wartość 4; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 88: Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na bajtów
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = load_array_intmax_t(NULL, "perhaps.bin");           
            printf("#####END#####");

            test_error(res == 1, "Funkcja load_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 89: Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na bajtów
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_intmax_t_t *ptr;

            printf("#####START#####");
            int res = load_array_intmax_t(&ptr, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja load_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 90: Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na bajtów
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = load_array_intmax_t(NULL, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja load_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 91: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-6, 3, 2, -9, 0, 7, 7, -2, 8, 4};

                struct array_int_t ptr = { .size = 10, .capacity = 10, .data = input_array };

                printf("#####START#####");
                int res = save_array_int(&ptr, "spell.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja save_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 92: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-5, 0, -7, -5, -8, 0, -5, -3, 7, -10, -8, 1, 6, -3, 0, -4, -4, -9, -5, 8, -5, -2, 3, -8, 10, -6, -2, -2, -9, 6, -9, -8, 7, 10, 8, 8, 0, 4, -3, -7, 10, 2, -9, -10, -4, 10, -7, -9, -1, 2, 9, -10, 9, 8, 0, 5, 2, 5, -9, -7, -4, 5, 10, 9, 1, 4, -4, -2, 2, -2, -5, 7, 10, -6, -9, -5, -4, -5, -6, -2, -5, -10, 6, -5, -7, -1, 3, 3, 7, 2, 8, -3, -7, 2, 10, -6, -7, -10, 2, -1, -5, -9, -3, -4, 4, 2, 1, -6, -3, 1, 9, 6, 1, 10, -8, 1, -7, 3, -7, -2, 4, 3, -10, 3, 3, -6, 8, -2, -6, -4, -2, 4, 10, 1, 6, 3, -6, -1, -7, 10, -1, 2, 4, 2, 8, 7, -9, 5, 9, 3, 2, -4, 2, 10, 5, 6, 7, 2, 8, 6, -7, -10, -7, -2, -3, -3, 0, -8, -9, -5, 0, -8, 2, 9, -1, 4, -1, 10, -1, -5, 6, 1, 9, 10, 3, 8, 6, -5, 1, 4, -7, 4, -10, 4, -5, -1, -2, -5, 8, 10, 4, -10, -5, 2, -6, -8, -6, -1, -3, -4, -2, -3, 2, -5, 7, -2, -8, 6, 2, 2, 3, -10, -4, 7, -10, -6, 8, 6, -8, -1, -9, 2, 9, -9, -1, -5, -7, -4, 9, 3, 10, -8, 7, 7, 10, 4, 4, -3, 1, -1, -7, -4, 7, -5, 0, -7, -6, -7, -5, 3, -4, 10, 9, 4, -2, -3, 10, 1, -9, 2, 5, -7, 10, 4, 7, -3, 6, -10, 4, 2, 2, -4, -2, 7, 2, 6, -9, -9, -2, 10, -7, 3, 3, 10, 9, -2, 9, 1, -8, 7, 2, -5, 3, 0, -1, -6, -7, 2, 8, -8, 6, -7, 0, -5, 3, 4, -5, -3, 9, -5, 0, 4, -7, 7, -8, -7, 6, 4, -8, -2, 6, -8, 2, -8, -6, 0, -3, 9, 4, -1, -10, -2, -4, 2, -7, -1, 8, -9, 5, -5, 9, 6, 8, 7, -7, 0, 3, -7, 5, -3, 9, 7, -1, 8, -3, 10, -3, 2, 10, 4, 8, 2, 6, -9, 2, 4, 2, -10, 7, 9, 3, 7, -2, -4, 5, -4, 5, -9, -9, -8, 1, 9, -9, -7, 6, 8, 10, -1, 3, -2, 6, -1, 1, -7, 8, -9, 2, 2, 1, 5, 4, 1, 1, 6, 10, -3, 10, 5, -5, -10, 1, -5, -10, 4, -2, 0, -2, -7, -1, -10, 4, -5, 7, -10, 2, -3, -2, 5, -6, 1, 7, 6, -4, -1, -1, -9, 4, 0, -10, 10, 10, 0, 6, -3, 9, 1, 1, -8, 9, 3, 8, -9, -6, -10, -9, -5, -8, 8, 10, -4, -7, -7, 2, -5, 10, -10, 3, 5, 6, 0, -10, 7, -3, -6, -8, 1, -1, 9, 0, 6, 1, 5, -1, 8, 2, -6, 7, -7, 8, -3, 10, 9, 0, 1, -9, -7, 2, 4, 10, 3, 8, -3, -1, 5, -9, 2, 6, -5, 0, -6, -5, -9, 6, 9, -7, -10, 4, -9, 5, -5, 5, -2, -4, -1, 4, 10, 0, -7, 10, 2, 3, -6, 9, -1, -10, 10, 4, 3, 0, 4, -2, 3, 0, -2, -10, -10, 10, 5, -3, -2, 6, -5, -1, 4, 7, -9, 5, 5, 3, -3, -4, -9, -6, -4, -2, -6, 3, -1, 4, -10, 6, -1, 7, -1, 2, 3, -8, -7, 4, -9, 5, 8, -5, 1, -4, 6, -6, -4, -4, -2, -10, 9, -6, -9, 5, -9, 0, 2, -10, -3, 2, 3, 4, 1, -7, -3, 2, -6, 2, -2, -3, 0, 0, 9, -10, 7, 4, 10, -9, -2, -4, 3, -9, -1, 5, 7, -9, -5, 3, -5, 5, 3, 7, 5, -4};

                struct array_int_t ptr = { .size = 645, .capacity = 645, .data = input_array };

                printf("#####START#####");
                int res = save_array_int(&ptr, "surprise.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja save_array_int() powinna zwrócić wartość 0; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 93: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-10, 6, -10, 1, -5, 2, -4, -10};

                struct array_int_t ptr = { .size = 8, .capacity = 7, .data = input_array };

                printf("#####START#####");
                int res = save_array_int(&ptr, "while.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 94: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-10, 6, -10, 1, -5, 2, -4, -10};

                struct array_int_t ptr = { .size = 8, .capacity = 0, .data = input_array };

                printf("#####START#####");
                int res = save_array_int(&ptr, "include.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 95: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-10, 6, -10, 1, -5, 2, -4, -10};

                struct array_int_t ptr = { .size = 0, .capacity = 8, .data = input_array };

                printf("#####START#####");
                int res = save_array_int(&ptr, "which.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 96: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-10, 6, -10, 1, -5, 2, -4, -10};

                struct array_int_t ptr = { .size = -8, .capacity = 8, .data = input_array };

                printf("#####START#####");
                int res = save_array_int(&ptr, "remember.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 97: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-10, 6, -10, 1, -5, 2, -4, -10};

                struct array_int_t ptr = { .size = 0, .capacity = 0, .data = input_array };

                printf("#####START#####");
                int res = save_array_int(&ptr, "push.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 98: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_int_t ptr = { .size = 8, .capacity = 8, .data = NULL };

            printf("#####START#####");
            int res = save_array_int(&ptr, "been.bin");           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 99: Sprawdzanie poprawności działania funkcji save_array_int - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji save_array_int - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    

            int input_array[] = {-10, 6, -10, 1, -5, 2, -4, -10};

            struct array_int_t ptr = { .size = 8, .capacity = 8, .data = input_array };

            printf("#####START#####");
            int res = save_array_int(&ptr, "been.bin");           
            printf("#####END#####");

            test_error(res == 2, "Funkcja save_array_int() powinna zwrócić wartość 2; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 100: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int input_array[] = {-10, 6, -10, 1, -5, 2, -4, -10};

            struct array_int_t ptr = { .size = 8, .capacity = 8, .data = input_array };

            printf("#####START#####");
            int res = save_array_int(&ptr, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 101: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = save_array_int(NULL, "been.bin");           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 102: Sprawdzanie poprawności działania funkcji save_array_int
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji save_array_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = save_array_int(NULL, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_int() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 103: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {0.000000, -1.000000, -1.000000, 1.000000, -7.000000, 1.000000, -7.000000, -9.000000, -2.000000};

                struct array_double_t ptr = { .size = 9, .capacity = 9, .data = input_array };

                printf("#####START#####");
                int res = save_array_double(&ptr, "mountain.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja save_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 104: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {3.000000, -1.000000, 2.000000, 4.000000, 4.000000, -7.000000, 5.000000, 9.000000, 2.000000, -10.000000, 3.000000, 6.000000, -2.000000, 1.000000, 7.000000, 3.000000, -1.000000, 4.000000, 8.000000, -4.000000, -5.000000, -1.000000, 3.000000, -9.000000, 6.000000, -3.000000, 8.000000, -7.000000, -5.000000, 8.000000, 3.000000, -8.000000, -1.000000, -5.000000, -1.000000, -8.000000, -5.000000, -1.000000, 9.000000, -2.000000, 4.000000, -4.000000, 9.000000, -1.000000, -5.000000, -6.000000, 5.000000, -9.000000, 10.000000, -3.000000, 0.000000, -9.000000, -1.000000, 8.000000, 7.000000, -8.000000, 3.000000, -3.000000, -6.000000, -4.000000, 0.000000, 8.000000, -1.000000, 3.000000, 7.000000, -9.000000, -4.000000, 6.000000, -4.000000, 10.000000, -1.000000, -4.000000, -2.000000, -4.000000, 10.000000, 8.000000, 9.000000, -10.000000, -5.000000, 8.000000, -1.000000, 10.000000, 2.000000, 4.000000, -1.000000, 7.000000, -8.000000, 5.000000, -3.000000, 2.000000, 6.000000, 6.000000, -5.000000, -4.000000, 3.000000, 4.000000, -1.000000, -6.000000, 4.000000, 1.000000, -2.000000, -3.000000, 3.000000, -4.000000, -10.000000, -2.000000, 4.000000, -10.000000, 9.000000, 9.000000, 9.000000, 5.000000, -1.000000, 6.000000, 8.000000, 3.000000, -8.000000, 9.000000, 9.000000, 6.000000, -3.000000, 8.000000, -1.000000, -9.000000, -3.000000, -4.000000, 6.000000, 0.000000, -2.000000, -9.000000, 6.000000, -4.000000, -8.000000, 8.000000, 2.000000, 4.000000, 10.000000, -4.000000, -4.000000, -10.000000, -9.000000, -4.000000, 2.000000, 4.000000, 9.000000, -1.000000, -4.000000, 0.000000, 9.000000, 9.000000, 10.000000, 0.000000, -8.000000, 0.000000, -8.000000, 10.000000, 10.000000, -3.000000, -2.000000, -8.000000, 1.000000, 1.000000, 5.000000, 3.000000, -9.000000, 8.000000, -6.000000, 7.000000, 5.000000, -3.000000, -10.000000, -4.000000, -1.000000, -6.000000, 10.000000, 0.000000, 9.000000, -8.000000, -4.000000, -2.000000, -5.000000, 8.000000, 0.000000, 0.000000, 10.000000, 5.000000, 4.000000, -3.000000, 1.000000, 10.000000, -2.000000, -1.000000, 7.000000, -5.000000, 2.000000, 6.000000, -5.000000, -3.000000, -10.000000, 10.000000, -8.000000, -5.000000, -7.000000, -5.000000, -3.000000, 7.000000, -9.000000, 0.000000, -5.000000, -6.000000, -2.000000, -5.000000, -7.000000, 7.000000, 9.000000, 10.000000, 4.000000, -5.000000, 4.000000, -4.000000, 2.000000, 0.000000, 4.000000, -4.000000, 7.000000, 8.000000, 1.000000, 6.000000, 3.000000, -9.000000, 4.000000, 4.000000, 0.000000, 8.000000, 9.000000, 0.000000, 0.000000, 9.000000, 1.000000, 9.000000, -9.000000, 3.000000, 7.000000, 3.000000, 7.000000, 2.000000, 4.000000, 7.000000, 6.000000, -6.000000, 10.000000, 9.000000, 1.000000, 3.000000, 8.000000, -4.000000, 3.000000, -4.000000, -7.000000, 4.000000, 6.000000, -6.000000, 9.000000, -2.000000, -3.000000, -10.000000, 7.000000, -6.000000, 6.000000, 5.000000, -9.000000, -1.000000, 10.000000, -8.000000, -7.000000, -9.000000, -3.000000, 1.000000, -2.000000, 6.000000, 4.000000, 9.000000, -5.000000, 3.000000, -5.000000, -8.000000, 0.000000, -9.000000, -1.000000, -2.000000, 1.000000, 10.000000, 7.000000, -10.000000, 1.000000, -10.000000, -1.000000, -5.000000, 10.000000, -1.000000, 7.000000, 7.000000, 7.000000, 10.000000, -3.000000, -3.000000, 7.000000, 5.000000, -7.000000, -4.000000, -8.000000, -7.000000, 2.000000, -2.000000, -6.000000, 5.000000, 8.000000, -3.000000, -9.000000, -3.000000, -5.000000, 0.000000, 2.000000, -3.000000, 8.000000, -8.000000, 8.000000, 10.000000, -2.000000, 7.000000, 1.000000, -9.000000, 3.000000, -3.000000, -4.000000, 4.000000, 1.000000, 10.000000, -4.000000, 6.000000, -5.000000, 4.000000, -7.000000, 9.000000, -9.000000, 8.000000, -7.000000, -6.000000, -10.000000, 0.000000, 5.000000, -3.000000, -1.000000, -9.000000, 2.000000, 7.000000, -10.000000, -1.000000, 2.000000, -2.000000, -9.000000, 9.000000, 3.000000, -1.000000, 9.000000, 7.000000, -6.000000, -3.000000, 10.000000, -1.000000, 3.000000, 5.000000, -4.000000, -10.000000, 10.000000, 8.000000, 8.000000, 9.000000, -2.000000, 8.000000, 10.000000, -1.000000, 1.000000, -10.000000, 6.000000, -8.000000, -6.000000, -5.000000, -2.000000, 4.000000, -5.000000, 0.000000, 4.000000, -5.000000, -2.000000, 9.000000, 9.000000, -7.000000, 6.000000, 5.000000, 4.000000, 10.000000, 0.000000, 9.000000, -2.000000, -7.000000, 0.000000, -2.000000, -3.000000, -8.000000, 7.000000, -2.000000, -2.000000, -2.000000, 10.000000, -5.000000, 0.000000, 0.000000, -7.000000, -7.000000, 3.000000, -4.000000, 6.000000, 9.000000, 9.000000, 10.000000, 9.000000, -3.000000, 6.000000, 7.000000, -5.000000, 10.000000, 0.000000, 9.000000, -10.000000, 2.000000, 2.000000, 5.000000, -7.000000, -10.000000, -6.000000, 9.000000, -8.000000, 5.000000, -6.000000, -2.000000, -6.000000, 9.000000, -8.000000, -10.000000, 2.000000, 2.000000, -2.000000, 6.000000, -1.000000, -10.000000, -10.000000, -8.000000, 2.000000, 1.000000, 4.000000, -3.000000, 2.000000, 4.000000, 7.000000, 4.000000, 2.000000, -2.000000, 2.000000, 2.000000, 5.000000, -7.000000, 5.000000, -5.000000, -10.000000, -3.000000, 8.000000, 0.000000, 3.000000, 6.000000, -10.000000, -5.000000, -9.000000, -8.000000, 2.000000, -7.000000, 10.000000, -7.000000, -2.000000, 8.000000, 2.000000, 10.000000, 3.000000, -7.000000, -8.000000, 0.000000, -7.000000, 0.000000, 4.000000, 0.000000, -3.000000, 3.000000, -10.000000, 6.000000, -5.000000, 9.000000, -6.000000, -8.000000, 6.000000, -8.000000, 2.000000, 7.000000, -4.000000, -1.000000, 2.000000, -6.000000, 2.000000, -7.000000, -3.000000, -1.000000, -5.000000, 10.000000, 3.000000, 10.000000, -3.000000, -5.000000, 6.000000, -9.000000, 10.000000, 2.000000, -1.000000, -4.000000, 0.000000, -10.000000, 2.000000, -3.000000, 5.000000, -10.000000, -1.000000, -2.000000, 4.000000, -1.000000, -2.000000, 9.000000, 3.000000, 5.000000, 6.000000, -1.000000, -5.000000, 7.000000, -7.000000, -4.000000, -4.000000, -6.000000, -4.000000, -5.000000, -6.000000, -9.000000, -4.000000, 4.000000, -10.000000, -3.000000, -7.000000, 9.000000, -3.000000, -7.000000, -9.000000, -9.000000, -1.000000, 2.000000, -10.000000, -2.000000, 8.000000, 9.000000, -1.000000, 0.000000, -5.000000, 8.000000, -6.000000, 2.000000, 1.000000, -3.000000, -10.000000, 10.000000, 6.000000, -10.000000, 8.000000, -5.000000, -6.000000, 1.000000, -2.000000, -2.000000, 6.000000, -6.000000, 6.000000, 5.000000, 6.000000, 2.000000, 6.000000, 7.000000, -6.000000, -9.000000, 7.000000, 6.000000, -8.000000, 8.000000, 8.000000, 8.000000, 8.000000, -1.000000, 1.000000, -1.000000, 2.000000, -8.000000, 9.000000, -5.000000, 4.000000, 1.000000, 1.000000, 3.000000, -9.000000, 0.000000};

                struct array_double_t ptr = { .size = 622, .capacity = 622, .data = input_array };

                printf("#####START#####");
                int res = save_array_double(&ptr, "ring.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja save_array_double() powinna zwrócić wartość 0; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 105: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {3.000000, -7.000000, -8.000000, -8.000000, 5.000000, 7.000000, -8.000000, 6.000000};

                struct array_double_t ptr = { .size = 8, .capacity = 7, .data = input_array };

                printf("#####START#####");
                int res = save_array_double(&ptr, "any.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 106: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {3.000000, -7.000000, -8.000000, -8.000000, 5.000000, 7.000000, -8.000000, 6.000000};

                struct array_double_t ptr = { .size = 8, .capacity = 0, .data = input_array };

                printf("#####START#####");
                int res = save_array_double(&ptr, "right.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 107: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {3.000000, -7.000000, -8.000000, -8.000000, 5.000000, 7.000000, -8.000000, 6.000000};

                struct array_double_t ptr = { .size = 0, .capacity = 8, .data = input_array };

                printf("#####START#####");
                int res = save_array_double(&ptr, "base.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 108: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {3.000000, -7.000000, -8.000000, -8.000000, 5.000000, 7.000000, -8.000000, 6.000000};

                struct array_double_t ptr = { .size = -8, .capacity = 8, .data = input_array };

                printf("#####START#####");
                int res = save_array_double(&ptr, "long.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 109: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double input_array[] = {3.000000, -7.000000, -8.000000, -8.000000, 5.000000, 7.000000, -8.000000, 6.000000};

                struct array_double_t ptr = { .size = 0, .capacity = 0, .data = input_array };

                printf("#####START#####");
                int res = save_array_double(&ptr, "between.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 110: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_double_t ptr = { .size = 8, .capacity = 8, .data = NULL };

            printf("#####START#####");
            int res = save_array_double(&ptr, "warm.bin");           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 111: Sprawdzanie poprawności działania funkcji save_array_double - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji save_array_double - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    

            double input_array[] = {3.000000, -7.000000, -8.000000, -8.000000, 5.000000, 7.000000, -8.000000, 6.000000};

            struct array_double_t ptr = { .size = 8, .capacity = 8, .data = input_array };

            printf("#####START#####");
            int res = save_array_double(&ptr, "warm.bin");           
            printf("#####END#####");

            test_error(res == 2, "Funkcja save_array_double() powinna zwrócić wartość 2; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 112: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            double input_array[] = {3.000000, -7.000000, -8.000000, -8.000000, 5.000000, 7.000000, -8.000000, 6.000000};

            struct array_double_t ptr = { .size = 8, .capacity = 8, .data = input_array };

            printf("#####START#####");
            int res = save_array_double(&ptr, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 113: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = save_array_double(NULL, "warm.bin");           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 114: Sprawdzanie poprawności działania funkcji save_array_double
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania funkcji save_array_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = save_array_double(NULL, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_double() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 115: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t input_array[] = {-7354053895445103837LL, -8027160569929525008LL, 6895142461017110229LL, 1290918348389898267LL, 8263084270094403103LL, -2336602295404451078LL, -4158576228609248231LL, 8242130730109916065LL, 2456121769244554455LL, 6290858794600301476LL};

                struct array_intmax_t_t ptr = { .size = 10, .capacity = 10, .data = input_array };

                printf("#####START#####");
                int res = save_array_intmax_t(&ptr, "other.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja save_array_intmax_t() powinna zwrócić wartość 0; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 116: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t input_array[] = {-1380241054821576687LL, -4529837193271224336LL, 4557597672191606122LL, -453874259844939927LL, -3268012269202585798LL, -6058864389103651123LL, -978864369974626044LL, -1905228575636732487LL, 4767126227679923751LL, -4334687064478328035LL, 7197666743090098310LL, 1646196613707411353LL, -519394151368746131LL, -4232227722635082144LL, 7923446137233625775LL, -2740088068086793601LL, 3151796267089435237LL, -2331342712305528890LL, -8812488085834210285LL, 4147955722455031993LL, 7114395590442280834LL, 7531050956536815721LL, -8736233878143046340LL, 8435974787153251796LL, -382346037610637606LL, 1124514100056845289LL, 6749048916591189352LL, 8785068191960067332LL, 8088589765211280649LL, -3411954162788450088LL, -6875827595566442655LL, 7207865819060278014LL, 181932744780389675LL, 4630791277034096696LL, -8650675179350198609LL, 2629332936317746072LL, 1232840966441575516LL, -8417345572319195308LL, 2512812097107701279LL, 260950953554087776LL, 5946905498821821521LL, -6229095465968468831LL, -6421531424757263609LL, -4456916500611054698LL, 7414627965895635128LL, -3633569323334799271LL, -2642395098649220758LL, -8292025110839492655LL, 4870542267305491517LL, -1881819868698618058LL, -8531911366224855144LL, -8851290270031242402LL, 2872488632150161556LL, -7188681303232050235LL, 311620032219209118LL, 5698579916490114071LL, 5176164838421124311LL, 6791315043227093219LL, 5585981632216964003LL, -8257058790529591239LL, 8454167889233578589LL, -8865542232064646222LL, 8840026455241648439LL, -186290135631575654LL, -187138159144284206LL, 4920955285723252648LL, 6258965329723246283LL, 8861465276152629732LL, 5386695815902340817LL, -6000775096436665680LL, -6874833778703851767LL, 1622466582009633634LL, -2094325007530453951LL, -4045985218928318321LL, 5044859705756753802LL, -6276897441346847729LL, 1883598226951386678LL, 939203491073275983LL, 4741546149141396753LL, 1605244731685708154LL, -7155237405623418622LL, 7782574246878971061LL, 3927440096916337079LL, 489103481486328587LL, -984205758489028731LL, -1299334526219145155LL, -5487292487469279049LL, -3777013900125208008LL, -8055335548522194755LL, -8636081212268525976LL, 2376510671628621737LL, -8617132486388007344LL, -1815265006237245660LL, 6864310764403155034LL, 163623780699008365LL, -4335000982396800516LL, -1108504410482417907LL, 8337888901082720217LL, -8198280015596012091LL, 9098411150219591660LL, -7272396290525411804LL, -6554858726439806697LL, 8158937496383990456LL, 5087930857928626500LL, -1312400015956154799LL, -1138874866133001094LL, -7832203799969728394LL, 1802377659279063806LL, -5223782776174139403LL, -6977525116111688740LL, -3685063772577240456LL, -512872778275015241LL, -3773426379843687683LL, -6385747934590182943LL, 3739616238434823244LL, 349937110846817660LL, 2763127480699092370LL, 4074794624420935257LL, -1275509733964188974LL, -2746522695415958775LL, 7286059947166632804LL, -3671075279419843659LL, -5381299175368466846LL, 1366404238975173028LL, 7338458816005053289LL, -1973197337246342730LL, 5184559915575911995LL, 8587530773970143300LL, 1272278784537753255LL, 7675394825532315555LL, -2345209734511325827LL, -3088888374779955131LL, 3023904240676710688LL, 7693431532485110378LL, -8125573361054173497LL, 4085019957047862952LL, 6239191015201211831LL, -7811868195419733687LL, -6097747622629851739LL, -7032736646564594976LL, 1389733295801320485LL, 6255902000297606997LL, -8544929225199089191LL, 2999671588065037816LL, -6997659051132612059LL, 5987514259576101058LL, -5176390893610080100LL, -6159672572424031354LL, -9202559398673002673LL, -8578050891180079623LL, 2782599851250118014LL, -4506577015216319090LL, -7684516586953965144LL, -7374308701754467277LL, -3278034468504746557LL, -7299124306821256921LL, -3762847502044032143LL, 725790158994415225LL, -1917665353765033541LL, -153558959310614583LL, 682983062270652100LL, -2451490796266533279LL, -2586052950076547625LL, -8105449572095645311LL, -3504550426226753939LL, -658374698452465302LL, -662219527601807563LL, 500334233986814421LL, 8553671527380156533LL, 5892908511626513112LL, 820042624004354912LL, -7374256522489285195LL, -3801546109505560964LL, 4959663232839952476LL, 2643701633425662120LL, 9168038878528301925LL, 8761357198750984702LL, -4386097433612846019LL, -5126060654395174154LL, 7270319419235369245LL, 2372528887488273896LL, -7359208198076630720LL, -6697339971521772339LL, 4860830014924177376LL, 4408746801383289017LL, -2124970046875618659LL, 1271805668773396600LL, -5293168121693603998LL, -2221188686908120778LL, 4877086800042898610LL, -9074723645092536016LL, -499995453643581755LL, 8610217521470697568LL, 5985344501407848330LL, -4742899461629750554LL, 9067250602794188689LL, 2710965205827223803LL, -3822034730850025402LL, -2210463023599347486LL, 5306981889381348542LL, 6934326657793240622LL, -8519830058057787349LL, 6079986658940966317LL, -2647656322517191945LL, 3640506310407081353LL, 4027573187109030536LL, -5120179454467338609LL, 606158899988380364LL, -6324945613225440376LL, 3819888780660241545LL, -1851419362396133574LL, 191558228522297462LL, -6451210988848279079LL, -2950706188638243100LL, 423244943289530583LL, 5827288485452676157LL, 4065548677068467720LL, 2056911418804982000LL, 4040990627870261848LL, -4088794989005659532LL, -8952865345570871057LL};

                struct array_intmax_t_t ptr = { .size = 221, .capacity = 221, .data = input_array };

                printf("#####START#####");
                int res = save_array_intmax_t(&ptr, "original.bin");           
                printf("#####END#####");

                test_error(res == 0, "Funkcja save_array_intmax_t() powinna zwrócić wartość 0; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 117: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t input_array[] = {-3445414678302000922LL, -8109995898788398578LL, 552578305392675426LL, 1698034234729103996LL, -8694925803485468603LL, 6984035051555545616LL, -3640006187753940387LL, -1311977610272453321LL};

                struct array_intmax_t_t ptr = { .size = 8, .capacity = 7, .data = input_array };

                printf("#####START#####");
                int res = save_array_intmax_t(&ptr, "since.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 118: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t input_array[] = {-3445414678302000922LL, -8109995898788398578LL, 552578305392675426LL, 1698034234729103996LL, -8694925803485468603LL, 6984035051555545616LL, -3640006187753940387LL, -1311977610272453321LL};

                struct array_intmax_t_t ptr = { .size = 8, .capacity = 0, .data = input_array };

                printf("#####START#####");
                int res = save_array_intmax_t(&ptr, "root.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 119: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t input_array[] = {-3445414678302000922LL, -8109995898788398578LL, 552578305392675426LL, 1698034234729103996LL, -8694925803485468603LL, 6984035051555545616LL, -3640006187753940387LL, -1311977610272453321LL};

                struct array_intmax_t_t ptr = { .size = 0, .capacity = 8, .data = input_array };

                printf("#####START#####");
                int res = save_array_intmax_t(&ptr, "whether.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 120: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t input_array[] = {-3445414678302000922LL, -8109995898788398578LL, 552578305392675426LL, 1698034234729103996LL, -8694925803485468603LL, 6984035051555545616LL, -3640006187753940387LL, -1311977610272453321LL};

                struct array_intmax_t_t ptr = { .size = -8, .capacity = 8, .data = input_array };

                printf("#####START#####");
                int res = save_array_intmax_t(&ptr, "guide.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 121: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                intmax_t input_array[] = {-3445414678302000922LL, -8109995898788398578LL, 552578305392675426LL, 1698034234729103996LL, -8694925803485468603LL, 6984035051555545616LL, -3640006187753940387LL, -1311977610272453321LL};

                struct array_intmax_t_t ptr = { .size = 0, .capacity = 0, .data = input_array };

                printf("#####START#####");
                int res = save_array_intmax_t(&ptr, "gray.bin");           
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 122: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct array_intmax_t_t ptr = { .size = 8, .capacity = 8, .data = NULL };

            printf("#####START#####");
            int res = save_array_intmax_t(&ptr, "air.bin");           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 123: Sprawdzanie poprawności działania funkcji save_array_intmax_t - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania funkcji save_array_intmax_t - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    

            intmax_t input_array[] = {-3445414678302000922LL, -8109995898788398578LL, 552578305392675426LL, 1698034234729103996LL, -8694925803485468603LL, 6984035051555545616LL, -3640006187753940387LL, -1311977610272453321LL};

            struct array_intmax_t_t ptr = { .size = 8, .capacity = 8, .data = input_array };

            printf("#####START#####");
            int res = save_array_intmax_t(&ptr, "air.bin");           
            printf("#####END#####");

            test_error(res == 2, "Funkcja save_array_intmax_t() powinna zwrócić wartość 2; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 124: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            intmax_t input_array[] = {-3445414678302000922LL, -8109995898788398578LL, 552578305392675426LL, 1698034234729103996LL, -8694925803485468603LL, 6984035051555545616LL, -3640006187753940387LL, -1311977610272453321LL};

            struct array_intmax_t_t ptr = { .size = 8, .capacity = 8, .data = input_array };

            printf("#####START#####");
            int res = save_array_intmax_t(&ptr, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 125: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = save_array_intmax_t(NULL, "air.bin");           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 126: Sprawdzanie poprawności działania funkcji save_array_intmax_t
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania funkcji save_array_intmax_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = save_array_intmax_t(NULL, NULL);           
            printf("#####END#####");

            test_error(res == 1, "Funkcja save_array_intmax_t() powinna zwrócić wartość 1; a zwróciła %d", res);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
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
//  Test 2: Reakcja na brak pamięci (limit sterty ustawiono na 31 bajtów)
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci (limit sterty ustawiono na 31 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(31);
    
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
//  Test 3: Reakcja na brak pamięci (limit sterty ustawiono na 31 bajtów)
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci (limit sterty ustawiono na 31 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(31);
    
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
//  Test 4: Reakcja na brak możliwości otwarcia pliku (funkcja fopen zwróci NULL przy drugim wywołaniu)
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak możliwości otwarcia pliku (funkcja fopen zwróci NULL przy drugim wywołaniu)", __LINE__);

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
//  Test 5: Reakcja na brak możliwości otwarcia pliku (funkcja fopen zwróci NULL przy drugim wywołaniu)
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak możliwości otwarcia pliku (funkcja fopen zwróci NULL przy drugim wywołaniu)", __LINE__);

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
            UTEST1, // Sprawdzanie poprawności działania funkcji create_array_int
            UTEST2, // Sprawdzanie poprawności działania funkcji create_array_int
            UTEST3, // Sprawdzanie poprawności działania funkcji create_array_int
            UTEST4, // Sprawdzanie poprawności działania funkcji create_array_int
            UTEST5, // Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 156 bajtów)
            UTEST6, // Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST7, // Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST8, // Sprawdzanie reakcji funkcji create_array_int na limit pamięci (limit sterty ustawiono na 71 bajtów)
            UTEST9, // Sprawdzanie poprawności działania funkcji create_array_double
            UTEST10, // Sprawdzanie poprawności działania funkcji create_array_double
            UTEST11, // Sprawdzanie poprawności działania funkcji create_array_double
            UTEST12, // Sprawdzanie poprawności działania funkcji create_array_double
            UTEST13, // Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 136 bajtów)
            UTEST14, // Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST15, // Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST16, // Sprawdzanie reakcji funkcji create_array_double na limit pamięci (limit sterty ustawiono na 83 bajtów)
            UTEST17, // Sprawdzanie poprawności działania funkcji create_array_intmax_t
            UTEST18, // Sprawdzanie poprawności działania funkcji create_array_intmax_t
            UTEST19, // Sprawdzanie poprawności działania funkcji create_array_intmax_t
            UTEST20, // Sprawdzanie poprawności działania funkcji create_array_intmax_t
            UTEST21, // Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 256 bajtów)
            UTEST22, // Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST23, // Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 16 bajtów)
            UTEST24, // Sprawdzanie reakcji funkcji create_array_intmax_t na limit pamięci (limit sterty ustawiono na 33 bajtów)
            UTEST25, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST26, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST27, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST28, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST29, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST30, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST31, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST32, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST33, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST34, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST35, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST36, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST37, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST38, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST39, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST40, // Sprawdzanie poprawności działania funkcji sort_array_int
            UTEST41, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST42, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST43, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST44, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST45, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST46, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST47, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST48, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST49, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST50, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST51, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST52, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST53, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST54, // Sprawdzanie poprawności działania funkcji sort_array_double
            UTEST55, // Sprawdzanie poprawności działania funkcji sort_array_intmax_t
            UTEST56, // Sprawdzanie poprawności działania funkcji sort_array_intmax_t
            UTEST57, // Sprawdzanie poprawności działania funkcji sort_array_intmax_t
            UTEST58, // Sprawdzanie poprawności działania funkcji load_array_int
            UTEST59, // Sprawdzanie poprawności działania funkcji load_array_int
            UTEST60, // Sprawdzanie poprawności działania funkcji load_array_int
            UTEST61, // Sprawdzanie poprawności działania funkcji load_array_int
            UTEST62, // Sprawdzanie poprawności działania funkcji load_array_int
            UTEST63, // Sprawdzanie poprawności działania funkcji load_array_int
            UTEST64, // Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na 40 bajtów
            UTEST65, // Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na 32 bajtów
            UTEST66, // Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na bajtów
            UTEST67, // Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na bajtów
            UTEST68, // Sprawdzanie poprawności działania funkcji load_array_int - limit pamięci ustawiony na bajtów
            UTEST69, // Sprawdzanie poprawności działania funkcji load_array_double
            UTEST70, // Sprawdzanie poprawności działania funkcji load_array_double
            UTEST71, // Sprawdzanie poprawności działania funkcji load_array_double
            UTEST72, // Sprawdzanie poprawności działania funkcji load_array_double
            UTEST73, // Sprawdzanie poprawności działania funkcji load_array_double
            UTEST74, // Sprawdzanie poprawności działania funkcji load_array_double
            UTEST75, // Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na 96 bajtów
            UTEST76, // Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na 39 bajtów
            UTEST77, // Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na bajtów
            UTEST78, // Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na bajtów
            UTEST79, // Sprawdzanie poprawności działania funkcji load_array_double - limit pamięci ustawiony na bajtów
            UTEST80, // Sprawdzanie poprawności działania funkcji load_array_intmax_t
            UTEST81, // Sprawdzanie poprawności działania funkcji load_array_intmax_t
            UTEST82, // Sprawdzanie poprawności działania funkcji load_array_intmax_t
            UTEST83, // Sprawdzanie poprawności działania funkcji load_array_intmax_t
            UTEST84, // Sprawdzanie poprawności działania funkcji load_array_intmax_t
            UTEST85, // Sprawdzanie poprawności działania funkcji load_array_intmax_t
            UTEST86, // Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na 104 bajtów
            UTEST87, // Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na 4 bajtów
            UTEST88, // Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na bajtów
            UTEST89, // Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na bajtów
            UTEST90, // Sprawdzanie poprawności działania funkcji load_array_intmax_t - limit pamięci ustawiony na bajtów
            UTEST91, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST92, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST93, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST94, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST95, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST96, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST97, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST98, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST99, // Sprawdzanie poprawności działania funkcji save_array_int - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
            UTEST100, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST101, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST102, // Sprawdzanie poprawności działania funkcji save_array_int
            UTEST103, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST104, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST105, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST106, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST107, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST108, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST109, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST110, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST111, // Sprawdzanie poprawności działania funkcji save_array_double - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
            UTEST112, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST113, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST114, // Sprawdzanie poprawności działania funkcji save_array_double
            UTEST115, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST116, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST117, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST118, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST119, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST120, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST121, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST122, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST123, // Sprawdzanie poprawności działania funkcji save_array_intmax_t - brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
            UTEST124, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST125, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
            UTEST126, // Sprawdzanie poprawności działania funkcji save_array_intmax_t
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
            test_summary(126); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST2, // Reakcja na brak pamięci (limit sterty ustawiono na 31 bajtów)
            MTEST3, // Reakcja na brak pamięci (limit sterty ustawiono na 31 bajtów)
            MTEST4, // Reakcja na brak możliwości otwarcia pliku (funkcja fopen zwróci NULL przy drugim wywołaniu)
            MTEST5, // Reakcja na brak możliwości otwarcia pliku (funkcja fopen zwróci NULL przy drugim wywołaniu)
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