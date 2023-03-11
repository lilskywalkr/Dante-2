/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Sortowanie liczb 1D
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-04-30 15:41:44.376858
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
    
        
                int res = comp_int(80, 3);
        
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
    
        
                int res = comp_int(-10, -13);
        
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
    
        
                int res = comp_int(1, -9);
        
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
    
        
                int res = comp_int(-36, 84);
        
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
    
        
                int res = comp_int(-96, -12);
        
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
    
        
                int res = comp_int(5, 66);
        
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
    
        
                int res = comp_int(-19, -19);
        
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
    
        
                int res = comp_int(75, 75);
        
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
    
        
                int res = comp_int(59, 59);
        
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
//  Test 10: Sprawdzanie poprawności działania funkcji comp_int_abs
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji comp_int_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_abs(47, 8);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_abs() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji comp_int_abs
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji comp_int_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_abs(-10, -16);
                printf("%d ", res);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int_abs() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji comp_int_abs
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji comp_int_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_abs(7, -54);
                printf("%d ", res);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int_abs() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji comp_int_abs
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji comp_int_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_abs(-46, 3);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_abs() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji comp_int_abs
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji comp_int_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_abs(-41, -12);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_abs() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji comp_int_abs
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji comp_int_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_abs(4, 86);
                printf("%d ", res);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int_abs() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji comp_int_abs
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji comp_int_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_abs(-29, 29);
                printf("%d ", res);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int_abs() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji comp_int_abs
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji comp_int_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_abs(-85, 85);
                printf("%d ", res);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int_abs() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji comp_int_abs
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji comp_int_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_abs(0, 0);
                printf("%d ", res);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int_abs() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji comp_int_length
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji comp_int_length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_length(2843, -611);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_length() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji comp_int_length
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji comp_int_length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_length(-3195, -908);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_length() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji comp_int_length
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji comp_int_length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_length(-8492, -886);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_length() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji comp_int_length
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji comp_int_length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_length(-823, 5100);
                printf("%d ", res);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int_length() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji comp_int_length
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji comp_int_length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_length(-4528, -97827);
                printf("%d ", res);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int_length() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji comp_int_length
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji comp_int_length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_length(4619, 697544);
                printf("%d ", res);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int_length() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji comp_int_length
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji comp_int_length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_length(-11045, 17555);
                printf("%d ", res);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int_length() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji comp_int_length
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji comp_int_length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_length(331806, -925670);
                printf("%d ", res);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int_length() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji comp_int_length
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji comp_int_length", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_length(25294, 97947);
                printf("%d ", res);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int_length() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(7134, -844);
                printf("%d ", res);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(-7361, -705);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(-5250, -622);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(-374, 5599);
                printf("%d ", res);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(-6704, -19753);
                printf("%d ", res);

                test_error(res < 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba ujemna", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(6986, 106408);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(-18193, 95311);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(870395, -731981);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(79945, 86612);
                printf("%d ", res);

                test_error(res > 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba dodatnia", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(1001, 11);
                printf("%d ", res);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji comp_int_digits_sum
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji comp_int_digits_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_int_digits_sum(1001, -101);
                printf("%d ", res);

                test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_int_digits_sum() jest niewłaściwa, powinna być liczba równa 0", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji sort_int(comp_int)
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji sort_int(comp_int)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int tab[] = {-73, -59, -43, -6, 44, -21, -93, 97, -68, 63};
            int tab_sorted[] = {-93, -73, -68, -59, -43, -21, -6, 44, 63, 97};

            int res = sort_int(tab, 10, comp_int);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 10; ++i)
                printf("%d ", tab_sorted[i]);        

            printf("\n");
                
            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 10; ++i)
                printf("%d ", tab[i]);        

            printf("\n");
                
            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort_int() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 10; ++i)
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
//  Test 40: Sprawdzanie poprawności działania funkcji sort_int(comp_int_abs)
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji sort_int(comp_int_abs)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int tab[] = {-73, -59, -43, -6, 44, -21, -93, 97, -68, 63};
            int tab_sorted[] = {-6, -21, -43, 44, -59, 63, -68, -73, -93, 97};

            int res = sort_int(tab, 10, comp_int_abs);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 10; ++i)
                printf("%d ", tab_sorted[i]);        
            
            printf("\n");
                
            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 10; ++i)
                printf("%d ", tab[i]);        

            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort_int() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 10; ++i)
                test_error(tab[i] == tab_sorted[i] || tab[i] == -tab_sorted[i], "Wartość pod indeksem %d jest niewłaściwa, powinno być %d, a jest %d", i, tab_sorted[i], tab[i]);
        
            for (int i = 0; i < 10; ++i)
                for (int j = 0; j < 10; ++j)
                    if (tab[i] == tab_sorted[j])
                    {
                            tab_sorted[j] = 0;
                            break;
                    }

            int sum = 0;
                    
            for (int i = 0; i < 10; ++i)
                sum += tab_sorted[i];
                
            test_error(sum == 0, "Wartości w tablicy po sortowaniu funkcją sort_int() są różne od tych podanych na wejściu");
                        
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji sort_int(comp_int_length)
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji sort_int(comp_int_length)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int tab[] = {-9349732, -1, -892566, -8204389, -89698, 9960411, 5, 4369418, 25, -6, -1, 577, -6, 8708, -10};
            int tab_sorted[] = {-1, 5, -6, -1, -6, 25, -10, 577, 8708, -89698, -892566, -9349732, -8204389, 9960411, 4369418};

            int res = sort_int(tab, 15, comp_int_length);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 15; ++i)
                printf("%d ", tab_sorted[i]);        

            printf("\n");

            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 15; ++i)
                printf("%d ", tab[i]);        

            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort_int() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 15; ++i)
                test_error(comp_int_length(tab[i], tab_sorted[i]) >= 0, "Wartość pod indeksem %d jest niewłaściwa", i);

            for (int i = 0; i < 15; ++i)
                for (int j = 0; j < 15; ++j)
                    if (tab[i] == tab_sorted[j])
                    {
                            tab_sorted[j] = 0;
                            break;
                    }

            int sum = 0;

            for (int i = 0; i < 15; ++i)
                sum += tab_sorted[i];

            test_error(sum == 0, "Wartości w tablicy po sortowaniu funkcją sort_int() są różne od tych podanych na wejściu");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji sort_int(comp_int_digits_sum)
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji sort_int(comp_int_digits_sum)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int tab[] = {-3, 81, 8823, -40, 5, 3604751, 64, 1, 724, 1, 9, 2749, 1, 25, -3533371};
            int tab_sorted[] = {1, 1, 1, -3, -40, 5, 25, 81, 9, 64, 724, 8823, 2749, -3533371, 3604751};

            int res = sort_int(tab, 15, comp_int_digits_sum);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 15; ++i)
                printf("%d ", tab_sorted[i]);        

            printf("\n");

            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 15; ++i)
                printf("%d ", tab[i]);        

            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort_int() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 15; ++i)
                test_error(comp_int_length(tab[i], tab_sorted[i]) >= 0, "Wartość pod indeksem %d jest niewłaściwa", i);

            for (int i = 0; i < 15; ++i)
                for (int j = 0; j < 15; ++j)
                    if (tab[i] == tab_sorted[j])
                    {
                            tab_sorted[j] = 0;
                            break;
                    }

            int sum = 0;

            for (int i = 0; i < 15; ++i)
                sum += tab_sorted[i];

            test_error(sum == 0, "Wartości w tablicy po sortowaniu funkcją sort_int() są różne od tych podanych na wejściu");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji sort_int(comp_int_digits_sum)
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji sort_int(comp_int_digits_sum)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int tab[] = {1, 1, 1, -3, -40, 5, 25, 81, 9, 64, 724, 8823, 2749, -3533371, 3604751};
            int tab_sorted[] = {1, 1, 1, -3, -40, 5, 25, 81, 9, 64, 724, 8823, 2749, -3533371, 3604751};
            
            int res = sort_int(tab, 15, NULL);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_int(tab, 15, NULL) jest niewłaściwa, powinno być 1 a jest %d", res);

            res = sort_int(tab, -15, comp_int);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_int(tab, -15, comp_int) jest niewłaściwa, powinno być 1 a jest %d", res);

            res = sort_int(tab, 0, comp_int);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_int(sort_int(tab, 0, comp_int)) jest niewłaściwa, powinno być 1 a jest %d", res);

            res = sort_int(NULL, 15, comp_int);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_int(sort_int(NULL, 15, comp_int)) jest niewłaściwa, powinno być 1 a jest %d", res);

            res = sort_int(NULL, -15, comp_int);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_int(sort_int(NULL, -15, comp_int)) jest niewłaściwa, powinno być 1 a jest %d", res);

            res = sort_int(tab, -15, NULL);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_int(sort_int(tab, -15, NULL)) jest niewłaściwa, powinno być 1 a jest %d", res);

            res = sort_int(NULL, 15, NULL);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_int(sort_int(NULL, 15, NULL)) jest niewłaściwa, powinno być 1 a jest %d", res);

            res = sort_int(tab, 1, comp_int);
            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort_int(sort_int(tab, 1, comp_int)) jest niewłaściwa, powinno być 0 a jest %d", res);

            res = sort_int(tab, 1, comp_int);
            test_error(tab[0] == tab_sorted[0], "Wartość ustawiona na pozycji %d przez funkcję sort_int(sort_int(tab, 1, comp_int)) jest niewłaściwa, powinno być %d, a jest %d", 0, tab_sorted[0], tab[0]);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci - limit ustawiony na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit ustawiony na 0 bajtów", __LINE__);

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
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 40 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 40 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(40);
    
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
            UTEST10, // Sprawdzanie poprawności działania funkcji comp_int_abs
            UTEST11, // Sprawdzanie poprawności działania funkcji comp_int_abs
            UTEST12, // Sprawdzanie poprawności działania funkcji comp_int_abs
            UTEST13, // Sprawdzanie poprawności działania funkcji comp_int_abs
            UTEST14, // Sprawdzanie poprawności działania funkcji comp_int_abs
            UTEST15, // Sprawdzanie poprawności działania funkcji comp_int_abs
            UTEST16, // Sprawdzanie poprawności działania funkcji comp_int_abs
            UTEST17, // Sprawdzanie poprawności działania funkcji comp_int_abs
            UTEST18, // Sprawdzanie poprawności działania funkcji comp_int_abs
            UTEST19, // Sprawdzanie poprawności działania funkcji comp_int_length
            UTEST20, // Sprawdzanie poprawności działania funkcji comp_int_length
            UTEST21, // Sprawdzanie poprawności działania funkcji comp_int_length
            UTEST22, // Sprawdzanie poprawności działania funkcji comp_int_length
            UTEST23, // Sprawdzanie poprawności działania funkcji comp_int_length
            UTEST24, // Sprawdzanie poprawności działania funkcji comp_int_length
            UTEST25, // Sprawdzanie poprawności działania funkcji comp_int_length
            UTEST26, // Sprawdzanie poprawności działania funkcji comp_int_length
            UTEST27, // Sprawdzanie poprawności działania funkcji comp_int_length
            UTEST28, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST29, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST30, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST31, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST32, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST33, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST34, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST35, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST36, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST37, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST38, // Sprawdzanie poprawności działania funkcji comp_int_digits_sum
            UTEST39, // Sprawdzanie poprawności działania funkcji sort_int(comp_int)
            UTEST40, // Sprawdzanie poprawności działania funkcji sort_int(comp_int_abs)
            UTEST41, // Sprawdzanie poprawności działania funkcji sort_int(comp_int_length)
            UTEST42, // Sprawdzanie poprawności działania funkcji sort_int(comp_int_digits_sum)
            UTEST43, // Sprawdzanie poprawności działania funkcji sort_int(comp_int_digits_sum)
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
            test_summary(43); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci - limit ustawiony na 0 bajtów
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 40 bajtów
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
            test_summary(2); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}