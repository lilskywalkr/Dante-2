/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Figury geometryczne
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-18 00:52:02.202111
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


        enum figure_types{
          TRIANGLE = 1,
          RECTANGLE,
          CIRCLE
        };
        
        struct point_t
        {
          int x;
          int y;
        };
        
        struct rectangle_t
        {
          struct point_t p;
          int width;
          int height;
        };
        
        struct circle_t
        {
          struct point_t c;
          float r;
        };
        
        struct triangle_t
        {
          struct point_t p1;
          struct point_t p2;
          struct point_t p3;
        };
        
        struct figure_t{
          union
          {
            struct rectangle_t rect;
            struct triangle_t triangle;
            struct circle_t circ;
          };
          enum figure_types type;
        };
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 6, 8 }, .p2 = { 7, 8 }, .p3 = { 2, 9 }  };
        
                float area = area_triangle(&tr);
                test_error(0.5 + 0.05 > area && 0.5 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 0.5000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -6, 1 }, .p2 = { 6, 9 }, .p3 = { 8, 3 }  };
        
                float area = area_triangle(&tr);
                test_error(44.0 + 0.05 > area && 44.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 44.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 2, -3 }, .p2 = { 6, 8 }, .p3 = { 2, 8 }  };
        
                float area = area_triangle(&tr);
                test_error(22.0 + 0.05 > area && 22.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 22.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 7, 8 }, .p2 = { -3, 4 }, .p3 = { 4, 10 }  };
        
                float area = area_triangle(&tr);
                test_error(16.0 + 0.05 > area && 16.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 16.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 10, 8 }, .p2 = { 4, -3 }, .p3 = { 1, 1 }  };
        
                float area = area_triangle(&tr);
                test_error(28.5 + 0.05 > area && 28.5 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 28.5000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 1, 2 }, .p2 = { 10, 2 }, .p3 = { -3, 6 }  };
        
                float area = area_triangle(&tr);
                test_error(18.0 + 0.05 > area && 18.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 18.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 4, 8 }, .p2 = { 5, 6 }, .p3 = { 4, -3 }  };
        
                float area = area_triangle(&tr);
                test_error(5.5 + 0.05 > area && 5.5 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 5.5000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -6, -6 }, .p2 = { 3, 8 }, .p3 = { 8, 2 }  };
        
                float area = area_triangle(&tr);
                test_error(62.0 + 0.05 > area && 62.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 62.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -8, 5 }, .p2 = { -4, 1 }, .p3 = { 8, 9 }  };
        
                float area = area_triangle(&tr);
                test_error(40.0 + 0.05 > area && 40.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 40.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -10, 1 }, .p2 = { 5, -6 }, .p3 = { 6, 7 }  };
        
                float area = area_triangle(&tr);
                test_error(101.0 + 0.05 > area && 101.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 101.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -8, 1 }, .p2 = { 4, 10 }, .p3 = { -4, 3 }  };
        
                float area = area_triangle(&tr);
                test_error(6.0 + 0.05 > area && 6.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 6.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -9, 4 }, .p2 = { 6, 4 }, .p3 = { 5, -10 }  };
        
                float area = area_triangle(&tr);
                test_error(105.0 + 0.05 > area && 105.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 105.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 8, 9 }, .p2 = { -1, -2 }, .p3 = { 4, 10 }  };
        
                float area = area_triangle(&tr);
                test_error(26.5 + 0.05 > area && 26.5 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 26.5000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 8, 6 }, .p2 = { 1, 8 }, .p3 = { -7, -9 }  };
        
                float area = area_triangle(&tr);
                test_error(67.5 + 0.05 > area && 67.5 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 67.5000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -2, -3 }, .p2 = { -2, -5 }, .p3 = { 7, 8 }  };
        
                float area = area_triangle(&tr);
                test_error(9.0 + 0.05 > area && 9.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 9.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 5, 4 }, .p2 = { -6, -9 }, .p3 = { -8, -7 }  };
        
                float area = area_triangle(&tr);
                test_error(24.0 + 0.05 > area && 24.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 24.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -6, -7 }, .p2 = { -4, -9 }, .p3 = { -2, -5 }  };
        
                float area = area_triangle(&tr);
                test_error(6.0 + 0.05 > area && 6.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 6.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 6, 2 }, .p2 = { 6, 5 }, .p3 = { 8, 2 }  };
        
                float area = area_triangle(&tr);
                test_error(3.0 + 0.05 > area && 3.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 3.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -8, -5 }, .p2 = { -8, -4 }, .p3 = { -3, -5 }  };
        
                float area = area_triangle(&tr);
                test_error(2.5 + 0.05 > area && 2.5 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 2.5000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 9, 10 }, .p2 = { 9, 11 }, .p3 = { 17, 10 }  };
        
                float area = area_triangle(&tr);
                test_error(4.0 + 0.05 > area && 4.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 4.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 10, 1 }, .p2 = { 10, 1 }, .p3 = { 16, 5 }  };
        
                float area = area_triangle(&tr);
                test_error(-1.0 + 0.05 > area && -1.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji area_triangle
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji area_triangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            float area = area_triangle(NULL);
            test_error(-1.0 + 0.05 > area && -1.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji area_rectangle
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji area_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { 4, 6 }, .width = 7, .height = 1 };

                float area = area_rectangle(&rect);
                test_error(7.0 + 0.05 > area && 7.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 7.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji area_rectangle
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji area_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { -2, 3 }, .width = 1, .height = 3 };

                float area = area_rectangle(&rect);
                test_error(3.0 + 0.05 > area && 3.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 3.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji area_rectangle
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji area_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { 4, -9 }, .width = 9, .height = 4 };

                float area = area_rectangle(&rect);
                test_error(36.0 + 0.05 > area && 36.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 36.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji area_rectangle
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji area_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { -6, -1 }, .width = 6, .height = 10 };

                float area = area_rectangle(&rect);
                test_error(60.0 + 0.05 > area && 60.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 60.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji area_rectangle
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji area_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { 0, 0 }, .width = 5, .height = 3 };

                float area = area_rectangle(&rect);
                test_error(15.0 + 0.05 > area && 15.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 15.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji area_rectangle
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji area_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { 6, 5 }, .width = 9, .height = -8 };

                float area = area_rectangle(&rect);
                test_error(-1.0 + 0.05 > area && -1.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji area_rectangle
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji area_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            float area = area_rectangle(NULL);
            test_error(-1.0 + 0.05 > area && -1.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_triangle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji area_circle
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji area_circle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { 10, 4 }, .r = 9.996708020738975 };

                float area = area_circle(&circ);
                test_error(313.95245361328125 + 0.5 > area && 313.95245361328125 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_circle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 313.9525f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji area_circle
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji area_circle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { -4, 7 }, .r = 5.7118446424149285 };

                float area = area_circle(&circ);
                test_error(102.4949951171875 + 0.5 > area && 102.4949951171875 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_circle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 102.4950f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji area_circle
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji area_circle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { 9, -7 }, .r = 2.9667286639969443 };

                float area = area_circle(&circ);
                test_error(27.65066146850586 + 0.5 > area && 27.65066146850586 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_circle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 27.6507f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji area_circle
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji area_circle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { -3, -2 }, .r = 4.170108204113246 };

                float area = area_circle(&circ);
                test_error(54.631675720214844 + 0.5 > area && 54.631675720214844 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_circle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 54.6317f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji area_circle
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji area_circle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { 0, 0 }, .r = 2 };

                float area = area_circle(&circ);
                test_error(12.566370964050293 + 0.5 > area && 12.566370964050293 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_circle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 12.5664f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji area_circle
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji area_circle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { 6, 3 }, .r = -9.626217228052107 };

                float area = area_circle(&circ);
                test_error(-1.0 + 0.5 > area && -1.0 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_circle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji area_circle
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji area_circle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { 8, 3 }, .r = 0 };

                float area = area_circle(&circ);
                test_error(-1.0 + 0.5 > area && -1.0 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_circle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji area_circle
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji area_circle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            float area = area_circle(NULL);
            test_error(-1.0 + 0.1 > area && -1.0 - 0.1 < area, "Wartość %.4f zwrócona przez funkcję area_circle() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 3, 7 }, .p2 = { 3, 8 }, .p3 = { 10, 7 }  };

                struct figure_t figure = { .type = TRIANGLE, .triangle = tr };

                float area = area_figure(&figure);
                test_error(3.5 + 0.05 > area && 3.5 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 3.5000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { -5, -1 }, .p2 = { -5, -8 }, .p3 = { -6, -1 }  };

                struct figure_t figure = { .type = TRIANGLE, .triangle = tr };

                float area = area_figure(&figure);
                test_error(3.5 + 0.05 > area && 3.5 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 3.5000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 6, 10 }, .p2 = { 6, 13 }, .p3 = { 13, 10 }  };

                struct figure_t figure = { .type = TRIANGLE, .triangle = tr };

                float area = area_figure(&figure);
                test_error(10.5 + 0.05 > area && 10.5 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 10.5000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct triangle_t tr = { .p1 = { 3, 7 }, .p2 = { 3, 7 }, .p3 = { 6, 13 }  };

                struct figure_t figure = { .type = TRIANGLE, .triangle = tr };

                float area = area_figure(&figure);
                test_error(-1.0 + 0.05 > area && -1.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { 7, 2 }, .width = 7, .height = 2 };

                struct figure_t figure = { .type = RECTANGLE, .rect = rect };

                float area = area_figure(&figure);
                test_error(14.0 + 0.05 > area && 14.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 14.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { -8, -3 }, .width = -8, .height = -2 };

                struct figure_t figure = { .type = RECTANGLE, .rect = rect };

                float area = area_figure(&figure);
                test_error(-1.0 + 0.05 > area && -1.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { 6, 6 }, .width = 6, .height = 8 };

                struct figure_t figure = { .type = RECTANGLE, .rect = rect };

                float area = area_figure(&figure);
                test_error(48.0 + 0.05 > area && 48.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 48.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct rectangle_t rect = { .p = { 1, 6 }, .width = 1, .height = 6 };

                struct figure_t figure = { .type = RECTANGLE, .rect = rect };

                float area = area_figure(&figure);
                test_error(6.0 + 0.05 > area && 6.0 - 0.05 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 6.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { -2, -3 }, .r = 5.035213853011224 };

                struct figure_t figure = { .type = CIRCLE, .circ = circ };

                float area = area_figure(&figure);
                test_error(79.64998626708984 + 0.5 > area && 79.64998626708984 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 79.6500f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { 0, 0 }, .r = 10 };

                struct figure_t figure = { .type = CIRCLE, .circ = circ };

                float area = area_figure(&figure);
                test_error(314.1592712402344 + 0.5 > area && 314.1592712402344 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, 314.1593f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { 7, 6 }, .r = -5.000115800389373 };

                struct figure_t figure = { .type = CIRCLE, .circ = circ };

                float area = area_figure(&figure);
                test_error(-1.0 + 0.5 > area && -1.0 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct circle_t circ = { .c = { 1, 4 }, .r = 0 };

                struct figure_t figure = { .type = CIRCLE, .circ = circ };

                float area = area_figure(&figure);
                test_error(-1.0 + 0.5 > area && -1.0 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct circle_t circ = { .c = { 1, 4 }, .r = 0 };

            struct figure_t figure = { .type = CIRCLE + RECTANGLE * 2 + TRIANGLE * 3, .circ = circ };

            float area = area_figure(&figure);
            test_error(-1 + 0.5 > area && -1 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania funkcji area_figure
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji area_figure", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            float area = area_figure(NULL);
            test_error(-1 + 0.5 > area && -1 - 0.5 < area, "Wartość %.4f zwrócona przez funkcję area_figure() nie mieści się w wymaganym przedziale dokładności, powinno być %.4f", area, -1.0000f);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct figure_t figures[] = { { .type = TRIANGLE, .triangle = { .p1 = { -17, -17 }, .p2 = { 15, 4 }, .p3 = { 2, -11 } } }, { .type = RECTANGLE, .rect = { .p = { -3, -10 }, .width = 36, .height = 38 } }, { .type = CIRCLE, .circ = { .c = { 8, -10 }, .r = 17.82374841155274 } } };
                struct figure_t *ptr[3];

                for (int i = 0; i < 3; ++i)
                    ptr[i] = &figures[i];

                printf("------------TABLICA FIGUR DO POSORTOWANIA-----------\n");

                for (int i = 0; i < 3; ++i)
                {
                    printf("%.4f ", area_figure(figures  + i));
                    display_figure(figures  + i);
                }
                
                printf("------------TABLICA FIGUR PO SORTOWANIU-----------\n");

                int res = sort_by_area(ptr, 3);
                test_error(res == 0, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 0, res);

                struct figure_t expected_figures[] = { { .type = RECTANGLE, .rect = { .p = { -3, -10 }, .width = 36, .height = 38 } }, { .type = CIRCLE, .circ = { .c = { 8, -10 }, .r = 17.82374841155274 } }, { .type = TRIANGLE, .triangle = { .p1 = { -17, -17 }, .p2 = { 15, 4 }, .p3 = { 2, -11 } } } };

                for (int i = 0; i < 3; ++i)
                {
                    printf("%d %.4f ", i, area_figure(ptr[i]));
                    display_figure(ptr[i]);
                }
                
                printf("------------OCZEKIWANA TABLICA FIGUR-----------\n");
                
                for (int i = 0; i < 3; ++i)
                {
                    printf("%d %.4f ", i, area_figure(expected_figures + i));
                    display_figure(expected_figures  + i);
                }
                
                printf("------------\n");
                

                for (int i = 0; i < 3; ++i)
                {
                    test_error(ptr[i]->type == expected_figures[i].type, "Typ figury pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].type, ptr[i]->type);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    if (ptr[i]->type == TRIANGLE)
                    {
                        test_error(ptr[i]->triangle.p1.x == expected_figures[i].triangle.p1.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.x, ptr[i]->triangle.p1.x);
                        test_error(ptr[i]->triangle.p1.y == expected_figures[i].triangle.p1.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.y, ptr[i]->triangle.p1.y);
                        test_error(ptr[i]->triangle.p2.x == expected_figures[i].triangle.p2.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.x, ptr[i]->triangle.p2.x);
                        test_error(ptr[i]->triangle.p2.y == expected_figures[i].triangle.p2.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.y, ptr[i]->triangle.p2.y);
                        test_error(ptr[i]->triangle.p3.x == expected_figures[i].triangle.p3.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.x, ptr[i]->triangle.p3.x);
                        test_error(ptr[i]->triangle.p3.y == expected_figures[i].triangle.p3.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.y, ptr[i]->triangle.p3.y);
                    }            
                    else if (ptr[i]->type == RECTANGLE)
                    {
                        test_error(ptr[i]->rect.p.x == expected_figures[i].rect.p.x, "Współrzędna x prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.x, ptr[i]->rect.p.x);
                        test_error(ptr[i]->rect.p.y == expected_figures[i].rect.p.y, "Współrzędna y prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.y, ptr[i]->rect.p.y);
                        test_error(ptr[i]->rect.width == expected_figures[i].rect.width, "Szerokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.width, ptr[i]->rect.width);
                        test_error(ptr[i]->rect.height == expected_figures[i].rect.height, "Wysokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.height, ptr[i]->rect.height);
                    }
                    else if (ptr[i]->type == CIRCLE)
                    {
                        test_error(ptr[i]->circ.c.x == expected_figures[i].circ.c.x, "Współrzędna x okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.x, ptr[i]->circ.c.x);
                        test_error(ptr[i]->circ.c.y == expected_figures[i].circ.c.y, "Współrzędna y okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.y, ptr[i]->circ.c.y);
                        test_error(ptr[i]->circ.r == expected_figures[i].circ.r, "Promięć okręgu pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].circ.r, ptr[i]->circ.r);
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
//  Test 53: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct figure_t figures[] = { { .type = RECTANGLE, .rect = { .p = { -3, -10 }, .width = 36, .height = 38 } }, { .type = CIRCLE, .circ = { .c = { 8, -10 }, .r = 17.82374841155274 } }, { .type = TRIANGLE, .triangle = { .p1 = { -17, -17 }, .p2 = { 15, 4 }, .p3 = { 2, -11 } } } };
                struct figure_t *ptr[3];

                for (int i = 0; i < 3; ++i)
                    ptr[i] = &figures[i];

                printf("------------TABLICA FIGUR DO POSORTOWANIA-----------\n");

                for (int i = 0; i < 3; ++i)
                {
                    printf("%.4f ", area_figure(figures  + i));
                    display_figure(figures  + i);
                }
                
                printf("------------TABLICA FIGUR PO SORTOWANIU-----------\n");

                int res = sort_by_area(ptr, 3);
                test_error(res == 0, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 0, res);

                struct figure_t expected_figures[] = { { .type = RECTANGLE, .rect = { .p = { -3, -10 }, .width = 36, .height = 38 } }, { .type = CIRCLE, .circ = { .c = { 8, -10 }, .r = 17.82374841155274 } }, { .type = TRIANGLE, .triangle = { .p1 = { -17, -17 }, .p2 = { 15, 4 }, .p3 = { 2, -11 } } } };

                for (int i = 0; i < 3; ++i)
                {
                    printf("%d %.4f ", i, area_figure(ptr[i]));
                    display_figure(ptr[i]);
                }
                
                printf("------------OCZEKIWANA TABLICA FIGUR-----------\n");
                
                for (int i = 0; i < 3; ++i)
                {
                    printf("%d %.4f ", i, area_figure(expected_figures + i));
                    display_figure(expected_figures  + i);
                }
                
                printf("------------\n");
                

                for (int i = 0; i < 3; ++i)
                {
                    test_error(ptr[i]->type == expected_figures[i].type, "Typ figury pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].type, ptr[i]->type);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    if (ptr[i]->type == TRIANGLE)
                    {
                        test_error(ptr[i]->triangle.p1.x == expected_figures[i].triangle.p1.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.x, ptr[i]->triangle.p1.x);
                        test_error(ptr[i]->triangle.p1.y == expected_figures[i].triangle.p1.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.y, ptr[i]->triangle.p1.y);
                        test_error(ptr[i]->triangle.p2.x == expected_figures[i].triangle.p2.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.x, ptr[i]->triangle.p2.x);
                        test_error(ptr[i]->triangle.p2.y == expected_figures[i].triangle.p2.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.y, ptr[i]->triangle.p2.y);
                        test_error(ptr[i]->triangle.p3.x == expected_figures[i].triangle.p3.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.x, ptr[i]->triangle.p3.x);
                        test_error(ptr[i]->triangle.p3.y == expected_figures[i].triangle.p3.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.y, ptr[i]->triangle.p3.y);
                    }            
                    else if (ptr[i]->type == RECTANGLE)
                    {
                        test_error(ptr[i]->rect.p.x == expected_figures[i].rect.p.x, "Współrzędna x prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.x, ptr[i]->rect.p.x);
                        test_error(ptr[i]->rect.p.y == expected_figures[i].rect.p.y, "Współrzędna y prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.y, ptr[i]->rect.p.y);
                        test_error(ptr[i]->rect.width == expected_figures[i].rect.width, "Szerokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.width, ptr[i]->rect.width);
                        test_error(ptr[i]->rect.height == expected_figures[i].rect.height, "Wysokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.height, ptr[i]->rect.height);
                    }
                    else if (ptr[i]->type == CIRCLE)
                    {
                        test_error(ptr[i]->circ.c.x == expected_figures[i].circ.c.x, "Współrzędna x okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.x, ptr[i]->circ.c.x);
                        test_error(ptr[i]->circ.c.y == expected_figures[i].circ.c.y, "Współrzędna y okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.y, ptr[i]->circ.c.y);
                        test_error(ptr[i]->circ.r == expected_figures[i].circ.r, "Promięć okręgu pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].circ.r, ptr[i]->circ.r);
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
//  Test 54: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct figure_t figures[] = { { .type = RECTANGLE, .rect = { .p = { -7, 8 }, .width = 28, .height = 23 } }, { .type = TRIANGLE, .triangle = { .p1 = { -19, 7 }, .p2 = { -1, -17 }, .p3 = { 8, 11 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -10, 4 }, .p2 = { 12, 8 }, .p3 = { -19, -3 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -13, -18 }, .p2 = { 3, 3 }, .p3 = { -9, -6 } } }, { .type = RECTANGLE, .rect = { .p = { -7, 2 }, .width = 45, .height = 24 } }, { .type = RECTANGLE, .rect = { .p = { -9, 2 }, .width = 36, .height = 49 } }, { .type = TRIANGLE, .triangle = { .p1 = { -3, 7 }, .p2 = { 17, 6 }, .p3 = { -3, 9 } } }, { .type = CIRCLE, .circ = { .c = { -7, -4 }, .r = 37.34616986354132 } }, { .type = CIRCLE, .circ = { .c = { -2, 0 }, .r = 31.776229905305435 } }, { .type = CIRCLE, .circ = { .c = { 8, 4 }, .r = 30.627864172065664 } } };
                struct figure_t *ptr[10];

                for (int i = 0; i < 10; ++i)
                    ptr[i] = &figures[i];

                printf("------------TABLICA FIGUR DO POSORTOWANIA-----------\n");

                for (int i = 0; i < 10; ++i)
                {
                    printf("%.4f ", area_figure(figures  + i));
                    display_figure(figures  + i);
                }
                
                printf("------------TABLICA FIGUR PO SORTOWANIU-----------\n");

                int res = sort_by_area(ptr, 10);
                test_error(res == 0, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 0, res);

                struct figure_t expected_figures[] = { { .type = CIRCLE, .circ = { .c = { -7, -4 }, .r = 37.34616986354132 } }, { .type = CIRCLE, .circ = { .c = { -2, 0 }, .r = 31.776229905305435 } }, { .type = CIRCLE, .circ = { .c = { 8, 4 }, .r = 30.627864172065664 } }, { .type = RECTANGLE, .rect = { .p = { -9, 2 }, .width = 36, .height = 49 } }, { .type = RECTANGLE, .rect = { .p = { -7, 2 }, .width = 45, .height = 24 } }, { .type = RECTANGLE, .rect = { .p = { -7, 8 }, .width = 28, .height = 23 } }, { .type = TRIANGLE, .triangle = { .p1 = { -19, 7 }, .p2 = { -1, -17 }, .p3 = { 8, 11 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -10, 4 }, .p2 = { 12, 8 }, .p3 = { -19, -3 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -13, -18 }, .p2 = { 3, 3 }, .p3 = { -9, -6 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -3, 7 }, .p2 = { 17, 6 }, .p3 = { -3, 9 } } } };

                for (int i = 0; i < 10; ++i)
                {
                    printf("%d %.4f ", i, area_figure(ptr[i]));
                    display_figure(ptr[i]);
                }
                
                printf("------------OCZEKIWANA TABLICA FIGUR-----------\n");
                
                for (int i = 0; i < 10; ++i)
                {
                    printf("%d %.4f ", i, area_figure(expected_figures + i));
                    display_figure(expected_figures  + i);
                }
                
                printf("------------\n");
                

                for (int i = 0; i < 10; ++i)
                {
                    test_error(ptr[i]->type == expected_figures[i].type, "Typ figury pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].type, ptr[i]->type);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    if (ptr[i]->type == TRIANGLE)
                    {
                        test_error(ptr[i]->triangle.p1.x == expected_figures[i].triangle.p1.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.x, ptr[i]->triangle.p1.x);
                        test_error(ptr[i]->triangle.p1.y == expected_figures[i].triangle.p1.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.y, ptr[i]->triangle.p1.y);
                        test_error(ptr[i]->triangle.p2.x == expected_figures[i].triangle.p2.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.x, ptr[i]->triangle.p2.x);
                        test_error(ptr[i]->triangle.p2.y == expected_figures[i].triangle.p2.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.y, ptr[i]->triangle.p2.y);
                        test_error(ptr[i]->triangle.p3.x == expected_figures[i].triangle.p3.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.x, ptr[i]->triangle.p3.x);
                        test_error(ptr[i]->triangle.p3.y == expected_figures[i].triangle.p3.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.y, ptr[i]->triangle.p3.y);
                    }            
                    else if (ptr[i]->type == RECTANGLE)
                    {
                        test_error(ptr[i]->rect.p.x == expected_figures[i].rect.p.x, "Współrzędna x prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.x, ptr[i]->rect.p.x);
                        test_error(ptr[i]->rect.p.y == expected_figures[i].rect.p.y, "Współrzędna y prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.y, ptr[i]->rect.p.y);
                        test_error(ptr[i]->rect.width == expected_figures[i].rect.width, "Szerokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.width, ptr[i]->rect.width);
                        test_error(ptr[i]->rect.height == expected_figures[i].rect.height, "Wysokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.height, ptr[i]->rect.height);
                    }
                    else if (ptr[i]->type == CIRCLE)
                    {
                        test_error(ptr[i]->circ.c.x == expected_figures[i].circ.c.x, "Współrzędna x okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.x, ptr[i]->circ.c.x);
                        test_error(ptr[i]->circ.c.y == expected_figures[i].circ.c.y, "Współrzędna y okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.y, ptr[i]->circ.c.y);
                        test_error(ptr[i]->circ.r == expected_figures[i].circ.r, "Promięć okręgu pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].circ.r, ptr[i]->circ.r);
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
//  Test 55: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct figure_t figures[] = { { .type = CIRCLE, .circ = { .c = { -4, -2 }, .r = 14.246174301632546 } }, { .type = RECTANGLE, .rect = { .p = { 7, -4 }, .width = 47, .height = 17 } }, { .type = TRIANGLE, .triangle = { .p1 = { -17, 3 }, .p2 = { 19, -3 }, .p3 = { 9, -8 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 16, 11 }, .p2 = { -1, 5 }, .p3 = { 2, -12 } } }, { .type = CIRCLE, .circ = { .c = { -6, 3 }, .r = 34.31236376201076 } }, { .type = TRIANGLE, .triangle = { .p1 = { -17, 12 }, .p2 = { -9, -9 }, .p3 = { -2, 14 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -5, -3 }, .p2 = { -18, 19 }, .p3 = { -17, 14 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 16, 1 }, .p2 = { -15, 4 }, .p3 = { 8, -12 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -15, -10 }, .p2 = { 19, 2 }, .p3 = { -8, -5 } } }, { .type = RECTANGLE, .rect = { .p = { -5, -8 }, .width = 25, .height = 23 } }, { .type = RECTANGLE, .rect = { .p = { -5, 0 }, .width = 17, .height = 42 } }, { .type = TRIANGLE, .triangle = { .p1 = { -11, 4 }, .p2 = { -2, 18 }, .p3 = { -5, -7 } } }, { .type = RECTANGLE, .rect = { .p = { -10, 3 }, .width = 36, .height = 33 } }, { .type = RECTANGLE, .rect = { .p = { -10, 0 }, .width = 25, .height = 30 } }, { .type = CIRCLE, .circ = { .c = { 5, -3 }, .r = 26.91661176684545 } }, { .type = RECTANGLE, .rect = { .p = { -2, -9 }, .width = 50, .height = 11 } }, { .type = TRIANGLE, .triangle = { .p1 = { 6, -2 }, .p2 = { -13, -4 }, .p3 = { 7, 18 } } }, { .type = CIRCLE, .circ = { .c = { 9, -7 }, .r = 34.17274290590808 } }, { .type = CIRCLE, .circ = { .c = { -3, -5 }, .r = 31.361290581904736 } }, { .type = RECTANGLE, .rect = { .p = { -4, 4 }, .width = 11, .height = 39 } }, { .type = CIRCLE, .circ = { .c = { -10, -2 }, .r = 31.86504738776463 } }, { .type = TRIANGLE, .triangle = { .p1 = { 2, -5 }, .p2 = { -1, -7 }, .p3 = { 12, -15 } } }, { .type = RECTANGLE, .rect = { .p = { -1, -2 }, .width = 13, .height = 47 } }, { .type = RECTANGLE, .rect = { .p = { 5, 9 }, .width = 46, .height = 43 } }, { .type = TRIANGLE, .triangle = { .p1 = { -9, -18 }, .p2 = { -16, -12 }, .p3 = { -1, -2 } } }, { .type = CIRCLE, .circ = { .c = { -6, -4 }, .r = 20.034536663052375 } }, { .type = RECTANGLE, .rect = { .p = { -7, -4 }, .width = 38, .height = 10 } }, { .type = CIRCLE, .circ = { .c = { -9, -3 }, .r = 10.557842876395839 } }, { .type = RECTANGLE, .rect = { .p = { -7, 6 }, .width = 23, .height = 17 } }, { .type = TRIANGLE, .triangle = { .p1 = { 6, 15 }, .p2 = { -19, 9 }, .p3 = { 10, -1 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -15, 19 }, .p2 = { 1, 4 }, .p3 = { 20, 16 } } }, { .type = RECTANGLE, .rect = { .p = { 7, -8 }, .width = 10, .height = 31 } }, { .type = TRIANGLE, .triangle = { .p1 = { -19, 16 }, .p2 = { 12, 5 }, .p3 = { 14, -7 } } }, { .type = RECTANGLE, .rect = { .p = { -10, 1 }, .width = 42, .height = 28 } }, { .type = TRIANGLE, .triangle = { .p1 = { -18, -7 }, .p2 = { -11, 20 }, .p3 = { -2, -16 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -18, 7 }, .p2 = { 6, 3 }, .p3 = { 14, 20 } } }, { .type = RECTANGLE, .rect = { .p = { -8, 8 }, .width = 48, .height = 32 } }, { .type = RECTANGLE, .rect = { .p = { -1, -3 }, .width = 35, .height = 35 } }, { .type = TRIANGLE, .triangle = { .p1 = { 2, 14 }, .p2 = { -7, -4 }, .p3 = { 8, 18 } } }, { .type = CIRCLE, .circ = { .c = { 2, -10 }, .r = 17.074832756227373 } }, { .type = CIRCLE, .circ = { .c = { -6, 1 }, .r = 16.974607236614535 } }, { .type = TRIANGLE, .triangle = { .p1 = { -17, -17 }, .p2 = { -4, 20 }, .p3 = { 6, 16 } } }, { .type = CIRCLE, .circ = { .c = { 3, 8 }, .r = 23.283738563648683 } }, { .type = TRIANGLE, .triangle = { .p1 = { -2, -9 }, .p2 = { -2, -10 }, .p3 = { 11, -12 } } }, { .type = RECTANGLE, .rect = { .p = { -4, -8 }, .width = 40, .height = 25 } }, { .type = RECTANGLE, .rect = { .p = { -5, 5 }, .width = 20, .height = 44 } }, { .type = CIRCLE, .circ = { .c = { -2, 3 }, .r = 37.43773315096846 } }, { .type = CIRCLE, .circ = { .c = { 7, -3 }, .r = 39.67758669290341 } }, { .type = CIRCLE, .circ = { .c = { -4, 1 }, .r = 1.8982469585731807 } }, { .type = CIRCLE, .circ = { .c = { 9, 9 }, .r = 31.160868116727507 } }, { .type = TRIANGLE, .triangle = { .p1 = { 14, -4 }, .p2 = { 1, 8 }, .p3 = { -14, 2 } } } };
                struct figure_t *ptr[51];

                for (int i = 0; i < 51; ++i)
                    ptr[i] = &figures[i];

                printf("------------TABLICA FIGUR DO POSORTOWANIA-----------\n");

                for (int i = 0; i < 51; ++i)
                {
                    printf("%.4f ", area_figure(figures  + i));
                    display_figure(figures  + i);
                }
                
                printf("------------TABLICA FIGUR PO SORTOWANIU-----------\n");

                int res = sort_by_area(ptr, 51);
                test_error(res == 0, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 0, res);

                struct figure_t expected_figures[] = { { .type = CIRCLE, .circ = { .c = { 7, -3 }, .r = 39.67758669290341 } }, { .type = CIRCLE, .circ = { .c = { -2, 3 }, .r = 37.43773315096846 } }, { .type = CIRCLE, .circ = { .c = { -6, 3 }, .r = 34.31236376201076 } }, { .type = CIRCLE, .circ = { .c = { 9, -7 }, .r = 34.17274290590808 } }, { .type = CIRCLE, .circ = { .c = { -10, -2 }, .r = 31.86504738776463 } }, { .type = CIRCLE, .circ = { .c = { -3, -5 }, .r = 31.361290581904736 } }, { .type = CIRCLE, .circ = { .c = { 9, 9 }, .r = 31.160868116727507 } }, { .type = CIRCLE, .circ = { .c = { 5, -3 }, .r = 26.91661176684545 } }, { .type = RECTANGLE, .rect = { .p = { 5, 9 }, .width = 46, .height = 43 } }, { .type = CIRCLE, .circ = { .c = { 3, 8 }, .r = 23.283738563648683 } }, { .type = RECTANGLE, .rect = { .p = { -8, 8 }, .width = 48, .height = 32 } }, { .type = CIRCLE, .circ = { .c = { -6, -4 }, .r = 20.034536663052375 } }, { .type = RECTANGLE, .rect = { .p = { -1, -3 }, .width = 35, .height = 35 } }, { .type = RECTANGLE, .rect = { .p = { -10, 3 }, .width = 36, .height = 33 } }, { .type = RECTANGLE, .rect = { .p = { -10, 1 }, .width = 42, .height = 28 } }, { .type = RECTANGLE, .rect = { .p = { -4, -8 }, .width = 40, .height = 25 } }, { .type = CIRCLE, .circ = { .c = { 2, -10 }, .r = 17.074832756227373 } }, { .type = CIRCLE, .circ = { .c = { -6, 1 }, .r = 16.974607236614535 } }, { .type = RECTANGLE, .rect = { .p = { -5, 5 }, .width = 20, .height = 44 } }, { .type = RECTANGLE, .rect = { .p = { 7, -4 }, .width = 47, .height = 17 } }, { .type = RECTANGLE, .rect = { .p = { -10, 0 }, .width = 25, .height = 30 } }, { .type = RECTANGLE, .rect = { .p = { -5, 0 }, .width = 17, .height = 42 } }, { .type = CIRCLE, .circ = { .c = { -4, -2 }, .r = 14.246174301632546 } }, { .type = RECTANGLE, .rect = { .p = { -1, -2 }, .width = 13, .height = 47 } }, { .type = RECTANGLE, .rect = { .p = { -5, -8 }, .width = 25, .height = 23 } }, { .type = RECTANGLE, .rect = { .p = { -2, -9 }, .width = 50, .height = 11 } }, { .type = RECTANGLE, .rect = { .p = { -4, 4 }, .width = 11, .height = 39 } }, { .type = RECTANGLE, .rect = { .p = { -7, 6 }, .width = 23, .height = 17 } }, { .type = RECTANGLE, .rect = { .p = { -7, -4 }, .width = 38, .height = 10 } }, { .type = CIRCLE, .circ = { .c = { -9, -3 }, .r = 10.557842876395839 } }, { .type = RECTANGLE, .rect = { .p = { 7, -8 }, .width = 10, .height = 31 } }, { .type = TRIANGLE, .triangle = { .p1 = { -18, -7 }, .p2 = { -11, 20 }, .p3 = { -2, -16 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -15, 19 }, .p2 = { 1, 4 }, .p3 = { 20, 16 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -18, 7 }, .p2 = { 6, 3 }, .p3 = { 14, 20 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 16, 1 }, .p2 = { -15, 4 }, .p3 = { 8, -12 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 6, 15 }, .p2 = { -19, 9 }, .p3 = { 10, -1 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -17, -17 }, .p2 = { -4, 20 }, .p3 = { 6, 16 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 6, -2 }, .p2 = { -13, -4 }, .p3 = { 7, 18 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -19, 16 }, .p2 = { 12, 5 }, .p3 = { 14, -7 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -17, 12 }, .p2 = { -9, -9 }, .p3 = { -2, 14 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 16, 11 }, .p2 = { -1, 5 }, .p3 = { 2, -12 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 14, -4 }, .p2 = { 1, 8 }, .p3 = { -14, 2 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -17, 3 }, .p2 = { 19, -3 }, .p3 = { 9, -8 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -11, 4 }, .p2 = { -2, 18 }, .p3 = { -5, -7 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -9, -18 }, .p2 = { -16, -12 }, .p3 = { -1, -2 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -15, -10 }, .p2 = { 19, 2 }, .p3 = { -8, -5 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 2, 14 }, .p2 = { -7, -4 }, .p3 = { 8, 18 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 2, -5 }, .p2 = { -1, -7 }, .p3 = { 12, -15 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -5, -3 }, .p2 = { -18, 19 }, .p3 = { -17, 14 } } }, { .type = CIRCLE, .circ = { .c = { -4, 1 }, .r = 1.8982469585731807 } }, { .type = TRIANGLE, .triangle = { .p1 = { -2, -9 }, .p2 = { -2, -10 }, .p3 = { 11, -12 } } } };

                for (int i = 0; i < 51; ++i)
                {
                    printf("%d %.4f ", i, area_figure(ptr[i]));
                    display_figure(ptr[i]);
                }
                
                printf("------------OCZEKIWANA TABLICA FIGUR-----------\n");
                
                for (int i = 0; i < 51; ++i)
                {
                    printf("%d %.4f ", i, area_figure(expected_figures + i));
                    display_figure(expected_figures  + i);
                }
                
                printf("------------\n");
                

                for (int i = 0; i < 51; ++i)
                {
                    test_error(ptr[i]->type == expected_figures[i].type, "Typ figury pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].type, ptr[i]->type);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    if (ptr[i]->type == TRIANGLE)
                    {
                        test_error(ptr[i]->triangle.p1.x == expected_figures[i].triangle.p1.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.x, ptr[i]->triangle.p1.x);
                        test_error(ptr[i]->triangle.p1.y == expected_figures[i].triangle.p1.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.y, ptr[i]->triangle.p1.y);
                        test_error(ptr[i]->triangle.p2.x == expected_figures[i].triangle.p2.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.x, ptr[i]->triangle.p2.x);
                        test_error(ptr[i]->triangle.p2.y == expected_figures[i].triangle.p2.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.y, ptr[i]->triangle.p2.y);
                        test_error(ptr[i]->triangle.p3.x == expected_figures[i].triangle.p3.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.x, ptr[i]->triangle.p3.x);
                        test_error(ptr[i]->triangle.p3.y == expected_figures[i].triangle.p3.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.y, ptr[i]->triangle.p3.y);
                    }            
                    else if (ptr[i]->type == RECTANGLE)
                    {
                        test_error(ptr[i]->rect.p.x == expected_figures[i].rect.p.x, "Współrzędna x prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.x, ptr[i]->rect.p.x);
                        test_error(ptr[i]->rect.p.y == expected_figures[i].rect.p.y, "Współrzędna y prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.y, ptr[i]->rect.p.y);
                        test_error(ptr[i]->rect.width == expected_figures[i].rect.width, "Szerokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.width, ptr[i]->rect.width);
                        test_error(ptr[i]->rect.height == expected_figures[i].rect.height, "Wysokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.height, ptr[i]->rect.height);
                    }
                    else if (ptr[i]->type == CIRCLE)
                    {
                        test_error(ptr[i]->circ.c.x == expected_figures[i].circ.c.x, "Współrzędna x okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.x, ptr[i]->circ.c.x);
                        test_error(ptr[i]->circ.c.y == expected_figures[i].circ.c.y, "Współrzędna y okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.y, ptr[i]->circ.c.y);
                        test_error(ptr[i]->circ.r == expected_figures[i].circ.r, "Promięć okręgu pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].circ.r, ptr[i]->circ.r);
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
//  Test 56: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct figure_t figures[] = { { .type = RECTANGLE, .rect = { .p = { -8, 7 }, .width = 39, .height = 18 } }, { .type = CIRCLE, .circ = { .c = { 9, 3 }, .r = 5.575649143261013 } }, { .type = TRIANGLE, .triangle = { .p1 = { -23, -7 }, .p2 = { 28, 36 }, .p3 = { 23, 28 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -28, 17 }, .p2 = { -39, 5 }, .p3 = { 38, -19 } } }, { .type = RECTANGLE, .rect = { .p = { -2, -1 }, .width = 17, .height = 31 } }, { .type = TRIANGLE, .triangle = { .p1 = { 7, 37 }, .p2 = { 10, 21 }, .p3 = { 35, -33 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 13, 14 }, .p2 = { 38, -5 }, .p3 = { 4, 23 } } }, { .type = CIRCLE, .circ = { .c = { 4, -8 }, .r = 36.215743225224614 } }, { .type = TRIANGLE, .triangle = { .p1 = { -26, -11 }, .p2 = { 28, 0 }, .p3 = { 11, 20 } } }, { .type = CIRCLE, .circ = { .c = { 3, 7 }, .r = 12.792577458466235 } }, { .type = TRIANGLE, .triangle = { .p1 = { -28, 39 }, .p2 = { -23, 20 }, .p3 = { -27, -11 } } }, { .type = RECTANGLE, .rect = { .p = { 1, -3 }, .width = 14, .height = 26 } }, { .type = TRIANGLE, .triangle = { .p1 = { -21, 9 }, .p2 = { -4, -34 }, .p3 = { -21, -28 } } }, { .type = CIRCLE, .circ = { .c = { -7, -1 }, .r = 37.68857264796967 } }, { .type = TRIANGLE, .triangle = { .p1 = { 21, -24 }, .p2 = { -40, -36 }, .p3 = { 38, -17 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 25, -5 }, .p2 = { 19, -10 }, .p3 = { -19, 35 } } }, { .type = RECTANGLE, .rect = { .p = { 1, 8 }, .width = 47, .height = 29 } }, { .type = RECTANGLE, .rect = { .p = { 1, -10 }, .width = 34, .height = 43 } }, { .type = TRIANGLE, .triangle = { .p1 = { -33, 23 }, .p2 = { -14, 14 }, .p3 = { 21, -30 } } }, { .type = CIRCLE, .circ = { .c = { 1, 3 }, .r = 25.882112198205284 } }, { .type = RECTANGLE, .rect = { .p = { -3, 1 }, .width = 11, .height = 49 } }, { .type = CIRCLE, .circ = { .c = { 10, -5 }, .r = 15.681918811263518 } }, { .type = TRIANGLE, .triangle = { .p1 = { -12, -32 }, .p2 = { -4, 16 }, .p3 = { -7, 29 } } }, { .type = CIRCLE, .circ = { .c = { -6, -8 }, .r = 16.165067416409535 } }, { .type = TRIANGLE, .triangle = { .p1 = { -3, 37 }, .p2 = { -18, 8 }, .p3 = { 37, -26 } } }, { .type = CIRCLE, .circ = { .c = { -10, 8 }, .r = 15.148166430198362 } }, { .type = CIRCLE, .circ = { .c = { -1, -5 }, .r = 18.12207184227458 } }, { .type = TRIANGLE, .triangle = { .p1 = { 39, 7 }, .p2 = { -7, -36 }, .p3 = { -2, 15 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -16, -9 }, .p2 = { -14, 33 }, .p3 = { 35, 31 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -15, 3 }, .p2 = { 23, 2 }, .p3 = { -9, -35 } } }, { .type = RECTANGLE, .rect = { .p = { -3, 6 }, .width = 34, .height = 44 } }, { .type = TRIANGLE, .triangle = { .p1 = { -1, -13 }, .p2 = { 27, -38 }, .p3 = { -30, -17 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 27, 4 }, .p2 = { 4, 15 }, .p3 = { 37, 6 } } }, { .type = CIRCLE, .circ = { .c = { 3, -5 }, .r = 29.939896334421153 } }, { .type = TRIANGLE, .triangle = { .p1 = { -3, 28 }, .p2 = { 19, 33 }, .p3 = { 30, -20 } } }, { .type = RECTANGLE, .rect = { .p = { 3, 9 }, .width = 36, .height = 13 } }, { .type = TRIANGLE, .triangle = { .p1 = { 31, -2 }, .p2 = { -1, -17 }, .p3 = { -40, -11 } } }, { .type = RECTANGLE, .rect = { .p = { -7, 4 }, .width = 27, .height = 45 } }, { .type = RECTANGLE, .rect = { .p = { -2, -5 }, .width = 37, .height = 45 } }, { .type = TRIANGLE, .triangle = { .p1 = { -27, -34 }, .p2 = { 34, 27 }, .p3 = { 4, 3 } } }, { .type = RECTANGLE, .rect = { .p = { 9, -7 }, .width = 42, .height = 14 } }, { .type = TRIANGLE, .triangle = { .p1 = { -33, 4 }, .p2 = { -38, -20 }, .p3 = { -18, 28 } } }, { .type = RECTANGLE, .rect = { .p = { 6, -10 }, .width = 15, .height = 15 } }, { .type = RECTANGLE, .rect = { .p = { 0, -4 }, .width = 15, .height = 41 } }, { .type = CIRCLE, .circ = { .c = { 5, 3 }, .r = 3.8255640903174752 } }, { .type = RECTANGLE, .rect = { .p = { 9, -8 }, .width = 29, .height = 33 } }, { .type = CIRCLE, .circ = { .c = { 1, -3 }, .r = 11.087895204161999 } }, { .type = RECTANGLE, .rect = { .p = { 4, 4 }, .width = 37, .height = 24 } }, { .type = TRIANGLE, .triangle = { .p1 = { -7, -26 }, .p2 = { 21, 14 }, .p3 = { 7, 18 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -22, -27 }, .p2 = { -5, -17 }, .p3 = { -36, 4 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -34, 39 }, .p2 = { 4, -37 }, .p3 = { -25, -35 } } }, { .type = CIRCLE, .circ = { .c = { -10, 3 }, .r = 19.358245616499527 } }, { .type = CIRCLE, .circ = { .c = { 3, -4 }, .r = 18.523333359690902 } }, { .type = TRIANGLE, .triangle = { .p1 = { -24, -29 }, .p2 = { -40, 39 }, .p3 = { 21, 12 } } }, { .type = RECTANGLE, .rect = { .p = { -5, -7 }, .width = 11, .height = 29 } }, { .type = CIRCLE, .circ = { .c = { 7, -9 }, .r = 16.94283627534668 } }, { .type = TRIANGLE, .triangle = { .p1 = { 22, -12 }, .p2 = { 40, 2 }, .p3 = { 36, -17 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 4, 36 }, .p2 = { -16, 11 }, .p3 = { -13, 1 } } }, { .type = CIRCLE, .circ = { .c = { 4, -4 }, .r = 35.77741089420972 } }, { .type = RECTANGLE, .rect = { .p = { -1, 6 }, .width = 10, .height = 45 } }, { .type = RECTANGLE, .rect = { .p = { -1, -9 }, .width = 41, .height = 37 } }, { .type = TRIANGLE, .triangle = { .p1 = { 16, -10 }, .p2 = { 30, 26 }, .p3 = { -13, -33 } } }, { .type = CIRCLE, .circ = { .c = { -1, 4 }, .r = 24.326023205045562 } }, { .type = TRIANGLE, .triangle = { .p1 = { -18, 33 }, .p2 = { 15, 36 }, .p3 = { -14, -34 } } }, { .type = CIRCLE, .circ = { .c = { -7, 5 }, .r = 23.784563028499647 } }, { .type = RECTANGLE, .rect = { .p = { 9, -5 }, .width = 34, .height = 34 } }, { .type = RECTANGLE, .rect = { .p = { -3, 4 }, .width = 17, .height = 30 } }, { .type = TRIANGLE, .triangle = { .p1 = { 8, -18 }, .p2 = { -27, -4 }, .p3 = { 3, -11 } } }, { .type = CIRCLE, .circ = { .c = { -7, 4 }, .r = 23.711522171550467 } }, { .type = TRIANGLE, .triangle = { .p1 = { 16, 29 }, .p2 = { -18, 38 }, .p3 = { 22, 5 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -22, -15 }, .p2 = { 27, -36 }, .p3 = { 20, -38 } } }, { .type = CIRCLE, .circ = { .c = { -6, -6 }, .r = 16.923544690646203 } }, { .type = TRIANGLE, .triangle = { .p1 = { 20, -35 }, .p2 = { 30, -21 }, .p3 = { -13, -19 } } } };
                struct figure_t *ptr[73];

                for (int i = 0; i < 73; ++i)
                    ptr[i] = &figures[i];

                printf("------------TABLICA FIGUR DO POSORTOWANIA-----------\n");

                for (int i = 0; i < 73; ++i)
                {
                    printf("%.4f ", area_figure(figures  + i));
                    display_figure(figures  + i);
                }
                
                printf("------------TABLICA FIGUR PO SORTOWANIU-----------\n");

                int res = sort_by_area(ptr, 73);
                test_error(res == 0, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 0, res);

                struct figure_t expected_figures[] = { { .type = CIRCLE, .circ = { .c = { -7, -1 }, .r = 37.68857264796967 } }, { .type = CIRCLE, .circ = { .c = { 4, -8 }, .r = 36.215743225224614 } }, { .type = CIRCLE, .circ = { .c = { 4, -4 }, .r = 35.77741089420972 } }, { .type = CIRCLE, .circ = { .c = { 3, -5 }, .r = 29.939896334421153 } }, { .type = CIRCLE, .circ = { .c = { 1, 3 }, .r = 25.882112198205284 } }, { .type = CIRCLE, .circ = { .c = { -1, 4 }, .r = 24.326023205045562 } }, { .type = TRIANGLE, .triangle = { .p1 = { -24, -29 }, .p2 = { -40, 39 }, .p3 = { 21, 12 } } }, { .type = CIRCLE, .circ = { .c = { -7, 5 }, .r = 23.784563028499647 } }, { .type = CIRCLE, .circ = { .c = { -7, 4 }, .r = 23.711522171550467 } }, { .type = RECTANGLE, .rect = { .p = { -2, -5 }, .width = 37, .height = 45 } }, { .type = RECTANGLE, .rect = { .p = { -1, -9 }, .width = 41, .height = 37 } }, { .type = RECTANGLE, .rect = { .p = { -3, 6 }, .width = 34, .height = 44 } }, { .type = RECTANGLE, .rect = { .p = { 1, -10 }, .width = 34, .height = 43 } }, { .type = RECTANGLE, .rect = { .p = { 1, 8 }, .width = 47, .height = 29 } }, { .type = RECTANGLE, .rect = { .p = { -7, 4 }, .width = 27, .height = 45 } }, { .type = CIRCLE, .circ = { .c = { -10, 3 }, .r = 19.358245616499527 } }, { .type = RECTANGLE, .rect = { .p = { 9, -5 }, .width = 34, .height = 34 } }, { .type = TRIANGLE, .triangle = { .p1 = { -18, 33 }, .p2 = { 15, 36 }, .p3 = { -14, -34 } } }, { .type = CIRCLE, .circ = { .c = { 3, -4 }, .r = 18.523333359690902 } }, { .type = TRIANGLE, .triangle = { .p1 = { 39, 7 }, .p2 = { -7, -36 }, .p3 = { -2, 15 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -34, 39 }, .p2 = { 4, -37 }, .p3 = { -25, -35 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -3, 37 }, .p2 = { -18, 8 }, .p3 = { 37, -26 } } }, { .type = CIRCLE, .circ = { .c = { -1, -5 }, .r = 18.12207184227458 } }, { .type = TRIANGLE, .triangle = { .p1 = { -16, -9 }, .p2 = { -14, 33 }, .p3 = { 35, 31 } } }, { .type = RECTANGLE, .rect = { .p = { 9, -8 }, .width = 29, .height = 33 } }, { .type = CIRCLE, .circ = { .c = { 7, -9 }, .r = 16.94283627534668 } }, { .type = CIRCLE, .circ = { .c = { -6, -6 }, .r = 16.923544690646203 } }, { .type = RECTANGLE, .rect = { .p = { 4, 4 }, .width = 37, .height = 24 } }, { .type = CIRCLE, .circ = { .c = { -6, -8 }, .r = 16.165067416409535 } }, { .type = CIRCLE, .circ = { .c = { 10, -5 }, .r = 15.681918811263518 } }, { .type = CIRCLE, .circ = { .c = { -10, 8 }, .r = 15.148166430198362 } }, { .type = TRIANGLE, .triangle = { .p1 = { -15, 3 }, .p2 = { 23, 2 }, .p3 = { -9, -35 } } }, { .type = RECTANGLE, .rect = { .p = { -8, 7 }, .width = 39, .height = 18 } }, { .type = TRIANGLE, .triangle = { .p1 = { -26, -11 }, .p2 = { 28, 0 }, .p3 = { 11, 20 } } }, { .type = RECTANGLE, .rect = { .p = { 0, -4 }, .width = 15, .height = 41 } }, { .type = TRIANGLE, .triangle = { .p1 = { -3, 28 }, .p2 = { 19, 33 }, .p3 = { 30, -20 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -28, 17 }, .p2 = { -39, 5 }, .p3 = { 38, -19 } } }, { .type = RECTANGLE, .rect = { .p = { 9, -7 }, .width = 42, .height = 14 } }, { .type = RECTANGLE, .rect = { .p = { -3, 1 }, .width = 11, .height = 49 } }, { .type = RECTANGLE, .rect = { .p = { -2, -1 }, .width = 17, .height = 31 } }, { .type = CIRCLE, .circ = { .c = { 3, 7 }, .r = 12.792577458466235 } }, { .type = RECTANGLE, .rect = { .p = { -3, 4 }, .width = 17, .height = 30 } }, { .type = RECTANGLE, .rect = { .p = { 3, 9 }, .width = 36, .height = 13 } }, { .type = RECTANGLE, .rect = { .p = { -1, 6 }, .width = 10, .height = 45 } }, { .type = TRIANGLE, .triangle = { .p1 = { -1, -13 }, .p2 = { 27, -38 }, .p3 = { -30, -17 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 31, -2 }, .p2 = { -1, -17 }, .p3 = { -40, -11 } } }, { .type = CIRCLE, .circ = { .c = { 1, -3 }, .r = 11.087895204161999 } }, { .type = TRIANGLE, .triangle = { .p1 = { 16, 29 }, .p2 = { -18, 38 }, .p3 = { 22, 5 } } }, { .type = RECTANGLE, .rect = { .p = { 1, -3 }, .width = 14, .height = 26 } }, { .type = TRIANGLE, .triangle = { .p1 = { 16, -10 }, .p2 = { 30, 26 }, .p3 = { -13, -33 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -7, -26 }, .p2 = { 21, 14 }, .p3 = { 7, 18 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -22, -27 }, .p2 = { -5, -17 }, .p3 = { -36, 4 } } }, { .type = RECTANGLE, .rect = { .p = { -5, -7 }, .width = 11, .height = 29 } }, { .type = TRIANGLE, .triangle = { .p1 = { -21, 9 }, .p2 = { -4, -34 }, .p3 = { -21, -28 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 20, -35 }, .p2 = { 30, -21 }, .p3 = { -13, -19 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -33, 23 }, .p2 = { -14, 14 }, .p3 = { 21, -30 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 25, -5 }, .p2 = { 19, -10 }, .p3 = { -19, 35 } } }, { .type = RECTANGLE, .rect = { .p = { 6, -10 }, .width = 15, .height = 15 } }, { .type = TRIANGLE, .triangle = { .p1 = { -27, -34 }, .p2 = { 34, 27 }, .p3 = { 4, 3 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 22, -12 }, .p2 = { 40, 2 }, .p3 = { 36, -17 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 4, 36 }, .p2 = { -16, 11 }, .p3 = { -13, 1 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -12, -32 }, .p2 = { -4, 16 }, .p3 = { -7, 29 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -22, -15 }, .p2 = { 27, -36 }, .p3 = { 20, -38 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -33, 4 }, .p2 = { -38, -20 }, .p3 = { -18, 28 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 7, 37 }, .p2 = { 10, 21 }, .p3 = { 35, -33 } } }, { .type = TRIANGLE, .triangle = { .p1 = { -28, 39 }, .p2 = { -23, 20 }, .p3 = { -27, -11 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 21, -24 }, .p2 = { -40, -36 }, .p3 = { 38, -17 } } }, { .type = CIRCLE, .circ = { .c = { 9, 3 }, .r = 5.575649143261013 } }, { .type = TRIANGLE, .triangle = { .p1 = { -23, -7 }, .p2 = { 28, 36 }, .p3 = { 23, 28 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 8, -18 }, .p2 = { -27, -4 }, .p3 = { 3, -11 } } }, { .type = TRIANGLE, .triangle = { .p1 = { 27, 4 }, .p2 = { 4, 15 }, .p3 = { 37, 6 } } }, { .type = CIRCLE, .circ = { .c = { 5, 3 }, .r = 3.8255640903174752 } }, { .type = TRIANGLE, .triangle = { .p1 = { 13, 14 }, .p2 = { 38, -5 }, .p3 = { 4, 23 } } } };

                for (int i = 0; i < 73; ++i)
                {
                    printf("%d %.4f ", i, area_figure(ptr[i]));
                    display_figure(ptr[i]);
                }
                
                printf("------------OCZEKIWANA TABLICA FIGUR-----------\n");
                
                for (int i = 0; i < 73; ++i)
                {
                    printf("%d %.4f ", i, area_figure(expected_figures + i));
                    display_figure(expected_figures  + i);
                }
                
                printf("------------\n");
                

                for (int i = 0; i < 73; ++i)
                {
                    test_error(ptr[i]->type == expected_figures[i].type, "Typ figury pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].type, ptr[i]->type);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    if (ptr[i]->type == TRIANGLE)
                    {
                        test_error(ptr[i]->triangle.p1.x == expected_figures[i].triangle.p1.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.x, ptr[i]->triangle.p1.x);
                        test_error(ptr[i]->triangle.p1.y == expected_figures[i].triangle.p1.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p1.y, ptr[i]->triangle.p1.y);
                        test_error(ptr[i]->triangle.p2.x == expected_figures[i].triangle.p2.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.x, ptr[i]->triangle.p2.x);
                        test_error(ptr[i]->triangle.p2.y == expected_figures[i].triangle.p2.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p2.y, ptr[i]->triangle.p2.y);
                        test_error(ptr[i]->triangle.p3.x == expected_figures[i].triangle.p3.x, "Współrzędna x punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.x, ptr[i]->triangle.p3.x);
                        test_error(ptr[i]->triangle.p3.y == expected_figures[i].triangle.p3.y, "Współrzędna y punktu 1 trójkąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].triangle.p3.y, ptr[i]->triangle.p3.y);
                    }            
                    else if (ptr[i]->type == RECTANGLE)
                    {
                        test_error(ptr[i]->rect.p.x == expected_figures[i].rect.p.x, "Współrzędna x prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.x, ptr[i]->rect.p.x);
                        test_error(ptr[i]->rect.p.y == expected_figures[i].rect.p.y, "Współrzędna y prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.p.y, ptr[i]->rect.p.y);
                        test_error(ptr[i]->rect.width == expected_figures[i].rect.width, "Szerokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.width, ptr[i]->rect.width);
                        test_error(ptr[i]->rect.height == expected_figures[i].rect.height, "Wysokość prostokąta pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].rect.height, ptr[i]->rect.height);
                    }
                    else if (ptr[i]->type == CIRCLE)
                    {
                        test_error(ptr[i]->circ.c.x == expected_figures[i].circ.c.x, "Współrzędna x okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.x, ptr[i]->circ.c.x);
                        test_error(ptr[i]->circ.c.y == expected_figures[i].circ.c.y, "Współrzędna y okręgu pod indeksem %d jest nieprawidłowa, powinno być %d, a jest %d", i, expected_figures[i].circ.c.y, ptr[i]->circ.c.y);
                        test_error(ptr[i]->circ.r == expected_figures[i].circ.r, "Promięć okręgu pod indeksem %d jest nieprawidłowy, powinno być %d, a jest %d", i, expected_figures[i].circ.r, ptr[i]->circ.r);
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
//  Test 57: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct figure_t figures[] = { { .type = TRIANGLE, .triangle = { .p1 = { 3, 0 }, .p2 = { -8, 1 }, .p3 = { 0, 8 } } }, { .type = CIRCLE, .circ = { .c = { -10, -8 }, .r = -38.827829741955284 } }, { .type = RECTANGLE, .rect = { .p = { -9, -7 }, .width = 18, .height = 17 } } };
                struct figure_t *ptr[3];

                for (int i = 0; i < 3; ++i)
                    ptr[i] = &figures[i];

                printf("------------TABLICA FIGUR DO POSORTOWANIA-----------\n");

                for (int i = 0; i < 3; ++i)
                {
                    printf("%d %.4f ", i, area_figure(figures  + i));
                    display_figure(figures  + i);
                }

                int res = sort_by_area(ptr, 3);
                test_error(res == 1, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 1, res);


            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 58: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct figure_t figures[] = { { .type = TRIANGLE, .triangle = { .p1 = { -9, 1 }, .p2 = { 7, 0 }, .p3 = { -8, 0 } } }, { .type = CIRCLE, .circ = { .c = { 3, 5 }, .r = 14.292725780572079 } }, { .type = RECTANGLE, .rect = { .p = { -5, -8 }, .width = 26, .height = -33 } } };
                struct figure_t *ptr[3];

                for (int i = 0; i < 3; ++i)
                    ptr[i] = &figures[i];

                printf("------------TABLICA FIGUR DO POSORTOWANIA-----------\n");

                for (int i = 0; i < 3; ++i)
                {
                    printf("%d %.4f ", i, area_figure(figures  + i));
                    display_figure(figures  + i);
                }

                int res = sort_by_area(ptr, 3);
                test_error(res == 1, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 1, res);


            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 59: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct figure_t figures[] = { { .type = TRIANGLE, .triangle = { .p1 = { -9, 7 }, .p2 = { 5, 6 }, .p3 = { 7, -3 } } }, { .type = CIRCLE, .circ = { .c = { 0, 0 }, .r = 27.636820046392348 } }, { .type = RECTANGLE, .rect = { .p = { -7, -4 }, .width = -13, .height = 44 } } };
                struct figure_t *ptr[3];

                for (int i = 0; i < 3; ++i)
                    ptr[i] = &figures[i];

                printf("------------TABLICA FIGUR DO POSORTOWANIA-----------\n");

                for (int i = 0; i < 3; ++i)
                {
                    printf("%d %.4f ", i, area_figure(figures  + i));
                    display_figure(figures  + i);
                }

                int res = sort_by_area(ptr, 3);
                test_error(res == 1, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 1, res);


            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 60: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct figure_t figures[] = { { .type = RECTANGLE, .rect = { .p = { -6, 3 }, .width = 43, .height = 34 } }, { .type = CIRCLE, .circ = { .c = { 2, 1 }, .r = -26.35378477715294 } }, { .type = TRIANGLE, .triangle = { .p1 = { 5, 7 }, .p2 = { 9, -7 }, .p3 = { 9, -7 } } } };
                struct figure_t *ptr[3];

                for (int i = 0; i < 3; ++i)
                    ptr[i] = &figures[i];

                printf("------------TABLICA FIGUR DO POSORTOWANIA-----------\n");

                for (int i = 0; i < 3; ++i)
                {
                    printf("%d %.4f ", i, area_figure(figures  + i));
                    display_figure(figures  + i);
                }

                int res = sort_by_area(ptr, 3);
                test_error(res == 1, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 1, res);


            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 61: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct figure_t figures[] = { { .type = TRIANGLE, .triangle = { .p1 = { -9, 0 }, .p2 = { 3, -8 }, .p3 = { 3, -8 } } }, { .type = CIRCLE, .circ = { .c = { 5, 7 }, .r = 31.02502383630638 } }, { .type = RECTANGLE, .rect = { .p = { 2, -1 }, .width = 20, .height = 21 } } };
            struct figure_t *ptr[3];

            for (int i = 0; i < 3; ++i)
                ptr[i] = &figures[i];

            int res = sort_by_area(ptr, -3);
            test_error(res == 1, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 1, res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 62: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct figure_t figures[] = { { .type = TRIANGLE, .triangle = { .p1 = { -9, 0 }, .p2 = { 3, -8 }, .p3 = { 3, -8 } } }, { .type = CIRCLE, .circ = { .c = { 5, 7 }, .r = 31.02502383630638 } }, { .type = RECTANGLE, .rect = { .p = { 2, -1 }, .width = 20, .height = 21 } } };
            struct figure_t *ptr[3];

            for (int i = 0; i < 3; ++i)
                ptr[i] = &figures[i];

            int res = sort_by_area(ptr, 0);
            test_error(res == 1, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 1, res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 63: Sprawdzanie poprawności działania funkcji sort_by_area
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji sort_by_area", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int res = sort_by_area(NULL, 3);
            test_error(res == 1, "Funkcja sort_by_area powinna zwrócić %d, a zwróciła %d", 1, res);

        
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
            UTEST1, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST2, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST3, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST4, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST5, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST6, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST7, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST8, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST9, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST10, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST11, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST12, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST13, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST14, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST15, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST16, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST17, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST18, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST19, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST20, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST21, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST22, // Sprawdzanie poprawności działania funkcji area_triangle
            UTEST23, // Sprawdzanie poprawności działania funkcji area_rectangle
            UTEST24, // Sprawdzanie poprawności działania funkcji area_rectangle
            UTEST25, // Sprawdzanie poprawności działania funkcji area_rectangle
            UTEST26, // Sprawdzanie poprawności działania funkcji area_rectangle
            UTEST27, // Sprawdzanie poprawności działania funkcji area_rectangle
            UTEST28, // Sprawdzanie poprawności działania funkcji area_rectangle
            UTEST29, // Sprawdzanie poprawności działania funkcji area_rectangle
            UTEST30, // Sprawdzanie poprawności działania funkcji area_circle
            UTEST31, // Sprawdzanie poprawności działania funkcji area_circle
            UTEST32, // Sprawdzanie poprawności działania funkcji area_circle
            UTEST33, // Sprawdzanie poprawności działania funkcji area_circle
            UTEST34, // Sprawdzanie poprawności działania funkcji area_circle
            UTEST35, // Sprawdzanie poprawności działania funkcji area_circle
            UTEST36, // Sprawdzanie poprawności działania funkcji area_circle
            UTEST37, // Sprawdzanie poprawności działania funkcji area_circle
            UTEST38, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST39, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST40, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST41, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST42, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST43, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST44, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST45, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST46, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST47, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST48, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST49, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST50, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST51, // Sprawdzanie poprawności działania funkcji area_figure
            UTEST52, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST53, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST54, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST55, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST56, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST57, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST58, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST59, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST60, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST61, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST62, // Sprawdzanie poprawności działania funkcji sort_by_area
            UTEST63, // Sprawdzanie poprawności działania funkcji sort_by_area
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
            test_summary(63); // wszystkie testy muszą zakończyć się sukcesem
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