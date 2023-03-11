/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Jeszcze więcej punktów
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-06 16:52:39.829827
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


        struct point_t
        {
            int x;
            int y;
        };
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji read
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji read", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t *p = read(NULL); 
            test_error(p == NULL, "Funkcja read() powinna zwrócić NULL w przypadku przekazania do funkcji wartości NULL w pierwszym parametrze");
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzenie poprawności działania funkcji save_points_b()
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzenie poprawności działania funkcji save_points_b()", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                struct point_t p[] = { { .x = -7, .y = 2 }, { .x = 2, .y = 3 }, { .x = 5, .y = -7 }, { .x = 3, .y = 9 }, { .x = 7, .y = -7 }, { .x = -8, .y = -9 }, { .x = -10, .y = 9 }, { .x = 0, .y = 3 }, { .x = 9, .y = 5 }, { .x = -3, .y = 1 }, { .x = 2, .y = -1 }, { .x = 7, .y = 4 }, { .x = -6, .y = -7 }, { .x = -5, .y = 4 }, { .x = -3, .y = -1 }, { .x = 4, .y = 0 }, { .x = 7, .y = -7 }, { .x = 10, .y = -5 }, { .x = -4, .y = 5 }, { .x = 8, .y = 8 }, { .x = -3, .y = -3 }, { .x = -3, .y = 10 }, { .x = -1, .y = -8 }, { .x = -2, .y = -6 }, { .x = 8, .y = -7 }, { .x = -2, .y = 10 }, { .x = 9, .y = -10 }, { .x = 5, .y = -10 }, { .x = 5, .y = 4 }, { .x = 0, .y = -9 }, { .x = 3, .y = -1 }, { .x = -9, .y = -6 }, { .x = -6, .y = 7 }, { .x = 10, .y = 9 }, { .x = 6, .y = -2 }, { .x = 5, .y = -6 }, { .x = 7, .y = 8 }, { .x = -1, .y = 2 }, { .x = -6, .y = 2 }, { .x = -3, .y = 4 }, { .x = -5, .y = 7 }, { .x = 9, .y = -5 }, { .x = -4, .y = 7 }, { .x = 9, .y = 5 }, { .x = 2, .y = -2 }, { .x = -10, .y = -3 }, { .x = -5, .y = -6 }, { .x = 5, .y = 9 }, { .x = -5, .y = -5 }, { .x = 2, .y = 2 }, { .x = 2, .y = -2 }, { .x = -5, .y = 10 }, { .x = 8, .y = 0 }, { .x = -9, .y = -8 }, { .x = 6, .y = 9 }, { .x = 9, .y = 0 }, { .x = 3, .y = 1 }, { .x = -9, .y = 5 }, { .x = 7, .y = -3 }, { .x = 1, .y = -8 }, { .x = -3, .y = -5 }, { .x = -9, .y = -6 }, { .x = -8, .y = 5 }, { .x = -6, .y = -6 }, { .x = 4, .y = 0 }, { .x = -4, .y = 4 }, { .x = 2, .y = 5 }, { .x = 6, .y = -9 }, { .x = 2, .y = 3 }, { .x = -1, .y = -6 }, { .x = 2, .y = -6 }, { .x = 0, .y = -9 }, { .x = 5, .y = 8 }, { .x = -6, .y = -9 }, { .x = -9, .y = 4 }, { .x = 6, .y = 0 }, { .x = -6, .y = -3 }, { .x = 8, .y = 0 }, { .x = 10, .y = 8 }, { .x = 5, .y = 4 }, { .x = 3, .y = -5 }, { .x = -6, .y = -7 }, { .x = -2, .y = -9 }, { .x = -2, .y = -7 }, { .x = -1, .y = -2 }, { .x = 5, .y = 2 }, { .x = 1, .y = 1 }, { .x = 7, .y = 7 }, { .x = -10, .y = 3 }, { .x = 2, .y = 1 }, { .x = 0, .y = -9 }, { .x = 4, .y = 0 }, { .x = 8, .y = 10 }, { .x = -7, .y = 0 }, { .x = 5, .y = 1 }, { .x = 9, .y = -1 }, { .x = 8, .y = -9 }, { .x = 3, .y = -2 }, { .x = -2, .y = -7 }, { .x = 7, .y = -10 }, { .x = 0, .y = 2 }, { .x = 8, .y = 0 }, { .x = -9, .y = 6 }, { .x = 1, .y = 7 }, { .x = 6, .y = 0 }, { .x = -10, .y = 7 }, { .x = -9, .y = 10 }, { .x = -3, .y = 6 }, { .x = -6, .y = -10 }, { .x = -8, .y = 8 }, { .x = -1, .y = 5 }, { .x = -1, .y = -1 }, { .x = 3, .y = 4 }, { .x = -5, .y = 5 }, { .x = 8, .y = 3 }, { .x = -4, .y = 0 }, { .x = 6, .y = -1 }, { .x = 6, .y = 0 }, { .x = -1, .y = 10 }, { .x = -9, .y = 4 }, { .x = -6, .y = -5 }, { .x = 4, .y = 5 }, { .x = 9, .y = -6 }, { .x = -7, .y = -3 }, { .x = 9, .y = -3 }, { .x = -6, .y = 9 }, { .x = 9, .y = 8 }, { .x = -9, .y = 9 }, { .x = 0, .y = -8 }, { .x = 8, .y = 9 }, { .x = -3, .y = -8 }, { .x = 4, .y = -7 }, { .x = 4, .y = 10 }, { .x = -3, .y = 10 }, { .x = -3, .y = 5 }, { .x = 1, .y = -1 }, { .x = 5, .y = -8 }, { .x = -2, .y = -3 }, { .x = -3, .y = -3 }, { .x = 0, .y = 4 }, { .x = -5, .y = -4 }, { .x = 9, .y = 5 }, { .x = 9, .y = 5 }, { .x = -7, .y = -3 }, { .x = -7, .y = 9 }, { .x = 4, .y = -9 }, { .x = -10, .y = 1 }, { .x = -7, .y = 6 }, { .x = 6, .y = -4 }, { .x = 9, .y = -1 }, { .x = 8, .y = -6 }, { .x = -6, .y = 6 }, { .x = -9, .y = -7 }, { .x = -3, .y = 9 }, { .x = -5, .y = -4 }, { .x = 7, .y = -4 }, { .x = 4, .y = -1 }, { .x = 10, .y = 10 }, { .x = -7, .y = -3 }, { .x = 4, .y = -2 }, { .x = -8, .y = 0 }, { .x = 0, .y = -10 }, { .x = 8, .y = -10 }, { .x = -3, .y = -4 }, { .x = 10, .y = 9 }, { .x = 5, .y = 9 }, { .x = 7, .y = -6 }, { .x = 8, .y = -1 }, { .x = 10, .y = 0 }, { .x = -6, .y = -7 }, { .x = 7, .y = 6 }, { .x = 10, .y = -5 }, { .x = 8, .y = 9 }, { .x = 4, .y = 7 }, { .x = 8, .y = -7 }, { .x = 10, .y = 4 }, { .x = 3, .y = 4 }, { .x = -7, .y = 4 }, { .x = 0, .y = 1 }, { .x = -9, .y = 2 }, { .x = -3, .y = 3 }, { .x = 1, .y = -8 }, { .x = 7, .y = -4 }, { .x = -9, .y = 0 }, { .x = -6, .y = -2 }, { .x = 6, .y = 9 }, { .x = 1, .y = 3 }, { .x = 5, .y = 10 }, { .x = -3, .y = -2 }, { .x = 4, .y = -4 }, { .x = 5, .y = 4 }, { .x = -9, .y = 0 }, { .x = 9, .y = -6 }, { .x = -7, .y = -10 }, { .x = 0, .y = -2 }, { .x = -2, .y = -9 }, { .x = -9, .y = 3 }, { .x = 9, .y = -4 }, { .x = -5, .y = 1 }, { .x = -6, .y = -6 } };
                
                printf("#####START#####");
                int err_code = save_points_b("art.bin", p, 200);
                printf("#####END#####");
        
                test_error(err_code == 0, "Funkcja save_points_b powinna zwrócić 0, a zwróciła %d", err_code );
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzenie poprawności działania funkcji save_points_b()
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzenie poprawności działania funkcji save_points_b()", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                struct point_t p[] = { { .x = -7, .y = 2 }, { .x = 2, .y = 3 }, { .x = 5, .y = -7 }, { .x = 3, .y = 9 }, { .x = 7, .y = -7 }, { .x = -8, .y = -9 }, { .x = -10, .y = 9 }, { .x = 0, .y = 3 }, { .x = 9, .y = 5 }, { .x = -3, .y = 1 }, { .x = 2, .y = -1 }, { .x = 7, .y = 4 }, { .x = -6, .y = -7 }, { .x = -5, .y = 4 }, { .x = -3, .y = -1 }, { .x = 4, .y = 0 }, { .x = 7, .y = -7 }, { .x = 10, .y = -5 }, { .x = -4, .y = 5 }, { .x = 8, .y = 8 }, { .x = -3, .y = -3 }, { .x = -3, .y = 10 }, { .x = -1, .y = -8 }, { .x = -2, .y = -6 }, { .x = 8, .y = -7 }, { .x = -2, .y = 10 }, { .x = 9, .y = -10 }, { .x = 5, .y = -10 }, { .x = 5, .y = 4 }, { .x = 0, .y = -9 }, { .x = 3, .y = -1 }, { .x = -9, .y = -6 }, { .x = -6, .y = 7 }, { .x = 10, .y = 9 }, { .x = 6, .y = -2 }, { .x = 5, .y = -6 }, { .x = 7, .y = 8 }, { .x = -1, .y = 2 }, { .x = -6, .y = 2 }, { .x = -3, .y = 4 }, { .x = -5, .y = 7 }, { .x = 9, .y = -5 }, { .x = -4, .y = 7 }, { .x = 9, .y = 5 }, { .x = 2, .y = -2 }, { .x = -10, .y = -3 }, { .x = -5, .y = -6 }, { .x = 5, .y = 9 }, { .x = -5, .y = -5 }, { .x = 2, .y = 2 }, { .x = 2, .y = -2 }, { .x = -5, .y = 10 }, { .x = 8, .y = 0 }, { .x = -9, .y = -8 }, { .x = 6, .y = 9 }, { .x = 9, .y = 0 }, { .x = 3, .y = 1 }, { .x = -9, .y = 5 }, { .x = 7, .y = -3 }, { .x = 1, .y = -8 }, { .x = -3, .y = -5 }, { .x = -9, .y = -6 }, { .x = -8, .y = 5 }, { .x = -6, .y = -6 }, { .x = 4, .y = 0 }, { .x = -4, .y = 4 }, { .x = 2, .y = 5 }, { .x = 6, .y = -9 }, { .x = 2, .y = 3 }, { .x = -1, .y = -6 }, { .x = 2, .y = -6 }, { .x = 0, .y = -9 }, { .x = 5, .y = 8 }, { .x = -6, .y = -9 }, { .x = -9, .y = 4 }, { .x = 6, .y = 0 }, { .x = -6, .y = -3 }, { .x = 8, .y = 0 }, { .x = 10, .y = 8 }, { .x = 5, .y = 4 }, { .x = 3, .y = -5 }, { .x = -6, .y = -7 }, { .x = -2, .y = -9 }, { .x = -2, .y = -7 }, { .x = -1, .y = -2 }, { .x = 5, .y = 2 }, { .x = 1, .y = 1 }, { .x = 7, .y = 7 }, { .x = -10, .y = 3 }, { .x = 2, .y = 1 }, { .x = 0, .y = -9 }, { .x = 4, .y = 0 }, { .x = 8, .y = 10 }, { .x = -7, .y = 0 }, { .x = 5, .y = 1 }, { .x = 9, .y = -1 }, { .x = 8, .y = -9 }, { .x = 3, .y = -2 }, { .x = -2, .y = -7 }, { .x = 7, .y = -10 }, { .x = 0, .y = 2 }, { .x = 8, .y = 0 }, { .x = -9, .y = 6 }, { .x = 1, .y = 7 }, { .x = 6, .y = 0 }, { .x = -10, .y = 7 }, { .x = -9, .y = 10 }, { .x = -3, .y = 6 }, { .x = -6, .y = -10 }, { .x = -8, .y = 8 }, { .x = -1, .y = 5 }, { .x = -1, .y = -1 }, { .x = 3, .y = 4 }, { .x = -5, .y = 5 }, { .x = 8, .y = 3 }, { .x = -4, .y = 0 }, { .x = 6, .y = -1 }, { .x = 6, .y = 0 }, { .x = -1, .y = 10 }, { .x = -9, .y = 4 }, { .x = -6, .y = -5 }, { .x = 4, .y = 5 }, { .x = 9, .y = -6 }, { .x = -7, .y = -3 }, { .x = 9, .y = -3 }, { .x = -6, .y = 9 }, { .x = 9, .y = 8 }, { .x = -9, .y = 9 }, { .x = 0, .y = -8 }, { .x = 8, .y = 9 }, { .x = -3, .y = -8 }, { .x = 4, .y = -7 }, { .x = 4, .y = 10 }, { .x = -3, .y = 10 }, { .x = -3, .y = 5 }, { .x = 1, .y = -1 }, { .x = 5, .y = -8 }, { .x = -2, .y = -3 }, { .x = -3, .y = -3 }, { .x = 0, .y = 4 }, { .x = -5, .y = -4 }, { .x = 9, .y = 5 }, { .x = 9, .y = 5 }, { .x = -7, .y = -3 }, { .x = -7, .y = 9 }, { .x = 4, .y = -9 }, { .x = -10, .y = 1 }, { .x = -7, .y = 6 }, { .x = 6, .y = -4 }, { .x = 9, .y = -1 }, { .x = 8, .y = -6 }, { .x = -6, .y = 6 }, { .x = -9, .y = -7 }, { .x = -3, .y = 9 }, { .x = -5, .y = -4 }, { .x = 7, .y = -4 }, { .x = 4, .y = -1 }, { .x = 10, .y = 10 }, { .x = -7, .y = -3 }, { .x = 4, .y = -2 }, { .x = -8, .y = 0 }, { .x = 0, .y = -10 }, { .x = 8, .y = -10 }, { .x = -3, .y = -4 }, { .x = 10, .y = 9 }, { .x = 5, .y = 9 }, { .x = 7, .y = -6 }, { .x = 8, .y = -1 }, { .x = 10, .y = 0 }, { .x = -6, .y = -7 }, { .x = 7, .y = 6 }, { .x = 10, .y = -5 }, { .x = 8, .y = 9 }, { .x = 4, .y = 7 }, { .x = 8, .y = -7 }, { .x = 10, .y = 4 }, { .x = 3, .y = 4 }, { .x = -7, .y = 4 }, { .x = 0, .y = 1 }, { .x = -9, .y = 2 }, { .x = -3, .y = 3 }, { .x = 1, .y = -8 }, { .x = 7, .y = -4 }, { .x = -9, .y = 0 }, { .x = -6, .y = -2 }, { .x = 6, .y = 9 }, { .x = 1, .y = 3 }, { .x = 5, .y = 10 }, { .x = -3, .y = -2 }, { .x = 4, .y = -4 }, { .x = 5, .y = 4 }, { .x = -9, .y = 0 }, { .x = 9, .y = -6 }, { .x = -7, .y = -10 }, { .x = 0, .y = -2 }, { .x = -2, .y = -9 }, { .x = -9, .y = 3 }, { .x = 9, .y = -4 }, { .x = -5, .y = 1 }, { .x = -6, .y = -6 } };
                
                printf("#####START#####");
                int err_code = save_points_b("else.txt", p, 27);
                printf("#####END#####");
        
                test_error(err_code == 0, "Funkcja save_points_b powinna zwrócić 0, a zwróciła %d", err_code );
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzenie poprawności działania funkcji save_points_b()
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzenie poprawności działania funkcji save_points_b()", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                struct point_t p[] = { { .x = -7, .y = 2 }, { .x = 2, .y = 3 }, { .x = 5, .y = -7 }, { .x = 3, .y = 9 }, { .x = 7, .y = -7 }, { .x = -8, .y = -9 }, { .x = -10, .y = 9 }, { .x = 0, .y = 3 }, { .x = 9, .y = 5 }, { .x = -3, .y = 1 }, { .x = 2, .y = -1 }, { .x = 7, .y = 4 }, { .x = -6, .y = -7 }, { .x = -5, .y = 4 }, { .x = -3, .y = -1 }, { .x = 4, .y = 0 }, { .x = 7, .y = -7 }, { .x = 10, .y = -5 }, { .x = -4, .y = 5 }, { .x = 8, .y = 8 }, { .x = -3, .y = -3 }, { .x = -3, .y = 10 }, { .x = -1, .y = -8 }, { .x = -2, .y = -6 }, { .x = 8, .y = -7 }, { .x = -2, .y = 10 }, { .x = 9, .y = -10 }, { .x = 5, .y = -10 }, { .x = 5, .y = 4 }, { .x = 0, .y = -9 }, { .x = 3, .y = -1 }, { .x = -9, .y = -6 }, { .x = -6, .y = 7 }, { .x = 10, .y = 9 }, { .x = 6, .y = -2 }, { .x = 5, .y = -6 }, { .x = 7, .y = 8 }, { .x = -1, .y = 2 }, { .x = -6, .y = 2 }, { .x = -3, .y = 4 }, { .x = -5, .y = 7 }, { .x = 9, .y = -5 }, { .x = -4, .y = 7 }, { .x = 9, .y = 5 }, { .x = 2, .y = -2 }, { .x = -10, .y = -3 }, { .x = -5, .y = -6 }, { .x = 5, .y = 9 }, { .x = -5, .y = -5 }, { .x = 2, .y = 2 }, { .x = 2, .y = -2 }, { .x = -5, .y = 10 }, { .x = 8, .y = 0 }, { .x = -9, .y = -8 }, { .x = 6, .y = 9 }, { .x = 9, .y = 0 }, { .x = 3, .y = 1 }, { .x = -9, .y = 5 }, { .x = 7, .y = -3 }, { .x = 1, .y = -8 }, { .x = -3, .y = -5 }, { .x = -9, .y = -6 }, { .x = -8, .y = 5 }, { .x = -6, .y = -6 }, { .x = 4, .y = 0 }, { .x = -4, .y = 4 }, { .x = 2, .y = 5 }, { .x = 6, .y = -9 }, { .x = 2, .y = 3 }, { .x = -1, .y = -6 }, { .x = 2, .y = -6 }, { .x = 0, .y = -9 }, { .x = 5, .y = 8 }, { .x = -6, .y = -9 }, { .x = -9, .y = 4 }, { .x = 6, .y = 0 }, { .x = -6, .y = -3 }, { .x = 8, .y = 0 }, { .x = 10, .y = 8 }, { .x = 5, .y = 4 }, { .x = 3, .y = -5 }, { .x = -6, .y = -7 }, { .x = -2, .y = -9 }, { .x = -2, .y = -7 }, { .x = -1, .y = -2 }, { .x = 5, .y = 2 }, { .x = 1, .y = 1 }, { .x = 7, .y = 7 }, { .x = -10, .y = 3 }, { .x = 2, .y = 1 }, { .x = 0, .y = -9 }, { .x = 4, .y = 0 }, { .x = 8, .y = 10 }, { .x = -7, .y = 0 }, { .x = 5, .y = 1 }, { .x = 9, .y = -1 }, { .x = 8, .y = -9 }, { .x = 3, .y = -2 }, { .x = -2, .y = -7 }, { .x = 7, .y = -10 }, { .x = 0, .y = 2 }, { .x = 8, .y = 0 }, { .x = -9, .y = 6 }, { .x = 1, .y = 7 }, { .x = 6, .y = 0 }, { .x = -10, .y = 7 }, { .x = -9, .y = 10 }, { .x = -3, .y = 6 }, { .x = -6, .y = -10 }, { .x = -8, .y = 8 }, { .x = -1, .y = 5 }, { .x = -1, .y = -1 }, { .x = 3, .y = 4 }, { .x = -5, .y = 5 }, { .x = 8, .y = 3 }, { .x = -4, .y = 0 }, { .x = 6, .y = -1 }, { .x = 6, .y = 0 }, { .x = -1, .y = 10 }, { .x = -9, .y = 4 }, { .x = -6, .y = -5 }, { .x = 4, .y = 5 }, { .x = 9, .y = -6 }, { .x = -7, .y = -3 }, { .x = 9, .y = -3 }, { .x = -6, .y = 9 }, { .x = 9, .y = 8 }, { .x = -9, .y = 9 }, { .x = 0, .y = -8 }, { .x = 8, .y = 9 }, { .x = -3, .y = -8 }, { .x = 4, .y = -7 }, { .x = 4, .y = 10 }, { .x = -3, .y = 10 }, { .x = -3, .y = 5 }, { .x = 1, .y = -1 }, { .x = 5, .y = -8 }, { .x = -2, .y = -3 }, { .x = -3, .y = -3 }, { .x = 0, .y = 4 }, { .x = -5, .y = -4 }, { .x = 9, .y = 5 }, { .x = 9, .y = 5 }, { .x = -7, .y = -3 }, { .x = -7, .y = 9 }, { .x = 4, .y = -9 }, { .x = -10, .y = 1 }, { .x = -7, .y = 6 }, { .x = 6, .y = -4 }, { .x = 9, .y = -1 }, { .x = 8, .y = -6 }, { .x = -6, .y = 6 }, { .x = -9, .y = -7 }, { .x = -3, .y = 9 }, { .x = -5, .y = -4 }, { .x = 7, .y = -4 }, { .x = 4, .y = -1 }, { .x = 10, .y = 10 }, { .x = -7, .y = -3 }, { .x = 4, .y = -2 }, { .x = -8, .y = 0 }, { .x = 0, .y = -10 }, { .x = 8, .y = -10 }, { .x = -3, .y = -4 }, { .x = 10, .y = 9 }, { .x = 5, .y = 9 }, { .x = 7, .y = -6 }, { .x = 8, .y = -1 }, { .x = 10, .y = 0 }, { .x = -6, .y = -7 }, { .x = 7, .y = 6 }, { .x = 10, .y = -5 }, { .x = 8, .y = 9 }, { .x = 4, .y = 7 }, { .x = 8, .y = -7 }, { .x = 10, .y = 4 }, { .x = 3, .y = 4 }, { .x = -7, .y = 4 }, { .x = 0, .y = 1 }, { .x = -9, .y = 2 }, { .x = -3, .y = 3 }, { .x = 1, .y = -8 }, { .x = 7, .y = -4 }, { .x = -9, .y = 0 }, { .x = -6, .y = -2 }, { .x = 6, .y = 9 }, { .x = 1, .y = 3 }, { .x = 5, .y = 10 }, { .x = -3, .y = -2 }, { .x = 4, .y = -4 }, { .x = 5, .y = 4 }, { .x = -9, .y = 0 }, { .x = 9, .y = -6 }, { .x = -7, .y = -10 }, { .x = 0, .y = -2 }, { .x = -2, .y = -9 }, { .x = -9, .y = 3 }, { .x = 9, .y = -4 }, { .x = -5, .y = 1 }, { .x = -6, .y = -6 } };
                
                printf("#####START#####");
                int err_code = save_points_b("fairthesepropertydescribedayselfthrowhisprobablelanguage.bin", p, 100);
                printf("#####END#####");
        
                test_error(err_code == 0, "Funkcja save_points_b powinna zwrócić 0, a zwróciła %d", err_code );
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzenie poprawności działania funkcji save_points_b()
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzenie poprawności działania funkcji save_points_b()", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                struct point_t p[] = { { .x = -7, .y = 2 }, { .x = 2, .y = 3 }, { .x = 5, .y = -7 }, { .x = 3, .y = 9 }, { .x = 7, .y = -7 }, { .x = -8, .y = -9 }, { .x = -10, .y = 9 }, { .x = 0, .y = 3 }, { .x = 9, .y = 5 }, { .x = -3, .y = 1 }, { .x = 2, .y = -1 }, { .x = 7, .y = 4 }, { .x = -6, .y = -7 }, { .x = -5, .y = 4 }, { .x = -3, .y = -1 }, { .x = 4, .y = 0 }, { .x = 7, .y = -7 }, { .x = 10, .y = -5 }, { .x = -4, .y = 5 }, { .x = 8, .y = 8 }, { .x = -3, .y = -3 }, { .x = -3, .y = 10 }, { .x = -1, .y = -8 }, { .x = -2, .y = -6 }, { .x = 8, .y = -7 }, { .x = -2, .y = 10 }, { .x = 9, .y = -10 }, { .x = 5, .y = -10 }, { .x = 5, .y = 4 }, { .x = 0, .y = -9 }, { .x = 3, .y = -1 }, { .x = -9, .y = -6 }, { .x = -6, .y = 7 }, { .x = 10, .y = 9 }, { .x = 6, .y = -2 }, { .x = 5, .y = -6 }, { .x = 7, .y = 8 }, { .x = -1, .y = 2 }, { .x = -6, .y = 2 }, { .x = -3, .y = 4 }, { .x = -5, .y = 7 }, { .x = 9, .y = -5 }, { .x = -4, .y = 7 }, { .x = 9, .y = 5 }, { .x = 2, .y = -2 }, { .x = -10, .y = -3 }, { .x = -5, .y = -6 }, { .x = 5, .y = 9 }, { .x = -5, .y = -5 }, { .x = 2, .y = 2 }, { .x = 2, .y = -2 }, { .x = -5, .y = 10 }, { .x = 8, .y = 0 }, { .x = -9, .y = -8 }, { .x = 6, .y = 9 }, { .x = 9, .y = 0 }, { .x = 3, .y = 1 }, { .x = -9, .y = 5 }, { .x = 7, .y = -3 }, { .x = 1, .y = -8 }, { .x = -3, .y = -5 }, { .x = -9, .y = -6 }, { .x = -8, .y = 5 }, { .x = -6, .y = -6 }, { .x = 4, .y = 0 }, { .x = -4, .y = 4 }, { .x = 2, .y = 5 }, { .x = 6, .y = -9 }, { .x = 2, .y = 3 }, { .x = -1, .y = -6 }, { .x = 2, .y = -6 }, { .x = 0, .y = -9 }, { .x = 5, .y = 8 }, { .x = -6, .y = -9 }, { .x = -9, .y = 4 }, { .x = 6, .y = 0 }, { .x = -6, .y = -3 }, { .x = 8, .y = 0 }, { .x = 10, .y = 8 }, { .x = 5, .y = 4 }, { .x = 3, .y = -5 }, { .x = -6, .y = -7 }, { .x = -2, .y = -9 }, { .x = -2, .y = -7 }, { .x = -1, .y = -2 }, { .x = 5, .y = 2 }, { .x = 1, .y = 1 }, { .x = 7, .y = 7 }, { .x = -10, .y = 3 }, { .x = 2, .y = 1 }, { .x = 0, .y = -9 }, { .x = 4, .y = 0 }, { .x = 8, .y = 10 }, { .x = -7, .y = 0 }, { .x = 5, .y = 1 }, { .x = 9, .y = -1 }, { .x = 8, .y = -9 }, { .x = 3, .y = -2 }, { .x = -2, .y = -7 }, { .x = 7, .y = -10 }, { .x = 0, .y = 2 }, { .x = 8, .y = 0 }, { .x = -9, .y = 6 }, { .x = 1, .y = 7 }, { .x = 6, .y = 0 }, { .x = -10, .y = 7 }, { .x = -9, .y = 10 }, { .x = -3, .y = 6 }, { .x = -6, .y = -10 }, { .x = -8, .y = 8 }, { .x = -1, .y = 5 }, { .x = -1, .y = -1 }, { .x = 3, .y = 4 }, { .x = -5, .y = 5 }, { .x = 8, .y = 3 }, { .x = -4, .y = 0 }, { .x = 6, .y = -1 }, { .x = 6, .y = 0 }, { .x = -1, .y = 10 }, { .x = -9, .y = 4 }, { .x = -6, .y = -5 }, { .x = 4, .y = 5 }, { .x = 9, .y = -6 }, { .x = -7, .y = -3 }, { .x = 9, .y = -3 }, { .x = -6, .y = 9 }, { .x = 9, .y = 8 }, { .x = -9, .y = 9 }, { .x = 0, .y = -8 }, { .x = 8, .y = 9 }, { .x = -3, .y = -8 }, { .x = 4, .y = -7 }, { .x = 4, .y = 10 }, { .x = -3, .y = 10 }, { .x = -3, .y = 5 }, { .x = 1, .y = -1 }, { .x = 5, .y = -8 }, { .x = -2, .y = -3 }, { .x = -3, .y = -3 }, { .x = 0, .y = 4 }, { .x = -5, .y = -4 }, { .x = 9, .y = 5 }, { .x = 9, .y = 5 }, { .x = -7, .y = -3 }, { .x = -7, .y = 9 }, { .x = 4, .y = -9 }, { .x = -10, .y = 1 }, { .x = -7, .y = 6 }, { .x = 6, .y = -4 }, { .x = 9, .y = -1 }, { .x = 8, .y = -6 }, { .x = -6, .y = 6 }, { .x = -9, .y = -7 }, { .x = -3, .y = 9 }, { .x = -5, .y = -4 }, { .x = 7, .y = -4 }, { .x = 4, .y = -1 }, { .x = 10, .y = 10 }, { .x = -7, .y = -3 }, { .x = 4, .y = -2 }, { .x = -8, .y = 0 }, { .x = 0, .y = -10 }, { .x = 8, .y = -10 }, { .x = -3, .y = -4 }, { .x = 10, .y = 9 }, { .x = 5, .y = 9 }, { .x = 7, .y = -6 }, { .x = 8, .y = -1 }, { .x = 10, .y = 0 }, { .x = -6, .y = -7 }, { .x = 7, .y = 6 }, { .x = 10, .y = -5 }, { .x = 8, .y = 9 }, { .x = 4, .y = 7 }, { .x = 8, .y = -7 }, { .x = 10, .y = 4 }, { .x = 3, .y = 4 }, { .x = -7, .y = 4 }, { .x = 0, .y = 1 }, { .x = -9, .y = 2 }, { .x = -3, .y = 3 }, { .x = 1, .y = -8 }, { .x = 7, .y = -4 }, { .x = -9, .y = 0 }, { .x = -6, .y = -2 }, { .x = 6, .y = 9 }, { .x = 1, .y = 3 }, { .x = 5, .y = 10 }, { .x = -3, .y = -2 }, { .x = 4, .y = -4 }, { .x = 5, .y = 4 }, { .x = -9, .y = 0 }, { .x = 9, .y = -6 }, { .x = -7, .y = -10 }, { .x = 0, .y = -2 }, { .x = -2, .y = -9 }, { .x = -9, .y = 3 }, { .x = 9, .y = -4 }, { .x = -5, .y = 1 }, { .x = -6, .y = -6 } };
                
                printf("#####START#####");
                int err_code = save_points_b("fairthesepropertydescribedayselfthrowhisprobablelanguage.bin", p, 0);
                printf("#####END#####");
        
                test_error(err_code == 1, "Funkcja save_points_b powinna zwrócić 1, a zwróciła %d", err_code );
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Reakcja funkcji save_points_b na brak możliwości utworzenia pliku (fopen zwróci NULL)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Reakcja funkcji save_points_b na brak możliwości utworzenia pliku (fopen zwróci NULL)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    
                struct point_t p[] = { { .x = -7, .y = 2 }, { .x = 2, .y = 3 }, { .x = 5, .y = -7 }, { .x = 3, .y = 9 }, { .x = 7, .y = -7 }, { .x = -8, .y = -9 }, { .x = -10, .y = 9 }, { .x = 0, .y = 3 }, { .x = 9, .y = 5 }, { .x = -3, .y = 1 }, { .x = 2, .y = -1 }, { .x = 7, .y = 4 }, { .x = -6, .y = -7 }, { .x = -5, .y = 4 }, { .x = -3, .y = -1 }, { .x = 4, .y = 0 }, { .x = 7, .y = -7 }, { .x = 10, .y = -5 }, { .x = -4, .y = 5 }, { .x = 8, .y = 8 }, { .x = -3, .y = -3 }, { .x = -3, .y = 10 }, { .x = -1, .y = -8 }, { .x = -2, .y = -6 }, { .x = 8, .y = -7 }, { .x = -2, .y = 10 }, { .x = 9, .y = -10 }, { .x = 5, .y = -10 }, { .x = 5, .y = 4 }, { .x = 0, .y = -9 }, { .x = 3, .y = -1 }, { .x = -9, .y = -6 }, { .x = -6, .y = 7 }, { .x = 10, .y = 9 }, { .x = 6, .y = -2 }, { .x = 5, .y = -6 }, { .x = 7, .y = 8 }, { .x = -1, .y = 2 }, { .x = -6, .y = 2 }, { .x = -3, .y = 4 }, { .x = -5, .y = 7 }, { .x = 9, .y = -5 }, { .x = -4, .y = 7 }, { .x = 9, .y = 5 }, { .x = 2, .y = -2 }, { .x = -10, .y = -3 }, { .x = -5, .y = -6 }, { .x = 5, .y = 9 }, { .x = -5, .y = -5 }, { .x = 2, .y = 2 }, { .x = 2, .y = -2 }, { .x = -5, .y = 10 }, { .x = 8, .y = 0 }, { .x = -9, .y = -8 }, { .x = 6, .y = 9 }, { .x = 9, .y = 0 }, { .x = 3, .y = 1 }, { .x = -9, .y = 5 }, { .x = 7, .y = -3 }, { .x = 1, .y = -8 }, { .x = -3, .y = -5 }, { .x = -9, .y = -6 }, { .x = -8, .y = 5 }, { .x = -6, .y = -6 }, { .x = 4, .y = 0 }, { .x = -4, .y = 4 }, { .x = 2, .y = 5 }, { .x = 6, .y = -9 }, { .x = 2, .y = 3 }, { .x = -1, .y = -6 }, { .x = 2, .y = -6 }, { .x = 0, .y = -9 }, { .x = 5, .y = 8 }, { .x = -6, .y = -9 }, { .x = -9, .y = 4 }, { .x = 6, .y = 0 }, { .x = -6, .y = -3 }, { .x = 8, .y = 0 }, { .x = 10, .y = 8 }, { .x = 5, .y = 4 }, { .x = 3, .y = -5 }, { .x = -6, .y = -7 }, { .x = -2, .y = -9 }, { .x = -2, .y = -7 }, { .x = -1, .y = -2 }, { .x = 5, .y = 2 }, { .x = 1, .y = 1 }, { .x = 7, .y = 7 }, { .x = -10, .y = 3 }, { .x = 2, .y = 1 }, { .x = 0, .y = -9 }, { .x = 4, .y = 0 }, { .x = 8, .y = 10 }, { .x = -7, .y = 0 }, { .x = 5, .y = 1 }, { .x = 9, .y = -1 }, { .x = 8, .y = -9 }, { .x = 3, .y = -2 }, { .x = -2, .y = -7 }, { .x = 7, .y = -10 }, { .x = 0, .y = 2 }, { .x = 8, .y = 0 }, { .x = -9, .y = 6 }, { .x = 1, .y = 7 }, { .x = 6, .y = 0 }, { .x = -10, .y = 7 }, { .x = -9, .y = 10 }, { .x = -3, .y = 6 }, { .x = -6, .y = -10 }, { .x = -8, .y = 8 }, { .x = -1, .y = 5 }, { .x = -1, .y = -1 }, { .x = 3, .y = 4 }, { .x = -5, .y = 5 }, { .x = 8, .y = 3 }, { .x = -4, .y = 0 }, { .x = 6, .y = -1 }, { .x = 6, .y = 0 }, { .x = -1, .y = 10 }, { .x = -9, .y = 4 }, { .x = -6, .y = -5 }, { .x = 4, .y = 5 }, { .x = 9, .y = -6 }, { .x = -7, .y = -3 }, { .x = 9, .y = -3 }, { .x = -6, .y = 9 }, { .x = 9, .y = 8 }, { .x = -9, .y = 9 }, { .x = 0, .y = -8 }, { .x = 8, .y = 9 }, { .x = -3, .y = -8 }, { .x = 4, .y = -7 }, { .x = 4, .y = 10 }, { .x = -3, .y = 10 }, { .x = -3, .y = 5 }, { .x = 1, .y = -1 }, { .x = 5, .y = -8 }, { .x = -2, .y = -3 }, { .x = -3, .y = -3 }, { .x = 0, .y = 4 }, { .x = -5, .y = -4 }, { .x = 9, .y = 5 }, { .x = 9, .y = 5 }, { .x = -7, .y = -3 }, { .x = -7, .y = 9 }, { .x = 4, .y = -9 }, { .x = -10, .y = 1 }, { .x = -7, .y = 6 }, { .x = 6, .y = -4 }, { .x = 9, .y = -1 }, { .x = 8, .y = -6 }, { .x = -6, .y = 6 }, { .x = -9, .y = -7 }, { .x = -3, .y = 9 }, { .x = -5, .y = -4 }, { .x = 7, .y = -4 }, { .x = 4, .y = -1 }, { .x = 10, .y = 10 }, { .x = -7, .y = -3 }, { .x = 4, .y = -2 }, { .x = -8, .y = 0 }, { .x = 0, .y = -10 }, { .x = 8, .y = -10 }, { .x = -3, .y = -4 }, { .x = 10, .y = 9 }, { .x = 5, .y = 9 }, { .x = 7, .y = -6 }, { .x = 8, .y = -1 }, { .x = 10, .y = 0 }, { .x = -6, .y = -7 }, { .x = 7, .y = 6 }, { .x = 10, .y = -5 }, { .x = 8, .y = 9 }, { .x = 4, .y = 7 }, { .x = 8, .y = -7 }, { .x = 10, .y = 4 }, { .x = 3, .y = 4 }, { .x = -7, .y = 4 }, { .x = 0, .y = 1 }, { .x = -9, .y = 2 }, { .x = -3, .y = 3 }, { .x = 1, .y = -8 }, { .x = 7, .y = -4 }, { .x = -9, .y = 0 }, { .x = -6, .y = -2 }, { .x = 6, .y = 9 }, { .x = 1, .y = 3 }, { .x = 5, .y = 10 }, { .x = -3, .y = -2 }, { .x = 4, .y = -4 }, { .x = 5, .y = 4 }, { .x = -9, .y = 0 }, { .x = 9, .y = -6 }, { .x = -7, .y = -10 }, { .x = 0, .y = -2 }, { .x = -2, .y = -9 }, { .x = -9, .y = 3 }, { .x = 9, .y = -4 }, { .x = -5, .y = 1 }, { .x = -6, .y = -6 } };

            printf("#####START#####");
            int err_code = save_points_b("again.bin", p, 38);
            printf("#####END#####\\n");

            test_error(err_code == 2, "Funkcja save_points_b zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 2, err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzenie poprawności działania funkcji save_points_b()
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzenie poprawności działania funkcji save_points_b()", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct point_t p[] = { { .x = -7, .y = 2 }, { .x = 2, .y = 3 }, { .x = 5, .y = -7 }, { .x = 3, .y = 9 }, { .x = 7, .y = -7 }, { .x = -8, .y = -9 }, { .x = -10, .y = 9 }, { .x = 0, .y = 3 }, { .x = 9, .y = 5 }, { .x = -3, .y = 1 }, { .x = 2, .y = -1 }, { .x = 7, .y = 4 }, { .x = -6, .y = -7 }, { .x = -5, .y = 4 }, { .x = -3, .y = -1 }, { .x = 4, .y = 0 }, { .x = 7, .y = -7 }, { .x = 10, .y = -5 }, { .x = -4, .y = 5 }, { .x = 8, .y = 8 }, { .x = -3, .y = -3 }, { .x = -3, .y = 10 }, { .x = -1, .y = -8 }, { .x = -2, .y = -6 }, { .x = 8, .y = -7 }, { .x = -2, .y = 10 }, { .x = 9, .y = -10 }, { .x = 5, .y = -10 }, { .x = 5, .y = 4 }, { .x = 0, .y = -9 }, { .x = 3, .y = -1 }, { .x = -9, .y = -6 }, { .x = -6, .y = 7 }, { .x = 10, .y = 9 }, { .x = 6, .y = -2 }, { .x = 5, .y = -6 }, { .x = 7, .y = 8 }, { .x = -1, .y = 2 }, { .x = -6, .y = 2 }, { .x = -3, .y = 4 }, { .x = -5, .y = 7 }, { .x = 9, .y = -5 }, { .x = -4, .y = 7 }, { .x = 9, .y = 5 }, { .x = 2, .y = -2 }, { .x = -10, .y = -3 }, { .x = -5, .y = -6 }, { .x = 5, .y = 9 }, { .x = -5, .y = -5 }, { .x = 2, .y = 2 }, { .x = 2, .y = -2 }, { .x = -5, .y = 10 }, { .x = 8, .y = 0 }, { .x = -9, .y = -8 }, { .x = 6, .y = 9 }, { .x = 9, .y = 0 }, { .x = 3, .y = 1 }, { .x = -9, .y = 5 }, { .x = 7, .y = -3 }, { .x = 1, .y = -8 }, { .x = -3, .y = -5 }, { .x = -9, .y = -6 }, { .x = -8, .y = 5 }, { .x = -6, .y = -6 }, { .x = 4, .y = 0 }, { .x = -4, .y = 4 }, { .x = 2, .y = 5 }, { .x = 6, .y = -9 }, { .x = 2, .y = 3 }, { .x = -1, .y = -6 }, { .x = 2, .y = -6 }, { .x = 0, .y = -9 }, { .x = 5, .y = 8 }, { .x = -6, .y = -9 }, { .x = -9, .y = 4 }, { .x = 6, .y = 0 }, { .x = -6, .y = -3 }, { .x = 8, .y = 0 }, { .x = 10, .y = 8 }, { .x = 5, .y = 4 }, { .x = 3, .y = -5 }, { .x = -6, .y = -7 }, { .x = -2, .y = -9 }, { .x = -2, .y = -7 }, { .x = -1, .y = -2 }, { .x = 5, .y = 2 }, { .x = 1, .y = 1 }, { .x = 7, .y = 7 }, { .x = -10, .y = 3 }, { .x = 2, .y = 1 }, { .x = 0, .y = -9 }, { .x = 4, .y = 0 }, { .x = 8, .y = 10 }, { .x = -7, .y = 0 }, { .x = 5, .y = 1 }, { .x = 9, .y = -1 }, { .x = 8, .y = -9 }, { .x = 3, .y = -2 }, { .x = -2, .y = -7 }, { .x = 7, .y = -10 }, { .x = 0, .y = 2 }, { .x = 8, .y = 0 }, { .x = -9, .y = 6 }, { .x = 1, .y = 7 }, { .x = 6, .y = 0 }, { .x = -10, .y = 7 }, { .x = -9, .y = 10 }, { .x = -3, .y = 6 }, { .x = -6, .y = -10 }, { .x = -8, .y = 8 }, { .x = -1, .y = 5 }, { .x = -1, .y = -1 }, { .x = 3, .y = 4 }, { .x = -5, .y = 5 }, { .x = 8, .y = 3 }, { .x = -4, .y = 0 }, { .x = 6, .y = -1 }, { .x = 6, .y = 0 }, { .x = -1, .y = 10 }, { .x = -9, .y = 4 }, { .x = -6, .y = -5 }, { .x = 4, .y = 5 }, { .x = 9, .y = -6 }, { .x = -7, .y = -3 }, { .x = 9, .y = -3 }, { .x = -6, .y = 9 }, { .x = 9, .y = 8 }, { .x = -9, .y = 9 }, { .x = 0, .y = -8 }, { .x = 8, .y = 9 }, { .x = -3, .y = -8 }, { .x = 4, .y = -7 }, { .x = 4, .y = 10 }, { .x = -3, .y = 10 }, { .x = -3, .y = 5 }, { .x = 1, .y = -1 }, { .x = 5, .y = -8 }, { .x = -2, .y = -3 }, { .x = -3, .y = -3 }, { .x = 0, .y = 4 }, { .x = -5, .y = -4 }, { .x = 9, .y = 5 }, { .x = 9, .y = 5 }, { .x = -7, .y = -3 }, { .x = -7, .y = 9 }, { .x = 4, .y = -9 }, { .x = -10, .y = 1 }, { .x = -7, .y = 6 }, { .x = 6, .y = -4 }, { .x = 9, .y = -1 }, { .x = 8, .y = -6 }, { .x = -6, .y = 6 }, { .x = -9, .y = -7 }, { .x = -3, .y = 9 }, { .x = -5, .y = -4 }, { .x = 7, .y = -4 }, { .x = 4, .y = -1 }, { .x = 10, .y = 10 }, { .x = -7, .y = -3 }, { .x = 4, .y = -2 }, { .x = -8, .y = 0 }, { .x = 0, .y = -10 }, { .x = 8, .y = -10 }, { .x = -3, .y = -4 }, { .x = 10, .y = 9 }, { .x = 5, .y = 9 }, { .x = 7, .y = -6 }, { .x = 8, .y = -1 }, { .x = 10, .y = 0 }, { .x = -6, .y = -7 }, { .x = 7, .y = 6 }, { .x = 10, .y = -5 }, { .x = 8, .y = 9 }, { .x = 4, .y = 7 }, { .x = 8, .y = -7 }, { .x = 10, .y = 4 }, { .x = 3, .y = 4 }, { .x = -7, .y = 4 }, { .x = 0, .y = 1 }, { .x = -9, .y = 2 }, { .x = -3, .y = 3 }, { .x = 1, .y = -8 }, { .x = 7, .y = -4 }, { .x = -9, .y = 0 }, { .x = -6, .y = -2 }, { .x = 6, .y = 9 }, { .x = 1, .y = 3 }, { .x = 5, .y = 10 }, { .x = -3, .y = -2 }, { .x = 4, .y = -4 }, { .x = 5, .y = 4 }, { .x = -9, .y = 0 }, { .x = 9, .y = -6 }, { .x = -7, .y = -10 }, { .x = 0, .y = -2 }, { .x = -2, .y = -9 }, { .x = -9, .y = 3 }, { .x = 9, .y = -4 }, { .x = -5, .y = 1 }, { .x = -6, .y = -6 } };

            printf("#####START#####");
            int err_code = save_points_b(NULL, p, 13);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja save_points_b powinna zwrócić 1, a zwróciła %d", err_code );

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzenie poprawności działania funkcji save_points_b()
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzenie poprawności działania funkcji save_points_b()", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            printf("#####START#####");
            int err_code = save_points_b("rise.bin", NULL, 37);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja save_points_b powinna zwrócić 1, a zwróciła %d", err_code );

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzenie poprawności działania funkcji save_points_b()
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzenie poprawności działania funkcji save_points_b()", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


            printf("#####START#####");
            int err_code = save_points_b(NULL, NULL, 6);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja save_points_b powinna zwrócić 1, a zwróciła %d", err_code );

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji read
            UTEST2, // Sprawdzenie poprawności działania funkcji save_points_b()
            UTEST3, // Sprawdzenie poprawności działania funkcji save_points_b()
            UTEST4, // Sprawdzenie poprawności działania funkcji save_points_b()
            UTEST5, // Sprawdzenie poprawności działania funkcji save_points_b()
            UTEST6, // Reakcja funkcji save_points_b na brak możliwości utworzenia pliku (fopen zwróci NULL)
            UTEST7, // Sprawdzenie poprawności działania funkcji save_points_b()
            UTEST8, // Sprawdzenie poprawności działania funkcji save_points_b()
            UTEST9, // Sprawdzenie poprawności działania funkcji save_points_b()
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
            test_summary(9); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
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