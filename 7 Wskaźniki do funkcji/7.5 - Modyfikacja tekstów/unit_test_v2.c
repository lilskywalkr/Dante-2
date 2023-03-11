/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Modyfikacja tekstów
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-04-30 11:43:55.124966
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
//  Test 1: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper('a');

                    test_error(res == 'A', "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być A", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper('z');

                    test_error(res == 'Z', "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być Z", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper('v');

                    test_error(res == 'V', "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być V", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper('E');

                    test_error(res == 'E', "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być E", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper('-');

                    test_error(res == '-', "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być -", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(1);

                    test_error(res == 1, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(2);

                    test_error(res == 2, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 2", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(3);

                    test_error(res == 3, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 3", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(4);

                    test_error(res == 4, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 4", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(5);

                    test_error(res == 5, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 5", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(6);

                    test_error(res == 6, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 6", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(7);

                    test_error(res == 7, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 7", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(8);

                    test_error(res == 8, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 8", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(9);

                    test_error(res == 9, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 9", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(10);

                    test_error(res == 10, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 10", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(11);

                    test_error(res == 11, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 11", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(12);

                    test_error(res == 12, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 12", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(13);

                    test_error(res == 13, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 13", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(14);

                    test_error(res == 14, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 14", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(15);

                    test_error(res == 15, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 15", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(16);

                    test_error(res == 16, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 16", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(17);

                    test_error(res == 17, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 17", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(18);

                    test_error(res == 18, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 18", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(19);

                    test_error(res == 19, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 19", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(20);

                    test_error(res == 20, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 20", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(21);

                    test_error(res == 21, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 21", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(22);

                    test_error(res == 22, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 22", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(23);

                    test_error(res == 23, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 23", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(24);

                    test_error(res == 24, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 24", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(25);

                    test_error(res == 25, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 25", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(26);

                    test_error(res == 26, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 26", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(27);

                    test_error(res == 27, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 27", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(28);

                    test_error(res == 28, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 28", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(29);

                    test_error(res == 29, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 29", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(30);

                    test_error(res == 30, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 30", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(31);

                    test_error(res == 31, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 31", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(32);

                    test_error(res == 32, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 32", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(33);

                    test_error(res == 33, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 33", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(34);

                    test_error(res == 34, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 34", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(35);

                    test_error(res == 35, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 35", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(36);

                    test_error(res == 36, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 36", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(37);

                    test_error(res == 37, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 37", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(38);

                    test_error(res == 38, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 38", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(39);

                    test_error(res == 39, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 39", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(40);

                    test_error(res == 40, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 40", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(41);

                    test_error(res == 41, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 41", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(42);

                    test_error(res == 42, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 42", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(43);

                    test_error(res == 43, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 43", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(44);

                    test_error(res == 44, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 44", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(45);

                    test_error(res == 45, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 45", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(46);

                    test_error(res == 46, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 46", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(47);

                    test_error(res == 47, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 47", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(48);

                    test_error(res == 48, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 48", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(49);

                    test_error(res == 49, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 49", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 55: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(50);

                    test_error(res == 50, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 50", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 56: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(51);

                    test_error(res == 51, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 51", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 57: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(52);

                    test_error(res == 52, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 52", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 58: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(53);

                    test_error(res == 53, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 53", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 59: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(54);

                    test_error(res == 54, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 54", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 60: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(55);

                    test_error(res == 55, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 55", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 61: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(56);

                    test_error(res == 56, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 56", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 62: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(57);

                    test_error(res == 57, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 57", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 63: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(58);

                    test_error(res == 58, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 58", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 64: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(59);

                    test_error(res == 59, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 59", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 65: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(60);

                    test_error(res == 60, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 60", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 66: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(61);

                    test_error(res == 61, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 61", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 67: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(62);

                    test_error(res == 62, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 62", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 68: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(63);

                    test_error(res == 63, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 63", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 69: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(64);

                    test_error(res == 64, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 64", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 70: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(91);

                    test_error(res == 91, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 91", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 71: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(92);

                    test_error(res == 92, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 92", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 72: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(93);

                    test_error(res == 93, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 93", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 73: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(94);

                    test_error(res == 94, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 94", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 74: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(95);

                    test_error(res == 95, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 95", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 75: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(96);

                    test_error(res == 96, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 96", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 76: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(123);

                    test_error(res == 123, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 123", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 77: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(124);

                    test_error(res == 124, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 124", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 78: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(125);

                    test_error(res == 125, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 125", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 79: Sprawdzanie poprawności działania funkcji lower_to_upper
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji lower_to_upper", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = lower_to_upper(126);

                    test_error(res == 126, "Wartość %c zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być 126", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 80: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower('A');

                    test_error(res == 'a', "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być a", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 81: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower('Z');

                    test_error(res == 'z', "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być z", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 82: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower('Y');

                    test_error(res == 'y', "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być y", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 83: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower('x');

                    test_error(res == 'x', "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być x", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 84: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower('9');

                    test_error(res == '9', "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 9", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 85: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(1);

                    test_error(res == 1, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 86: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(2);

                    test_error(res == 2, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 2", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 87: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(3);

                    test_error(res == 3, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 3", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 88: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(4);

                    test_error(res == 4, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 4", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 89: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(5);

                    test_error(res == 5, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 5", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 90: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(6);

                    test_error(res == 6, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 6", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 91: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(7);

                    test_error(res == 7, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 7", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 92: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(8);

                    test_error(res == 8, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 8", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 93: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(9);

                    test_error(res == 9, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 9", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 94: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(10);

                    test_error(res == 10, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 10", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 95: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(11);

                    test_error(res == 11, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 11", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 96: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(12);

                    test_error(res == 12, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 12", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 97: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(13);

                    test_error(res == 13, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 13", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 98: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(14);

                    test_error(res == 14, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 14", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 99: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(15);

                    test_error(res == 15, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 15", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 100: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(16);

                    test_error(res == 16, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 16", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 101: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(17);

                    test_error(res == 17, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 17", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 102: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(18);

                    test_error(res == 18, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 18", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 103: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(19);

                    test_error(res == 19, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 19", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 104: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(20);

                    test_error(res == 20, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 20", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 105: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(21);

                    test_error(res == 21, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 21", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 106: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(22);

                    test_error(res == 22, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 22", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 107: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(23);

                    test_error(res == 23, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 23", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 108: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(24);

                    test_error(res == 24, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 24", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 109: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(25);

                    test_error(res == 25, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 25", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 110: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(26);

                    test_error(res == 26, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 26", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 111: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(27);

                    test_error(res == 27, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 27", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 112: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(28);

                    test_error(res == 28, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 28", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 113: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(29);

                    test_error(res == 29, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 29", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 114: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(30);

                    test_error(res == 30, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 30", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 115: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(31);

                    test_error(res == 31, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 31", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 116: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(32);

                    test_error(res == 32, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 32", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 117: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(33);

                    test_error(res == 33, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 33", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 118: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(34);

                    test_error(res == 34, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 34", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 119: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(35);

                    test_error(res == 35, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 35", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 120: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(36);

                    test_error(res == 36, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 36", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 121: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(37);

                    test_error(res == 37, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 37", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 122: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(38);

                    test_error(res == 38, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 38", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 123: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(39);

                    test_error(res == 39, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 39", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 124: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(40);

                    test_error(res == 40, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 40", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 125: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(41);

                    test_error(res == 41, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 41", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 126: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(42);

                    test_error(res == 42, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 42", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 127: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(43);

                    test_error(res == 43, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 43", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 128: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST128(void)
{
    // informacje o teście
    test_start(128, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(44);

                    test_error(res == 44, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 44", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 129: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST129(void)
{
    // informacje o teście
    test_start(129, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(45);

                    test_error(res == 45, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 45", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 130: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST130(void)
{
    // informacje o teście
    test_start(130, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(46);

                    test_error(res == 46, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 46", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 131: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST131(void)
{
    // informacje o teście
    test_start(131, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(47);

                    test_error(res == 47, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 47", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 132: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST132(void)
{
    // informacje o teście
    test_start(132, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(48);

                    test_error(res == 48, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 48", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 133: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST133(void)
{
    // informacje o teście
    test_start(133, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(49);

                    test_error(res == 49, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 49", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 134: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST134(void)
{
    // informacje o teście
    test_start(134, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(50);

                    test_error(res == 50, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 50", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 135: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST135(void)
{
    // informacje o teście
    test_start(135, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(51);

                    test_error(res == 51, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 51", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 136: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST136(void)
{
    // informacje o teście
    test_start(136, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(52);

                    test_error(res == 52, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 52", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 137: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST137(void)
{
    // informacje o teście
    test_start(137, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(53);

                    test_error(res == 53, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 53", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 138: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST138(void)
{
    // informacje o teście
    test_start(138, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(54);

                    test_error(res == 54, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 54", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 139: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST139(void)
{
    // informacje o teście
    test_start(139, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(55);

                    test_error(res == 55, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 55", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 140: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST140(void)
{
    // informacje o teście
    test_start(140, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(56);

                    test_error(res == 56, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 56", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 141: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST141(void)
{
    // informacje o teście
    test_start(141, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(57);

                    test_error(res == 57, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 57", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 142: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST142(void)
{
    // informacje o teście
    test_start(142, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(58);

                    test_error(res == 58, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 58", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 143: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST143(void)
{
    // informacje o teście
    test_start(143, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(59);

                    test_error(res == 59, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 59", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 144: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST144(void)
{
    // informacje o teście
    test_start(144, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(60);

                    test_error(res == 60, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 60", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 145: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST145(void)
{
    // informacje o teście
    test_start(145, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(61);

                    test_error(res == 61, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 61", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 146: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST146(void)
{
    // informacje o teście
    test_start(146, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(62);

                    test_error(res == 62, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 62", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 147: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST147(void)
{
    // informacje o teście
    test_start(147, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(63);

                    test_error(res == 63, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 63", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 148: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST148(void)
{
    // informacje o teście
    test_start(148, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(64);

                    test_error(res == 64, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 64", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 149: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST149(void)
{
    // informacje o teście
    test_start(149, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(91);

                    test_error(res == 91, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 91", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 150: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST150(void)
{
    // informacje o teście
    test_start(150, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(92);

                    test_error(res == 92, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 92", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 151: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST151(void)
{
    // informacje o teście
    test_start(151, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(93);

                    test_error(res == 93, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 93", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 152: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST152(void)
{
    // informacje o teście
    test_start(152, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(94);

                    test_error(res == 94, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 94", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 153: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST153(void)
{
    // informacje o teście
    test_start(153, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(95);

                    test_error(res == 95, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 95", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 154: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST154(void)
{
    // informacje o teście
    test_start(154, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(96);

                    test_error(res == 96, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 96", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 155: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST155(void)
{
    // informacje o teście
    test_start(155, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(123);

                    test_error(res == 123, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 123", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 156: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST156(void)
{
    // informacje o teście
    test_start(156, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(124);

                    test_error(res == 124, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 124", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 157: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST157(void)
{
    // informacje o teście
    test_start(157, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(125);

                    test_error(res == 125, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 125", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 158: Sprawdzanie poprawności działania funkcji upper_to_lower
//
void UTEST158(void)
{
    // informacje o teście
    test_start(158, "Sprawdzanie poprawności działania funkcji upper_to_lower", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = upper_to_lower(126);

                    test_error(res == 126, "Wartość %c zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być 126", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 159: Sprawdzanie poprawności działania funkcji space_to_dash
//
void UTEST159(void)
{
    // informacje o teście
    test_start(159, "Sprawdzanie poprawności działania funkcji space_to_dash", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = space_to_dash('A');

                    test_error(res == 'A', "Wartość %c zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być A", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 160: Sprawdzanie poprawności działania funkcji space_to_dash
//
void UTEST160(void)
{
    // informacje o teście
    test_start(160, "Sprawdzanie poprawności działania funkcji space_to_dash", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = space_to_dash('z');

                    test_error(res == 'z', "Wartość %c zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być z", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 161: Sprawdzanie poprawności działania funkcji space_to_dash
//
void UTEST161(void)
{
    // informacje o teście
    test_start(161, "Sprawdzanie poprawności działania funkcji space_to_dash", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = space_to_dash('X');

                    test_error(res == 'X', "Wartość %c zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być X", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 162: Sprawdzanie poprawności działania funkcji space_to_dash
//
void UTEST162(void)
{
    // informacje o teście
    test_start(162, "Sprawdzanie poprawności działania funkcji space_to_dash", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = space_to_dash('t');

                    test_error(res == 't', "Wartość %c zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być t", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 163: Sprawdzanie poprawności działania funkcji space_to_dash
//
void UTEST163(void)
{
    // informacje o teście
    test_start(163, "Sprawdzanie poprawności działania funkcji space_to_dash", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = space_to_dash('6');

                    test_error(res == '6', "Wartość %c zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być 6", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 164: Sprawdzanie poprawności działania funkcji space_to_dash
//
void UTEST164(void)
{
    // informacje o teście
    test_start(164, "Sprawdzanie poprawności działania funkcji space_to_dash", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = space_to_dash(' ');

                    test_error(res == '_', "Wartość %c zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być _", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 165: Sprawdzanie poprawności działania funkcji space_to_dash
//
void UTEST165(void)
{
    // informacje o teście
    test_start(165, "Sprawdzanie poprawności działania funkcji space_to_dash", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = space_to_dash('\n');

                    test_error(res == '\n', "Wartość %c zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być \n", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 166: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST166(void)
{
    // informacje o teście
    test_start(166, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter('A');

                    test_error(res == 'Z', "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być Z", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 167: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST167(void)
{
    // informacje o teście
    test_start(167, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter('z');

                    test_error(res == 'a', "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być a", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 168: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST168(void)
{
    // informacje o teście
    test_start(168, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter('X');

                    test_error(res == 'C', "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być C", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 169: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST169(void)
{
    // informacje o teście
    test_start(169, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter('j');

                    test_error(res == 'q', "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być q", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 170: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST170(void)
{
    // informacje o teście
    test_start(170, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter('3');

                    test_error(res == '3', "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 3", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 171: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST171(void)
{
    // informacje o teście
    test_start(171, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(' ');

                    test_error(res == ' ', "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być  ", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 172: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST172(void)
{
    // informacje o teście
    test_start(172, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter('\n');

                    test_error(res == '\n', "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być \n", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 173: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST173(void)
{
    // informacje o teście
    test_start(173, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(1);

                    test_error(res == 1, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 174: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST174(void)
{
    // informacje o teście
    test_start(174, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(2);

                    test_error(res == 2, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 2", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 175: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST175(void)
{
    // informacje o teście
    test_start(175, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(3);

                    test_error(res == 3, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 3", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 176: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST176(void)
{
    // informacje o teście
    test_start(176, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(4);

                    test_error(res == 4, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 4", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 177: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST177(void)
{
    // informacje o teście
    test_start(177, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(5);

                    test_error(res == 5, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 5", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 178: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST178(void)
{
    // informacje o teście
    test_start(178, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(6);

                    test_error(res == 6, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 6", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 179: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST179(void)
{
    // informacje o teście
    test_start(179, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(7);

                    test_error(res == 7, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 7", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 180: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST180(void)
{
    // informacje o teście
    test_start(180, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(8);

                    test_error(res == 8, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 8", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 181: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST181(void)
{
    // informacje o teście
    test_start(181, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(9);

                    test_error(res == 9, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 9", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 182: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST182(void)
{
    // informacje o teście
    test_start(182, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(10);

                    test_error(res == 10, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 10", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 183: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST183(void)
{
    // informacje o teście
    test_start(183, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(11);

                    test_error(res == 11, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 11", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 184: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST184(void)
{
    // informacje o teście
    test_start(184, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(12);

                    test_error(res == 12, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 12", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 185: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST185(void)
{
    // informacje o teście
    test_start(185, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(13);

                    test_error(res == 13, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 13", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 186: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST186(void)
{
    // informacje o teście
    test_start(186, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(14);

                    test_error(res == 14, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 14", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 187: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST187(void)
{
    // informacje o teście
    test_start(187, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(15);

                    test_error(res == 15, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 15", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 188: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST188(void)
{
    // informacje o teście
    test_start(188, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(16);

                    test_error(res == 16, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 16", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 189: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST189(void)
{
    // informacje o teście
    test_start(189, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(17);

                    test_error(res == 17, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 17", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 190: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST190(void)
{
    // informacje o teście
    test_start(190, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(18);

                    test_error(res == 18, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 18", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 191: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST191(void)
{
    // informacje o teście
    test_start(191, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(19);

                    test_error(res == 19, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 19", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 192: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST192(void)
{
    // informacje o teście
    test_start(192, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(20);

                    test_error(res == 20, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 20", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 193: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST193(void)
{
    // informacje o teście
    test_start(193, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(21);

                    test_error(res == 21, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 21", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 194: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST194(void)
{
    // informacje o teście
    test_start(194, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(22);

                    test_error(res == 22, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 22", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 195: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST195(void)
{
    // informacje o teście
    test_start(195, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(23);

                    test_error(res == 23, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 23", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 196: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST196(void)
{
    // informacje o teście
    test_start(196, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(24);

                    test_error(res == 24, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 24", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 197: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST197(void)
{
    // informacje o teście
    test_start(197, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(25);

                    test_error(res == 25, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 25", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 198: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST198(void)
{
    // informacje o teście
    test_start(198, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(26);

                    test_error(res == 26, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 26", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 199: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST199(void)
{
    // informacje o teście
    test_start(199, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(27);

                    test_error(res == 27, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 27", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 200: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST200(void)
{
    // informacje o teście
    test_start(200, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(28);

                    test_error(res == 28, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 28", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 201: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST201(void)
{
    // informacje o teście
    test_start(201, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(29);

                    test_error(res == 29, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 29", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 202: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST202(void)
{
    // informacje o teście
    test_start(202, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(30);

                    test_error(res == 30, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 30", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 203: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST203(void)
{
    // informacje o teście
    test_start(203, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(31);

                    test_error(res == 31, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 31", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 204: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST204(void)
{
    // informacje o teście
    test_start(204, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(32);

                    test_error(res == 32, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 32", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 205: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST205(void)
{
    // informacje o teście
    test_start(205, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(33);

                    test_error(res == 33, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 33", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 206: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST206(void)
{
    // informacje o teście
    test_start(206, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(34);

                    test_error(res == 34, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 34", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 207: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST207(void)
{
    // informacje o teście
    test_start(207, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(35);

                    test_error(res == 35, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 35", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 208: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST208(void)
{
    // informacje o teście
    test_start(208, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(36);

                    test_error(res == 36, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 36", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 209: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST209(void)
{
    // informacje o teście
    test_start(209, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(37);

                    test_error(res == 37, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 37", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 210: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST210(void)
{
    // informacje o teście
    test_start(210, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(38);

                    test_error(res == 38, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 38", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 211: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST211(void)
{
    // informacje o teście
    test_start(211, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(39);

                    test_error(res == 39, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 39", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 212: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST212(void)
{
    // informacje o teście
    test_start(212, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(40);

                    test_error(res == 40, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 40", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 213: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST213(void)
{
    // informacje o teście
    test_start(213, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(41);

                    test_error(res == 41, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 41", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 214: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST214(void)
{
    // informacje o teście
    test_start(214, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(42);

                    test_error(res == 42, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 42", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 215: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST215(void)
{
    // informacje o teście
    test_start(215, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(43);

                    test_error(res == 43, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 43", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 216: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST216(void)
{
    // informacje o teście
    test_start(216, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(44);

                    test_error(res == 44, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 44", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 217: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST217(void)
{
    // informacje o teście
    test_start(217, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(45);

                    test_error(res == 45, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 45", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 218: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST218(void)
{
    // informacje o teście
    test_start(218, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(46);

                    test_error(res == 46, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 46", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 219: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST219(void)
{
    // informacje o teście
    test_start(219, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(47);

                    test_error(res == 47, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 47", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 220: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST220(void)
{
    // informacje o teście
    test_start(220, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(48);

                    test_error(res == 48, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 48", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 221: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST221(void)
{
    // informacje o teście
    test_start(221, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(49);

                    test_error(res == 49, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 49", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 222: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST222(void)
{
    // informacje o teście
    test_start(222, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(50);

                    test_error(res == 50, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 50", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 223: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST223(void)
{
    // informacje o teście
    test_start(223, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(51);

                    test_error(res == 51, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 51", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 224: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST224(void)
{
    // informacje o teście
    test_start(224, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(52);

                    test_error(res == 52, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 52", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 225: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST225(void)
{
    // informacje o teście
    test_start(225, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(53);

                    test_error(res == 53, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 53", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 226: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST226(void)
{
    // informacje o teście
    test_start(226, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(54);

                    test_error(res == 54, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 54", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 227: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST227(void)
{
    // informacje o teście
    test_start(227, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(55);

                    test_error(res == 55, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 55", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 228: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST228(void)
{
    // informacje o teście
    test_start(228, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(56);

                    test_error(res == 56, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 56", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 229: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST229(void)
{
    // informacje o teście
    test_start(229, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(57);

                    test_error(res == 57, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 57", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 230: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST230(void)
{
    // informacje o teście
    test_start(230, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(58);

                    test_error(res == 58, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 58", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 231: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST231(void)
{
    // informacje o teście
    test_start(231, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(59);

                    test_error(res == 59, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 59", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 232: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST232(void)
{
    // informacje o teście
    test_start(232, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(60);

                    test_error(res == 60, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 60", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 233: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST233(void)
{
    // informacje o teście
    test_start(233, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(61);

                    test_error(res == 61, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 61", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 234: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST234(void)
{
    // informacje o teście
    test_start(234, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(62);

                    test_error(res == 62, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 62", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 235: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST235(void)
{
    // informacje o teście
    test_start(235, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(63);

                    test_error(res == 63, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 63", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 236: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST236(void)
{
    // informacje o teście
    test_start(236, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(64);

                    test_error(res == 64, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 64", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 237: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST237(void)
{
    // informacje o teście
    test_start(237, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(91);

                    test_error(res == 91, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 91", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 238: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST238(void)
{
    // informacje o teście
    test_start(238, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(92);

                    test_error(res == 92, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 92", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 239: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST239(void)
{
    // informacje o teście
    test_start(239, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(93);

                    test_error(res == 93, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 93", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 240: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST240(void)
{
    // informacje o teście
    test_start(240, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(94);

                    test_error(res == 94, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 94", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 241: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST241(void)
{
    // informacje o teście
    test_start(241, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(95);

                    test_error(res == 95, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 95", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 242: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST242(void)
{
    // informacje o teście
    test_start(242, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(96);

                    test_error(res == 96, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 96", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 243: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST243(void)
{
    // informacje o teście
    test_start(243, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(123);

                    test_error(res == 123, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 123", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 244: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST244(void)
{
    // informacje o teście
    test_start(244, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(124);

                    test_error(res == 124, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 124", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 245: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST245(void)
{
    // informacje o teście
    test_start(245, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(125);

                    test_error(res == 125, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 125", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 246: Sprawdzanie poprawności działania funkcji reverse_letter
//
void UTEST246(void)
{
    // informacje o teście
    test_start(246, "Sprawdzanie poprawności działania funkcji reverse_letter", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char res = reverse_letter(126);

                    test_error(res == 126, "Wartość %c zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być 126", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 247: Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów
//
void UTEST247(void)
{
    // informacje o teście
    test_start(247, "Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2002);
    
    //
    // -----------
    //
    

                char* res = letter_modifier("The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt\nThe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence. - Jean Baudrillard\n For a long time it puzzled me how something so expensive, so leading edge, could be so useless. And then it occurred to me that a computer is a stupid machine with the ability to do incredibly smart things, while computer programmers are smart people with the ability to do incredibly stupid things. They are, in short, a perfect match.  - Bill Bryson\n Lo! Men have become the tools of their tools.   - Henry David Thoreau\n C is quirky, flawed, and an enormous success.  - Dennis M. Ritchie.\nWhat is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison\nWe are made wise not by the recollection of our past, but by the responsibility for our future. - George Bernard Shaw\nIf you don t stand for something you will fall for anything. - Gordon A. Eadie\n The trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - Seymour Cray\n To iterate is human, to recurse divine.  - L. Peter Deutsch\n Programming is like kicking yourself in the face, sooner or later your nose will bleed.  - Kyle Woodbury\n Computers make it easier to do a lot of things, but most of the things they make it easier to do don t need to be done.   - Andy Rooney\n Everyone is born a genius, but the process of living de-geniuses them.  - Richard Buckminster Fuller\nAnything that could give rise to smarter-than-human intelligence - in the form of Artificial Intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. Nothing else is even in the same league. - Eliezer Yudkowsky", lower_to_upper);

                test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");
                
                onerror_terminate();

                test_error(strcmp(res, "THE FUTURE BELONGS TO THOSE WHO BELIEVE IN THE BEAUTY OF THEIR DREAMS. - ELEANOR ROOSEVELT\nTHE SAD THING ABOUT ARTIFICIAL INTELLIGENCE IS THAT IT LACKS ARTIFICE AND THEREFORE INTELLIGENCE. - JEAN BAUDRILLARD\n FOR A LONG TIME IT PUZZLED ME HOW SOMETHING SO EXPENSIVE, SO LEADING EDGE, COULD BE SO USELESS. AND THEN IT OCCURRED TO ME THAT A COMPUTER IS A STUPID MACHINE WITH THE ABILITY TO DO INCREDIBLY SMART THINGS, WHILE COMPUTER PROGRAMMERS ARE SMART PEOPLE WITH THE ABILITY TO DO INCREDIBLY STUPID THINGS. THEY ARE, IN SHORT, A PERFECT MATCH.  - BILL BRYSON\n LO! MEN HAVE BECOME THE TOOLS OF THEIR TOOLS.   - HENRY DAVID THOREAU\n C IS QUIRKY, FLAWED, AND AN ENORMOUS SUCCESS.  - DENNIS M. RITCHIE.\nWHAT IS ORACLE? A BUNCH OF PEOPLE. AND ALL OF OUR PRODUCTS WERE JUST IDEAS IN THE HEADS OF THOSE PEOPLE - IDEAS THAT PEOPLE TYPED INTO A COMPUTER, TESTED, AND THAT TURNED OUT TO BE THE BEST IDEA FOR A DATABASE OR FOR A PROGRAMMING LANGUAGE. - LARRY ELLISON\nWE ARE MADE WISE NOT BY THE RECOLLECTION OF OUR PAST, BUT BY THE RESPONSIBILITY FOR OUR FUTURE. - GEORGE BERNARD SHAW\nIF YOU DON T STAND FOR SOMETHING YOU WILL FALL FOR ANYTHING. - GORDON A. EADIE\n THE TROUBLE WITH PROGRAMMERS IS THAT YOU CAN NEVER TELL WHAT A PROGRAMMER IS DOING UNTIL IT S TOO LATE.  - SEYMOUR CRAY\n TO ITERATE IS HUMAN, TO RECURSE DIVINE.  - L. PETER DEUTSCH\n PROGRAMMING IS LIKE KICKING YOURSELF IN THE FACE, SOONER OR LATER YOUR NOSE WILL BLEED.  - KYLE WOODBURY\n COMPUTERS MAKE IT EASIER TO DO A LOT OF THINGS, BUT MOST OF THE THINGS THEY MAKE IT EASIER TO DO DON T NEED TO BE DONE.   - ANDY ROONEY\n EVERYONE IS BORN A GENIUS, BUT THE PROCESS OF LIVING DE-GENIUSES THEM.  - RICHARD BUCKMINSTER FULLER\nANYTHING THAT COULD GIVE RISE TO SMARTER-THAN-HUMAN INTELLIGENCE - IN THE FORM OF ARTIFICIAL INTELLIGENCE, BRAIN-COMPUTER INTERFACES, OR NEUROSCIENCE-BASED HUMAN INTELLIGENCE ENHANCEMENT - WINS HANDS DOWN BEYOND CONTEST AS DOING THE MOST TO CHANGE THE WORLD. NOTHING ELSE IS EVEN IN THE SAME LEAGUE. - ELIEZER YUDKOWSKY") == 0, "Wartość %s zwrócona przez funkcję letter_modifier() jest niewłaściwa, powinno być THE FUTURE BELONGS TO THOSE WHO BELIEVE IN THE BEAUTY OF THEIR DREAMS. - ELEANOR ROOSEVELT\nTHE SAD THING ABOUT ARTIFICIAL INTELLIGENCE IS THAT IT LACKS ARTIFICE AND THEREFORE INTELLIGENCE. - JEAN BAUDRILLARD\n FOR A LONG TIME IT PUZZLED ME HOW SOMETHING SO EXPENSIVE, SO LEADING EDGE, COULD BE SO USELESS. AND THEN IT OCCURRED TO ME THAT A COMPUTER IS A STUPID MACHINE WITH THE ABILITY TO DO INCREDIBLY SMART THINGS, WHILE COMPUTER PROGRAMMERS ARE SMART PEOPLE WITH THE ABILITY TO DO INCREDIBLY STUPID THINGS. THEY ARE, IN SHORT, A PERFECT MATCH.  - BILL BRYSON\n LO! MEN HAVE BECOME THE TOOLS OF THEIR TOOLS.   - HENRY DAVID THOREAU\n C IS QUIRKY, FLAWED, AND AN ENORMOUS SUCCESS.  - DENNIS M. RITCHIE.\nWHAT IS ORACLE? A BUNCH OF PEOPLE. AND ALL OF OUR PRODUCTS WERE JUST IDEAS IN THE HEADS OF THOSE PEOPLE - IDEAS THAT PEOPLE TYPED INTO A COMPUTER, TESTED, AND THAT TURNED OUT TO BE THE BEST IDEA FOR A DATABASE OR FOR A PROGRAMMING LANGUAGE. - LARRY ELLISON\nWE ARE MADE WISE NOT BY THE RECOLLECTION OF OUR PAST, BUT BY THE RESPONSIBILITY FOR OUR FUTURE. - GEORGE BERNARD SHAW\nIF YOU DON T STAND FOR SOMETHING YOU WILL FALL FOR ANYTHING. - GORDON A. EADIE\n THE TROUBLE WITH PROGRAMMERS IS THAT YOU CAN NEVER TELL WHAT A PROGRAMMER IS DOING UNTIL IT S TOO LATE.  - SEYMOUR CRAY\n TO ITERATE IS HUMAN, TO RECURSE DIVINE.  - L. PETER DEUTSCH\n PROGRAMMING IS LIKE KICKING YOURSELF IN THE FACE, SOONER OR LATER YOUR NOSE WILL BLEED.  - KYLE WOODBURY\n COMPUTERS MAKE IT EASIER TO DO A LOT OF THINGS, BUT MOST OF THE THINGS THEY MAKE IT EASIER TO DO DON T NEED TO BE DONE.   - ANDY ROONEY\n EVERYONE IS BORN A GENIUS, BUT THE PROCESS OF LIVING DE-GENIUSES THEM.  - RICHARD BUCKMINSTER FULLER\nANYTHING THAT COULD GIVE RISE TO SMARTER-THAN-HUMAN INTELLIGENCE - IN THE FORM OF ARTIFICIAL INTELLIGENCE, BRAIN-COMPUTER INTERFACES, OR NEUROSCIENCE-BASED HUMAN INTELLIGENCE ENHANCEMENT - WINS HANDS DOWN BEYOND CONTEST AS DOING THE MOST TO CHANGE THE WORLD. NOTHING ELSE IS EVEN IN THE SAME LEAGUE. - ELIEZER YUDKOWSKY", res);
            
                free(res);

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
//  Test 248: Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów
//
void UTEST248(void)
{
    // informacje o teście
    test_start(248, "Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2002);
    
    //
    // -----------
    //
    

                char* res = letter_modifier("The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt\nThe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence. - Jean Baudrillard\n For a long time it puzzled me how something so expensive, so leading edge, could be so useless. And then it occurred to me that a computer is a stupid machine with the ability to do incredibly smart things, while computer programmers are smart people with the ability to do incredibly stupid things. They are, in short, a perfect match.  - Bill Bryson\n Lo! Men have become the tools of their tools.   - Henry David Thoreau\n C is quirky, flawed, and an enormous success.  - Dennis M. Ritchie.\nWhat is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison\nWe are made wise not by the recollection of our past, but by the responsibility for our future. - George Bernard Shaw\nIf you don t stand for something you will fall for anything. - Gordon A. Eadie\n The trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - Seymour Cray\n To iterate is human, to recurse divine.  - L. Peter Deutsch\n Programming is like kicking yourself in the face, sooner or later your nose will bleed.  - Kyle Woodbury\n Computers make it easier to do a lot of things, but most of the things they make it easier to do don t need to be done.   - Andy Rooney\n Everyone is born a genius, but the process of living de-geniuses them.  - Richard Buckminster Fuller\nAnything that could give rise to smarter-than-human intelligence - in the form of Artificial Intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. Nothing else is even in the same league. - Eliezer Yudkowsky", upper_to_lower);

                test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");
                
                onerror_terminate();

                test_error(strcmp(res, "the future belongs to those who believe in the beauty of their dreams. - eleanor roosevelt\nthe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence. - jean baudrillard\n for a long time it puzzled me how something so expensive, so leading edge, could be so useless. and then it occurred to me that a computer is a stupid machine with the ability to do incredibly smart things, while computer programmers are smart people with the ability to do incredibly stupid things. they are, in short, a perfect match.  - bill bryson\n lo! men have become the tools of their tools.   - henry david thoreau\n c is quirky, flawed, and an enormous success.  - dennis m. ritchie.\nwhat is oracle? a bunch of people. and all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - larry ellison\nwe are made wise not by the recollection of our past, but by the responsibility for our future. - george bernard shaw\nif you don t stand for something you will fall for anything. - gordon a. eadie\n the trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - seymour cray\n to iterate is human, to recurse divine.  - l. peter deutsch\n programming is like kicking yourself in the face, sooner or later your nose will bleed.  - kyle woodbury\n computers make it easier to do a lot of things, but most of the things they make it easier to do don t need to be done.   - andy rooney\n everyone is born a genius, but the process of living de-geniuses them.  - richard buckminster fuller\nanything that could give rise to smarter-than-human intelligence - in the form of artificial intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. nothing else is even in the same league. - eliezer yudkowsky") == 0, "Wartość %s zwrócona przez funkcję letter_modifier() jest niewłaściwa, powinno być the future belongs to those who believe in the beauty of their dreams. - eleanor roosevelt\nthe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence. - jean baudrillard\n for a long time it puzzled me how something so expensive, so leading edge, could be so useless. and then it occurred to me that a computer is a stupid machine with the ability to do incredibly smart things, while computer programmers are smart people with the ability to do incredibly stupid things. they are, in short, a perfect match.  - bill bryson\n lo! men have become the tools of their tools.   - henry david thoreau\n c is quirky, flawed, and an enormous success.  - dennis m. ritchie.\nwhat is oracle? a bunch of people. and all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - larry ellison\nwe are made wise not by the recollection of our past, but by the responsibility for our future. - george bernard shaw\nif you don t stand for something you will fall for anything. - gordon a. eadie\n the trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - seymour cray\n to iterate is human, to recurse divine.  - l. peter deutsch\n programming is like kicking yourself in the face, sooner or later your nose will bleed.  - kyle woodbury\n computers make it easier to do a lot of things, but most of the things they make it easier to do don t need to be done.   - andy rooney\n everyone is born a genius, but the process of living de-geniuses them.  - richard buckminster fuller\nanything that could give rise to smarter-than-human intelligence - in the form of artificial intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. nothing else is even in the same league. - eliezer yudkowsky", res);
            
                free(res);

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
//  Test 249: Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów
//
void UTEST249(void)
{
    // informacje o teście
    test_start(249, "Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2002);
    
    //
    // -----------
    //
    

                char* res = letter_modifier("The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt\nThe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence. - Jean Baudrillard\n For a long time it puzzled me how something so expensive, so leading edge, could be so useless. And then it occurred to me that a computer is a stupid machine with the ability to do incredibly smart things, while computer programmers are smart people with the ability to do incredibly stupid things. They are, in short, a perfect match.  - Bill Bryson\n Lo! Men have become the tools of their tools.   - Henry David Thoreau\n C is quirky, flawed, and an enormous success.  - Dennis M. Ritchie.\nWhat is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison\nWe are made wise not by the recollection of our past, but by the responsibility for our future. - George Bernard Shaw\nIf you don t stand for something you will fall for anything. - Gordon A. Eadie\n The trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - Seymour Cray\n To iterate is human, to recurse divine.  - L. Peter Deutsch\n Programming is like kicking yourself in the face, sooner or later your nose will bleed.  - Kyle Woodbury\n Computers make it easier to do a lot of things, but most of the things they make it easier to do don t need to be done.   - Andy Rooney\n Everyone is born a genius, but the process of living de-geniuses them.  - Richard Buckminster Fuller\nAnything that could give rise to smarter-than-human intelligence - in the form of Artificial Intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. Nothing else is even in the same league. - Eliezer Yudkowsky", space_to_dash);

                test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");
                
                onerror_terminate();

                test_error(strcmp(res, "The_future_belongs_to_those_who_believe_in_the_beauty_of_their_dreams._-_Eleanor_Roosevelt\nThe_sad_thing_about_artificial_intelligence_is_that_it_lacks_artifice_and_therefore_intelligence._-_Jean_Baudrillard\n_For_a_long_time_it_puzzled_me_how_something_so_expensive,_so_leading_edge,_could_be_so_useless._And_then_it_occurred_to_me_that_a_computer_is_a_stupid_machine_with_the_ability_to_do_incredibly_smart_things,_while_computer_programmers_are_smart_people_with_the_ability_to_do_incredibly_stupid_things._They_are,_in_short,_a_perfect_match.__-_Bill_Bryson\n_Lo!_Men_have_become_the_tools_of_their_tools.___-_Henry_David_Thoreau\n_C_is_quirky,_flawed,_and_an_enormous_success.__-_Dennis_M._Ritchie.\nWhat_is_Oracle?_A_bunch_of_people._And_all_of_our_products_were_just_ideas_in_the_heads_of_those_people_-_ideas_that_people_typed_into_a_computer,_tested,_and_that_turned_out_to_be_the_best_idea_for_a_database_or_for_a_programming_language._-_Larry_Ellison\nWe_are_made_wise_not_by_the_recollection_of_our_past,_but_by_the_responsibility_for_our_future._-_George_Bernard_Shaw\nIf_you_don_t_stand_for_something_you_will_fall_for_anything._-_Gordon_A._Eadie\n_The_trouble_with_programmers_is_that_you_can_never_tell_what_a_programmer_is_doing_until_it_s_too_late.__-_Seymour_Cray\n_To_iterate_is_human,_to_recurse_divine.__-_L._Peter_Deutsch\n_Programming_is_like_kicking_yourself_in_the_face,_sooner_or_later_your_nose_will_bleed.__-_Kyle_Woodbury\n_Computers_make_it_easier_to_do_a_lot_of_things,_but_most_of_the_things_they_make_it_easier_to_do_don_t_need_to_be_done.___-_Andy_Rooney\n_Everyone_is_born_a_genius,_but_the_process_of_living_de-geniuses_them.__-_Richard_Buckminster_Fuller\nAnything_that_could_give_rise_to_smarter-than-human_intelligence_-_in_the_form_of_Artificial_Intelligence,_brain-computer_interfaces,_or_neuroscience-based_human_intelligence_enhancement_-_wins_hands_down_beyond_contest_as_doing_the_most_to_change_the_world._Nothing_else_is_even_in_the_same_league._-_Eliezer_Yudkowsky") == 0, "Wartość %s zwrócona przez funkcję letter_modifier() jest niewłaściwa, powinno być The_future_belongs_to_those_who_believe_in_the_beauty_of_their_dreams._-_Eleanor_Roosevelt\nThe_sad_thing_about_artificial_intelligence_is_that_it_lacks_artifice_and_therefore_intelligence._-_Jean_Baudrillard\n_For_a_long_time_it_puzzled_me_how_something_so_expensive,_so_leading_edge,_could_be_so_useless._And_then_it_occurred_to_me_that_a_computer_is_a_stupid_machine_with_the_ability_to_do_incredibly_smart_things,_while_computer_programmers_are_smart_people_with_the_ability_to_do_incredibly_stupid_things._They_are,_in_short,_a_perfect_match.__-_Bill_Bryson\n_Lo!_Men_have_become_the_tools_of_their_tools.___-_Henry_David_Thoreau\n_C_is_quirky,_flawed,_and_an_enormous_success.__-_Dennis_M._Ritchie.\nWhat_is_Oracle?_A_bunch_of_people._And_all_of_our_products_were_just_ideas_in_the_heads_of_those_people_-_ideas_that_people_typed_into_a_computer,_tested,_and_that_turned_out_to_be_the_best_idea_for_a_database_or_for_a_programming_language._-_Larry_Ellison\nWe_are_made_wise_not_by_the_recollection_of_our_past,_but_by_the_responsibility_for_our_future._-_George_Bernard_Shaw\nIf_you_don_t_stand_for_something_you_will_fall_for_anything._-_Gordon_A._Eadie\n_The_trouble_with_programmers_is_that_you_can_never_tell_what_a_programmer_is_doing_until_it_s_too_late.__-_Seymour_Cray\n_To_iterate_is_human,_to_recurse_divine.__-_L._Peter_Deutsch\n_Programming_is_like_kicking_yourself_in_the_face,_sooner_or_later_your_nose_will_bleed.__-_Kyle_Woodbury\n_Computers_make_it_easier_to_do_a_lot_of_things,_but_most_of_the_things_they_make_it_easier_to_do_don_t_need_to_be_done.___-_Andy_Rooney\n_Everyone_is_born_a_genius,_but_the_process_of_living_de-geniuses_them.__-_Richard_Buckminster_Fuller\nAnything_that_could_give_rise_to_smarter-than-human_intelligence_-_in_the_form_of_Artificial_Intelligence,_brain-computer_interfaces,_or_neuroscience-based_human_intelligence_enhancement_-_wins_hands_down_beyond_contest_as_doing_the_most_to_change_the_world._Nothing_else_is_even_in_the_same_league._-_Eliezer_Yudkowsky", res);
            
                free(res);

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
//  Test 250: Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów
//
void UTEST250(void)
{
    // informacje o teście
    test_start(250, "Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2002);
    
    //
    // -----------
    //
    

                char* res = letter_modifier("The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt\nThe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence. - Jean Baudrillard\n For a long time it puzzled me how something so expensive, so leading edge, could be so useless. And then it occurred to me that a computer is a stupid machine with the ability to do incredibly smart things, while computer programmers are smart people with the ability to do incredibly stupid things. They are, in short, a perfect match.  - Bill Bryson\n Lo! Men have become the tools of their tools.   - Henry David Thoreau\n C is quirky, flawed, and an enormous success.  - Dennis M. Ritchie.\nWhat is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison\nWe are made wise not by the recollection of our past, but by the responsibility for our future. - George Bernard Shaw\nIf you don t stand for something you will fall for anything. - Gordon A. Eadie\n The trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - Seymour Cray\n To iterate is human, to recurse divine.  - L. Peter Deutsch\n Programming is like kicking yourself in the face, sooner or later your nose will bleed.  - Kyle Woodbury\n Computers make it easier to do a lot of things, but most of the things they make it easier to do don t need to be done.   - Andy Rooney\n Everyone is born a genius, but the process of living de-geniuses them.  - Richard Buckminster Fuller\nAnything that could give rise to smarter-than-human intelligence - in the form of Artificial Intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. Nothing else is even in the same league. - Eliezer Yudkowsky", reverse_letter);

                test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");
                
                onerror_terminate();

                test_error(strcmp(res, "Gsv ufgfiv yvolmth gl gslhv dsl yvorvev rm gsv yvzfgb lu gsvri wivznh. - Vovzmli Illhvevog\nGsv hzw gsrmt zylfg zigrurxrzo rmgvoortvmxv rh gszg rg ozxph zigrurxv zmw gsvivuliv rmgvoortvmxv. - Qvzm Yzfwirooziw\n Uli z olmt grnv rg kfaaovw nv sld hlnvgsrmt hl vckvmhrev, hl ovzwrmt vwtv, xlfow yv hl fhvovhh. Zmw gsvm rg lxxfiivw gl nv gszg z xlnkfgvi rh z hgfkrw nzxsrmv drgs gsv zyrorgb gl wl rmxivwryob hnzig gsrmth, dsrov xlnkfgvi kiltiznnvih ziv hnzig kvlkov drgs gsv zyrorgb gl wl rmxivwryob hgfkrw gsrmth. Gsvb ziv, rm hslig, z kviuvxg nzgxs.  - Yroo Yibhlm\n Ol! Nvm szev yvxlnv gsv glloh lu gsvri glloh.   - Svmib Wzerw Gslivzf\n X rh jfripb, uozdvw, zmw zm vmlinlfh hfxxvhh.  - Wvmmrh N. Irgxsrv.\nDszg rh Lizxov? Z yfmxs lu kvlkov. Zmw zoo lu lfi kilwfxgh dviv qfhg rwvzh rm gsv svzwh lu gslhv kvlkov - rwvzh gszg kvlkov gbkvw rmgl z xlnkfgvi, gvhgvw, zmw gszg gfimvw lfg gl yv gsv yvhg rwvz uli z wzgzyzhv li uli z kiltiznnrmt ozmtfztv. - Oziib Voorhlm\nDv ziv nzwv drhv mlg yb gsv ivxloovxgrlm lu lfi kzhg, yfg yb gsv ivhklmhryrorgb uli lfi ufgfiv. - Tvlitv Yvimziw Hszd\nRu blf wlm g hgzmw uli hlnvgsrmt blf droo uzoo uli zmbgsrmt. - Tliwlm Z. Vzwrv\n Gsv gilfyov drgs kiltiznnvih rh gszg blf xzm mvevi gvoo dszg z kiltiznnvi rh wlrmt fmgro rg h gll ozgv.  - Hvbnlfi Xizb\n Gl rgvizgv rh sfnzm, gl ivxfihv wrermv.  - O. Kvgvi Wvfghxs\n Kiltiznnrmt rh orpv prxprmt blfihvou rm gsv uzxv, hllmvi li ozgvi blfi mlhv droo yovvw.  - Pbov Dllwyfib\n Xlnkfgvih nzpv rg vzhrvi gl wl z olg lu gsrmth, yfg nlhg lu gsv gsrmth gsvb nzpv rg vzhrvi gl wl wlm g mvvw gl yv wlmv.   - Zmwb Illmvb\n Veviblmv rh ylim z tvmrfh, yfg gsv kilxvhh lu orermt wv-tvmrfhvh gsvn.  - Irxsziw Yfxpnrmhgvi Ufoovi\nZmbgsrmt gszg xlfow trev irhv gl hnzigvi-gszm-sfnzm rmgvoortvmxv - rm gsv ulin lu Zigrurxrzo Rmgvoortvmxv, yizrm-xlnkfgvi rmgviuzxvh, li mvfilhxrvmxv-yzhvw sfnzm rmgvoortvmxv vmszmxvnvmg - drmh szmwh wldm yvblmw xlmgvhg zh wlrmt gsv nlhg gl xszmtv gsv dliow. Mlgsrmt vohv rh vevm rm gsv hznv ovztfv. - Vorvavi Bfwpldhpb") == 0, "Wartość %s zwrócona przez funkcję letter_modifier() jest niewłaściwa, powinno być Gsv ufgfiv yvolmth gl gslhv dsl yvorvev rm gsv yvzfgb lu gsvri wivznh. - Vovzmli Illhvevog\nGsv hzw gsrmt zylfg zigrurxrzo rmgvoortvmxv rh gszg rg ozxph zigrurxv zmw gsvivuliv rmgvoortvmxv. - Qvzm Yzfwirooziw\n Uli z olmt grnv rg kfaaovw nv sld hlnvgsrmt hl vckvmhrev, hl ovzwrmt vwtv, xlfow yv hl fhvovhh. Zmw gsvm rg lxxfiivw gl nv gszg z xlnkfgvi rh z hgfkrw nzxsrmv drgs gsv zyrorgb gl wl rmxivwryob hnzig gsrmth, dsrov xlnkfgvi kiltiznnvih ziv hnzig kvlkov drgs gsv zyrorgb gl wl rmxivwryob hgfkrw gsrmth. Gsvb ziv, rm hslig, z kviuvxg nzgxs.  - Yroo Yibhlm\n Ol! Nvm szev yvxlnv gsv glloh lu gsvri glloh.   - Svmib Wzerw Gslivzf\n X rh jfripb, uozdvw, zmw zm vmlinlfh hfxxvhh.  - Wvmmrh N. Irgxsrv.\nDszg rh Lizxov? Z yfmxs lu kvlkov. Zmw zoo lu lfi kilwfxgh dviv qfhg rwvzh rm gsv svzwh lu gslhv kvlkov - rwvzh gszg kvlkov gbkvw rmgl z xlnkfgvi, gvhgvw, zmw gszg gfimvw lfg gl yv gsv yvhg rwvz uli z wzgzyzhv li uli z kiltiznnrmt ozmtfztv. - Oziib Voorhlm\nDv ziv nzwv drhv mlg yb gsv ivxloovxgrlm lu lfi kzhg, yfg yb gsv ivhklmhryrorgb uli lfi ufgfiv. - Tvlitv Yvimziw Hszd\nRu blf wlm g hgzmw uli hlnvgsrmt blf droo uzoo uli zmbgsrmt. - Tliwlm Z. Vzwrv\n Gsv gilfyov drgs kiltiznnvih rh gszg blf xzm mvevi gvoo dszg z kiltiznnvi rh wlrmt fmgro rg h gll ozgv.  - Hvbnlfi Xizb\n Gl rgvizgv rh sfnzm, gl ivxfihv wrermv.  - O. Kvgvi Wvfghxs\n Kiltiznnrmt rh orpv prxprmt blfihvou rm gsv uzxv, hllmvi li ozgvi blfi mlhv droo yovvw.  - Pbov Dllwyfib\n Xlnkfgvih nzpv rg vzhrvi gl wl z olg lu gsrmth, yfg nlhg lu gsv gsrmth gsvb nzpv rg vzhrvi gl wl wlm g mvvw gl yv wlmv.   - Zmwb Illmvb\n Veviblmv rh ylim z tvmrfh, yfg gsv kilxvhh lu orermt wv-tvmrfhvh gsvn.  - Irxsziw Yfxpnrmhgvi Ufoovi\nZmbgsrmt gszg xlfow trev irhv gl hnzigvi-gszm-sfnzm rmgvoortvmxv - rm gsv ulin lu Zigrurxrzo Rmgvoortvmxv, yizrm-xlnkfgvi rmgviuzxvh, li mvfilhxrvmxv-yzhvw sfnzm rmgvoortvmxv vmszmxvnvmg - drmh szmwh wldm yvblmw xlmgvhg zh wlrmt gsv nlhg gl xszmtv gsv dliow. Mlgsrmt vohv rh vevm rm gsv hznv ovztfv. - Vorvavi Bfwpldhpb", res);
            
                free(res);

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
//  Test 251: Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 0 bajtów
//
void UTEST251(void)
{
    // informacje o teście
    test_start(251, "Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                char* res = letter_modifier("The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt\nThe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence. - Jean Baudrillard\n For a long time it puzzled me how something so expensive, so leading edge, could be so useless. And then it occurred to me that a computer is a stupid machine with the ability to do incredibly smart things, while computer programmers are smart people with the ability to do incredibly stupid things. They are, in short, a perfect match.  - Bill Bryson\n Lo! Men have become the tools of their tools.   - Henry David Thoreau\n C is quirky, flawed, and an enormous success.  - Dennis M. Ritchie.\nWhat is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison\nWe are made wise not by the recollection of our past, but by the responsibility for our future. - George Bernard Shaw\nIf you don t stand for something you will fall for anything. - Gordon A. Eadie\n The trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - Seymour Cray\n To iterate is human, to recurse divine.  - L. Peter Deutsch\n Programming is like kicking yourself in the face, sooner or later your nose will bleed.  - Kyle Woodbury\n Computers make it easier to do a lot of things, but most of the things they make it easier to do don t need to be done.   - Andy Rooney\n Everyone is born a genius, but the process of living de-geniuses them.  - Richard Buckminster Fuller\nAnything that could give rise to smarter-than-human intelligence - in the form of Artificial Intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. Nothing else is even in the same league. - Eliezer Yudkowsky", reverse_letter);
        
                test_error(res == NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");
        
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
//  Test 252: Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2001 bajtów
//
void UTEST252(void)
{
    // informacje o teście
    test_start(252, "Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2001 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2001);
    
    //
    // -----------
    //
    
        
                char* res = letter_modifier("The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt\nThe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence. - Jean Baudrillard\n For a long time it puzzled me how something so expensive, so leading edge, could be so useless. And then it occurred to me that a computer is a stupid machine with the ability to do incredibly smart things, while computer programmers are smart people with the ability to do incredibly stupid things. They are, in short, a perfect match.  - Bill Bryson\n Lo! Men have become the tools of their tools.   - Henry David Thoreau\n C is quirky, flawed, and an enormous success.  - Dennis M. Ritchie.\nWhat is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison\nWe are made wise not by the recollection of our past, but by the responsibility for our future. - George Bernard Shaw\nIf you don t stand for something you will fall for anything. - Gordon A. Eadie\n The trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - Seymour Cray\n To iterate is human, to recurse divine.  - L. Peter Deutsch\n Programming is like kicking yourself in the face, sooner or later your nose will bleed.  - Kyle Woodbury\n Computers make it easier to do a lot of things, but most of the things they make it easier to do don t need to be done.   - Andy Rooney\n Everyone is born a genius, but the process of living de-geniuses them.  - Richard Buckminster Fuller\nAnything that could give rise to smarter-than-human intelligence - in the form of Artificial Intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. Nothing else is even in the same league. - Eliezer Yudkowsky", reverse_letter);
        
                test_error(res == NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");
        
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
//  Test 253: Sprawdzanie poprawności działania funkcji letter_modifier
//
void UTEST253(void)
{
    // informacje o teście
    test_start(253, "Sprawdzanie poprawności działania funkcji letter_modifier", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char* res = letter_modifier("The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt\nThe sad thing about artificial intelligence is that it lacks artifice and therefore intelligence. - Jean Baudrillard\n For a long time it puzzled me how something so expensive, so leading edge, could be so useless. And then it occurred to me that a computer is a stupid machine with the ability to do incredibly smart things, while computer programmers are smart people with the ability to do incredibly stupid things. They are, in short, a perfect match.  - Bill Bryson\n Lo! Men have become the tools of their tools.   - Henry David Thoreau\n C is quirky, flawed, and an enormous success.  - Dennis M. Ritchie.\nWhat is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison\nWe are made wise not by the recollection of our past, but by the responsibility for our future. - George Bernard Shaw\nIf you don t stand for something you will fall for anything. - Gordon A. Eadie\n The trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - Seymour Cray\n To iterate is human, to recurse divine.  - L. Peter Deutsch\n Programming is like kicking yourself in the face, sooner or later your nose will bleed.  - Kyle Woodbury\n Computers make it easier to do a lot of things, but most of the things they make it easier to do don t need to be done.   - Andy Rooney\n Everyone is born a genius, but the process of living de-geniuses them.  - Richard Buckminster Fuller\nAnything that could give rise to smarter-than-human intelligence - in the form of Artificial Intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. Nothing else is even in the same league. - Eliezer Yudkowsky", NULL);

            test_error(res == NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

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
//  Test 254: Sprawdzanie poprawności działania funkcji letter_modifier
//
void UTEST254(void)
{
    // informacje o teście
    test_start(254, "Sprawdzanie poprawności działania funkcji letter_modifier", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char* res = letter_modifier(NULL, reverse_letter);

            test_error(res == NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

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
//  Test 255: Sprawdzanie poprawności działania funkcji letter_modifier
//
void UTEST255(void)
{
    // informacje o teście
    test_start(255, "Sprawdzanie poprawności działania funkcji letter_modifier", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char* res = letter_modifier(NULL, NULL);

            test_error(res == NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

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
//  Test 1: Reakcja na brak pamięci - limit ustawiony na 40 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit ustawiony na 40 bajtów", __LINE__);

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

//
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 1040 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 1040 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1040);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST2, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST3, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST4, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST5, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST6, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST7, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST8, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST9, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST10, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST11, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST12, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST13, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST14, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST15, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST16, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST17, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST18, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST19, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST20, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST21, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST22, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST23, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST24, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST25, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST26, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST27, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST28, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST29, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST30, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST31, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST32, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST33, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST34, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST35, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST36, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST37, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST38, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST39, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST40, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST41, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST42, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST43, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST44, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST45, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST46, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST47, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST48, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST49, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST50, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST51, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST52, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST53, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST54, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST55, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST56, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST57, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST58, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST59, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST60, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST61, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST62, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST63, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST64, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST65, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST66, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST67, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST68, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST69, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST70, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST71, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST72, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST73, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST74, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST75, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST76, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST77, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST78, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST79, // Sprawdzanie poprawności działania funkcji lower_to_upper
            UTEST80, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST81, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST82, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST83, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST84, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST85, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST86, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST87, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST88, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST89, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST90, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST91, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST92, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST93, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST94, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST95, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST96, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST97, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST98, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST99, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST100, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST101, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST102, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST103, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST104, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST105, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST106, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST107, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST108, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST109, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST110, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST111, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST112, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST113, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST114, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST115, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST116, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST117, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST118, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST119, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST120, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST121, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST122, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST123, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST124, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST125, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST126, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST127, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST128, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST129, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST130, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST131, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST132, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST133, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST134, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST135, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST136, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST137, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST138, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST139, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST140, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST141, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST142, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST143, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST144, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST145, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST146, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST147, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST148, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST149, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST150, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST151, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST152, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST153, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST154, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST155, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST156, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST157, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST158, // Sprawdzanie poprawności działania funkcji upper_to_lower
            UTEST159, // Sprawdzanie poprawności działania funkcji space_to_dash
            UTEST160, // Sprawdzanie poprawności działania funkcji space_to_dash
            UTEST161, // Sprawdzanie poprawności działania funkcji space_to_dash
            UTEST162, // Sprawdzanie poprawności działania funkcji space_to_dash
            UTEST163, // Sprawdzanie poprawności działania funkcji space_to_dash
            UTEST164, // Sprawdzanie poprawności działania funkcji space_to_dash
            UTEST165, // Sprawdzanie poprawności działania funkcji space_to_dash
            UTEST166, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST167, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST168, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST169, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST170, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST171, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST172, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST173, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST174, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST175, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST176, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST177, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST178, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST179, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST180, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST181, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST182, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST183, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST184, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST185, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST186, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST187, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST188, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST189, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST190, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST191, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST192, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST193, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST194, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST195, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST196, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST197, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST198, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST199, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST200, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST201, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST202, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST203, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST204, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST205, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST206, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST207, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST208, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST209, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST210, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST211, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST212, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST213, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST214, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST215, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST216, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST217, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST218, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST219, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST220, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST221, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST222, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST223, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST224, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST225, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST226, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST227, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST228, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST229, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST230, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST231, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST232, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST233, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST234, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST235, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST236, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST237, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST238, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST239, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST240, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST241, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST242, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST243, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST244, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST245, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST246, // Sprawdzanie poprawności działania funkcji reverse_letter
            UTEST247, // Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów
            UTEST248, // Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów
            UTEST249, // Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów
            UTEST250, // Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2002 bajtów
            UTEST251, // Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 0 bajtów
            UTEST252, // Sprawdzanie poprawności działania funkcji letter_modifier - limit pamięci ustawiony na 2001 bajtów
            UTEST253, // Sprawdzanie poprawności działania funkcji letter_modifier
            UTEST254, // Sprawdzanie poprawności działania funkcji letter_modifier
            UTEST255, // Sprawdzanie poprawności działania funkcji letter_modifier
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
            test_summary(255); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci - limit ustawiony na 40 bajtów
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 1040 bajtów
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