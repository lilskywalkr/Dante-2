/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Sortowania ciąg dalszy
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-01 19:43:03.076563
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


    
        struct array_t{
            int size;
            int array[71];
        };
    
        int comp_struct(const void *a, const void *b)
        {
            return ((struct array_t *)a)->size - ((struct array_t *)b)->size;
        }
    
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int a = 57;
                int b = 7;

                int res = comp_int(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int a = -9;
                int b = -16;

                int res = comp_int(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int a = 5;
                int b = -10;

                int res = comp_int(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int a = -95;
                int b = 77;

                int res = comp_int(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int a = -100;
                int b = -16;

                int res = comp_int(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int a = 7;
                int b = 59;

                int res = comp_int(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int a = -31;
                int b = -31;

                int res = comp_int(&a, &b);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int a = 2;
                int b = 2;

                int res = comp_int(&a, &b);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int a = 96;
                int b = 96;

                int res = comp_int(&a, &b);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int a = 9;

            comp_int(&a, NULL);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int a = 8;

            comp_int(NULL, &a);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji comp_int
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji comp_int", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            comp_int(NULL, NULL);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = 26.975455397290144;
                double b = 8.194895404032692;

                int res = comp_double(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = -2.711802090286672;
                double b = -13.531747685915573;

                int res = comp_double(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = 2.7795124382557126;
                double b = -1.904706835445543;

                int res = comp_double(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = -0.9327247269210849;
                double b = -0.9879086146084327;

                int res = comp_double(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = -27.098424595778482;
                double b = 33.75679411385405;

                int res = comp_double(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = -97.39061606637898;
                double b = -13.838225783599444;

                int res = comp_double(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = 4.098071785224397;
                double b = 95.22524155131953;

                int res = comp_double(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = 1.0959084929604765;
                double b = 1.2225437770672796;

                int res = comp_double(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = -24.146246924690857;
                double b = -24.146246924690857;

                int res = comp_double(&a, &b);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = 14.505374086433976;
                double b = 14.505374086433976;

                int res = comp_double(&a, &b);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                double a = 70.0616205063403;
                double b = 70.0616205063403;

                int res = comp_double(&a, &b);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_double() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            double a = 8.872473419279682;

            comp_double(&a, NULL);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            double a = 9.110947223307253;

            comp_double(NULL, &a);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji comp_double
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji comp_double", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            comp_double(NULL, NULL);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 34.55823210486383, -82.83497538376382 };
                struct point_t b = { 1.553306360708488, -67.67726265046947 };

                int res = comp_point(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { -6.121569456944303, -59.56332481598847 };
                struct point_t b = { -17.503712608371643, -43.82608966346045 };

                int res = comp_point(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 4.030579361502545, -99.41024707997605 };
                struct point_t b = { -1.5318840953983859, -63.80906081117951 };

                int res = comp_point(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { -50.83416430429275, -18.76596199484598 };
                struct point_t b = { 89.35412014243614, -81.4787440734844 };

                int res = comp_point(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { -67.11907215482682, -85.58330658787823 };
                struct point_t b = { -14.644050232674468, -69.43095507116425 };

                int res = comp_point(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 1.4789049779472663, -16.15424038569975 };
                struct point_t b = { 77.64801177623987, -99.65493183042769 };

                int res = comp_point(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 0, 55.54729447865971 };
                struct point_t b = { 0, -73.55380877418233 };

                int res = comp_point(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { -53.80168749612123, 69.92494828295708 };
                struct point_t b = { -53.80168749612123, -91.45541069788518 };

                int res = comp_point(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 80.50486434944534, 12.201023190219555 };
                struct point_t b = { 80.50486434944534, -17.136787718248428 };

                int res = comp_point(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 80.50486434944534, -0.9219143241294718 };
                struct point_t b = { 80.50486434944534, -0.9778919625201098 };

                int res = comp_point(&a, &b);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 0, -51.38194177496236 };
                struct point_t b = { 0, 25.922100638940552 };

                int res = comp_point(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { -66.12529192580462, -73.14923809978553 };
                struct point_t b = { -66.12529192580462, 48.6222189224695 };

                int res = comp_point(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 18.783942099562204, -33.839083596053584 };
                struct point_t b = { 18.783942099562204, 14.987788682417968 };

                int res = comp_point(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 18.783942099562204, 1.0724658283951953 };
                struct point_t b = { 18.783942099562204, 1.258563298919464 };

                int res = comp_point(&a, &b);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { -80.06690673347998, -37.374479850623594 };
                struct point_t b = { -80.06690673347998, -37.374479850623594 };

                int res = comp_point(&a, &b);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { 38.656675379569414, -29.943540033197365 };
                struct point_t b = { 38.656675379569414, -29.943540033197365 };

                int res = comp_point(&a, &b);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct point_t a = { -92.96829783873285, 73.44677772781709 };
                struct point_t b = { -92.96829783873285, 73.44677772781709 };

                int res = comp_point(&a, &b);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_point() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct point_t a = { 7.928059781332765, 5.191183504182194 };

            comp_point(&a, NULL);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct point_t a = { 8.530768826044385, 7.5233094720402445 };

            comp_point(NULL, &a);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania funkcji comp_point
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji comp_point", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            comp_point(NULL, NULL);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie poprawności działania funkcji sort(comp_int)
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji sort(comp_int)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int tab[] = {33, -49, 89, -20, -91, -45};
            int tab_sorted[] = {-91, -49, -45, -20, 33, 89};

            int res = sort(tab, 6, sizeof(int), comp_int);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 6; ++i)
                printf("%d ", tab_sorted[i]);        

            printf("\n");

            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 6; ++i)
                printf("%d ", tab[i]);        

            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 6; ++i)
                test_error(tab[i] == tab_sorted[i], "Wartość pod indeksem %d jest niewłaściwa, powinno być %d, a jest %d", i, tab_sorted[i], tab[i]);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie poprawności działania funkcji sort
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji sort", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int tab[] = {33, -49, 89, -20, -91, -45};

            int res = sort(tab, 6, sizeof(int), NULL);

            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort() jest niewłaściwa, powinno być 1", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania funkcji sort
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji sort", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int res = sort(NULL, 6, sizeof(int), comp_int);

            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort() jest niewłaściwa, powinno być 1", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania funkcji sort
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji sort", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int res = sort(NULL, 6, sizeof(int), NULL);

            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort() jest niewłaściwa, powinno być 1", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania funkcji sort(comp_double)
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji sort(comp_double)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            double tab[] = {-73.946243, -65.585682, -16.659545, 62.606157, -20.617773, -74.480119, -61.040739, -39.548593, 43.921414, -32.206761, -60.687060, -14.831091, 55.549157, -33.526742};
            double tab_sorted[] = {-74.480119, -73.946243, -65.585682, -61.040739, -60.687060, -39.548593, -33.526742, -32.206761, -20.617773, -16.659545, -14.831091, 43.921414, 55.549157, 62.606157};

            int res = sort(tab, 14, sizeof(double), comp_double);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 14; ++i)
                printf("%lf ", tab_sorted[i]);        

            printf("\n");

            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 14; ++i)
                printf("%lf ", tab[i]);        

            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 14; ++i)
                test_error(tab[i] == tab_sorted[i], "Wartość pod indeksem %d jest niewłaściwa, powinno być %lf, a jest %lf", i, tab_sorted[i], tab[i]);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania funkcji sort(comp_double)
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji sort(comp_double)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            double tab[] = {0.145475, 0.399035, 0.335424, -0.852547, -0.391666, 0.479293, 0.765483, -0.370863, 0.760991, -0.688888, -0.993846, 0.081545, -0.716657, 0.565274};
            double tab_sorted[] = {-0.993846, -0.852547, -0.716657, -0.688888, -0.391666, -0.370863, 0.081545, 0.145475, 0.335424, 0.399035, 0.479293, 0.565274, 0.760991, 0.765483};

            int res = sort(tab, 14, sizeof(double), comp_double);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 14; ++i)
                printf("%lf ", tab_sorted[i]);        

            printf("\n");

            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 14; ++i)
                printf("%lf ", tab[i]);        

            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 14; ++i)
                test_error(tab[i] == tab_sorted[i], "Wartość pod indeksem %d jest niewłaściwa, powinno być %lf, a jest %lf", i, tab_sorted[i], tab[i]);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzanie poprawności działania funkcji sort(comp_point)
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji sort(comp_point)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t tab[] = {{ -78.24288849020695, 35.10106056507175 }, { -48.91441754729951, -73.68106685581586 }, { -78.24288849020695, 74.88597334557991 }, { 94.44667422836733, 42.621845482686695 }, { 8.588623616046021, -78.88203931772978 }, { 63.73442076410046, -85.64635147338346 }, { 77.64680818769932, 96.81930040349135 }, { -78.24288849020695, 94.74096306628357 }, { -78.24288849020695, 87.88541834785627 }, { 74.33232260833412, -33.048141642450986 }, { -78.24288849020695, 23.234560798202324 }, { -78.24288849020695, 22.3032831840339 }, { 4.43615157100254, -31.070354435933396 }, { -78.24288849020695, 54.225485575221256 }, { -74.75609867105095, -54.61251722086242 }, { -58.98971194846825, -76.81619355617617 }, { -28.304030773463523, -88.58435879987204 }, { 53.631118590490075, 38.25846875486505 }, { -78.24288849020695, 61.33777311443424 }, { -99.7858202609565, 79.07192394844608 }, { -78.24288849020695, 34.727646062934866 }, { -78.24288849020695, 12.755887330951538 }, { 51.04701655483629, 86.39603037069395 }, { -78.24288849020695, -99.89836842278773 }, { -78.24288849020695, 97.65279895566587 }, { 43.518948306766106, -51.73459138157954 }, { -78.24288849020695, 6.033883534193009 }, { -78.24288849020695, -98.21057438243115 }, { 13.55394600629289, 11.499719125237377 }, { -72.97248441861733, 53.55279356698057 }, { 15.436343056119057, -6.815062344675312 }, { -78.24288849020695, 23.29854041888933 }, { -50.728081164506044, 95.8766735871371 }, { -78.24288849020695, 37.90463499467285 }, { -62.6522083869123, 77.47285952568777 }, { -19.419709672075598, -22.59469129769039 }, { -78.24288849020695, 93.8978902680085 }};
            struct point_t tab_sorted[] = {{ -99.7858202609565, 79.07192394844608 }, { -78.24288849020695, -99.89836842278773 }, { -78.24288849020695, -98.21057438243115 }, { -78.24288849020695, 6.033883534193009 }, { -78.24288849020695, 12.755887330951538 }, { -78.24288849020695, 22.3032831840339 }, { -78.24288849020695, 23.234560798202324 }, { -78.24288849020695, 23.29854041888933 }, { -78.24288849020695, 34.727646062934866 }, { -78.24288849020695, 35.10106056507175 }, { -78.24288849020695, 37.90463499467285 }, { -78.24288849020695, 54.225485575221256 }, { -78.24288849020695, 61.33777311443424 }, { -78.24288849020695, 74.88597334557991 }, { -78.24288849020695, 87.88541834785627 }, { -78.24288849020695, 93.8978902680085 }, { -78.24288849020695, 94.74096306628357 }, { -78.24288849020695, 97.65279895566587 }, { -74.75609867105095, -54.61251722086242 }, { -72.97248441861733, 53.55279356698057 }, { -62.6522083869123, 77.47285952568777 }, { -58.98971194846825, -76.81619355617617 }, { -50.728081164506044, 95.8766735871371 }, { -48.91441754729951, -73.68106685581586 }, { -28.304030773463523, -88.58435879987204 }, { -19.419709672075598, -22.59469129769039 }, { 4.43615157100254, -31.070354435933396 }, { 8.588623616046021, -78.88203931772978 }, { 13.55394600629289, 11.499719125237377 }, { 15.436343056119057, -6.815062344675312 }, { 43.518948306766106, -51.73459138157954 }, { 51.04701655483629, 86.39603037069395 }, { 53.631118590490075, 38.25846875486505 }, { 63.73442076410046, -85.64635147338346 }, { 74.33232260833412, -33.048141642450986 }, { 77.64680818769932, 96.81930040349135 }, { 94.44667422836733, 42.621845482686695 }};

            int res = sort(tab, 37, sizeof(struct point_t), comp_point);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 37; ++i)
                printf("(%lf, %lf)\n", tab_sorted[i].x, tab_sorted[i].y);        

            printf("\n");

            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 37; ++i)
                printf("(%lf, %lf)\n", tab[i].x, tab[i].y);        

            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 37; ++i)
                test_error(tab[i].x == tab_sorted[i].x && tab[i].y == tab_sorted[i].y, "Wartość pod indeksem %d jest niewłaściwa, powinno być (%lf, %lf), a jest (%lf, %lf)", i, tab_sorted[i].x, tab_sorted[i].y, tab[i].x, tab[i].y);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzanie poprawności działania funkcji sort dla struktury przygotowanej przez testy
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji sort dla struktury przygotowanej przez testy", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct array_t tab[] = {{ 70, {-29, 8, -1, -28, 72, 97, -85, -78, 79, 51, 67, 18, 62, 66, 32, -32, -10, -40, 91, -34, -62, -41, 99, -94, -28, -22, -8, -84, -18, 57, -36, -32, -78, 73, -38, 71, 26, -11, -60, 10, 94, 64, -50, 43, -100, 92, 100, 16, -41, 59, 22, 23, 27, -87, -97, -15, -23, -86, 64, 87, 21, -51, 12, -62, 41, -32, 100, 67, -57, -85}}, { 56, {-96, 76, -50, 88, -28, -6, 55, 92, -32, 86, 33, -21, 27, 47, 62, -41, -62, -8, -3, 24, -66, -6, -15, 73, -38, -15, -60, 27, 53, 42, -26, 52, 56, 67, -20, -2, -62, -15, 54, 10, 27, -64, 85, -56, -55, -41, -100, 37, 36, -46, -13, -7, 76, 90, -30, 69}}, { 28, {26, -36, -26, 32, -81, -65, -96, 38, 44, 46, -69, -100, -68, 2, -6, 90, -59, 0, 25, 3, 0, 76, -85, -46, -50, 74, 50, -26}}, { 62, {-11, -5, -53, -94, 18, 2, 45, -87, -34, -83, 38, 58, -69, -24, 97, 100, -95, -60, -41, 39, 43, -63, 44, 46, 53, -72, 91, -86, 20, -43, 10, -86, -8, 76, 53, -65, -15, 40, -98, 41, -67, -71, -6, -54, -8, 35, -68, 29, 25, -56, -69, -94, 20, 49, -54, -78, -14, 97, -98, -60, 63, -3}}, { 11, {-96, -6, -21, 53, 90, -85, 96, -68, -1, -89, -45}}, { 45, {93, -24, 9, 65, -20, -27, -36, 33, 9, -47, -57, 74, -77, 1, 93, 3, 83, -3, -15, -94, 53, 61, 16, 40, 93, 95, 49, 71, 98, 94, -65, -76, 58, 96, -17, -15, 90, 20, 38, 52, 2, 68, -47, -38, 15}}, { 23, {-99, -89, -5, 42, 76, -19, -70, 44, 0, -70, -53, 48, 89, 90, -100, 59, 37, -28, 36, -76, 34, -21, -36}}, { 64, {70, 12, 51, 71, -25, 38, 47, 85, 14, -27, -19, -92, -16, 43, -73, 21, -39, -87, -11, -30, 44, -42, -79, 14, 32, 7, 26, 49, -17, -67, 71, 88, 85, 9, 76, -93, 32, -74, 38, 26, -52, -77, -48, 30, -38, -10, 91, 8, -70, -14, -45, -69, 22, -34, 75, 69, 37, 98, 60, 75, -92, 86, -88, 85}}, { 34, {34, 26, 42, 2, 68, 72, 43, 11, -40, 98, -96, 100, -43, -45, 49, -4, -4, 70, -4, -66, -5, 63, 11, -83, -4, -44, -36, 89, -64, 52, 35, 37, 87, -63}}, { 41, {49, 73, 26, -90, -68, 1, -96, -71, 96, -58, -45, -83, -15, -21, -84, 62, 34, 84, -48, 1, -77, -50, -13, 4, -45, 62, 22, 64, -80, 73, -25, -45, -79, 45, 77, -64, 71, 98, -19, 38, -5}}};
            struct array_t tab_sorted[] = {{ 11, {-96, -6, -21, 53, 90, -85, 96, -68, -1, -89, -45}}, { 23, {-99, -89, -5, 42, 76, -19, -70, 44, 0, -70, -53, 48, 89, 90, -100, 59, 37, -28, 36, -76, 34, -21, -36}}, { 28, {26, -36, -26, 32, -81, -65, -96, 38, 44, 46, -69, -100, -68, 2, -6, 90, -59, 0, 25, 3, 0, 76, -85, -46, -50, 74, 50, -26}}, { 34, {34, 26, 42, 2, 68, 72, 43, 11, -40, 98, -96, 100, -43, -45, 49, -4, -4, 70, -4, -66, -5, 63, 11, -83, -4, -44, -36, 89, -64, 52, 35, 37, 87, -63}}, { 41, {49, 73, 26, -90, -68, 1, -96, -71, 96, -58, -45, -83, -15, -21, -84, 62, 34, 84, -48, 1, -77, -50, -13, 4, -45, 62, 22, 64, -80, 73, -25, -45, -79, 45, 77, -64, 71, 98, -19, 38, -5}}, { 45, {93, -24, 9, 65, -20, -27, -36, 33, 9, -47, -57, 74, -77, 1, 93, 3, 83, -3, -15, -94, 53, 61, 16, 40, 93, 95, 49, 71, 98, 94, -65, -76, 58, 96, -17, -15, 90, 20, 38, 52, 2, 68, -47, -38, 15}}, { 56, {-96, 76, -50, 88, -28, -6, 55, 92, -32, 86, 33, -21, 27, 47, 62, -41, -62, -8, -3, 24, -66, -6, -15, 73, -38, -15, -60, 27, 53, 42, -26, 52, 56, 67, -20, -2, -62, -15, 54, 10, 27, -64, 85, -56, -55, -41, -100, 37, 36, -46, -13, -7, 76, 90, -30, 69}}, { 62, {-11, -5, -53, -94, 18, 2, 45, -87, -34, -83, 38, 58, -69, -24, 97, 100, -95, -60, -41, 39, 43, -63, 44, 46, 53, -72, 91, -86, 20, -43, 10, -86, -8, 76, 53, -65, -15, 40, -98, 41, -67, -71, -6, -54, -8, 35, -68, 29, 25, -56, -69, -94, 20, 49, -54, -78, -14, 97, -98, -60, 63, -3}}, { 64, {70, 12, 51, 71, -25, 38, 47, 85, 14, -27, -19, -92, -16, 43, -73, 21, -39, -87, -11, -30, 44, -42, -79, 14, 32, 7, 26, 49, -17, -67, 71, 88, 85, 9, 76, -93, 32, -74, 38, 26, -52, -77, -48, 30, -38, -10, 91, 8, -70, -14, -45, -69, 22, -34, 75, 69, 37, 98, 60, 75, -92, 86, -88, 85}}, { 70, {-29, 8, -1, -28, 72, 97, -85, -78, 79, 51, 67, 18, 62, 66, 32, -32, -10, -40, 91, -34, -62, -41, 99, -94, -28, -22, -8, -84, -18, 57, -36, -32, -78, 73, -38, 71, 26, -11, -60, 10, 94, 64, -50, 43, -100, 92, 100, 16, -41, 59, 22, 23, 27, -87, -97, -15, -23, -86, 64, 87, 21, -51, 12, -62, 41, -32, 100, 67, -57, -85}}};

            int res = sort(tab, 10, sizeof(struct array_t), comp_struct);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 10; ++i)
            {
                printf("%d - [", tab_sorted[i].size);        
                for (int j = 0; j < tab_sorted[i].size; ++j)
                    printf("%d ", tab_sorted[i].array[j]);
                printf("]\n");
            }
           
            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 10; ++i)
            {
                printf("%d - [", tab[i].size);        
                for (int j = 0; j < tab[i].size; ++j)
                    printf("%d ", tab[i].array[j]);
                printf("]\n");
            }

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 10; ++i)
            {
                test_error(tab[i].size == tab_sorted[i].size, "Wartość pod indeksem %d jest niewłaściwa, powinno być %d, a jest %d", i, tab_sorted[i].size, tab[i].size);
               
                onerror_terminate();
               
                for (int j = 0; j < tab[i].size; ++j)
                    test_error(tab[i].array[j] == tab_sorted[i].array[j], "Wartość pod indeksem %d jest niewłaściwa, powinno być %d, a jest %d", i, tab_sorted[i].array[j], tab[i].array[j]);
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
//  Test 1: Reakcja na brak pamięci - limit ustawiony na 22 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit ustawiony na 22 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(22);
    
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
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 46 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 46 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(46);
    
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
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 84 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 84 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(84);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST2, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST3, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST4, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST5, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST6, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST7, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST8, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST9, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST10, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST11, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST12, // Sprawdzanie poprawności działania funkcji comp_int
            UTEST13, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST14, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST15, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST16, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST17, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST18, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST19, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST20, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST21, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST22, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST23, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST24, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST25, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST26, // Sprawdzanie poprawności działania funkcji comp_double
            UTEST27, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST28, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST29, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST30, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST31, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST32, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST33, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST34, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST35, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST36, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST37, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST38, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST39, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST40, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST41, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST42, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST43, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST44, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST45, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST46, // Sprawdzanie poprawności działania funkcji comp_point
            UTEST47, // Sprawdzanie poprawności działania funkcji sort(comp_int)
            UTEST48, // Sprawdzanie poprawności działania funkcji sort
            UTEST49, // Sprawdzanie poprawności działania funkcji sort
            UTEST50, // Sprawdzanie poprawności działania funkcji sort
            UTEST51, // Sprawdzanie poprawności działania funkcji sort(comp_double)
            UTEST52, // Sprawdzanie poprawności działania funkcji sort(comp_double)
            UTEST53, // Sprawdzanie poprawności działania funkcji sort(comp_point)
            UTEST54, // Sprawdzanie poprawności działania funkcji sort dla struktury przygotowanej przez testy
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
            test_summary(54); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci - limit ustawiony na 22 bajtów
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 46 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 84 bajtów
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