/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Lista jednokierunkowa
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-06-01 11:10:47.238243
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
//  Test 1: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    
        
            struct linked_list_t *ll = ll_create();
            
            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(ll->head == NULL, "Funkcja create() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja create() powinna ustawić wartość pola tail na NULL");             

            free(ll);

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
//  Test 2: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                struct linked_list_t *ll = ll_create();
        
                test_error(ll == NULL, "Funkcja create() powinna zwrócić NULL");

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
//  Test 3: Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 8 bajtów)
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 8 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(8);
    
    //
    // -----------
    //
    
        
                struct linked_list_t *ll = ll_create();
        
                test_error(ll == NULL, "Funkcja create() powinna zwrócić NULL");

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
//  Test 4: Sprawdzanie poprawności działania funkcji push_back
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji push_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-2, 8, -5, 5, 4, 2, 8, -7, -7};

            struct linked_list_t *ll = ll_create();
            
            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     
                    
            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");
            
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    
            
            
            for (int i = 1; i < 9; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
            }


            struct node_t *node = ll->head;
                
            for (int i = 0; i < 9; ++i)
            {
                test_error(node->data == *(tab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

            err_code = ll_push_back(NULL, *(tab));
            test_error(err_code == 1, "Funkcja ll_push_back() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);
            
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_clear(ll);
            free(ll);
            
            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 16 bajtów)
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

            int tab[] = {-2, 8, -5, 5, 4, 2, 8, -7, -7};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 2, "Funkcja ll_push_back() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(ll->head == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola tail na NULL");        
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 160 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 160 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(160);
    
    //
    // -----------
    //
    

            int tab[] = {-2, 8, -5, 5, 4, 2, 8, -7, -7};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


            for (int i = 1; i < 9; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
            }

            err_code = ll_push_back(ll, *tab);
            
            struct node_t *old_head = ll->head;
            struct node_t *old_tail = ll->tail;

            test_error(err_code == 2, "Funkcja ll_push_back() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(ll->head == old_head, "Funkcja ll_push_back() nie powinna modyfikować wartości pola head");
            test_error(ll->tail == old_tail, "Funkcja ll_push_back() nie powinna modyfikować wartości pola tail");        
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)   

            struct node_t *node = ll->head;

            for (int i = 0; i < 9; ++i)
            {
                test_error(node->data == *(tab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

            err_code = ll_push_back(NULL, *(tab));
            test_error(err_code == 1, "Funkcja ll_push_back() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_clear(ll);
            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji push_front
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji push_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-4, -8, -2, -10, -6, 7};
            int rtab[] = {7, -6, -10, -2, -8, -4};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_front(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_front() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_front() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_front() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_front() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_front() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_front() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_front() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_front() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


            for (int i = 1; i < 6; ++i)
            {
                struct node_t *old_head = ll->head;

                err_code = ll_push_front(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_front() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                test_error(ll->head->next == old_head, "Funkcja ll_push_front() powinna ustawić wartość pola next w polu head na wskaźnik do poprzedniej struktury head");  
                test_error(ll->head->data == *(tab + i), "Funkcja ll_push_front() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->head->data);
            }


            struct node_t *node = ll->head;

            for (int i = 0; i < 6; ++i)
            {
                test_error(node->data == *(rtab + i), "Wartość zapisana pod ineksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(rtab + i), node->data);
                node = node->next;
            }

            err_code = ll_push_front(NULL, *(tab));
            test_error(err_code == 1, "Funkcja ll_push_front() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_clear(ll);
            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji push_front (limit sterty ustawiono na 16 bajtów)
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji push_front (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

            int tab[] = {-4, -8, -2, -10, -6, 7};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_front(ll, *tab);
            test_error(err_code == 2, "Funkcja ll_push_front() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(ll->head == NULL, "Funkcja ll_push_front() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_push_front() powinna ustawić wartość pola tail na NULL");        
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji push_front (limit sterty ustawiono na 112 bajtów)
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji push_front (limit sterty ustawiono na 112 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(112);
    
    //
    // -----------
    //
    

            int tab[] = {-4, -8, -2, -10, -6, 7};
            int rtab[] = {7, -6, -10, -2, -8, -4};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_front(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_front() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_front() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_front() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_front() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_front() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_front() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_front() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_front() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


            for (int i = 1; i < 6; ++i)
            {
                struct node_t *old_head = ll->head;

                err_code = ll_push_front(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_front() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                test_error(ll->head->next == old_head, "Funkcja ll_push_front() powinna ustawić wartość pola next w polu head na wskaźnik do poprzedniej struktury head");  
                test_error(ll->head->data == *(tab + i), "Funkcja ll_push_front() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->head->data);
            }

            err_code = ll_push_front(ll, *tab);

            struct node_t *old_head = ll->head;
            struct node_t *old_tail = ll->tail;

            test_error(err_code == 2, "Funkcja ll_push_front() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(ll->head == old_head, "Funkcja ll_push_front() nie powinna modyfikować wartości pola head");
            test_error(ll->tail == old_tail, "Funkcja ll_push_front() nie powinna modyfikować wartości pola tail");        
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)   

            struct node_t *node = ll->head;

            for (int i = 0; i < 6; ++i)
            {
                test_error(node->data == *(rtab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

            err_code = ll_push_front(NULL, *(tab));
            test_error(err_code == 1, "Funkcja ll_push_front() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_clear(ll);
            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji ll_pop_back
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji ll_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {2, -9, -9, 2, -6, 10, 1, -5};
            int rtab[] = {-5, 1, 10, -6, 2, -9, -9, 2};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


            for (int i = 1; i < 8; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
            }

            ll_pop_back(NULL, &err_code);                
            test_error(err_code == 1, "Funkcja ll_pop_back() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            struct node_t *node = ll->head;

            for (int i = 0; i < 8; ++i)
            {
                test_error(node->data == *(tab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 8 - 1; ++i)
            {
                int err_code = 1;                
                int value = ll_pop_back(ll, &err_code);                
                test_error(err_code == 0, "Funkcja ll_pop_back() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
                test_error(value == *(rtab + i), "Funkcja ll_pop_back() powinna zwrócić wartość %d, a a zwróciła %d", *(rtab + i), value);
                test_error(ll->tail->next == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola next w polu tail na NULL");  
                
                struct node_t *node = ll->head;
        
                for (int j = 0; j < 8 - i - 1; ++j)
                {
                    test_error(node->data == *(tab + j), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", j, *(tab + j), node->data);
                    node = node->next;
                }
                            
            }

            err_code = 1;                
            int value = ll_pop_back(ll, &err_code);                
            test_error(err_code == 0, "Funkcja ll_pop_back() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
            test_error(value == *tab, "Funkcja ll_pop_back() powinna zwrócić wartość %d, a a zwróciła %d", *rtab, value);
            test_error(ll->head == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            ll_pop_back(ll, &err_code);                
            test_error(err_code == 1, "Funkcja ll_pop_back() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji ll_pop_back
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji ll_pop_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {2, -9, -9, 2, -6, 10, 1, -5};
            int rtab[] = {-5, 1, 10, -6, 2, -9, -9, 2};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


            for (int i = 1; i < 8; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
            }

            ll_pop_back(NULL, NULL);                

            struct node_t *node = ll->head;

            for (int i = 0; i < 8; ++i)
            {
                test_error(node->data == *(tab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 8 - 1; ++i)
            {
                int value = ll_pop_back(ll, NULL);                
                test_error(value == *(rtab + i), "Funkcja ll_pop_back() powinna zwrócić wartość %d, a a zwróciła %d", *(rtab + i), value);
                test_error(ll->tail->next == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola next w polu tail na NULL");  

                struct node_t *node = ll->head;

                for (int j = 0; j < 8 - i - 1; ++j)
                {
                    test_error(node->data == *(tab + j), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", j, *(tab + j), node->data);
                    node = node->next;
                }

            }

            int value = ll_pop_back(ll, NULL);                
            test_error(value == *tab, "Funkcja ll_pop_back() powinna zwrócić wartość %d, a a zwróciła %d", *rtab, value);
            test_error(ll->head == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            ll_pop_back(ll, NULL);                

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji ll_pop_front
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji ll_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-1, 5, 3, -1, 5, -5, -5, 7, -10};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


            for (int i = 1; i < 9; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
            }

            ll_pop_front(NULL, &err_code);                
            test_error(err_code == 1, "Funkcja ll_pop_front() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            struct node_t *node = ll->head;

            for (int i = 0; i < 9; ++i)
            {
                test_error(node->data == *(tab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 9 - 1; ++i)
            {
                int err_code = 1;                
                int value = ll_pop_front(ll, &err_code);                
                test_error(err_code == 0, "Funkcja ll_pop_front() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
                test_error(value == *(tab + i), "Funkcja ll_pop_front() powinna zwrócić wartość %d, a a zwróciła %d", *(tab + i), value);
                test_error(ll->tail->next == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola next w polu tail na NULL");  

                struct node_t *node = ll->head;

                for (int j = i + 1; j < 9 - 1; ++j)
                {
                    test_error(node->data == *(tab + j), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", j, *(tab + j), node->data);
                    node = node->next;
                }

            }

            err_code = 1;                
            int value = ll_pop_front(ll, &err_code);                
            test_error(err_code == 0, "Funkcja ll_pop_front() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
            test_error(value == *(tab + 9 - 1), "Funkcja ll_pop_front() powinna zwrócić wartość %d, a a zwróciła %d", *(tab + 9 - 1), value);
            test_error(ll->head == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            ll_pop_front(ll, &err_code);                
            test_error(err_code == 1, "Funkcja ll_pop_front() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji ll_pop_front
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji ll_pop_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-1, 5, 3, -1, 5, -5, -5, 7, -10};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


            for (int i = 1; i < 9; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
            }

            ll_pop_front(NULL, NULL);                

            struct node_t *node = ll->head;

            for (int i = 0; i < 9; ++i)
            {
                test_error(node->data == *(tab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 9 - 1; ++i)
            {
                int value = ll_pop_front(ll, NULL);                
                test_error(value == *(tab + i), "Funkcja ll_pop_front() powinna zwrócić wartość %d, a a zwróciła %d", *(tab + i), value);
                test_error(ll->tail->next == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola next w polu tail na NULL");  

                struct node_t *node = ll->head;

                for (int j = i + 1; j < 9 - 1; ++j)
                {
                    test_error(node->data == *(tab + j), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", j, *(tab + j), node->data);
                    node = node->next;
                }

            }

            int value = ll_pop_front(ll, NULL);                
            test_error(value == *(tab + 9 - 1), "Funkcja ll_pop_front() powinna zwrócić wartość %d, a a zwróciła %d", *(tab + 9 - 1), value);
            test_error(ll->head == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            ll_pop_front(ll, NULL);                

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji ll_back
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji ll_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {2, -6, -10, -10, -4};
            int rtab[] = {-4, -10, -10, -6, 2};


            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    

            int value = ll_back(ll, &err_code);
            test_error(value == *(tab), "Funkcja back() powinna zwrócić wartość %d, a zwróciła %d", *(tab), value);

            for (int i = 1; i < 5; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
            
                int value = ll_back(ll, &err_code);
                test_error(value == *(tab + i), "Funkcja back() powinna zwrócić wartość %d, a zwróciła %d", *(tab + i), value);
                
            }

            ll_back(NULL, &err_code);                
            test_error(err_code == 1, "Funkcja ll_back() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            struct node_t *node = ll->head;

            for (int i = 0; i < 5; ++i)
            {
                test_error(node->data == *(tab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 5 - 1; ++i)
            {
                int err_code = 1;                
                int value = ll_back(ll, &err_code);
                test_error(value == *(rtab + i), "Funkcja back() powinna zwrócić wartość %d, a zwróciła %d", *(rtab + i), value);
                test_error(err_code == 0, "Funkcja ll_back() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);

                value = ll_pop_back(ll, &err_code);                
                test_error(err_code == 0, "Funkcja ll_pop_back() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
                test_error(value == *(rtab + i), "Funkcja ll_pop_back() powinna zwrócić wartość %d, a a zwróciła %d", *(rtab + i), value);
                test_error(ll->tail->next == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola next w polu tail na NULL");  

                struct node_t *node = ll->head;

                for (int j = 0; j < 5 - i - 1; ++j)
                {
                    test_error(node->data == *(tab + j), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", j, *(tab + j), node->data);
                    node = node->next;
                }

            }

            err_code = 1;                
            value = ll_back(ll, &err_code);
            test_error(value == *(tab), "Funkcja back() powinna zwrócić wartość %d, a zwróciła %d", *(tab), value);
            test_error(err_code == 0, "Funkcja ll_back() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
            
            value = ll_pop_back(ll, &err_code);                
            test_error(err_code == 0, "Funkcja ll_pop_back() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
            test_error(value == *tab, "Funkcja ll_pop_back() powinna zwrócić wartość %d, a a zwróciła %d", *tab, value);
            test_error(ll->head == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            ll_back(ll, &err_code);                
            test_error(err_code == 1, "Funkcja ll_back() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji ll_back
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji ll_back", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {2, -6, -10, -10, -4};
            int rtab[] = {-4, -10, -10, -6, 2};


            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    

            int value = ll_back(ll, &err_code);
            test_error(value == *(tab), "Funkcja back() powinna zwrócić wartość %d, a zwróciła %d", *(tab), value);

            for (int i = 1; i < 5; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);

                int value = ll_back(ll, &err_code);
                test_error(value == *(tab + i), "Funkcja back() powinna zwrócić wartość %d, a zwróciła %d", *(tab + i), value);

            }

            ll_back(NULL, NULL);                

            struct node_t *node = ll->head;

            for (int i = 0; i < 5; ++i)
            {
                test_error(node->data == *(tab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 5 - 1; ++i)
            {
                int value = ll_back(ll, NULL);
                test_error(value == *(rtab + i), "Funkcja back() powinna zwrócić wartość %d, a zwróciła %d", *(rtab + i), value);

                value = ll_pop_back(ll, NULL);                
                test_error(value == *(rtab + i), "Funkcja ll_pop_back() powinna zwrócić wartość %d, a a zwróciła %d", *(rtab + i), value);
                test_error(ll->tail->next == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola next w polu tail na NULL");  

                struct node_t *node = ll->head;

                for (int j = 0; j < 5 - i - 1; ++j)
                {
                    test_error(node->data == *(tab + j), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", j, *(tab + j), node->data);
                    node = node->next;
                }

            }

            value = ll_back(ll, NULL);
            test_error(value == *(tab), "Funkcja back() powinna zwrócić wartość %d, a zwróciła %d", *(tab), value);

            value = ll_pop_back(ll, NULL);                
            test_error(value == *tab, "Funkcja ll_pop_back() powinna zwrócić wartość %d, a a zwróciła %d", *rtab, value);
            test_error(ll->head == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            ll_back(ll, NULL);                

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji ll_front
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji ll_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-9, 10, -8, 8, 6};
            int rtab[] = {6, 8, -8, 10, -9};


            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    

            int value = ll_front(ll, &err_code);
            test_error(value == *(tab), "Funkcja front() powinna zwrócić wartość %d, a zwróciła %d", *(tab), value);


            for (int i = 1; i < 5; ++i)
            {
                err_code = ll_push_front(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_front() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->head->data == *(tab + i), "Funkcja ll_push_front() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->head->data);

                int value = ll_front(ll, &err_code);
                test_error(value == *(tab + i), "Funkcja front() powinna zwrócić wartość %d, a zwróciła %d", *(tab + i), value);

            }

            ll_front(NULL, &err_code);                
            test_error(err_code == 1, "Funkcja ll_front() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            struct node_t *node = ll->head;

            for (int i = 0; i < 5; ++i)
            {
                test_error(node->data == *(rtab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(rtab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 5 - 1; ++i)
            {
                int err_code = 1;                
                int value = ll_front(ll, &err_code);
                test_error(value == *(rtab + i), "Funkcja front() powinna zwrócić wartość %d, a zwróciła %d", *(rtab + i), value);
                test_error(err_code == 0, "Funkcja ll_front() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);

                value = ll_pop_front(ll, &err_code);                
                test_error(err_code == 0, "Funkcja ll_pop_front() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
                test_error(value == *(rtab + i), "Funkcja ll_pop_front() powinna zwrócić wartość %d, a a zwróciła %d", *(rtab + i), value);
                test_error(ll->tail->next == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola next w polu tail na NULL");  

                struct node_t *node = ll->head;

                for (int j = i + 1; j < 5 - 1; ++j)
                {
                    test_error(node->data == *(rtab + j), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", j, *(rtab + j), node->data);
                    node = node->next;
                }

            }

            err_code = 1;                
            value = ll_front(ll, &err_code);
            test_error(value == *(tab), "Funkcja front() powinna zwrócić wartość %d, a zwróciła %d", *(tab), value);
            test_error(err_code == 0, "Funkcja ll_front() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);

            value = ll_pop_front(ll, &err_code);                
            test_error(err_code == 0, "Funkcja ll_pop_front() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
            test_error(value == *tab, "Funkcja ll_pop_front() powinna zwrócić wartość %d, a a zwróciła %d", *rtab, value);
            test_error(ll->head == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            ll_front(ll, &err_code);                
            test_error(err_code == 1, "Funkcja ll_front() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji ll_front
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji ll_front", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-9, 10, -8, 8, 6};
            int rtab[] = {6, 8, -8, 10, -9};


            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    

            int value = ll_front(ll, NULL);
            test_error(value == *(tab), "Funkcja front() powinna zwrócić wartość %d, a zwróciła %d", *(tab), value);


            for (int i = 1; i < 5; ++i)
            {
                err_code = ll_push_front(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_front() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->head->data == *(tab + i), "Funkcja ll_push_front() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->head->data);

                int value = ll_front(ll, NULL);
                test_error(value == *(tab + i), "Funkcja front() powinna zwrócić wartość %d, a zwróciła %d", *(tab + i), value);

            }

            ll_front(NULL, NULL);
               
            struct node_t *node = ll->head;

            for (int i = 0; i < 5; ++i)
            {
                test_error(node->data == *(rtab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(rtab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 5 - 1; ++i)
            {    
                int value = ll_front(ll, NULL);
                test_error(value == *(rtab + i), "Funkcja front() powinna zwrócić wartość %d, a zwróciła %d", *(rtab + i), value);

                value = ll_pop_front(ll, NULL);                
                test_error(value == *(rtab + i), "Funkcja ll_pop_front() powinna zwrócić wartość %d, a a zwróciła %d", *(rtab + i), value);
                test_error(ll->tail->next == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola next w polu tail na NULL");  

                struct node_t *node = ll->head;

                for (int j = i + 1; j < 5 - 1; ++j)
                {
                    test_error(node->data == *(rtab + j), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", j, *(rtab + j), node->data);
                    node = node->next;
                }

            }

            value = ll_front(ll, NULL);
            test_error(value == *(tab), "Funkcja front() powinna zwrócić wartość %d, a zwróciła %d", *(tab), value);

            value = ll_pop_front(ll, NULL);                
            test_error(value == *tab, "Funkcja ll_pop_front() powinna zwrócić wartość %d, a a zwróciła %d", *rtab, value);
            test_error(ll->head == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            ll_front(ll, NULL);
            
            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji ll_begin
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji ll_begin", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {7, 6, -5, 6, -9, -6, -7, -4, -4};
            int rtab[] = {-4, -4, -7, -6, -9, 6, -5, 6, 7};


            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    

            test_error(ll->head == ll_begin(ll), "Funkcja begin() powinna zwrócić adres pierwszego elementu");

            for (int i = 1; i < 9; ++i)
            {
                err_code = ll_push_front(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_front() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->head->data == *(tab + i), "Funkcja ll_push_front() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->head->data);

                test_error(ll->head == ll_begin(ll), "Funkcja begin() powinna zwrócić adres pierwszego elementu");

            }

            test_error(NULL == ll_begin(NULL), "Funkcja begin() powinna zwrócić NULL");

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 9 - 1; ++i)
            {

                test_error(ll->head == ll_begin(ll), "Funkcja begin() powinna zwrócić adres pierwszego elementu");    
                ll_pop_front(ll, &err_code);                

            }

            test_error(ll->head == ll_begin(ll), "Funkcja begin() powinna zwrócić adres pierwszego elementu");

            int value = ll_pop_front(ll, &err_code);                
            test_error(err_code == 0, "Funkcja ll_pop_front() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
            test_error(value == *tab, "Funkcja ll_pop_front() powinna zwrócić wartość %d, a a zwróciła %d", *rtab, value);
            test_error(ll->head == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_front() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            test_error(NULL == ll_begin(NULL), "Funkcja begin() powinna zwrócić NULL");

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji ll_end
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji ll_end", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-8, 8, -6, -4, 5, 7};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    

            test_error(ll->tail == ll_end(ll), "Funkcja end() powinna zwrócić adres ostatniego elementu");

            for (int i = 1; i < 6; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail == ll_end(ll), "Funkcja end() powinna zwrócić adres ostatniego elementu");
            }

            test_error(NULL == ll_end(NULL), "Funkcja end() powinna zwrócić NULL");

            for (int i = 0; i < 6 - 1; ++i)
            {
                test_error(ll->tail == ll_end(ll), "Funkcja end() powinna zwrócić adres ostatniego elementu");

                ll_pop_back(ll, &err_code);                
            }

            test_error(ll->tail == ll_end(ll), "Funkcja end() powinna zwrócić adres ostatniego elementu");

            ll_pop_back(ll, &err_code);                
            test_error(ll->head == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola head na NULL");
            test_error(ll->tail == NULL, "Funkcja ll_pop_back() powinna ustawić wartość pola tail na NULL");             

            ll_clear(ll);

            test_error(NULL == ll_end(ll), "Funkcja end() powinna zwrócić NULL");

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji ll_size
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji ll_size", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_size(ll);
            test_error(err_code == 0, "Funkcja ll_size() powinna zwrócić 0, a zwróciła %d", err_code);

            for (int i = 0; i < 8; ++i)
            {
                err_code = ll_push_back(ll, i);
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                err_code = ll_size(ll);
                test_error(err_code == i + 1, "Funkcja ll_size() powinna zwrócić %d, a zwróciła %d", i + 1, err_code);
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 8 - 1; ++i)
            {

                ll_pop_back(ll, &err_code);            
                err_code = ll_size(ll);    
                test_error(err_code == 8 - i - 1, "Funkcja ll_size() powinna zwrócić %d, a zwróciła %d", 8 - i - 1, err_code);
            }

            ll_pop_front(ll, &err_code);                

            err_code = ll_size(ll);
            test_error(err_code == 0, "Funkcja ll_size() powinna zwrócić 0, a zwróciła %d", err_code);

            ll_clear(ll);

            err_code = ll_size(ll);
            test_error(err_code == 0, "Funkcja ll_size() powinna zwrócić 0, a zwróciła %d", err_code);

            err_code = ll_size(NULL);
            test_error(err_code == -1, "Funkcja ll_size() powinna zwrócić -1, a zwróciła %d", err_code);


            for (int i = 0; i < 8; ++i)
            {
                err_code = ll_push_front(ll, i);
                test_error(err_code == 0, "Funkcja push_front() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                err_code = ll_size(ll);
                test_error(err_code == i + 1, "Funkcja ll_size() powinna zwrócić %d, a zwróciła %d", i + 1, err_code);
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 8 - 1; ++i)
            {

                ll_pop_front(ll, &err_code);            
                err_code = ll_size(ll);    
                test_error(err_code == 8 - i - 1, "Funkcja ll_size() powinna zwrócić %d, a zwróciła %d", 8 - i - 1, err_code);
            }

            ll_clear(ll);

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji ll_is_empty
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji ll_is_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_is_empty(ll);
            test_error(err_code == 1, "Funkcja ll_is_empty() powinna zwrócić 1, a zwróciła %d", err_code);

            for (int i = 0; i < 7; ++i)
            {
                err_code = ll_push_back(ll, i);
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                err_code = ll_is_empty(ll);
                test_error(err_code == 0, "Funkcja ll_is_empty() powinna zwrócić %d, a zwróciła %d", 0, err_code);
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 7 - 1; ++i)
            {

                ll_pop_back(ll, &err_code);            
                err_code = ll_is_empty(ll);    
                test_error(err_code == 0, "Funkcja ll_is_empty() powinna zwrócić %d, a zwróciła %d", 0, err_code);
            }

            ll_pop_front(ll, &err_code);                

            err_code = ll_is_empty(ll);
            test_error(err_code == 1, "Funkcja ll_is_empty() powinna zwrócić 1, a zwróciła %d", err_code);

            ll_clear(ll);

            err_code = ll_is_empty(ll);
            test_error(err_code == 1, "Funkcja ll_is_empty() powinna zwrócić 1, a zwróciła %d", err_code);

            err_code = ll_is_empty(NULL);
            test_error(err_code == -1, "Funkcja ll_is_empty() powinna zwrócić -1, a zwróciła %d", err_code);


            for (int i = 0; i < 7; ++i)
            {
                err_code = ll_push_front(ll, i);
                test_error(err_code == 0, "Funkcja push_front() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                err_code = ll_is_empty(ll);
                test_error(err_code == 0, "Funkcja ll_is_empty() powinna zwrócić %d, a zwróciła %d", 0, err_code);
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 7 - 1; ++i)
            {

                ll_pop_front(ll, &err_code);            
                err_code = ll_is_empty(ll);    
                test_error(err_code == 0, "Funkcja ll_is_empty() powinna zwrócić %d, a zwróciła %d", 0, err_code);
            }

            ll_pop_front(ll, &err_code);            
            err_code = ll_is_empty(ll);    
            test_error(err_code == 1, "Funkcja ll_is_empty() powinna zwrócić %d, a zwróciła %d", 1, err_code);

            ll_clear(ll);

            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji ll_at
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji ll_at", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-2, 0, -10, 10, -9, 5, 3, 6};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


            for (int i = 1; i < 8; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
            }

            for (int i = 0; i < 8; ++i)
            {
                int err_code = 1;
                int value = ll_at(ll, i, &err_code);
                test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                test_error(err_code == 0, "Funkcja ll_at() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            }

            ll_at(NULL, 0, &err_code);
            test_error(err_code == 1, "Funkcja ll_at() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            ll_at(ll, 8, &err_code);
            test_error(err_code == 1, "Funkcja ll_at() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_clear(ll);
            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji ll_at
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji ll_at", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int tab[] = {-2, 0, -10, 10, -9, 5, 3, 6};

             struct linked_list_t *ll = ll_create();

             test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
             onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

             int err_code = ll_push_back(ll, *tab);
             test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
             test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
             test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
             onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

             test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
             test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
             test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
             test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
             test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

             onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


             for (int i = 1; i < 8; ++i)
             {
                 err_code = ll_push_back(ll, *(tab + i));
                 test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                 test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                 test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
             }

             for (int i = 0; i < 8; ++i)
             {
                int value = ll_at(ll, i, NULL);
                test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
             }

             ll_at(NULL, 0, NULL);

             ll_at(ll, 8, NULL);

             onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

             ll_clear(ll);
             free(ll);

             test_no_heap_leakage();
             onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

         
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji insert
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji insert", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int tab[] = {-1, -8, -9, -10, 1, -9, -7, -8};
                int expected_tab[] = {10, -1, -8, -9, -10, 1, -9, -7, -8};
                
                struct linked_list_t *ll = ll_create();
        
                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     
        
                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    
        
        
                for (int i = 1; i < 8; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }
        
        
                for (int i = 0; i < 8; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }
        
                err_code = ll_insert(ll, 0, 10);
                test_error(err_code == 0, "Funkcja ll_insert() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (int i = 0; i < 9; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(expected_tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(expected_tab + i), value);
                }
        
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                ll_clear(ll);
                free(ll);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji insert
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji insert", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int tab[] = {-1, -8, -9, -10, 1, -9, -7, -8};
                int expected_tab[] = {-1, -8, -9, -10, 1, -9, -7, -8, 7};
                
                struct linked_list_t *ll = ll_create();
        
                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     
        
                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    
        
        
                for (int i = 1; i < 8; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }
        
        
                for (int i = 0; i < 8; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }
        
                err_code = ll_insert(ll, 8, 7);
                test_error(err_code == 0, "Funkcja ll_insert() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (int i = 0; i < 9; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(expected_tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(expected_tab + i), value);
                }
        
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                ll_clear(ll);
                free(ll);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji insert
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji insert", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int tab[] = {-1, -8, -9, -10, 1, -9, -7, -8};
                int expected_tab[] = {-1, -8, -9, -10, 1, -10, -9, -7, -8};
                
                struct linked_list_t *ll = ll_create();
        
                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     
        
                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");
        
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    
        
        
                for (int i = 1; i < 8; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }
        
        
                for (int i = 0; i < 8; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }
        
                err_code = ll_insert(ll, 5, -10);
                test_error(err_code == 0, "Funkcja ll_insert() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                for (int i = 0; i < 9; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(expected_tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(expected_tab + i), value);
                }
        
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                ll_clear(ll);
                free(ll);
        
                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji insert (limit sterty ustawiono na 144 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji insert (limit sterty ustawiono na 144 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(144);
    
    //
    // -----------
    //
    

                int tab[] = {-1, -8, -9, -10, 1, -9, -7, -8};

                struct linked_list_t *ll = ll_create();

                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


                for (int i = 1; i < 8; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }


                for (int i = 0; i < 8; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                err_code = ll_insert(ll, 0, 10);
                test_error(err_code == 2, "Funkcja ll_insert() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);

                for (int i = 0; i < 8; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                ll_clear(ll);
                free(ll);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji insert (limit sterty ustawiono na 144 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji insert (limit sterty ustawiono na 144 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(144);
    
    //
    // -----------
    //
    

                int tab[] = {-1, -8, -9, -10, 1, -9, -7, -8};

                struct linked_list_t *ll = ll_create();

                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


                for (int i = 1; i < 8; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }


                for (int i = 0; i < 8; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                err_code = ll_insert(ll, 8, 7);
                test_error(err_code == 2, "Funkcja ll_insert() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);

                for (int i = 0; i < 8; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                ll_clear(ll);
                free(ll);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji insert (limit sterty ustawiono na 144 bajtów)
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji insert (limit sterty ustawiono na 144 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(144);
    
    //
    // -----------
    //
    

                int tab[] = {-1, -8, -9, -10, 1, -9, -7, -8};

                struct linked_list_t *ll = ll_create();

                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


                for (int i = 1; i < 8; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }


                for (int i = 0; i < 8; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                err_code = ll_insert(ll, 5, -10);
                test_error(err_code == 2, "Funkcja ll_insert() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);

                for (int i = 0; i < 8; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                ll_clear(ll);
                free(ll);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji insert
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji insert", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-1, -8, -9, -10, 1, -9, -7, -8};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
            int err_code = ll_insert(ll, 0, *tab);
            test_error(err_code == 0, "Funkcja ll_insert() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            int value = ll_at(ll, 0, NULL);
            test_error(value == *tab, "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", 0, *tab, value);
                
            err_code = ll_insert(NULL, 0, *tab);
            test_error(err_code == 1, "Funkcja ll_insert() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);                

            err_code = ll_insert(ll, -8, *tab);
            test_error(err_code == 1, "Funkcja ll_insert() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);                

            err_code = ll_insert(ll, 4, *tab);
            test_error(err_code == 1, "Funkcja ll_insert() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);                

               
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_clear(ll);
            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji remove
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji remove", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int expected_tab[] = {3, 8, 7, -6, 7, -8, 9, -5, 7, 7};
                int tab[] = {-3, 3, 8, 7, -6, 7, -8, 9, -5, 7, 7};

                struct linked_list_t *ll = ll_create();

                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


                for (int i = 1; i < 11; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }


                for (int i = 0; i < 11; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                err_code = 1;
                int value = ll_remove(ll, 0, &err_code);
                test_error(err_code == 0, "Funkcja ll_remove() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(value == -3, "Funkcja ll_remove() powinna zwrócić wartość -3, a zwróciła %d", err_code);

                for (int i = 0; i < 10; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(expected_tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(expected_tab + i), value);
                }

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                ll_clear(ll);
                free(ll);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji remove
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji remove", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int expected_tab[] = {3, 8, 7, -6, 7, -8, 9, -5, 7, 7};
                int tab[] = {3, 8, 7, -6, 7, -8, 9, -5, 7, 7, -3};

                struct linked_list_t *ll = ll_create();

                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


                for (int i = 1; i < 11; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }


                for (int i = 0; i < 11; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                err_code = 1;
                int value = ll_remove(ll, 10, &err_code);
                test_error(err_code == 0, "Funkcja ll_remove() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(value == -3, "Funkcja ll_remove() powinna zwrócić wartość -3, a zwróciła %d", err_code);

                for (int i = 0; i < 10; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(expected_tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(expected_tab + i), value);
                }

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                ll_clear(ll);
                free(ll);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji remove
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji remove", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int expected_tab[] = {3, 8, 7, -6, 7, -8, 9, -5, 7, 7};
                int tab[] = {3, 8, 7, -6, 7, -8, 3, 9, -5, 7, 7};

                struct linked_list_t *ll = ll_create();

                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


                for (int i = 1; i < 11; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }


                for (int i = 0; i < 11; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                err_code = 1;
                int value = ll_remove(ll, 6, &err_code);
                test_error(err_code == 0, "Funkcja ll_remove() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(value == 3, "Funkcja ll_remove() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                for (int i = 0; i < 10; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(expected_tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(expected_tab + i), value);
                }

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                ll_clear(ll);
                free(ll);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji remove
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji remove", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int expected_tab[] = {3, 8, 7, -6, 7, -8, 9, -5, 7, 7};
                int tab[] = {-3, 3, 8, 7, -6, 7, -8, 9, -5, 7, 7};

                struct linked_list_t *ll = ll_create();

                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


                for (int i = 1; i < 11; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }


                for (int i = 0; i < 11; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                int value = ll_remove(ll, 0, NULL);
                test_error(value == -3, "Funkcja ll_remove() powinna zwrócić wartość -3, a zwróciła %d", err_code);

                for (int i = 0; i < 10; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(expected_tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(expected_tab + i), value);
                }

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                ll_clear(ll);
                free(ll);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji remove
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji remove", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int expected_tab[] = {3, 8, 7, -6, 7, -8, 9, -5, 7, 7};
                int tab[] = {3, 8, 7, -6, 7, -8, 9, -5, 7, 7, -3};

                struct linked_list_t *ll = ll_create();

                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


                for (int i = 1; i < 11; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }


                for (int i = 0; i < 11; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                int value = ll_remove(ll, 10, NULL);
                test_error(value == -3, "Funkcja ll_remove() powinna zwrócić wartość -3, a zwróciła %d", err_code);

                for (int i = 0; i < 10; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(expected_tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(expected_tab + i), value);
                }

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                ll_clear(ll);
                free(ll);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji remove
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji remove", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int expected_tab[] = {3, 8, 7, -6, 7, -8, 9, -5, 7, 7};
                int tab[] = {3, 8, 7, -6, 7, -8, 3, 9, -5, 7, 7};

                struct linked_list_t *ll = ll_create();

                test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int err_code = ll_push_back(ll, *tab);
                test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
                test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

                test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
                test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
                test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
                test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    


                for (int i = 1; i < 11; ++i)
                {
                    err_code = ll_push_back(ll, *(tab + i));
                    test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                    test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
                }


                for (int i = 0; i < 11; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), value);
                }

                int value = ll_remove(ll, 6, NULL);
                test_error(value == 3, "Funkcja ll_remove() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                for (int i = 0; i < 10; ++i)
                {
                    int value = ll_at(ll, i, NULL);
                    test_error(value == *(expected_tab + i), "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", i, *(expected_tab + i), value);
                }

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                ll_clear(ll);
                free(ll);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji remove
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji remove", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {3, 8, 7, -6, 7, -8, 9, -5, 7, 7};

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            int err_code = 2;
            int value = ll_remove(ll, 0, &err_code);
            test_error(err_code == 1, "Funkcja ll_remove() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);
            value = ll_remove(ll, 0, NULL);

            err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    

            err_code = 2;
            value = ll_remove(ll, 0, &err_code);
            test_error(err_code == 0, "Funkcja ll_remove() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(value == *tab, "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", 0, *tab, value);
            test_error(ll_size(ll) == 0, "Funkcja ll_size() powinna zwrócić wartość 0, a zwróciła %d", ll_size(ll));
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_push_back(ll, *tab);
            value = ll_remove(ll, 0, NULL);
            test_error(value == *tab, "Wartość zapisana pod indeksem %d w liście jest nieprawidłowa, powinno być %d, a jest %d", 0, *tab, value);
            test_error(ll_size(ll) == 0, "Funkcja ll_size() powinna zwrócić wartość 0, a zwróciła %d", ll_size(ll));
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_push_back(ll, *tab);
            
            err_code = 2;
            ll_remove(NULL, 0, &err_code);
            test_error(err_code == 1, "Funkcja ll_remove() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);                

            ll_remove(ll, -10, &err_code);
            test_error(err_code == 1, "Funkcja ll_remove() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);                

            ll_remove(ll, 6, &err_code);
            test_error(err_code == 1, "Funkcja ll_remove() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);                


            ll_remove(NULL, 0, NULL);
            ll_remove(ll, -10, NULL);
            ll_remove(ll, 4, NULL);
                
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_clear(ll);
            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji clear
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji clear", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            ll_clear(NULL);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji ll_display
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji ll_display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int tab[] = {-1, -8, -1, 1, 7, 10};

    //-------------1-----------------------
            printf("\n***TEST 1***\n\n");
            printf("***START***\n");
            ll_display(NULL);
            printf("***END***\n");

            struct linked_list_t *ll = ll_create();

            test_error(ll != NULL, "Funkcja create() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

    //-------------2-----------------------
            printf("\n***TEST 2***\n\n");
            printf("***START***\n");
            ll_display(ll);
            printf("***END***\n");


            int err_code = ll_push_back(ll, *tab);
            test_error(err_code == 0, "Funkcja ll_push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(ll->head != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            test_error(ll->tail != NULL, "Funkcja ll_push_back() powinna przypisać adres dodanego elementu do pola tail, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)     

            test_error(ll->head->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu head na NULL");
            test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");        
            test_error(ll->head->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->head->data);
            test_error(ll->tail->data == *tab, "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *tab, ll->tail->data);
            test_error(ll->head == ll->tail, "Funkcja ll_push_back() powinna ustawić takie same wartości pól tail i head");

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)    

    //-------------3-----------------------
            printf("\n***TEST 3***\n\n");
            printf("***START***\n");
            ll_display(ll);
            printf("***END***\n");

            for (int i = 1; i < 6; ++i)
            {
                err_code = ll_push_back(ll, *(tab + i));
                test_error(err_code == 0, "Funkcja push_back() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(ll->tail->next == NULL, "Funkcja ll_push_back() powinna ustawić wartość pola next w polu tail na NULL");  
                test_error(ll->tail->data == *(tab + i), "Funkcja ll_push_back() powinna ustawić wartość pola data w polu head na %d, a ustawiła na %d", *(tab + i), ll->tail->data);
            }


            struct node_t *node = ll->head;

            for (int i = 0; i < 6; ++i)
            {
                test_error(node->data == *(tab + i), "Wartość zapisana pod ineksem %d w tablicy jest nieprawidłowa, powinno być %d, a jest %d", i, *(tab + i), node->data);
                node = node->next;
            }

    //-------------4-----------------------
            printf("\n***TEST 4***\n\n");
            printf("***START***\n");
            ll_display(ll);
            printf("***END***\n");

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            ll_clear(ll);
            free(ll);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
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
//  Test 3: Reakcja na brak pamięci (limit sterty ustawiono na 128 bajtów)
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci (limit sterty ustawiono na 128 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(128);
    
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
//  Test 4: Reakcja na brak pamięci (limit sterty ustawiono na 128 bajtów)
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci (limit sterty ustawiono na 128 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(128);
    
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
//  Test 5: Reakcja na brak pamięci (limit sterty ustawiono na 128 bajtów)
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci (limit sterty ustawiono na 128 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(128);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 16 bajtów)
            UTEST2, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 0 bajtów)
            UTEST3, // Sprawdzanie poprawności działania funkcji create (limit sterty ustawiono na 8 bajtów)
            UTEST4, // Sprawdzanie poprawności działania funkcji push_back
            UTEST5, // Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 16 bajtów)
            UTEST6, // Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 160 bajtów)
            UTEST7, // Sprawdzanie poprawności działania funkcji push_front
            UTEST8, // Sprawdzanie poprawności działania funkcji push_front (limit sterty ustawiono na 16 bajtów)
            UTEST9, // Sprawdzanie poprawności działania funkcji push_front (limit sterty ustawiono na 112 bajtów)
            UTEST10, // Sprawdzanie poprawności działania funkcji ll_pop_back
            UTEST11, // Sprawdzanie poprawności działania funkcji ll_pop_back
            UTEST12, // Sprawdzanie poprawności działania funkcji ll_pop_front
            UTEST13, // Sprawdzanie poprawności działania funkcji ll_pop_front
            UTEST14, // Sprawdzanie poprawności działania funkcji ll_back
            UTEST15, // Sprawdzanie poprawności działania funkcji ll_back
            UTEST16, // Sprawdzanie poprawności działania funkcji ll_front
            UTEST17, // Sprawdzanie poprawności działania funkcji ll_front
            UTEST18, // Sprawdzanie poprawności działania funkcji ll_begin
            UTEST19, // Sprawdzanie poprawności działania funkcji ll_end
            UTEST20, // Sprawdzanie poprawności działania funkcji ll_size
            UTEST21, // Sprawdzanie poprawności działania funkcji ll_is_empty
            UTEST22, // Sprawdzanie poprawności działania funkcji ll_at
            UTEST23, // Sprawdzanie poprawności działania funkcji ll_at
            UTEST24, // Sprawdzanie poprawności działania funkcji insert
            UTEST25, // Sprawdzanie poprawności działania funkcji insert
            UTEST26, // Sprawdzanie poprawności działania funkcji insert
            UTEST27, // Sprawdzanie poprawności działania funkcji insert (limit sterty ustawiono na 144 bajtów)
            UTEST28, // Sprawdzanie poprawności działania funkcji insert (limit sterty ustawiono na 144 bajtów)
            UTEST29, // Sprawdzanie poprawności działania funkcji insert (limit sterty ustawiono na 144 bajtów)
            UTEST30, // Sprawdzanie poprawności działania funkcji insert
            UTEST31, // Sprawdzanie poprawności działania funkcji remove
            UTEST32, // Sprawdzanie poprawności działania funkcji remove
            UTEST33, // Sprawdzanie poprawności działania funkcji remove
            UTEST34, // Sprawdzanie poprawności działania funkcji remove
            UTEST35, // Sprawdzanie poprawności działania funkcji remove
            UTEST36, // Sprawdzanie poprawności działania funkcji remove
            UTEST37, // Sprawdzanie poprawności działania funkcji remove
            UTEST38, // Sprawdzanie poprawności działania funkcji clear
            UTEST39, // Sprawdzanie poprawności działania funkcji ll_display
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
            test_summary(39); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST3, // Reakcja na brak pamięci (limit sterty ustawiono na 128 bajtów)
            MTEST4, // Reakcja na brak pamięci (limit sterty ustawiono na 128 bajtów)
            MTEST5, // Reakcja na brak pamięci (limit sterty ustawiono na 128 bajtów)
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