/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania W punkt
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-01-04 20:12:59.750614
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
//  Test 1: Sprawdzenie poprawności struktury
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzenie poprawności struktury", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        struct point_t p1 = {.x = 3, .y = -10};
        
        struct point_t p_student;
        printf("#####START#####");
        set(&p_student, p1.x, p1.y);
        printf("#####END#####");

        // znajdź pierwszą różnicę
        int diff_pos = mem_find_first_difference(&p1, &p_student, sizeof(struct point_t));

        // jeśli jest, to raportuj błąd
        test_error(diff_pos == -1, "Struktura point_t nie jest zgodna z zadaniem; różnica w bajcie %d; jest 0x%02x a powinno być 0x%02x",
            diff_pos, mem_get_byte(&p_student, diff_pos), mem_get_byte(&p1, diff_pos));


        onerror_compare_memory(&p_student, &p1, sizeof(struct point_t));

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
//  Test 2: Sprawdzanie poprawności działania funkcji set
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji set", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t *p = set(NULL, 5, 0);
        
            test_error(p == NULL, "Funkcja set() powinna zwrócić NULL w przypadku przekazania do funkcji wartości NULL w pierwszym parametrze");
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji set
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji set", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int x = 8, y = -8; 
            struct point_t p1, *ptr;
            printf("#####START#####");
            ptr = set(&p1, x, y);
            printf("#####END#####");
            
            test_error(ptr == &p1, "Funkcja set() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
            test_error(p1.x == x, "Funkcja set() miała ustawić %d jako współrzędną x, a ustawiła %d", x, p1.x);
            test_error(p1.y == y, "Funkcja set() miała ustawić %d jako współrzędną y, a ustawiła %d", y, p1.y);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji distance
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -9, .y = -8}, p2 = {.x = -1, .y = -3};

            int err_code = 3;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(9.483981132056604 > dist && 9.383981132056602 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 9.433981132056603);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji distance
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -10, .y = -10}, p2 = {.x = -2, .y = 7};

            int err_code = 0;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(18.838294228055936 > dist && 18.738294228055935 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 18.788294228055936);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji distance
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -1, .y = -6}, p2 = {.x = 6, .y = 2};

            int err_code = 1;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(10.68014581273465 > dist && 10.58014581273465 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 10.63014581273465);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji distance
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -4, .y = -3}, p2 = {.x = 2, .y = -3};

            int err_code = -2;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(6.05 > dist && 5.95 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 6.0);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji distance
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -3, .y = 1}, p2 = {.x = -6, .y = -4};

            int err_code = 2;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(5.880951894845301 > dist && 5.780951894845301 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 5.830951894845301);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji distance
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -6, .y = 7}, p2 = {.x = 3, .y = -3};

            int err_code = -3;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(13.50362404707371 > dist && 13.40362404707371 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 13.45362404707371);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji distance
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -5, .y = 2}, p2 = {.x = -2, .y = 7};

            int err_code = 1;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(5.880951894845301 > dist && 5.780951894845301 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 5.830951894845301);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji distance
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -4, .y = 6}, p2 = {.x = 3, .y = 7};

            int err_code = 1;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(7.121067811865475 > dist && 7.021067811865476 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 7.0710678118654755);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji distance
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 7, .y = 2}, p2 = {.x = 9, .y = 1};

            int err_code = 0;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(2.2860679774997896 > dist && 2.18606797749979 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 2.23606797749979);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji distance
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 5, .y = 7}, p2 = {.x = 2, .y = -3};

            int err_code = 2;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(10.490306508910551 > dist && 10.39030650891055 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 10.44030650891055);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji distance
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 1, .y = 3}, p2 = {.x = -7, .y = -6};

            int err_code = 1;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(12.091594578792296 > dist && 11.991594578792295 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 12.041594578792296);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji distance
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 3, .y = 4}, p2 = {.x = -2, .y = 5};

            int err_code = -3;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(5.149019513592784 > dist && 5.049019513592785 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 5.0990195135927845);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji distance
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 6, .y = -8}, p2 = {.x = 6, .y = 2};

            int err_code = 0;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(10.05 > dist && 9.95 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 10.0);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji distance
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 10, .y = -5}, p2 = {.x = -4, .y = 9};

            int err_code = 0;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(19.84898987322333 > dist && 19.74898987322333 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 19.79898987322333);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji distance
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 9, .y = -8}, p2 = {.x = 4, .y = -1};

            int err_code = -1;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(8.652325267042627 > dist && 8.552325267042626 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 8.602325267042627);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji distance
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 7, .y = -6}, p2 = {.x = -3, .y = -9};

            int err_code = -3;
            
            printf("#####START#####");
            float dist = distance(&p1, &p2, &err_code);
            printf("#####END#####");
            
            test_error(err_code == 0, "Funkcja distance() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(10.490306508910551 > dist && 10.39030650891055 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 10.44030650891055);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji distance
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -9, .y = -8}, p2 = {.x = -1, .y = -3};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(9.483981132056604 > dist && 9.383981132056602 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 9.433981132056603);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji distance
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -10, .y = -10}, p2 = {.x = -2, .y = 7};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(18.838294228055936 > dist && 18.738294228055935 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 18.788294228055936);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji distance
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -1, .y = -6}, p2 = {.x = 6, .y = 2};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(10.68014581273465 > dist && 10.58014581273465 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 10.63014581273465);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji distance
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -4, .y = -3}, p2 = {.x = 2, .y = -3};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(6.05 > dist && 5.95 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 6.0);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji distance
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -3, .y = 1}, p2 = {.x = -6, .y = -4};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(5.880951894845301 > dist && 5.780951894845301 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 5.830951894845301);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji distance
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -6, .y = 7}, p2 = {.x = 3, .y = -3};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(13.50362404707371 > dist && 13.40362404707371 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 13.45362404707371);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji distance
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -5, .y = 2}, p2 = {.x = -2, .y = 7};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(5.880951894845301 > dist && 5.780951894845301 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 5.830951894845301);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji distance
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = -4, .y = 6}, p2 = {.x = 3, .y = 7};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(7.121067811865475 > dist && 7.021067811865476 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 7.0710678118654755);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji distance
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 7, .y = 2}, p2 = {.x = 9, .y = 1};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(2.2860679774997896 > dist && 2.18606797749979 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 2.23606797749979);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji distance
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 5, .y = 7}, p2 = {.x = 2, .y = -3};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(10.490306508910551 > dist && 10.39030650891055 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 10.44030650891055);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji distance
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 1, .y = 3}, p2 = {.x = -7, .y = -6};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(12.091594578792296 > dist && 11.991594578792295 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 12.041594578792296);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji distance
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 3, .y = 4}, p2 = {.x = -2, .y = 5};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(5.149019513592784 > dist && 5.049019513592785 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 5.0990195135927845);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji distance
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 6, .y = -8}, p2 = {.x = 6, .y = 2};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(10.05 > dist && 9.95 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 10.0);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji distance
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 10, .y = -5}, p2 = {.x = -4, .y = 9};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(19.84898987322333 > dist && 19.74898987322333 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 19.79898987322333);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji distance
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 9, .y = -8}, p2 = {.x = 4, .y = -1};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(8.652325267042627 > dist && 8.552325267042626 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 8.602325267042627);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji distance
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 7, .y = -6}, p2 = {.x = -3, .y = -9};

            printf("#####START#####");
            float dist = distance(&p1, &p2, NULL);
            printf("#####END#####");

            test_error(10.490306508910551 > dist && 10.39030650891055 < dist, "Wartość %f zwrócona przez funkcję distance() nie mieści się w wymaganym przedziale dokładności; powinno być %f", dist, 10.44030650891055);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji distance
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji distance", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p1 = {.x = 3, .y = -5}; 
        
            int err_code = 0;
        
            printf("#####START#####");
            distance(&p1, NULL, &err_code);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja distance() powinna zwrócić kod błędu 1 dla niepoprawnych danych, a zwróciła %d", err_code);
            
            printf("#####START#####");
            distance(NULL, &p1, &err_code);
            printf("#####END#####");
            test_error(err_code == 1, "Funkcja distance() powinna zwrócić kod błędu 1 dla niepoprawnych danych, a zwróciła %d", err_code);
            
            printf("#####START#####");
            distance(NULL, NULL, &err_code);
            printf("#####END#####");
            test_error(err_code == 1, "Funkcja distance() powinna zwrócić kod błędu 1 dla niepoprawnych danych, a zwróciła %d", err_code);

            printf("#####START#####");            
            distance(NULL, NULL, NULL);        
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
//  Test 37: Sprawdzanie poprawności działania funkcji show
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            //-------------1-----------------------
                printf("\n***TEST 1***\n\n");
                printf("***START***\n");
                show(NULL);
                printf("***END***\n");
            
                struct point_t p1 = {.x = 7, .y = -9}; 

                
            //-------------2-----------------------
                printf("\n***TEST 2***\n\n");
                printf("***START***\n");
                show(&p1);
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
//  Test 38: Sprawdzanie poprawności działania funkcji read
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji read", __LINE__);

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
            UTEST1, // Sprawdzenie poprawności struktury
            UTEST2, // Sprawdzanie poprawności działania funkcji set
            UTEST3, // Sprawdzanie poprawności działania funkcji set
            UTEST4, // Sprawdzanie poprawności działania funkcji distance
            UTEST5, // Sprawdzanie poprawności działania funkcji distance
            UTEST6, // Sprawdzanie poprawności działania funkcji distance
            UTEST7, // Sprawdzanie poprawności działania funkcji distance
            UTEST8, // Sprawdzanie poprawności działania funkcji distance
            UTEST9, // Sprawdzanie poprawności działania funkcji distance
            UTEST10, // Sprawdzanie poprawności działania funkcji distance
            UTEST11, // Sprawdzanie poprawności działania funkcji distance
            UTEST12, // Sprawdzanie poprawności działania funkcji distance
            UTEST13, // Sprawdzanie poprawności działania funkcji distance
            UTEST14, // Sprawdzanie poprawności działania funkcji distance
            UTEST15, // Sprawdzanie poprawności działania funkcji distance
            UTEST16, // Sprawdzanie poprawności działania funkcji distance
            UTEST17, // Sprawdzanie poprawności działania funkcji distance
            UTEST18, // Sprawdzanie poprawności działania funkcji distance
            UTEST19, // Sprawdzanie poprawności działania funkcji distance
            UTEST20, // Sprawdzanie poprawności działania funkcji distance
            UTEST21, // Sprawdzanie poprawności działania funkcji distance
            UTEST22, // Sprawdzanie poprawności działania funkcji distance
            UTEST23, // Sprawdzanie poprawności działania funkcji distance
            UTEST24, // Sprawdzanie poprawności działania funkcji distance
            UTEST25, // Sprawdzanie poprawności działania funkcji distance
            UTEST26, // Sprawdzanie poprawności działania funkcji distance
            UTEST27, // Sprawdzanie poprawności działania funkcji distance
            UTEST28, // Sprawdzanie poprawności działania funkcji distance
            UTEST29, // Sprawdzanie poprawności działania funkcji distance
            UTEST30, // Sprawdzanie poprawności działania funkcji distance
            UTEST31, // Sprawdzanie poprawności działania funkcji distance
            UTEST32, // Sprawdzanie poprawności działania funkcji distance
            UTEST33, // Sprawdzanie poprawności działania funkcji distance
            UTEST34, // Sprawdzanie poprawności działania funkcji distance
            UTEST35, // Sprawdzanie poprawności działania funkcji distance
            UTEST36, // Sprawdzanie poprawności działania funkcji distance
            UTEST37, // Sprawdzanie poprawności działania funkcji show
            UTEST38, // Sprawdzanie poprawności działania funkcji read
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