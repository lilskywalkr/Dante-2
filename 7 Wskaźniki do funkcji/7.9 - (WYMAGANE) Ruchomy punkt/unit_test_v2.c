/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Ruchomy punkt
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-02 00:40:11.596326
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
//  Test 1: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 3, height = 11;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 3, "Funkcja create_board() powinna ustawić szerokość planszy na 3, a ustawiła na %d", arr->width);
                    test_error(arr->height == 11, "Funkcja create_board() powinna ustawić wysokość planszy na 11, a ustawiła na %d", arr->height);
                    test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                    for (int i = 0; i < 11; ++i)
                        test_error(strcmp("...", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...', a ustawiła na '%s'", i, arr->board[i]);

                    printf("#####START#####");
                    free_board(arr);
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
//  Test 2: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 17, height = 7;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 17, "Funkcja create_board() powinna ustawić szerokość planszy na 17, a ustawiła na %d", arr->width);
                    test_error(arr->height == 7, "Funkcja create_board() powinna ustawić wysokość planszy na 7, a ustawiła na %d", arr->height);
                    test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                    for (int i = 0; i < 7; ++i)
                        test_error(strcmp(".................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.................', a ustawiła na '%s'", i, arr->board[i]);

                    printf("#####START#####");
                    free_board(arr);
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
//  Test 3: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 475, height = 585;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!0)
                {
                    test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 475, "Funkcja create_board() powinna ustawić szerokość planszy na 475, a ustawiła na %d", arr->width);
                    test_error(arr->height == 585, "Funkcja create_board() powinna ustawić wysokość planszy na 585, a ustawiła na %d", arr->height);
                    test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                    for (int i = 0; i < 585; ++i)
                        test_error(strcmp("...........................................................................................................................................................................................................................................................................................................................................................................................................................................................................................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...........................................................................................................................................................................................................................................................................................................................................................................................................................................................................................', a ustawiła na '%s'", i, arr->board[i]);

                    printf("#####START#####");
                    free_board(arr);
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
//  Test 4: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 0, height = 11;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_board() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 0, "Funkcja create_board() powinna ustawić szerokość planszy na 0, a ustawiła na %d", arr->width);
                    test_error(arr->height == 11, "Funkcja create_board() powinna ustawić wysokość planszy na 11, a ustawiła na %d", arr->height);
                    test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                    for (int i = 0; i < 11; ++i)
                        test_error(strcmp("", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '', a ustawiła na '%s'", i, arr->board[i]);

                    printf("#####START#####");
                    free_board(arr);
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
//  Test 5: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 8, height = 0;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_board() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 0, "Funkcja create_board() powinna ustawić wysokość planszy na 0, a ustawiła na %d", arr->height);
                    test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                    printf("#####START#####");
                    free_board(arr);
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
//  Test 6: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 6, height = -19;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_board() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 6, "Funkcja create_board() powinna ustawić szerokość planszy na 6, a ustawiła na %d", arr->width);
                    test_error(arr->height == -19, "Funkcja create_board() powinna ustawić wysokość planszy na -19, a ustawiła na %d", arr->height);
                    test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                    for (int i = 0; i < -19; ++i)
                        test_error(strcmp("......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '......', a ustawiła na '%s'", i, arr->board[i]);

                    printf("#####START#####");
                    free_board(arr);
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
//  Test 7: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = -2, height = 13;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_board() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == -2, "Funkcja create_board() powinna ustawić szerokość planszy na -2, a ustawiła na %d", arr->width);
                    test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                    test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                    for (int i = 0; i < 13; ++i)
                        test_error(strcmp("..", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..', a ustawiła na '%s'", i, arr->board[i]);

                    printf("#####START#####");
                    free_board(arr);
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
//  Test 8: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = -9, height = -18;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_board() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == -9, "Funkcja create_board() powinna ustawić szerokość planszy na -9, a ustawiła na %d", arr->width);
                    test_error(arr->height == -18, "Funkcja create_board() powinna ustawić wysokość planszy na -18, a ustawiła na %d", arr->height);
                    test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                    for (int i = 0; i < -18; ++i)
                        test_error(strcmp(".........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.........', a ustawiła na '%s'", i, arr->board[i]);

                    printf("#####START#####");
                    free_board(arr);
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
//  Test 9: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 0, height = 0;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_board() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                if (!1)
                {
                    test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                    test_error(arr->width == 0, "Funkcja create_board() powinna ustawić szerokość planszy na 0, a ustawiła na %d", arr->width);
                    test_error(arr->height == 0, "Funkcja create_board() powinna ustawić wysokość planszy na 0, a ustawiła na %d", arr->height);
                    test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp("", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '', a ustawiła na '%s'", i, arr->board[i]);

                    printf("#####START#####");
                    free_board(arr);
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
//  Test 10: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 368 bajtów)
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 368 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(368);
    
    //
    // -----------
    //
    


                struct board_t *arr;
                int width = 7, height = 19;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
                test_error(arr->height == 19, "Funkcja create_board() powinna ustawić wysokość planszy na 19, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                printf("#####START#####");
                free_board(arr);
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
//  Test 11: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 92 bajtów)
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 92 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(92);
    
    //
    // -----------
    //
    


                struct board_t *arr;
                int width = 19, height = 1;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 19, "Funkcja create_board() powinna ustawić szerokość planszy na 19, a ustawiła na %d", arr->width);
                test_error(arr->height == 1, "Funkcja create_board() powinna ustawić wysokość planszy na 1, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                printf("#####START#####");
                free_board(arr);
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
//  Test 12: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 34516 bajtów)
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 34516 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(34516);
    
    //
    // -----------
    //
    


                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 288, "Funkcja create_board() powinna ustawić szerokość planszy na 288, a ustawiła na %d", arr->width);
                test_error(arr->height == 116, "Funkcja create_board() powinna ustawić wysokość planszy na 116, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                printf("#####START#####");
                free_board(arr);
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
//  Test 13: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 14: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 64 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 64 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(64);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 15: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 176 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 176 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(176);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 16: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 192 bajtów)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 192 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(192);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 17: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 208 bajtów)
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 208 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(208);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 18: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 224 bajtów)
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 224 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(224);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 19: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 240 bajtów)
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 240 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(240);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 20: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 256 bajtów)
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 256 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(256);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 21: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 272 bajtów)
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 272 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(272);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 22: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 288 bajtów)
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 288 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(288);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 23: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 304 bajtów)
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 304 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(304);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 24: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 320 bajtów)
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 320 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(320);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 25: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 336 bajtów)
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 336 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(336);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 26: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 352 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 352 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(352);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 27: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 368 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 368 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(368);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 28: Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 384 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 384 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(384);
    
    //
    // -----------
    //
    

                struct board_t *arr;
                int width = 288, height = 116;        

                printf("#####START#####");
                int res = create_board(&arr, width, height);
                printf("#####END#####");    

                test_error(res == 2, "Funkcja create_board() powinna zwrócić 2, a zwróciła %d", res);

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
//  Test 29: Sprawdzanie poprawności działania funkcji create_board
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji create_board", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int width = 9, height = 13;

            printf("#####START#####");
            int res = create_board(NULL, width, height);
            printf("#####END#####");

            test_error(res == 1, "Funkcja create_board() powinna zwrócić 1, a zwróciła %d", res);
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
//  Test 30: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 0, 0);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (0)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 0, "Funkcja set_player() powinna ustawić pozycję y gracza na 0, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 0)
                        test_error(strcmp("@.......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '@.......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 31: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 0, 12);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (0)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 12, "Funkcja set_player() powinna ustawić pozycję y gracza na 12, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 12)
                        test_error(strcmp("@.......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '@.......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 32: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 7, 0);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (0)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 0, "Funkcja set_player() powinna ustawić pozycję y gracza na 0, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 0)
                        test_error(strcmp(".......@", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......@', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 33: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 7, 12);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (0)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 12, "Funkcja set_player() powinna ustawić pozycję y gracza na 12, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 12)
                        test_error(strcmp(".......@", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......@', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 34: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 7, 7);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (0)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 7, "Funkcja set_player() powinna ustawić pozycję y gracza na 7, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 7)
                        test_error(strcmp(".......@", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......@', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 35: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 2, 8);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (0)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 8, "Funkcja set_player() powinna ustawić pozycję y gracza na 8, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 8)
                        test_error(strcmp("..@.....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@.....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 36: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 2, 11);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (0)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 11, "Funkcja set_player() powinna ustawić pozycję y gracza na 11, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 11)
                        test_error(strcmp("..@.....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@.....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 37: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 0, 13);

                test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (1)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 13, "Funkcja set_player() powinna ustawić pozycję y gracza na 13, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 13)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 38: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 8, 0);

                test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (1)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 8, "Funkcja set_player() powinna ustawić pozycję x gracza na 8, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 0, "Funkcja set_player() powinna ustawić pozycję y gracza na 0, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 0)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 39: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 0, -1);

                test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (1)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == -1, "Funkcja set_player() powinna ustawić pozycję y gracza na -1, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == -1)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 40: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, -1, 0);

                test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (1)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == -1, "Funkcja set_player() powinna ustawić pozycję x gracza na -1, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 0, "Funkcja set_player() powinna ustawić pozycję y gracza na 0, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 0)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 41: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, -2, 5);

                test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (1)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == -2, "Funkcja set_player() powinna ustawić pozycję x gracza na -2, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 5, "Funkcja set_player() powinna ustawić pozycję y gracza na 5, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 5)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 42: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 7, -2);

                test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (1)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == -2, "Funkcja set_player() powinna ustawić pozycję y gracza na -2, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == -2)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 43: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, -7, -1);

                test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (1)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == -7, "Funkcja set_player() powinna ustawić pozycję x gracza na -7, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == -1, "Funkcja set_player() powinna ustawić pozycję y gracza na -1, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == -1)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 44: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 14, 5);

                test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (1)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 14, "Funkcja set_player() powinna ustawić pozycję x gracza na 14, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 5, "Funkcja set_player() powinna ustawić pozycję y gracza na 5, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 5)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 45: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 3, 14);

                test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (1)
                    test_error(arr->is_init == 0, "Funkcja set_player() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);
                else
                {
                    test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                    test_error(arr->player.x == 3, "Funkcja set_player() powinna ustawić pozycję x gracza na 3, a ustawiła na %d", arr->player.x);
                    test_error(arr->player.y == 14, "Funkcja set_player() powinna ustawić pozycję y gracza na 14, a ustawiła na %d", arr->player.y);
                }
                
                for (int i = 0; i < 13; ++i)
                {
                    if (i == 14)
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                printf("#####START#####");
                free_board(arr);
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
//  Test 46: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

            char **temp = arr->board;
            arr->board = NULL;

            res = set_player(arr, 0, 0);

            test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->board = temp;

            printf("#####START#####");
            free_board(arr);
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
//  Test 47: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

            arr->width = -8;

            res = set_player(arr, 0, 0);

            test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 8;

            printf("#####START#####");
            free_board(arr);
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
//  Test 48: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

            arr->width = 0;

            res = set_player(arr, 0, 0);

            test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 8;

            printf("#####START#####");
            free_board(arr);
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
//  Test 49: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

            arr->height = -13;

            res = set_player(arr, 0, 0);

            test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 13;

            printf("#####START#####");
            free_board(arr);
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
//  Test 50: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

            arr->height = 0;

            res = set_player(arr, 0, 0);

            test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 13;

            printf("#####START#####");
            free_board(arr);
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
//  Test 51: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

            arr->is_init = 1;

            res = set_player(arr, 0, 0);

            test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            printf("#####START#####");
            free_board(arr);
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
//  Test 52: Sprawdzanie poprawności działania funkcji set_player
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji set_player", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int res = set_player(NULL, 0, 0);

            test_error(res == 1, "Funkcja set_player() powinna zwrócić 1, a zwróciła %d", res);
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
//  Test 53: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 20, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 13, 0);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 13, "Funkcja set_player() powinna ustawić pozycję x gracza na 13, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 0, "Funkcja set_player() powinna ustawić pozycję y gracza na 0, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 0)
                        test_error(strcmp(".............@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.............@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                struct board_t *temp = arr->move_player_up(arr);

                test_error(temp == arr, "Funkcja move_player_up() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 8)
                        test_error(strcmp(".............@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.............@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                test_error(arr->player.x == 13, "Funkcja set_player() powinna ustawić pozycję x gracza na 13, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 8, "Funkcja set_player() powinna ustawić pozycję y gracza na 8, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 54: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 20, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 0, 1);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 1, "Funkcja set_player() powinna ustawić pozycję y gracza na 1, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 1)
                        test_error(strcmp("@...................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '@...................', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                struct board_t *temp = arr->move_player_up(arr);

                test_error(temp == arr, "Funkcja move_player_up() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 0)
                        test_error(strcmp("@...................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '@...................', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 0, "Funkcja set_player() powinna ustawić pozycję y gracza na 0, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 55: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 20, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 2, 2);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 2, "Funkcja set_player() powinna ustawić pozycję y gracza na 2, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 2)
                        test_error(strcmp("..@.................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@.................', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                struct board_t *temp = arr->move_player_up(arr);

                test_error(temp == arr, "Funkcja move_player_up() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 1)
                        test_error(strcmp("..@.................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@.................', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 1, "Funkcja set_player() powinna ustawić pozycję y gracza na 1, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 56: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 20, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 13, 3);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 13, "Funkcja set_player() powinna ustawić pozycję x gracza na 13, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 3, "Funkcja set_player() powinna ustawić pozycję y gracza na 3, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 3)
                        test_error(strcmp(".............@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.............@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                struct board_t *temp = arr->move_player_up(arr);

                test_error(temp == arr, "Funkcja move_player_up() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 2)
                        test_error(strcmp(".............@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.............@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                test_error(arr->player.x == 13, "Funkcja set_player() powinna ustawić pozycję x gracza na 13, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 2, "Funkcja set_player() powinna ustawić pozycję y gracza na 2, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 57: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 20, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 11, 4);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 11, "Funkcja set_player() powinna ustawić pozycję x gracza na 11, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 4, "Funkcja set_player() powinna ustawić pozycję y gracza na 4, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 4)
                        test_error(strcmp("...........@........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...........@........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                struct board_t *temp = arr->move_player_up(arr);

                test_error(temp == arr, "Funkcja move_player_up() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 3)
                        test_error(strcmp("...........@........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...........@........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                test_error(arr->player.x == 11, "Funkcja set_player() powinna ustawić pozycję x gracza na 11, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 3, "Funkcja set_player() powinna ustawić pozycję y gracza na 3, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 58: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 20, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 9, 5);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 9, "Funkcja set_player() powinna ustawić pozycję x gracza na 9, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 5, "Funkcja set_player() powinna ustawić pozycję y gracza na 5, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 5)
                        test_error(strcmp(".........@..........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.........@..........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                struct board_t *temp = arr->move_player_up(arr);

                test_error(temp == arr, "Funkcja move_player_up() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 4)
                        test_error(strcmp(".........@..........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.........@..........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                test_error(arr->player.x == 9, "Funkcja set_player() powinna ustawić pozycję x gracza na 9, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 4, "Funkcja set_player() powinna ustawić pozycję y gracza na 4, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 59: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 20, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 18, 6);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 18, "Funkcja set_player() powinna ustawić pozycję x gracza na 18, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 6, "Funkcja set_player() powinna ustawić pozycję y gracza na 6, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 6)
                        test_error(strcmp("..................@.", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..................@.', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                struct board_t *temp = arr->move_player_up(arr);

                test_error(temp == arr, "Funkcja move_player_up() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 5)
                        test_error(strcmp("..................@.", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..................@.', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                test_error(arr->player.x == 18, "Funkcja set_player() powinna ustawić pozycję x gracza na 18, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 5, "Funkcja set_player() powinna ustawić pozycję y gracza na 5, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 60: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 20, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 13, 7);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 13, "Funkcja set_player() powinna ustawić pozycję x gracza na 13, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 7, "Funkcja set_player() powinna ustawić pozycję y gracza na 7, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 7)
                        test_error(strcmp(".............@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.............@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                struct board_t *temp = arr->move_player_up(arr);

                test_error(temp == arr, "Funkcja move_player_up() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 6)
                        test_error(strcmp(".............@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.............@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);
                }
                
                test_error(arr->player.x == 13, "Funkcja set_player() powinna ustawić pozycję x gracza na 13, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 6, "Funkcja set_player() powinna ustawić pozycję y gracza na 6, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 61: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            char **temp_board = arr->board;
            arr->board = NULL;

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->board = temp_board;

            printf("#####START#####");
            free_board(arr);
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
//  Test 62: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = -20;

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 20;

            printf("#####START#####");
            free_board(arr);
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
//  Test 63: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 0;

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 20;

            printf("#####START#####");
            free_board(arr);
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
//  Test 64: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = -9;

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            arr->height = 9;

            printf("#####START#####");
            free_board(arr);
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
//  Test 65: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 0;

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 9;

            printf("#####START#####");
            free_board(arr);
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
//  Test 66: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            printf("#####START#####");
            free_board(arr);
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
//  Test 67: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = -20;

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 68: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 20;

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 69: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = -9;

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 70: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 20, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 20, "Funkcja create_board() powinna ustawić szerokość planszy na 20, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("....................", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....................', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 9;

            struct board_t *temp = arr->move_player_up(arr);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 71: Sprawdzanie poprawności działania funkcji move_player_up
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji move_player_up", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *temp = move_player_up(NULL);

            test_error(temp == NULL, "Funkcja move_player_up() powinna zwrócić NULL w przypadku przekazania błędnych danych");
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
//  Test 72: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 15, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 2, 0);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 0, "Funkcja set_player() powinna ustawić pozycję y gracza na 0, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 0)
                        test_error(strcmp("..@............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@............', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_down(arr);

                test_error(temp == arr, "Funkcja move_player_down() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 1)
                        test_error(strcmp("..@............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@............', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 1, "Funkcja set_player() powinna ustawić pozycję y gracza na 1, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 73: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 15, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 3, 1);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 3, "Funkcja set_player() powinna ustawić pozycję x gracza na 3, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 1, "Funkcja set_player() powinna ustawić pozycję y gracza na 1, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 1)
                        test_error(strcmp("...@...........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...@...........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_down(arr);

                test_error(temp == arr, "Funkcja move_player_down() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 2)
                        test_error(strcmp("...@...........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...@...........', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 3, "Funkcja set_player() powinna ustawić pozycję x gracza na 3, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 2, "Funkcja set_player() powinna ustawić pozycję y gracza na 2, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 74: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 15, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 1, 2);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 1, "Funkcja set_player() powinna ustawić pozycję x gracza na 1, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 2, "Funkcja set_player() powinna ustawić pozycję y gracza na 2, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 2)
                        test_error(strcmp(".@.............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.@.............', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_down(arr);

                test_error(temp == arr, "Funkcja move_player_down() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 3)
                        test_error(strcmp(".@.............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.@.............', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 1, "Funkcja set_player() powinna ustawić pozycję x gracza na 1, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 3, "Funkcja set_player() powinna ustawić pozycję y gracza na 3, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 75: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 15, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 7, 3);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 3, "Funkcja set_player() powinna ustawić pozycję y gracza na 3, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 3)
                        test_error(strcmp(".......@.......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......@.......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_down(arr);

                test_error(temp == arr, "Funkcja move_player_down() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 4)
                        test_error(strcmp(".......@.......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......@.......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 4, "Funkcja set_player() powinna ustawić pozycję y gracza na 4, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 76: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 15, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 11, 4);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 11, "Funkcja set_player() powinna ustawić pozycję x gracza na 11, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 4, "Funkcja set_player() powinna ustawić pozycję y gracza na 4, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 4)
                        test_error(strcmp("...........@...", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...........@...', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_down(arr);

                test_error(temp == arr, "Funkcja move_player_down() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 5)
                        test_error(strcmp("...........@...", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...........@...', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 11, "Funkcja set_player() powinna ustawić pozycję x gracza na 11, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 5, "Funkcja set_player() powinna ustawić pozycję y gracza na 5, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 77: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 15, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 14, 5);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 14, "Funkcja set_player() powinna ustawić pozycję x gracza na 14, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 5, "Funkcja set_player() powinna ustawić pozycję y gracza na 5, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 5)
                        test_error(strcmp("..............@", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..............@', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_down(arr);

                test_error(temp == arr, "Funkcja move_player_down() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 6)
                        test_error(strcmp("..............@", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..............@', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 14, "Funkcja set_player() powinna ustawić pozycję x gracza na 14, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 6, "Funkcja set_player() powinna ustawić pozycję y gracza na 6, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 78: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 15, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 7, 6);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 6, "Funkcja set_player() powinna ustawić pozycję y gracza na 6, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 6)
                        test_error(strcmp(".......@.......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......@.......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_down(arr);

                test_error(temp == arr, "Funkcja move_player_down() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 7)
                        test_error(strcmp(".......@.......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......@.......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 7, "Funkcja set_player() powinna ustawić pozycję y gracza na 7, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 79: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 15, 9);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
                test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 11, 7);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 11, "Funkcja set_player() powinna ustawić pozycję x gracza na 11, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 7, "Funkcja set_player() powinna ustawić pozycję y gracza na 7, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 7)
                        test_error(strcmp("...........@...", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...........@...', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_down(arr);

                test_error(temp == arr, "Funkcja move_player_down() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                {
                    if (i == 8)
                        test_error(strcmp("...........@...", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...........@...', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 11, "Funkcja set_player() powinna ustawić pozycję x gracza na 11, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 8, "Funkcja set_player() powinna ustawić pozycję y gracza na 8, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 80: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            char **temp_board = arr->board;
            arr->board = NULL;

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->board = temp_board;

            printf("#####START#####");
            free_board(arr);
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
//  Test 81: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = -15;

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 15;

            printf("#####START#####");
            free_board(arr);
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
//  Test 82: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 0;

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 15;

            printf("#####START#####");
            free_board(arr);
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
//  Test 83: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = -9;

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            arr->height = 9;

            printf("#####START#####");
            free_board(arr);
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
//  Test 84: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 0;

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 9;

            printf("#####START#####");
            free_board(arr);
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
//  Test 85: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            printf("#####START#####");
            free_board(arr);
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
//  Test 86: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = -15;

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 87: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 15;

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 88: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = -9;

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 89: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 15, 9);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 15, "Funkcja create_board() powinna ustawić szerokość planszy na 15, a ustawiła na %d", arr->width);
            test_error(arr->height == 9, "Funkcja create_board() powinna ustawić wysokość planszy na 9, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 9; ++i)
                test_error(strcmp("...............", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...............', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 9;

            struct board_t *temp = arr->move_player_down(arr);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 90: Sprawdzanie poprawności działania funkcji move_player_down
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji move_player_down", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *temp = move_player_down(NULL);

            test_error(temp == NULL, "Funkcja move_player_down() powinna zwrócić NULL w przypadku przekazania błędnych danych");
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
//  Test 91: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 0, 3);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 3, "Funkcja set_player() powinna ustawić pozycję y gracza na 3, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 3)
                        test_error(strcmp("@.......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '@.......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_left(arr);

                test_error(temp == arr, "Funkcja move_player_left() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 3)
                        test_error(strcmp(".......@", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '@.......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 3, "Funkcja set_player() powinna ustawić pozycję y gracza na 3, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 92: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 1, 12);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 1, "Funkcja set_player() powinna ustawić pozycję x gracza na 1, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 12, "Funkcja set_player() powinna ustawić pozycję y gracza na 12, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 12)
                        test_error(strcmp(".@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_left(arr);

                test_error(temp == arr, "Funkcja move_player_left() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 12)
                        test_error(strcmp("@.......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 12, "Funkcja set_player() powinna ustawić pozycję y gracza na 12, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 93: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 2, 11);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 11, "Funkcja set_player() powinna ustawić pozycję y gracza na 11, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 11)
                        test_error(strcmp("..@.....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@.....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_left(arr);

                test_error(temp == arr, "Funkcja move_player_left() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 11)
                        test_error(strcmp(".@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@.....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 1, "Funkcja set_player() powinna ustawić pozycję x gracza na 1, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 11, "Funkcja set_player() powinna ustawić pozycję y gracza na 11, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 94: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 3, 10);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 3, "Funkcja set_player() powinna ustawić pozycję x gracza na 3, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 10, "Funkcja set_player() powinna ustawić pozycję y gracza na 10, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 10)
                        test_error(strcmp("...@....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...@....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_left(arr);

                test_error(temp == arr, "Funkcja move_player_left() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 10)
                        test_error(strcmp("..@.....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...@....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 10, "Funkcja set_player() powinna ustawić pozycję y gracza na 10, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 95: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 4, 0);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 4, "Funkcja set_player() powinna ustawić pozycję x gracza na 4, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 0, "Funkcja set_player() powinna ustawić pozycję y gracza na 0, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 0)
                        test_error(strcmp("....@...", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....@...', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_left(arr);

                test_error(temp == arr, "Funkcja move_player_left() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 0)
                        test_error(strcmp("...@....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....@...', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 3, "Funkcja set_player() powinna ustawić pozycję x gracza na 3, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 0, "Funkcja set_player() powinna ustawić pozycję y gracza na 0, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 96: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 5, 6);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 5, "Funkcja set_player() powinna ustawić pozycję x gracza na 5, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 6, "Funkcja set_player() powinna ustawić pozycję y gracza na 6, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 6)
                        test_error(strcmp(".....@..", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.....@..', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_left(arr);

                test_error(temp == arr, "Funkcja move_player_left() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 6)
                        test_error(strcmp("....@...", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.....@..', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 4, "Funkcja set_player() powinna ustawić pozycję x gracza na 4, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 6, "Funkcja set_player() powinna ustawić pozycję y gracza na 6, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 97: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 6, 9);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 6, "Funkcja set_player() powinna ustawić pozycję x gracza na 6, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 9, "Funkcja set_player() powinna ustawić pozycję y gracza na 9, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 9)
                        test_error(strcmp("......@.", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '......@.', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_left(arr);

                test_error(temp == arr, "Funkcja move_player_left() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 9)
                        test_error(strcmp(".....@..", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '......@.', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 5, "Funkcja set_player() powinna ustawić pozycję x gracza na 5, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 9, "Funkcja set_player() powinna ustawić pozycję y gracza na 9, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 98: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 8, 13);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 7, 4);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 7, "Funkcja set_player() powinna ustawić pozycję x gracza na 7, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 4, "Funkcja set_player() powinna ustawić pozycję y gracza na 4, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 4)
                        test_error(strcmp(".......@", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......@', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_left(arr);

                test_error(temp == arr, "Funkcja move_player_left() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                {
                    if (i == 4)
                        test_error(strcmp("......@.", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......@', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 6, "Funkcja set_player() powinna ustawić pozycję x gracza na 6, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 4, "Funkcja set_player() powinna ustawić pozycję y gracza na 4, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 99: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            char **temp_board = arr->board;
            arr->board = NULL;

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->board = temp_board;

            printf("#####START#####");
            free_board(arr);
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
//  Test 100: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = -8;

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 8;

            printf("#####START#####");
            free_board(arr);
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
//  Test 101: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 0;

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 8;

            printf("#####START#####");
            free_board(arr);
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
//  Test 102: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = -13;

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            arr->height = 13;

            printf("#####START#####");
            free_board(arr);
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
//  Test 103: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 0;

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 13;

            printf("#####START#####");
            free_board(arr);
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
//  Test 104: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            printf("#####START#####");
            free_board(arr);
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
//  Test 105: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = -8;

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 106: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 8;

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 107: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = -13;

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 108: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 8, 13);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 8, "Funkcja create_board() powinna ustawić szerokość planszy na 8, a ustawiła na %d", arr->width);
            test_error(arr->height == 13, "Funkcja create_board() powinna ustawić wysokość planszy na 13, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 13; ++i)
                test_error(strcmp("........", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '........', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 13;

            struct board_t *temp = arr->move_player_left(arr);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 109: Sprawdzanie poprawności działania funkcji move_player_left
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji move_player_left", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *temp = move_player_left(NULL);

            test_error(temp == NULL, "Funkcja move_player_left() powinna zwrócić NULL w przypadku przekazania błędnych danych");
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
//  Test 110: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 7, 14);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
                test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 0, 1);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 1, "Funkcja set_player() powinna ustawić pozycję y gracza na 1, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 1)
                        test_error(strcmp("@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_right(arr);

                test_error(temp == arr, "Funkcja move_player_right() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 1)
                        test_error(strcmp(".@.....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '@......', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 1, "Funkcja set_player() powinna ustawić pozycję x gracza na 1, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 1, "Funkcja set_player() powinna ustawić pozycję y gracza na 1, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 111: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 7, 14);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
                test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 1, 6);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 1, "Funkcja set_player() powinna ustawić pozycję x gracza na 1, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 6, "Funkcja set_player() powinna ustawić pozycję y gracza na 6, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 6)
                        test_error(strcmp(".@.....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.@.....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_right(arr);

                test_error(temp == arr, "Funkcja move_player_right() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 6)
                        test_error(strcmp("..@....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.@.....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 6, "Funkcja set_player() powinna ustawić pozycję y gracza na 6, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 112: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 7, 14);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
                test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 2, 4);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 2, "Funkcja set_player() powinna ustawić pozycję x gracza na 2, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 4, "Funkcja set_player() powinna ustawić pozycję y gracza na 4, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 4)
                        test_error(strcmp("..@....", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_right(arr);

                test_error(temp == arr, "Funkcja move_player_right() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 4)
                        test_error(strcmp("...@...", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '..@....', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 3, "Funkcja set_player() powinna ustawić pozycję x gracza na 3, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 4, "Funkcja set_player() powinna ustawić pozycję y gracza na 4, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 113: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 7, 14);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
                test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 3, 1);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 3, "Funkcja set_player() powinna ustawić pozycję x gracza na 3, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 1, "Funkcja set_player() powinna ustawić pozycję y gracza na 1, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 1)
                        test_error(strcmp("...@...", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...@...', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_right(arr);

                test_error(temp == arr, "Funkcja move_player_right() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 1)
                        test_error(strcmp("....@..", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '...@...', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 4, "Funkcja set_player() powinna ustawić pozycję x gracza na 4, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 1, "Funkcja set_player() powinna ustawić pozycję y gracza na 1, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 114: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 7, 14);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
                test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 4, 10);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 4, "Funkcja set_player() powinna ustawić pozycję x gracza na 4, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 10, "Funkcja set_player() powinna ustawić pozycję y gracza na 10, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 10)
                        test_error(strcmp("....@..", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....@..', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_right(arr);

                test_error(temp == arr, "Funkcja move_player_right() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 10)
                        test_error(strcmp(".....@.", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '....@..', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 5, "Funkcja set_player() powinna ustawić pozycję x gracza na 5, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 10, "Funkcja set_player() powinna ustawić pozycję y gracza na 10, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 115: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 7, 14);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
                test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 5, 9);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 5, "Funkcja set_player() powinna ustawić pozycję x gracza na 5, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 9, "Funkcja set_player() powinna ustawić pozycję y gracza na 9, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 9)
                        test_error(strcmp(".....@.", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.....@.', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_right(arr);

                test_error(temp == arr, "Funkcja move_player_right() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 9)
                        test_error(strcmp("......@", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.....@.', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 6, "Funkcja set_player() powinna ustawić pozycję x gracza na 6, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 9, "Funkcja set_player() powinna ustawić pozycję y gracza na 9, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 116: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct board_t *arr;

                printf("#####START#####");
                int res = create_board(&arr, 7, 14);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
                test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
                test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
                test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

                res = set_player(arr, 6, 12);

                test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->is_init == 1, "Funkcja set_player() powinna ustawić flagę is_init na 1, a ustawiła na %d", arr->is_init);
                test_error(arr->player.x == 6, "Funkcja set_player() powinna ustawić pozycję x gracza na 6, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 12, "Funkcja set_player() powinna ustawić pozycję y gracza na 12, a ustawiła na %d", arr->player.y);

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 12)
                        test_error(strcmp("......@", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '......@', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                struct board_t *temp = arr->move_player_right(arr);

                test_error(temp == arr, "Funkcja move_player_right() powinna zwrócić adres struktury przekazanej w parametrze");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                {
                    if (i == 12)
                        test_error(strcmp("@......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '......@', a ustawiła na '%s'", i, arr->board[i]);               
                    else
                        test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);
                }

                test_error(arr->player.x == 0, "Funkcja set_player() powinna ustawić pozycję x gracza na 0, a ustawiła na %d", arr->player.x);
                test_error(arr->player.y == 12, "Funkcja set_player() powinna ustawić pozycję y gracza na 12, a ustawiła na %d", arr->player.y);

                printf("#####START#####");
                free_board(arr);
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
//  Test 117: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            char **temp_board = arr->board;
            arr->board = NULL;

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->board = temp_board;

            printf("#####START#####");
            free_board(arr);
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
//  Test 118: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = -7;

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 7;

            printf("#####START#####");
            free_board(arr);
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
//  Test 119: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 0;

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->width = 7;

            printf("#####START#####");
            free_board(arr);
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
//  Test 120: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = -14;

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


            arr->height = 14;

            printf("#####START#####");
            free_board(arr);
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
//  Test 121: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 0;

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->height = 14;

            printf("#####START#####");
            free_board(arr);
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
//  Test 122: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            printf("#####START#####");
            free_board(arr);
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
//  Test 123: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = -7;

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 124: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 7;

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.x = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 125: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = -14;

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 126: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *arr;

            printf("#####START#####");
            int res = create_board(&arr, 7, 14);
            printf("#####END#####");

            test_error(res == 0, "Funkcja create_board() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->board != NULL, "Funkcja create_board() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");
            test_error(arr->width == 7, "Funkcja create_board() powinna ustawić szerokość planszy na 7, a ustawiła na %d", arr->width);
            test_error(arr->height == 14, "Funkcja create_board() powinna ustawić wysokość planszy na 14, a ustawiła na %d", arr->height);
            test_error(arr->is_init == 0, "Funkcja create_board() powinna ustawić flagę is_init na 0, a ustawiła na %d", arr->is_init);

            for (int i = 0; i < 14; ++i)
                test_error(strcmp(".......", arr->board[i]) == 0, "Funkcja create_board() powinna ustawić zwartość wiersza %d na '.......', a ustawiła na '%s'", i, arr->board[i]);


            res = set_player(arr, 0, 0);

            test_error(res == 0, "Funkcja set_player() powinna zwrócić 0, a zwróciła %d", res);
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 14;

            struct board_t *temp = arr->move_player_right(arr);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            arr->player.y = 0;

            printf("#####START#####");
            free_board(arr);
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
//  Test 127: Sprawdzanie poprawności działania funkcji move_player_right
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzanie poprawności działania funkcji move_player_right", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct board_t *temp = move_player_right(NULL);

            test_error(temp == NULL, "Funkcja move_player_right() powinna zwrócić NULL w przypadku przekazania błędnych danych");
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
//  Test 1: Reakcja na brak pamięci - limit ustawiony na 112 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit ustawiony na 112 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(112);
    
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
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 112 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 112 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(112);
    
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
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 119 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 119 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(119);
    
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
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 126 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 126 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(126);
    
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
//  Test 5: Reakcja na brak pamięci - limit ustawiony na 133 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit ustawiony na 133 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(133);
    
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
//  Test 6: Reakcja na brak pamięci - limit ustawiony na 140 bajtów
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na brak pamięci - limit ustawiony na 140 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(140);
    
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
//  Test 7: Reakcja na brak pamięci - limit ustawiony na 147 bajtów
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na brak pamięci - limit ustawiony na 147 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(147);
    
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
//  Test 8: Reakcja na brak pamięci - limit ustawiony na 154 bajtów
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na brak pamięci - limit ustawiony na 154 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(154);
    
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
//  Test 9: Reakcja na brak pamięci - limit ustawiony na 161 bajtów
//
void MTEST9(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(9, "Reakcja na brak pamięci - limit ustawiony na 161 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(161);
    
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
//  Test 10: Reakcja na brak pamięci - limit ustawiony na 168 bajtów
//
void MTEST10(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(10, "Reakcja na brak pamięci - limit ustawiony na 168 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(168);
    
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
//  Test 11: Reakcja na brak pamięci - limit ustawiony na 175 bajtów
//
void MTEST11(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(11, "Reakcja na brak pamięci - limit ustawiony na 175 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(175);
    
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
//  Test 12: Reakcja na brak pamięci - limit ustawiony na 182 bajtów
//
void MTEST12(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(12, "Reakcja na brak pamięci - limit ustawiony na 182 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(182);
    
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
//  Test 13: Reakcja na brak pamięci - limit ustawiony na 189 bajtów
//
void MTEST13(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(13, "Reakcja na brak pamięci - limit ustawiony na 189 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(189);
    
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
//  Test 14: Reakcja na brak pamięci - limit ustawiony na 196 bajtów
//
void MTEST14(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(14, "Reakcja na brak pamięci - limit ustawiony na 196 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(196);
    
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
//  Test 15: Reakcja na brak pamięci - limit ustawiony na 203 bajtów
//
void MTEST15(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(15, "Reakcja na brak pamięci - limit ustawiony na 203 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(203);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji create_board
            UTEST2, // Sprawdzanie poprawności działania funkcji create_board
            UTEST3, // Sprawdzanie poprawności działania funkcji create_board
            UTEST4, // Sprawdzanie poprawności działania funkcji create_board
            UTEST5, // Sprawdzanie poprawności działania funkcji create_board
            UTEST6, // Sprawdzanie poprawności działania funkcji create_board
            UTEST7, // Sprawdzanie poprawności działania funkcji create_board
            UTEST8, // Sprawdzanie poprawności działania funkcji create_board
            UTEST9, // Sprawdzanie poprawności działania funkcji create_board
            UTEST10, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 368 bajtów)
            UTEST11, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 92 bajtów)
            UTEST12, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 34516 bajtów)
            UTEST13, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST14, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 64 bajtów)
            UTEST15, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 176 bajtów)
            UTEST16, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 192 bajtów)
            UTEST17, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 208 bajtów)
            UTEST18, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 224 bajtów)
            UTEST19, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 240 bajtów)
            UTEST20, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 256 bajtów)
            UTEST21, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 272 bajtów)
            UTEST22, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 288 bajtów)
            UTEST23, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 304 bajtów)
            UTEST24, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 320 bajtów)
            UTEST25, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 336 bajtów)
            UTEST26, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 352 bajtów)
            UTEST27, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 368 bajtów)
            UTEST28, // Sprawdzanie reakcji funkcji create_board na limit pamięci (limit sterty ustawiono na 384 bajtów)
            UTEST29, // Sprawdzanie poprawności działania funkcji create_board
            UTEST30, // Sprawdzanie poprawności działania funkcji set_player
            UTEST31, // Sprawdzanie poprawności działania funkcji set_player
            UTEST32, // Sprawdzanie poprawności działania funkcji set_player
            UTEST33, // Sprawdzanie poprawności działania funkcji set_player
            UTEST34, // Sprawdzanie poprawności działania funkcji set_player
            UTEST35, // Sprawdzanie poprawności działania funkcji set_player
            UTEST36, // Sprawdzanie poprawności działania funkcji set_player
            UTEST37, // Sprawdzanie poprawności działania funkcji set_player
            UTEST38, // Sprawdzanie poprawności działania funkcji set_player
            UTEST39, // Sprawdzanie poprawności działania funkcji set_player
            UTEST40, // Sprawdzanie poprawności działania funkcji set_player
            UTEST41, // Sprawdzanie poprawności działania funkcji set_player
            UTEST42, // Sprawdzanie poprawności działania funkcji set_player
            UTEST43, // Sprawdzanie poprawności działania funkcji set_player
            UTEST44, // Sprawdzanie poprawności działania funkcji set_player
            UTEST45, // Sprawdzanie poprawności działania funkcji set_player
            UTEST46, // Sprawdzanie poprawności działania funkcji set_player
            UTEST47, // Sprawdzanie poprawności działania funkcji set_player
            UTEST48, // Sprawdzanie poprawności działania funkcji set_player
            UTEST49, // Sprawdzanie poprawności działania funkcji set_player
            UTEST50, // Sprawdzanie poprawności działania funkcji set_player
            UTEST51, // Sprawdzanie poprawności działania funkcji set_player
            UTEST52, // Sprawdzanie poprawności działania funkcji set_player
            UTEST53, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST54, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST55, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST56, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST57, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST58, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST59, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST60, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST61, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST62, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST63, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST64, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST65, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST66, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST67, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST68, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST69, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST70, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST71, // Sprawdzanie poprawności działania funkcji move_player_up
            UTEST72, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST73, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST74, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST75, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST76, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST77, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST78, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST79, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST80, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST81, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST82, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST83, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST84, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST85, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST86, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST87, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST88, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST89, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST90, // Sprawdzanie poprawności działania funkcji move_player_down
            UTEST91, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST92, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST93, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST94, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST95, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST96, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST97, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST98, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST99, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST100, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST101, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST102, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST103, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST104, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST105, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST106, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST107, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST108, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST109, // Sprawdzanie poprawności działania funkcji move_player_left
            UTEST110, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST111, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST112, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST113, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST114, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST115, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST116, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST117, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST118, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST119, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST120, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST121, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST122, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST123, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST124, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST125, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST126, // Sprawdzanie poprawności działania funkcji move_player_right
            UTEST127, // Sprawdzanie poprawności działania funkcji move_player_right
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
            test_summary(127); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci - limit ustawiony na 112 bajtów
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 112 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 119 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 126 bajtów
            MTEST5, // Reakcja na brak pamięci - limit ustawiony na 133 bajtów
            MTEST6, // Reakcja na brak pamięci - limit ustawiony na 140 bajtów
            MTEST7, // Reakcja na brak pamięci - limit ustawiony na 147 bajtów
            MTEST8, // Reakcja na brak pamięci - limit ustawiony na 154 bajtów
            MTEST9, // Reakcja na brak pamięci - limit ustawiony na 161 bajtów
            MTEST10, // Reakcja na brak pamięci - limit ustawiony na 168 bajtów
            MTEST11, // Reakcja na brak pamięci - limit ustawiony na 175 bajtów
            MTEST12, // Reakcja na brak pamięci - limit ustawiony na 182 bajtów
            MTEST13, // Reakcja na brak pamięci - limit ustawiony na 189 bajtów
            MTEST14, // Reakcja na brak pamięci - limit ustawiony na 196 bajtów
            MTEST15, // Reakcja na brak pamięci - limit ustawiony na 203 bajtów
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
            test_summary(15); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}