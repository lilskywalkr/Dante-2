/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Najbliższe punkty
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-06 20:03:49.968343
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
//  Test 1: Sprawdzenie poprawności działania funkcji distance
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -7, .y = -8}, p2 = {.x = -8, .y = -7};

                int err_code = 2;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(1.4242135623730952 > dist && 1.4042135623730951 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzenie poprawności działania funkcji distance
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -4, .y = -1}, p2 = {.x = -6, .y = 8};

                int err_code = 1;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(9.229544457292887 > dist && 9.209544457292887 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzenie poprawności działania funkcji distance
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -1, .y = -8}, p2 = {.x = 2, .y = 10};

                int err_code = 3;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(18.25828759089466 > dist && 18.238287590894657 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzenie poprawności działania funkcji distance
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -9, .y = -1}, p2 = {.x = 7, .y = -1};

                int err_code = 3;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(16.01 > dist && 15.99 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzenie poprawności działania funkcji distance
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -10, .y = 5}, p2 = {.x = -7, .y = -9};

                int err_code = 2;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(14.327821063276353 > dist && 14.307821063276354 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzenie poprawności działania funkcji distance
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -8, .y = 1}, p2 = {.x = 3, .y = -8};

                int err_code = 0;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(14.222670403551895 > dist && 14.202670403551895 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzenie poprawności działania funkcji distance
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -10, .y = 9}, p2 = {.x = -6, .y = 8};

                int err_code = 3;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(4.13310562561766 > dist && 4.113105625617661 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzenie poprawności działania funkcji distance
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -2, .y = 9}, p2 = {.x = 5, .y = 8};

                int err_code = 2;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(7.081067811865475 > dist && 7.061067811865476 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzenie poprawności działania funkcji distance
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 10, .y = 8}, p2 = {.x = 2, .y = 6};

                int err_code = 2;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(8.256211251235321 > dist && 8.236211251235321 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzenie poprawności działania funkcji distance
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 7, .y = 10}, p2 = {.x = 3, .y = -9};

                int err_code = 1;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(19.4264878389476 > dist && 19.406487838947598 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzenie poprawności działania funkcji distance
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 10, .y = 8}, p2 = {.x = -3, .y = -9};

                int err_code = 3;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(21.410934559032697 > dist && 21.390934559032694 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzenie poprawności działania funkcji distance
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 5, .y = 6}, p2 = {.x = -6, .y = 6};

                int err_code = 2;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(11.01 > dist && 10.99 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzenie poprawności działania funkcji distance
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 9, .y = -8}, p2 = {.x = 7, .y = 7};

                int err_code = 3;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(15.142745950421556 > dist && 15.122745950421557 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzenie poprawności działania funkcji distance
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 5, .y = -5}, p2 = {.x = -5, .y = 4};

                int err_code = 0;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(13.46362404707371 > dist && 13.44362404707371 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzenie poprawności działania funkcji distance
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 2, .y = -2}, p2 = {.x = 6, .y = -6};

                int err_code = 1;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(5.66685424949238 > dist && 5.646854249492381 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzenie poprawności działania funkcji distance
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 2, .y = -6}, p2 = {.x = -10, .y = -5};

                int err_code = 3;
                        
                printf("#####START#####");
                float dist = distance(&p1, &p2, &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
                test_error(12.051594578792296 > dist && 12.031594578792296 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzenie poprawności działania funkcji distance
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -7, .y = -8}, p2 = {.x = -8, .y = -7};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(1.4242135623730952 > dist && 1.4042135623730951 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzenie poprawności działania funkcji distance
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -4, .y = -1}, p2 = {.x = -6, .y = 8};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(9.229544457292887 > dist && 9.209544457292887 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzenie poprawności działania funkcji distance
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -1, .y = -8}, p2 = {.x = 2, .y = 10};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(18.25828759089466 > dist && 18.238287590894657 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzenie poprawności działania funkcji distance
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -9, .y = -1}, p2 = {.x = 7, .y = -1};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(16.01 > dist && 15.99 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzenie poprawności działania funkcji distance
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -10, .y = 5}, p2 = {.x = -7, .y = -9};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(14.327821063276353 > dist && 14.307821063276354 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzenie poprawności działania funkcji distance
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -8, .y = 1}, p2 = {.x = 3, .y = -8};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(14.222670403551895 > dist && 14.202670403551895 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzenie poprawności działania funkcji distance
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -10, .y = 9}, p2 = {.x = -6, .y = 8};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(4.13310562561766 > dist && 4.113105625617661 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzenie poprawności działania funkcji distance
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = -2, .y = 9}, p2 = {.x = 5, .y = 8};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(7.081067811865475 > dist && 7.061067811865476 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzenie poprawności działania funkcji distance
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 10, .y = 8}, p2 = {.x = 2, .y = 6};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(8.256211251235321 > dist && 8.236211251235321 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzenie poprawności działania funkcji distance
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 7, .y = 10}, p2 = {.x = 3, .y = -9};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(19.4264878389476 > dist && 19.406487838947598 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzenie poprawności działania funkcji distance
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 10, .y = 8}, p2 = {.x = -3, .y = -9};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(21.410934559032697 > dist && 21.390934559032694 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzenie poprawności działania funkcji distance
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 5, .y = 6}, p2 = {.x = -6, .y = 6};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(11.01 > dist && 10.99 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzenie poprawności działania funkcji distance
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 9, .y = -8}, p2 = {.x = 7, .y = 7};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(15.142745950421556 > dist && 15.122745950421557 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzenie poprawności działania funkcji distance
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 5, .y = -5}, p2 = {.x = -5, .y = 4};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(13.46362404707371 > dist && 13.44362404707371 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzenie poprawności działania funkcji distance
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 2, .y = -2}, p2 = {.x = 6, .y = -6};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(5.66685424949238 > dist && 5.646854249492381 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzenie poprawności działania funkcji distance
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 2, .y = -6}, p2 = {.x = -10, .y = -5};

                printf("#####START#####");
                float dist = distance(&p1, &p2, NULL);
                printf("#####END#####");

                test_error(12.051594578792296 > dist && 12.031594578792296 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzenie poprawności działania funkcji distance
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                struct point_t p1 = {.x = 5, .y = 7};
        
                printf("#####START#####");
                float dist = distance(&p1, NULL, NULL);
                printf("#####END#####");
        
                test_error(-0.99 > dist && -1.01 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzenie poprawności działania funkcji distance
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                struct point_t p1 = {.x = 8, .y = 8};
        
                printf("#####START#####");
                float dist = distance(NULL, &p1, NULL);
                printf("#####END#####");
        
                test_error(-0.99 > dist && -1.01 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzenie poprawności działania funkcji distance
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                //struct point_t p1 = {.x = 8, .y = 5};
        
                printf("#####START#####");
                float dist = distance(NULL, NULL, NULL);
                printf("#####END#####");
        
                test_error(-0.99 > dist && -1.01 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzenie poprawności działania funkcji distance
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 3, .y = 6};

                int err_code = 2;

                printf("#####START#####");
                float dist = distance(&p1, NULL, &err_code);
                printf("#####END#####");

                test_error(-0.99 > dist && -1.01 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
                test_error(err_code == 1, "Funkcja distance() powinna zwrócić kod błędu 1 dla poprawnych danych, a zwróciła %d", err_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzenie poprawności działania funkcji distance
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t p1 = {.x = 0, .y = 0};

                int err_code = 1;

                printf("#####START#####");
                float dist = distance(NULL, &p1, &err_code);
                printf("#####END#####");

                test_error(-0.99 > dist && -1.01 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
                test_error(err_code == 1, "Funkcja distance() powinna zwrócić kod błędu 1 dla poprawnych danych, a zwróciła %d", err_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzenie poprawności działania funkcji distance
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzenie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                //struct point_t p1 = {.x = 6, .y = 8};

                int err_code = 1;

                printf("#####START#####");
                float dist = distance(NULL, NULL, &err_code);
                printf("#####END#####");

                test_error(-0.99 > dist && -1.01 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności", dist);
                test_error(err_code == 1, "Funkcja distance() powinna zwrócić kod błędu 1 dla poprawnych danych, a zwróciła %d", err_code);
            
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
            UTEST1, // Sprawdzenie poprawności działania funkcji distance
            UTEST2, // Sprawdzenie poprawności działania funkcji distance
            UTEST3, // Sprawdzenie poprawności działania funkcji distance
            UTEST4, // Sprawdzenie poprawności działania funkcji distance
            UTEST5, // Sprawdzenie poprawności działania funkcji distance
            UTEST6, // Sprawdzenie poprawności działania funkcji distance
            UTEST7, // Sprawdzenie poprawności działania funkcji distance
            UTEST8, // Sprawdzenie poprawności działania funkcji distance
            UTEST9, // Sprawdzenie poprawności działania funkcji distance
            UTEST10, // Sprawdzenie poprawności działania funkcji distance
            UTEST11, // Sprawdzenie poprawności działania funkcji distance
            UTEST12, // Sprawdzenie poprawności działania funkcji distance
            UTEST13, // Sprawdzenie poprawności działania funkcji distance
            UTEST14, // Sprawdzenie poprawności działania funkcji distance
            UTEST15, // Sprawdzenie poprawności działania funkcji distance
            UTEST16, // Sprawdzenie poprawności działania funkcji distance
            UTEST17, // Sprawdzenie poprawności działania funkcji distance
            UTEST18, // Sprawdzenie poprawności działania funkcji distance
            UTEST19, // Sprawdzenie poprawności działania funkcji distance
            UTEST20, // Sprawdzenie poprawności działania funkcji distance
            UTEST21, // Sprawdzenie poprawności działania funkcji distance
            UTEST22, // Sprawdzenie poprawności działania funkcji distance
            UTEST23, // Sprawdzenie poprawności działania funkcji distance
            UTEST24, // Sprawdzenie poprawności działania funkcji distance
            UTEST25, // Sprawdzenie poprawności działania funkcji distance
            UTEST26, // Sprawdzenie poprawności działania funkcji distance
            UTEST27, // Sprawdzenie poprawności działania funkcji distance
            UTEST28, // Sprawdzenie poprawności działania funkcji distance
            UTEST29, // Sprawdzenie poprawności działania funkcji distance
            UTEST30, // Sprawdzenie poprawności działania funkcji distance
            UTEST31, // Sprawdzenie poprawności działania funkcji distance
            UTEST32, // Sprawdzenie poprawności działania funkcji distance
            UTEST33, // Sprawdzenie poprawności działania funkcji distance
            UTEST34, // Sprawdzenie poprawności działania funkcji distance
            UTEST35, // Sprawdzenie poprawności działania funkcji distance
            UTEST36, // Sprawdzenie poprawności działania funkcji distance
            UTEST37, // Sprawdzenie poprawności działania funkcji distance
            UTEST38, // Sprawdzenie poprawności działania funkcji distance
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
            test_summary(0); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}