/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Odcinek
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-05 15:49:40.802800
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
    
        struct segment_t
        {
            struct point_t start;
            struct point_t end;
        };
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji length
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -7, .start.y = -6, .end.x = -7, .end.y = -3};
        
            int err_code = 3;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(3.05 > len && 2.95 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 3.0", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji length
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -8, .start.y = -4, .end.x = -4, .end.y = 10};
        
            int err_code = 2;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(14.610219778561037 > len && 14.510219778561035 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 14.560219778561036", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji length
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -1, .start.y = -6, .end.x = 2, .end.y = 6};
        
            int err_code = -5;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(12.419316876852982 > len && 12.31931687685298 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 12.36931687685298", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji length
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -8, .start.y = -5, .end.x = 10, .end.y = -3};
        
            int err_code = -1;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(18.160770276274835 > len && 18.060770276274834 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 18.110770276274835", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji length
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -3, .start.y = 5, .end.x = -7, .end.y = -5};
        
            int err_code = -1;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(10.820329614269008 > len && 10.720329614269007 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 10.770329614269007", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji length
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -9, .start.y = 10, .end.x = 10, .end.y = -10};
        
            int err_code = 1;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(27.636228448267445 > len && 27.536228448267444 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 27.586228448267445", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji length
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -2, .start.y = 7, .end.x = -5, .end.y = 6};
        
            int err_code = -4;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(3.2122776601683793 > len && 3.1122776601683797 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 3.1622776601683795", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji length
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -8, .start.y = 3, .end.x = 3, .end.y = 4};
        
            int err_code = 5;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(11.095361017187262 > len && 10.99536101718726 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 11.045361017187261", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji length
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 10, .start.y = 8, .end.x = 5, .end.y = 8};
        
            int err_code = -5;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(5.05 > len && 4.95 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 5.0", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji length
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 8, .start.y = 5, .end.x = 4, .end.y = -8};
        
            int err_code = 5;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(13.651470508735445 > len && 13.551470508735443 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 13.601470508735444", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji length
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 2, .start.y = 6, .end.x = -2, .end.y = -7};
        
            int err_code = 4;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(13.651470508735445 > len && 13.551470508735443 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 13.601470508735444", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji length
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 2, .start.y = 6, .end.x = -8, .end.y = 10};
        
            int err_code = 0;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(10.820329614269008 > len && 10.720329614269007 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 10.770329614269007", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji length
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 6, .start.y = -3, .end.x = 5, .end.y = 5};
        
            int err_code = -3;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(8.11225774829855 > len && 8.012257748298548 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 8.06225774829855", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji length
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 9, .start.y = -5, .end.x = -10, .end.y = 8};
        
            int err_code = -4;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(23.071728866442676 > len && 22.971728866442675 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 23.021728866442675", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji length
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 4, .start.y = -8, .end.x = 9, .end.y = -3};
        
            int err_code = -2;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(7.121067811865475 > len && 7.021067811865476 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 7.0710678118654755", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji length
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 4, .start.y = -7, .end.x = -3, .end.y = -10};
        
            int err_code = 3;
            printf("#####START#####");
            float len = length(&s, &err_code);
            printf("#####END#####");

            test_error(err_code == 0, "Funkcja length() powinna zwrócić kod błędu 0 dla poprawnych danych, a zwróciła %d", err_code);
            test_error(7.6657731058639085 > len && 7.565773105863909 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 7.615773105863909", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji length
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -7, .start.y = -6, .end.x = -7, .end.y = -3};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(3.05 > len && 2.95 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 3.0", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji length
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -8, .start.y = -4, .end.x = -4, .end.y = 10};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(14.610219778561037 > len && 14.510219778561035 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 14.560219778561036", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji length
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -1, .start.y = -6, .end.x = 2, .end.y = 6};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(12.419316876852982 > len && 12.31931687685298 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 12.36931687685298", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji length
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -8, .start.y = -5, .end.x = 10, .end.y = -3};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(18.160770276274835 > len && 18.060770276274834 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 18.110770276274835", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji length
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -3, .start.y = 5, .end.x = -7, .end.y = -5};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(10.820329614269008 > len && 10.720329614269007 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 10.770329614269007", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji length
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -9, .start.y = 10, .end.x = 10, .end.y = -10};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(27.636228448267445 > len && 27.536228448267444 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 27.586228448267445", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji length
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -2, .start.y = 7, .end.x = -5, .end.y = 6};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(3.2122776601683793 > len && 3.1122776601683797 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 3.1622776601683795", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji length
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = -8, .start.y = 3, .end.x = 3, .end.y = 4};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(11.095361017187262 > len && 10.99536101718726 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 11.045361017187261", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji length
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 10, .start.y = 8, .end.x = 5, .end.y = 8};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(5.05 > len && 4.95 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 5.0", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji length
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 8, .start.y = 5, .end.x = 4, .end.y = -8};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(13.651470508735445 > len && 13.551470508735443 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 13.601470508735444", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji length
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 2, .start.y = 6, .end.x = -2, .end.y = -7};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(13.651470508735445 > len && 13.551470508735443 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 13.601470508735444", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji length
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 2, .start.y = 6, .end.x = -8, .end.y = 10};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(10.820329614269008 > len && 10.720329614269007 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 10.770329614269007", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji length
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 6, .start.y = -3, .end.x = 5, .end.y = 5};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(8.11225774829855 > len && 8.012257748298548 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 8.06225774829855", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji length
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 9, .start.y = -5, .end.x = -10, .end.y = 8};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(23.071728866442676 > len && 22.971728866442675 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 23.021728866442675", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji length
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 4, .start.y = -8, .end.x = 9, .end.y = -3};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(7.121067811865475 > len && 7.021067811865476 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 7.0710678118654755", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji length
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct segment_t s = {.start.x = 4, .start.y = -7, .end.x = -3, .end.y = -10};

            printf("#####START#####");
            float len = length(&s, NULL);
            printf("#####END#####");

            test_error(7.6657731058639085 > len && 7.565773105863909 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być 7.615773105863909", len);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji length
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
            int err_code = 0;
        
            printf("#####START#####");
            float len = length(NULL, &err_code);
            test_error(err_code == 1, "Funkcja distance() powinna zwrócić kod błędu 1 dla niepoprawnych danych, a zwróciła %d", err_code);
            printf("#####END#####");
            test_error(-0.95 > len && -1.05 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być -1", len);


            printf("#####START#####");        
            len = length(NULL, NULL);
            printf("#####END#####");
            test_error(-0.95 > len && -1.05 < len, "Wartość %f zwrócona przez funkcję length() nie mieści się w wymaganym przedziale dokładności; powinno być -1", len);
            
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji show
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            //-------------1-----------------------
                printf("\n***TEST 1***\n\n");
                printf("***START***\n");
                show_segment(NULL);
                printf("***END***\n");

                struct segment_t s = {.start.x = -3, .start.y = 10, .end.x = -3, .end.y = -6}; 


            //-------------2-----------------------
                printf("\n***TEST 2***\n\n");
                printf("***START***\n");
                show_segment(&s);
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
//  Test 35: Sprawdzanie poprawności działania funkcji read
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji read", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        struct segment_t *p = read_segment(NULL);

            test_error(p == NULL, "Funkcja read_segment() powinna zwrócić NULL w przypadku przekazania do funkcji wartości NULL w pierwszym parametrze");
        
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
            UTEST1, // Sprawdzanie poprawności działania funkcji length
            UTEST2, // Sprawdzanie poprawności działania funkcji length
            UTEST3, // Sprawdzanie poprawności działania funkcji length
            UTEST4, // Sprawdzanie poprawności działania funkcji length
            UTEST5, // Sprawdzanie poprawności działania funkcji length
            UTEST6, // Sprawdzanie poprawności działania funkcji length
            UTEST7, // Sprawdzanie poprawności działania funkcji length
            UTEST8, // Sprawdzanie poprawności działania funkcji length
            UTEST9, // Sprawdzanie poprawności działania funkcji length
            UTEST10, // Sprawdzanie poprawności działania funkcji length
            UTEST11, // Sprawdzanie poprawności działania funkcji length
            UTEST12, // Sprawdzanie poprawności działania funkcji length
            UTEST13, // Sprawdzanie poprawności działania funkcji length
            UTEST14, // Sprawdzanie poprawności działania funkcji length
            UTEST15, // Sprawdzanie poprawności działania funkcji length
            UTEST16, // Sprawdzanie poprawności działania funkcji length
            UTEST17, // Sprawdzanie poprawności działania funkcji length
            UTEST18, // Sprawdzanie poprawności działania funkcji length
            UTEST19, // Sprawdzanie poprawności działania funkcji length
            UTEST20, // Sprawdzanie poprawności działania funkcji length
            UTEST21, // Sprawdzanie poprawności działania funkcji length
            UTEST22, // Sprawdzanie poprawności działania funkcji length
            UTEST23, // Sprawdzanie poprawności działania funkcji length
            UTEST24, // Sprawdzanie poprawności działania funkcji length
            UTEST25, // Sprawdzanie poprawności działania funkcji length
            UTEST26, // Sprawdzanie poprawności działania funkcji length
            UTEST27, // Sprawdzanie poprawności działania funkcji length
            UTEST28, // Sprawdzanie poprawności działania funkcji length
            UTEST29, // Sprawdzanie poprawności działania funkcji length
            UTEST30, // Sprawdzanie poprawności działania funkcji length
            UTEST31, // Sprawdzanie poprawności działania funkcji length
            UTEST32, // Sprawdzanie poprawności działania funkcji length
            UTEST33, // Sprawdzanie poprawności działania funkcji length
            UTEST34, // Sprawdzanie poprawności działania funkcji show
            UTEST35, // Sprawdzanie poprawności działania funkcji read
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
            test_summary(35); // wszystkie testy muszą zakończyć się sukcesem
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