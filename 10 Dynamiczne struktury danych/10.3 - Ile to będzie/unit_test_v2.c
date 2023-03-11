/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Ile to będzie
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-28 16:56:18.951485
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
    
        
            struct stack_t *stack;
            
            int res = stack_init(&stack);
            
            test_error(res == 0, "Funkcja stack_init() powinna zwrócić kod błędu 0, a zwróciła %d", res);
            test_error(stack != NULL, "Funkcja stack_init() powinna przydzielić pamięć na strukturę stack");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
            test_error(stack->head == NULL, "Funkcja init() powinna przypisać wartość NULL polu head w strukturze stack");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            res = stack_init(NULL);
            test_error(res == 1, "Funkcja stack_init() powinna zwrócić kod błędu 1, a zwróciła %d", res);

            free(stack);

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
//  Test 2: Sprawdzanie poprawności działania funkcji stack_init (limit sterty ustawiono na 0 bajtów)
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji stack_init (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

            struct stack_t *stack;

            int res = stack_init(&stack);

            test_error(res == 2, "Funkcja stack_init() powinna zwrócić kod błędu 2, a zwróciła %d", res);
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

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
//  Test 3: Sprawdzanie poprawności działania funkcji stack_push
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji stack_push", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            double tab[] = {9.551923, 7.797004, 0.953608, -1.659223, 7.524405};

            struct stack_t* stack;

            int err_code = stack_init(&stack);

            test_error(err_code == 0, "Funkcja stack_init() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack != NULL, "Funkcja stack_init() powinna przydzielić pamięć na stos, a przypisała NULL NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            err_code = stack_push(stack, *tab);
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->head != NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->head->next == NULL, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na NULL");
            test_error(stack->head->data > *tab - 0.01 && stack->head->data < *tab + 0.01, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %lf, a jest %lf", *tab, stack->head->data);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            for (int i = 1; i < 5; ++i)
            {
            
                struct node_t *node = stack->head;
                err_code = stack_push(stack, *(tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->head->next == node, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na element dodany poprzednio");
            }

            struct node_t *node = stack->head;

            for (int i = 4; i >= 0 ; --i)
            {
                test_error(node->data > *(tab + i) - 0.01 && node->data < *(tab + i) + 0.01, "Wartość zapisana pod ineksem %d w stosie jest nieprawidłowa, powinno być %lf, a jest %lf", i, *(tab + i), node->data);
                node = node->next;
            }

            err_code = stack_push(NULL, *(tab));
            test_error(err_code == 1, "Funkcja stack_push() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_destroy(&stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 16 bajtów)
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 16 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(8);
    
    //
    // -----------
    //
    

            double tab[] = {9.551923, 7.797004, 0.953608, -1.659223, 7.524405};

            struct stack_t* stack;

            int err_code = stack_init(&stack);

            test_error(err_code == 0, "Funkcja stack_init() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack != NULL, "Funkcja stack_init() powinna przydzielić pamięć na stos, a przypisała NULL NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            err_code = stack_push(stack, *tab);
            test_error(err_code == 2, "Funkcja stack_push() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(stack->head == NULL, "Funkcja stack_push() powinna przypisać NULL do pola head");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_destroy(&stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 88 bajtów)
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 88 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(88);
    
    //
    // -----------
    //
    

            double tab[] = {9.551923, 7.797004, 0.953608, -1.659223, 7.524405};

            struct stack_t* stack;

            int err_code = stack_init(&stack);

            test_error(err_code == 0, "Funkcja stack_init() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack != NULL, "Funkcja stack_init() powinna przydzielić pamięć na stos, a przypisała NULL NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            err_code = stack_push(stack, *tab);
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->head != NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->head->next == NULL, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na NULL");
            test_error(stack->head->data > *tab - 0.01 && stack->head->data < *tab + 0.01, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %lf, a jest %lf", *tab, stack->head->data);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            for (int i = 1; i < 5; ++i)
            {

                struct node_t *node = stack->head;
                err_code = stack_push(stack, *(tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->head->next == node, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na element dodany poprzednio");
            }

            struct node_t *node = stack->head;

            for (int i = 4; i >= 0 ; --i)
            {
                test_error(node->data > *(tab + i) - 0.01 && node->data < *(tab + i) + 0.01, "Wartość zapisana pod ineksem %d w stosie jest nieprawidłowa, powinno być %lf, a jest %lf", i, *(tab + i), node->data);
                node = node->next;
            }

            struct node_t *old_head = stack->head;

            err_code = stack_push(stack, *tab);

            test_error(err_code == 2, "Funkcja stack_push() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
            test_error(stack->head == old_head, "Funkcja stack_push() nie powinna modyfikować wartości pola head");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            node = stack->head;

            for (int i = 4; i >= 0 ; --i)
            {
                test_error(node->data > *(tab + i) - 0.01 && node->data < *(tab + i) + 0.01, "Wartość zapisana pod ineksem %d w stosie jest nieprawidłowa, powinno być %lf, a jest %lf", i, *(tab + i), node->data);
                node = node->next;
            }

            err_code = stack_push(NULL, *(tab));
            test_error(err_code == 1, "Funkcja stack_push() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_destroy(&stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            double tab[] = {-0.908535, -8.376886, -3.004078, -4.888423, 0.122679, -5.653936, -2.903986};

            struct stack_t* stack;

            int err_code = stack_init(&stack);

            test_error(err_code == 0, "Funkcja stack_init() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack != NULL, "Funkcja stack_init() powinna przydzielić pamięć na stos, a przypisała NULL NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            err_code = stack_push(stack, *tab);
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->head != NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->head->next == NULL, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na NULL");
            test_error(stack->head->data > *tab - 0.01 && stack->head->data < *tab + 0.01, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %lf, a jest %lf", *tab, stack->head->data);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            for (int i = 1; i < 7; ++i)
            {

                struct node_t *node = stack->head;
                err_code = stack_push(stack, *(tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->head->next == node, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na element dodany poprzednio");
            }

            struct node_t *node = stack->head;

            for (int i = 6; i >= 0 ; --i)
            {
                test_error(node->data > *(tab + i) - 0.01 && node->data < *(tab + i) + 0.01, "Wartość zapisana pod ineksem %d w stosie jest nieprawidłowa, powinno być %lf, a jest %lf", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 7 - 1; i >= 0; --i)
            {
                int err_code = 1;
                double value = stack_pop(stack, &err_code);
                test_error(err_code == 0, "Funkcja stack_pop() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
                test_error(value > *(tab + i) - 0.01 && value < *(tab + i) + 0.01, "Funkcja stack_pop() powinna zwrócić wartość %lf, a a zwróciła %lf", *(tab + i), value);
            }

            test_error(stack->head == NULL, "Funkcja stack_pop() powinna ustawić wartość pola head na NULL");

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_pop(stack, &err_code);
            test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            free(stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji stack_pop
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji stack_pop", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            double tab[] = {-0.908535, -8.376886, -3.004078, -4.888423, 0.122679, -5.653936, -2.903986};

            struct stack_t* stack;

            int err_code = stack_init(&stack);

            test_error(err_code == 0, "Funkcja stack_init() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack != NULL, "Funkcja stack_init() powinna przydzielić pamięć na stos, a przypisała NULL NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            err_code = stack_push(stack, *tab);
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->head != NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->head->next == NULL, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na NULL");
            test_error(stack->head->data > *tab - 0.01 && stack->head->data < *tab + 0.01, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %lf, a jest %lf", *tab, stack->head->data);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            for (int i = 1; i < 7; ++i)
            {

                struct node_t *node = stack->head;
                err_code = stack_push(stack, *(tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->head->next == node, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na element dodany poprzednio");
            }

            struct node_t *node = stack->head;

            for (int i = 6; i >= 0 ; --i)
            {
                test_error(node->data > *(tab + i) - 0.01 && node->data < *(tab + i) + 0.01, "Wartość zapisana pod ineksem %d w stosie jest nieprawidłowa, powinno być %lf, a jest %lf", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 7 - 1; i >= 0; --i)
            {
                double value = stack_pop(stack, NULL);
                test_error(value > *(tab + i) - 0.01 && value < *(tab + i) + 0.01, "Funkcja stack_pop() powinna zwrócić wartość %lf, a a zwróciła %lf", *(tab + i), value);
            }

            test_error(stack->head == NULL, "Funkcja stack_pop() powinna ustawić wartość pola head na NULL");

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_pop(stack, NULL);

            free(stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji stack_empty
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji stack_empty", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            double tab[] = {-6.000000, 2.000000, 6.000000, 3.000000, -8.000000, -3.000000, -10.000000, 9.000000, 8.000000};

            int res = stack_empty(NULL);
            test_error(res == 2, "Funkcja stack_empty() powinna zwrócić kod błędu 2, a zwróciła %d", res);

            struct stack_t* stack;

            int err_code = stack_init(&stack);

            res = stack_empty(stack);
            test_error(res == 1, "Funkcja stack_empty() powinna zwrócić kod błędu 1, a zwróciła %d", res);

            test_error(err_code == 0, "Funkcja stack_init() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack != NULL, "Funkcja stack_init() powinna przydzielić pamięć na stos, a przypisała NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            err_code = stack_push(stack, *tab);
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->head != NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->head->next == NULL, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na NULL");
            test_error(stack->head->data > *tab - 0.01 && stack->head->data < *tab + 0.01, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %lf, a jest %lf", *tab, stack->head->data);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            res = stack_empty(stack);
            test_error(res == 0, "Funkcja stack_empty() powinna zwrócić kod błędu 0, a zwróciła %d", res);

            for (int i = 1; i < 9; ++i)
            {

                struct node_t *node = stack->head;
                err_code = stack_push(stack, *(tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->head->next == node, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na element dodany poprzednio");

                res = stack_empty(stack);
                test_error(res == 0, "Funkcja stack_empty() powinna zwrócić kod błędu 0, a zwróciła %d", res);
            }

            struct node_t *node = stack->head;

            for (int i = 8; i >= 0 ; --i)
            {
                test_error(node->data > *(tab + i) - 0.01 && node->data < *(tab + i) + 0.01, "Wartość zapisana pod ineksem %d w stosie jest nieprawidłowa, powinno być %lf, a jest %lf", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 9 - 1; i > 0; --i)
            {
                int err_code = 1;
                double value = stack_pop(stack, &err_code);
                test_error(err_code == 0, "Funkcja stack_pop() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
                test_error(value > *(tab + i) - 0.01 && value < *(tab + i) + 0.01, "Funkcja stack_pop() powinna zwrócić wartość %lf, a a zwróciła %lf", *(tab + i), value);

                res = stack_empty(stack);
                test_error(res == 0, "Funkcja stack_empty() powinna zwrócić kod błędu 0, a zwróciła %d", res);
            }

            err_code = 1;
            double value = stack_pop(stack, &err_code);
            test_error(err_code == 0, "Funkcja stack_pop() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
            test_error(value == *(tab), "Funkcja stack_pop() powinna zwrócić wartość %d, a a zwróciła %d", *(tab), value);

            res = stack_empty(stack);
            test_error(res == 1, "Funkcja stack_empty() powinna zwrócić kod błędu 1, a zwróciła %d", res);

            test_error(stack->head == NULL, "Funkcja stack_pop() powinna ustawić wartość pola head na NULL");

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            stack_pop(stack, &err_code);
            test_error(err_code == 1, "Funkcja stack_pop() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code);

            free(stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji stack_destroy
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji stack_destroy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            stack_destroy(NULL);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji stack_size
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji stack_size", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            double tab[] = {-9.000000, 0.000000, -7.000000, -10.000000, 0.000000, 0.000000};

            int res = stack_size(NULL);
            test_error(res == -1, "Funkcja stack_size() powinna zwrócić kod błędu -1, a zwróciła %d", res);

            struct stack_t* stack;

            int err_code = stack_init(&stack);

            res = stack_size(stack);
            test_error(res == 0, "Funkcja stack_size() powinna zwrócić kod błędu 0, a zwróciła %d", res);

            test_error(err_code == 0, "Funkcja stack_init() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack != NULL, "Funkcja stack_init() powinna przydzielić pamięć na stos, a przypisała NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            err_code = stack_push(stack, *tab);
            test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            test_error(stack->head != NULL, "Funkcja stack_push() powinna przypisać adres dodanego elementu do pola head, a przypisała wartość NULL");
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(stack->head->next == NULL, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na NULL");
            test_error(stack->head->data > *tab - 0.01 && stack->head->data < *tab + 0.01, "Wartość zapisana na stosie jest nieprawidłowa, powinno być %lf, a jest %lf", *tab, stack->head->data);

            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            res = stack_size(stack);
            test_error(res == 1, "Funkcja stack_size() powinna zwrócić kod błędu 1, a zwróciła %d", res);

            for (int i = 1; i < 6; ++i)
            {

                struct node_t *node = stack->head;
                err_code = stack_push(stack, *(tab + i));
                test_error(err_code == 0, "Funkcja stack_push() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(stack->head->next == node, "Funkcja stack_push() powinna ustawić wartość pola next w polu head na element dodany poprzednio");

                res = stack_size(stack);
                test_error(res == i + 1, "Funkcja stack_size() powinna zwrócić kod błędu i + 1, a zwróciła %d", res);

            }

            struct node_t *node = stack->head;

            for (int i = 5; i >= 0 ; --i)
            {
                test_error(node->data > *(tab + i) - 0.01 && node->data < *(tab + i) + 0.01, "Wartość zapisana pod ineksem %d w stosie jest nieprawidłowa, powinno być %lf, a jest %lf", i, *(tab + i), node->data);
                node = node->next;
            }

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 6 - 1; i >= 0; --i)
            {
                int err_code = 1;
                double value = stack_pop(stack, &err_code);
                test_error(err_code == 0, "Funkcja stack_pop() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code);
                test_error(value > *(tab + i) - 0.01 && value < *(tab + i) + 0.01, "Funkcja stack_pop() powinna zwrócić wartość %lf, a a zwróciła %lf", *(tab + i), value);

                res = stack_size(stack);
                test_error(res == i, "Funkcja stack_size() powinna zwrócić kod błędu i, a zwróciła %d", res);
            }

        
            free(stack);

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

        
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
//  Test 2: Reakcja na brak pamięci (limit sterty ustawiono na 8 bajtów)
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci (limit sterty ustawiono na 8 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(8);
    
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
//  Test 3: Reakcja na brak pamięci (limit sterty ustawiono na 32 bajtów)
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci (limit sterty ustawiono na 32 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(32);
    
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
//  Test 4: Reakcja na ograniczenie pamięci (limit sterty ustawiono na 56 bajtów)
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na ograniczenie pamięci (limit sterty ustawiono na 56 bajtów)", __LINE__);

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
            test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code);

            test_no_heap_leakage();
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
            UTEST2, // Sprawdzanie poprawności działania funkcji stack_init (limit sterty ustawiono na 0 bajtów)
            UTEST3, // Sprawdzanie poprawności działania funkcji stack_push
            UTEST4, // Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 16 bajtów)
            UTEST5, // Sprawdzanie poprawności działania funkcji push_back (limit sterty ustawiono na 88 bajtów)
            UTEST6, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST7, // Sprawdzanie poprawności działania funkcji stack_pop
            UTEST8, // Sprawdzanie poprawności działania funkcji stack_empty
            UTEST9, // Sprawdzanie poprawności działania funkcji stack_destroy
            UTEST10, // Sprawdzanie poprawności działania funkcji stack_size
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
            test_summary(10); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST2, // Reakcja na brak pamięci (limit sterty ustawiono na 8 bajtów)
            MTEST3, // Reakcja na brak pamięci (limit sterty ustawiono na 32 bajtów)
            MTEST4, // Reakcja na ograniczenie pamięci (limit sterty ustawiono na 56 bajtów)
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