/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Dodawanie
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-16 11:24:46.482254
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
//  Test 1: Sprawdzanie poprawności działania funkcji add
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 0LLU;
        
                printf("#####START#####");
                unsigned long long result = add(0LLU, 0LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji add
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 2LLU;
        
                printf("#####START#####");
                unsigned long long result = add(1LLU, 1LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji add
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 1LLU;
        
                printf("#####START#####");
                unsigned long long result = add(1LLU, 0LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji add
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 1LLU;
        
                printf("#####START#####");
                unsigned long long result = add(0LLU, 1LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji add
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 18446744073709551615LLU;
        
                printf("#####START#####");
                unsigned long long result = add(18446744073709551614LLU, 1LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji add
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 18446744073709551615LLU;
        
                printf("#####START#####");
                unsigned long long result = add(1LLU, 18446744073709551614LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji add
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 6135767498973148514LLU;
        
                printf("#####START#####");
                unsigned long long result = add(3829549894721245011LLU, 2306217604251903503LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji add
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 16819983809186217972LLU;
        
                printf("#####START#####");
                unsigned long long result = add(2755673118248338868LLU, 14064310690937879104LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji add
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 11036517423786295177LLU;
        
                printf("#####START#####");
                unsigned long long result = add(4694225078236960066LLU, 6342292345549335111LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji add
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 8769937717615094220LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5417247196277030487LLU, 3352690521338063733LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji add
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 10074919612195278203LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5707611038530654952LLU, 4367308573664623251LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji add
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 10320601752577671084LLU;
        
                printf("#####START#####");
                unsigned long long result = add(4635711369073941700LLU, 5684890383503729384LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji add
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 7258905390600418266LLU;
        
                printf("#####START#####");
                unsigned long long result = add(4088559350916363061LLU, 3170346039684055205LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji add
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 6733731684148163665LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5196000347985691204LLU, 1537731336162472461LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji add
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 7683728656490270998LLU;
        
                printf("#####START#####");
                unsigned long long result = add(226846747069246797LLU, 7456881909421024201LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji add
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 14006069049323080027LLU;
        
                printf("#####START#####");
                unsigned long long result = add(7436415787868759246LLU, 6569653261454320781LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji add
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 13886232969918129808LLU;
        
                printf("#####START#####");
                unsigned long long result = add(4120723811746784560LLU, 9765509158171345248LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji add
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 14595943331437477850LLU;
        
                printf("#####START#####");
                unsigned long long result = add(4766523362117480377LLU, 9829419969319997473LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji add
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 7465006126507830685LLU;
        
                printf("#####START#####");
                unsigned long long result = add(2129029802158514176LLU, 5335976324349316509LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji add
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 10046707538702556456LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5513719985198737115LLU, 4532987553503819341LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji add
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 6177015482987425195LLU;
        
                printf("#####START#####");
                unsigned long long result = add(1725444932025943441LLU, 4451570550961481754LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji add
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 12543777464074127012LLU;
        
                printf("#####START#####");
                unsigned long long result = add(1745417043750548986LLU, 10798360420323578026LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji add
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 11782154963473347372LLU;
        
                printf("#####START#####");
                unsigned long long result = add(8980696140572215070LLU, 2801458822901132302LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji add
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 6293779706500723569LLU;
        
                printf("#####START#####");
                unsigned long long result = add(1092594264415914752LLU, 5201185442084808817LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji add
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 13903038678635170155LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5137296637965733242LLU, 8765742040669436913LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji add
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 11341778271872940573LLU;
        
                printf("#####START#####");
                unsigned long long result = add(4360772433063902125LLU, 6981005838809038448LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji add
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 13442998205866120138LLU;
        
                printf("#####START#####");
                unsigned long long result = add(2858274513938371811LLU, 10584723691927748327LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji add
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 18073673302757741496LLU;
        
                printf("#####START#####");
                unsigned long long result = add(6877038089892844765LLU, 11196635212864896731LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji add
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 6423760618479382769LLU;
        
                printf("#####START#####");
                unsigned long long result = add(4850657558579352392LLU, 1573103059900030377LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji add
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 6824195928056114258LLU;
        
                printf("#####START#####");
                unsigned long long result = add(4768468960670021195LLU, 2055726967386093063LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji add
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 14318543781989146309LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5728910516107896264LLU, 8589633265881250045LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji add
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 8242514167785442792LLU;
        
                printf("#####START#####");
                unsigned long long result = add(1468196755672745494LLU, 6774317412112697298LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji add
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 8521097392908441967LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5478814741346132582LLU, 3042282651562309385LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji add
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 3683771272839853988LLU;
        
                printf("#####START#####");
                unsigned long long result = add(2235417549296588284LLU, 1448353723543265704LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji add
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 8574034618488360024LLU;
        
                printf("#####START#####");
                unsigned long long result = add(2149003084175500531LLU, 6425031534312859493LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji add
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 9276509014692338963LLU;
        
                printf("#####START#####");
                unsigned long long result = add(6128279470499775319LLU, 3148229544192563644LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji add
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 9594510550232369262LLU;
        
                printf("#####START#####");
                unsigned long long result = add(2642380824375547434LLU, 6952129725856821828LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji add
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 9794466959943178077LLU;
        
                printf("#####START#####");
                unsigned long long result = add(3961339374947437673LLU, 5833127584995740404LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji add
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 14955168814335995977LLU;
        
                printf("#####START#####");
                unsigned long long result = add(991533572572579938LLU, 13963635241763416039LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji add
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 13080509093623087737LLU;
        
                printf("#####START#####");
                unsigned long long result = add(8579531424066922692LLU, 4500977669556165045LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji add
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 9705214567932375438LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5185607786993027913LLU, 4519606780939347525LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji add
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 14907488127582074440LLU;
        
                printf("#####START#####");
                unsigned long long result = add(7300020760169435026LLU, 7607467367412639414LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji add
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 8503572749409272737LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5412530790283669135LLU, 3091041959125603602LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji add
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 1425408067754625834LLU;
        
                printf("#####START#####");
                unsigned long long result = add(1405780836116273583LLU, 19627231638352251LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji add
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 11323980007701866228LLU;
        
                printf("#####START#####");
                unsigned long long result = add(5593077018066998835LLU, 5730902989634867393LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania funkcji add
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long long expected_result = 14473562743364597702LLU;
        
                printf("#####START#####");
                unsigned long long result = add(8251782975327152435LLU, 6221779768037445267LLU);
                printf("#####END#####");
                test_error(result == expected_result, "Funkcja add() powinna zwrócić %llu, a zwróciła %llu", expected_result, result);

            
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
            UTEST1, // Sprawdzanie poprawności działania funkcji add
            UTEST2, // Sprawdzanie poprawności działania funkcji add
            UTEST3, // Sprawdzanie poprawności działania funkcji add
            UTEST4, // Sprawdzanie poprawności działania funkcji add
            UTEST5, // Sprawdzanie poprawności działania funkcji add
            UTEST6, // Sprawdzanie poprawności działania funkcji add
            UTEST7, // Sprawdzanie poprawności działania funkcji add
            UTEST8, // Sprawdzanie poprawności działania funkcji add
            UTEST9, // Sprawdzanie poprawności działania funkcji add
            UTEST10, // Sprawdzanie poprawności działania funkcji add
            UTEST11, // Sprawdzanie poprawności działania funkcji add
            UTEST12, // Sprawdzanie poprawności działania funkcji add
            UTEST13, // Sprawdzanie poprawności działania funkcji add
            UTEST14, // Sprawdzanie poprawności działania funkcji add
            UTEST15, // Sprawdzanie poprawności działania funkcji add
            UTEST16, // Sprawdzanie poprawności działania funkcji add
            UTEST17, // Sprawdzanie poprawności działania funkcji add
            UTEST18, // Sprawdzanie poprawności działania funkcji add
            UTEST19, // Sprawdzanie poprawności działania funkcji add
            UTEST20, // Sprawdzanie poprawności działania funkcji add
            UTEST21, // Sprawdzanie poprawności działania funkcji add
            UTEST22, // Sprawdzanie poprawności działania funkcji add
            UTEST23, // Sprawdzanie poprawności działania funkcji add
            UTEST24, // Sprawdzanie poprawności działania funkcji add
            UTEST25, // Sprawdzanie poprawności działania funkcji add
            UTEST26, // Sprawdzanie poprawności działania funkcji add
            UTEST27, // Sprawdzanie poprawności działania funkcji add
            UTEST28, // Sprawdzanie poprawności działania funkcji add
            UTEST29, // Sprawdzanie poprawności działania funkcji add
            UTEST30, // Sprawdzanie poprawności działania funkcji add
            UTEST31, // Sprawdzanie poprawności działania funkcji add
            UTEST32, // Sprawdzanie poprawności działania funkcji add
            UTEST33, // Sprawdzanie poprawności działania funkcji add
            UTEST34, // Sprawdzanie poprawności działania funkcji add
            UTEST35, // Sprawdzanie poprawności działania funkcji add
            UTEST36, // Sprawdzanie poprawności działania funkcji add
            UTEST37, // Sprawdzanie poprawności działania funkcji add
            UTEST38, // Sprawdzanie poprawności działania funkcji add
            UTEST39, // Sprawdzanie poprawności działania funkcji add
            UTEST40, // Sprawdzanie poprawności działania funkcji add
            UTEST41, // Sprawdzanie poprawności działania funkcji add
            UTEST42, // Sprawdzanie poprawności działania funkcji add
            UTEST43, // Sprawdzanie poprawności działania funkcji add
            UTEST44, // Sprawdzanie poprawności działania funkcji add
            UTEST45, // Sprawdzanie poprawności działania funkcji add
            UTEST46, // Sprawdzanie poprawności działania funkcji add
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
            test_summary(46); // wszystkie testy muszą zakończyć się sukcesem
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