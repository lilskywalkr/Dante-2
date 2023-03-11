/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Sortowanie 2D
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-01 11:20:03.593205
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
//  Test 1: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int res = comp_sum((int[]){14 ,15 ,14 ,14 ,15}, (int[]){9 ,5 ,3 ,7 ,5}, 5);
        
                test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być liczba 1", res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int res = comp_sum((int[]){15 ,15 ,14 ,11 ,11}, (int[]){-57 ,-70 ,-77 ,-52 ,-53}, 5);
        
                test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być liczba 1", res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int res = comp_sum((int[]){12 ,14 ,13 ,11 ,14 ,13 ,12 ,15 ,12 ,14}, (int[]){-97 ,-19 ,-66 ,-9 ,10 ,-81 ,-19 ,-39 ,9 ,-61}, 10);
        
                test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być liczba 1", res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int res = comp_sum((int[]){9 ,8 ,4 ,2 ,7}, (int[]){11 ,14 ,13 ,14 ,10}, 5);
        
                test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być liczba -1", res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int res = comp_sum((int[]){-17 ,-59 ,-58 ,-38 ,-81 ,-18 ,-19 ,-80 ,-87}, (int[]){13 ,13 ,10 ,15 ,11 ,15 ,10 ,11 ,13}, 9);
        
                test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być liczba -1", res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int res = comp_sum((int[]){-10 ,-85 ,-40 ,-79 ,-73 ,-81 ,-23 ,-7}, (int[]){10 ,13 ,10 ,13 ,11 ,15 ,10 ,14}, 8);
        
                test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być liczba -1", res);
            
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                 int res = comp_sum((int[]){67 ,11 ,46 ,11 ,24}, (int[]){11 ,24 ,67 ,46 ,11}, 5);

                 test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być liczba równa 0", res);

             
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                 int res = comp_sum((int[]){-37 ,-64 ,-39 ,-47 ,-81 ,-16 ,-25 ,-8 ,-79 ,-61}, (int[]){-8 ,-37 ,-47 ,-39 ,-16 ,-79 ,-81 ,-25 ,-61 ,-64}, 10);

                 test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być liczba równa 0", res);

             
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                 int res = comp_sum((int[]){4 ,-46 ,-43 ,-14 ,-3 ,26 ,46}, (int[]){-14 ,4 ,-43 ,46 ,-3 ,-46 ,26}, 7);

                 test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być liczba równa 0", res);

             
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_sum((int[]){44 ,-33 ,47 ,-23 ,12 ,-42 ,47 ,38}, (int[]){47 ,-42 ,12 ,38 ,44 ,47 ,-32 ,-23}, 8);
             test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinno być -1", res);
             
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


             int res = comp_sum((int[]){47 ,-42 ,12 ,38 ,44 ,47 ,-32 ,-23}, (int[]){44 ,-33 ,47 ,-23 ,12 ,-42 ,47 ,38}, 8);
             test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinno być 1", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            
             int res = comp_sum((int[]){47 ,-42 ,12 ,38 ,44 ,47 ,-32 ,-23}, NULL, 8);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być 2", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_sum(NULL, (int[]){44 ,-33 ,47 ,-23 ,12 ,-42 ,47 ,38}, 8);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być 2", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_sum(NULL, NULL, 8);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być 2", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji comp_sum
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji comp_sum", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_sum((int[]){47 ,-42 ,12 ,38 ,44 ,47 ,-32 ,-23}, (int[]){44 ,-33 ,47 ,-23 ,12 ,-42 ,47 ,38}, -8);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_sum() jest niewłaściwa, powinna być 2", res);
         
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_max((int[]){10 ,10 ,12 ,13 ,15 ,15}, (int[]){1 ,2 ,6 ,2 ,5 ,8}, 6);

                test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być liczba 1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_max((int[]){15 ,10 ,14 ,13 ,11 ,15 ,11}, (int[]){-21 ,-25 ,-45 ,-60 ,-57 ,-69 ,-47}, 7);

                test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być liczba 1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_max((int[]){15 ,15 ,11 ,12 ,14 ,15 ,14 ,12 ,14 ,15}, (int[]){-4 ,-23 ,-19 ,-58 ,-4 ,-81 ,-73 ,-86 ,-75 ,-67}, 10);

                test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być liczba 1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_max((int[]){2 ,4 ,1 ,1 ,4 ,4 ,9}, (int[]){11 ,11 ,14 ,10 ,14 ,14 ,12}, 7);

                test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być liczba -1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_max((int[]){-15 ,-85 ,-45 ,-79 ,-65 ,-45 ,-78 ,-51}, (int[]){14 ,15 ,12 ,15 ,15 ,15 ,14 ,10}, 8);

                test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być liczba -1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_max((int[]){-63 ,-30 ,-12 ,0 ,-87 ,-50 ,-78 ,-85 ,7 ,-80}, (int[]){10 ,13 ,12 ,11 ,14 ,12 ,14 ,12 ,12 ,15}, 10);

                test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być liczba -1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                 int res = comp_max((int[]){62 ,98 ,47 ,49 ,31 ,28}, (int[]){98 ,28 ,31 ,47 ,49 ,62}, 6);

                 test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być liczba równa 0", res);

             
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                 int res = comp_max((int[]){-29 ,-45 ,-22 ,-83 ,-80 ,-95 ,4 ,3}, (int[]){-29 ,-22 ,4 ,-95 ,-80 ,-45 ,-83 ,3}, 8);

                 test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być liczba równa 0", res);

             
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                 int res = comp_max((int[]){-30 ,30 ,31 ,12 ,25 ,-21 ,9 ,-35}, (int[]){-30 ,-21 ,12 ,-35 ,30 ,9 ,31 ,25}, 8);

                 test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być liczba równa 0", res);

             
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_max((int[]){-32 ,-10 ,13 ,20 ,31 ,-35 ,-22 ,32 ,3 ,24}, (int[]){-32 ,31 ,-10 ,-22 ,3 ,33 ,13 ,24 ,-35 ,20}, 10);
             test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinno być -1", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


             int res = comp_max((int[]){-32 ,31 ,-10 ,-22 ,3 ,33 ,13 ,24 ,-35 ,20}, (int[]){-32 ,-10 ,13 ,20 ,31 ,-35 ,-22 ,32 ,3 ,24}, 10);
             test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinno być 1", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_max((int[]){-32 ,31 ,-10 ,-22 ,3 ,33 ,13 ,24 ,-35 ,20}, NULL, 10);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być 2", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_max(NULL, (int[]){-32 ,-10 ,13 ,20 ,31 ,-35 ,-22 ,32 ,3 ,24}, 10);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być 2", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_max(NULL, NULL, 10);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być 2", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji comp_max
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji comp_max", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_max((int[]){-32 ,31 ,-10 ,-22 ,3 ,33 ,13 ,24 ,-35 ,20}, (int[]){-32 ,-10 ,13 ,20 ,31 ,-35 ,-22 ,32 ,3 ,24}, -10);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_max() jest niewłaściwa, powinna być 2", res);
         
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_min((int[]){15 ,10 ,10 ,13 ,13 ,12 ,15 ,10 ,14 ,11}, (int[]){5 ,1 ,3 ,5 ,1 ,6 ,9 ,2 ,4 ,8}, 10);

                test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być liczba 1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_min((int[]){13 ,12 ,12 ,11 ,11 ,14 ,10 ,13 ,15}, (int[]){-74 ,-35 ,-25 ,-96 ,-32 ,-36 ,-22 ,-44 ,-27}, 9);

                test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być liczba 1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_min((int[]){14 ,13 ,11 ,10 ,11}, (int[]){-96 ,-60 ,-51 ,-94 ,7}, 5);

                test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być liczba 1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_min((int[]){8 ,8 ,3 ,1 ,8}, (int[]){12 ,14 ,12 ,13 ,11}, 5);

                test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być liczba -1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_min((int[]){-17 ,-80 ,-11 ,-45 ,-59 ,-42 ,-12 ,-50}, (int[]){13 ,11 ,11 ,12 ,10 ,12 ,15 ,15}, 8);

                test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być liczba -1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = comp_min((int[]){-58 ,-23 ,-96 ,-71 ,-64 ,-92 ,-14 ,3}, (int[]){11 ,15 ,10 ,13 ,12 ,12 ,12 ,14}, 8);

                test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być liczba -1", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                 int res = comp_min((int[]){69 ,81 ,92 ,77 ,12 ,91 ,52 ,17 ,99 ,71}, (int[]){52 ,12 ,91 ,71 ,77 ,92 ,17 ,99 ,69 ,81}, 10);

                 test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być liczba równa 0", res);

             
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                 int res = comp_min((int[]){-73 ,-12 ,-41 ,-68 ,1 ,-12}, (int[]){-73 ,-68 ,-12 ,-12 ,1 ,-41}, 6);

                 test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być liczba równa 0", res);

             
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                 int res = comp_min((int[]){48 ,-28 ,49 ,28 ,-32 ,44 ,26 ,-39 ,-36 ,35}, (int[]){-36 ,35 ,28 ,26 ,44 ,-39 ,-28 ,-32 ,49 ,48}, 10);

                 test_error(res == 0, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być liczba równa 0", res);

             
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_min((int[]){-7 ,17 ,-49 ,17 ,47 ,-2 ,1 ,46 ,48}, (int[]){-7 ,-2 ,47 ,1 ,46 ,17 ,48 ,17 ,-50}, 9);
             test_error(res == 1, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinno być -1", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


             int res = comp_min((int[]){-7 ,-2 ,47 ,1 ,46 ,17 ,48 ,17 ,-50}, (int[]){-7 ,17 ,-49 ,17 ,47 ,-2 ,1 ,46 ,48}, 9);
             test_error(res == -1, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinno być 1", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_min((int[]){-7 ,-2 ,47 ,1 ,46 ,17 ,48 ,17 ,-50}, NULL, 9);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być 2", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_min(NULL, (int[]){-7 ,17 ,-49 ,17 ,47 ,-2 ,1 ,46 ,48}, 9);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być 2", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_min(NULL, NULL, 9);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być 2", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji comp_min
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji comp_min", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int res = comp_min((int[]){-7 ,-2 ,47 ,1 ,46 ,17 ,48 ,17 ,-50}, (int[]){-7 ,17 ,-49 ,17 ,47 ,-2 ,1 ,46 ,48}, -9);
             test_error(res == 2, "Wartość %d zwrócona przez funkcję comp_min() jest niewłaściwa, powinna być 2", res);
         
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania funkcji sort_rows
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji sort_rows", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int *tab[9] = {(int[]){18 ,20 ,8 ,9 ,15} ,(int[]){13 ,8 ,3 ,10 ,1} ,(int[]){4 ,3 ,4 ,3 ,11} ,(int[]){-4 ,-13 ,-8 ,-19 ,-17} ,(int[]){-16 ,-9 ,-18 ,-17 ,-4} ,(int[]){-1 ,-17 ,-4 ,-9 ,-19} ,(int[]){2 ,-6 ,-15 ,0 ,-4} ,(int[]){19 ,0 ,3 ,13 ,-12} ,(int[]){10 ,-14 ,2 ,4 ,-18}};
            int *tab_sorted[9] = {(int[]){-4 ,-13 ,-8 ,-19 ,-17} ,(int[]){-1 ,-17 ,-4 ,-9 ,-19} ,(int[]){-16 ,-9 ,-18 ,-17 ,-4} ,(int[]){10 ,-14 ,2 ,4 ,-18} ,(int[]){2 ,-6 ,-15 ,0 ,-4} ,(int[]){19 ,0 ,3 ,13 ,-12} ,(int[]){13 ,8 ,3 ,10 ,1} ,(int[]){4 ,3 ,4 ,3 ,11} ,(int[]){18 ,20 ,8 ,9 ,15}};

            int res = sort_rows(tab, 5, 9, comp_min);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 9; ++i)
            {
                for (int j = 0; j < 5; ++j)
                    printf("%d ", tab_sorted[i][j]);
                    
                printf("\n");
            }
            printf("\n");

            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 9; ++i)
            {
                for (int j = 0; j < 5; ++j)
                    printf("%d ", tab[i][j]);
            
                printf("\n");
            }
            
            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort_rows() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 9 - 1; ++i)
                test_error(comp_min(tab[i], tab[i + 1], 5) <= 0, "Wynik porównania wierszy %d i %d jest niewłaściwy, powinna być wartość większa bądź równa 0", i, i + 1);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie poprawności działania funkcji sort_rows
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji sort_rows", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int *tab[8] = {(int[]){3 ,7 ,2 ,6 ,9 ,18 ,2 ,10} ,(int[]){14 ,14 ,13 ,7 ,11 ,19 ,8 ,18} ,(int[]){15 ,15 ,8 ,10 ,13 ,12 ,3 ,18} ,(int[]){18 ,19 ,15 ,5 ,17 ,18 ,11 ,15} ,(int[]){-7 ,-10 ,-12 ,-9 ,-1 ,-8 ,-14 ,-2} ,(int[]){-16 ,-3 ,-11 ,-11 ,-1 ,-4 ,-11 ,-17} ,(int[]){9 ,2 ,-20 ,13 ,4 ,16 ,-6 ,-3} ,(int[]){-13 ,-11 ,-8 ,-16 ,19 ,-4 ,15 ,15}};
            int *tab_sorted[8] = {(int[]){-7 ,-10 ,-12 ,-9 ,-1 ,-8 ,-14 ,-2} ,(int[]){-16 ,-3 ,-11 ,-11 ,-1 ,-4 ,-11 ,-17} ,(int[]){9 ,2 ,-20 ,13 ,4 ,16 ,-6 ,-3} ,(int[]){3 ,7 ,2 ,6 ,9 ,18 ,2 ,10} ,(int[]){15 ,15 ,8 ,10 ,13 ,12 ,3 ,18} ,(int[]){14 ,14 ,13 ,7 ,11 ,19 ,8 ,18} ,(int[]){18 ,19 ,15 ,5 ,17 ,18 ,11 ,15} ,(int[]){-13 ,-11 ,-8 ,-16 ,19 ,-4 ,15 ,15}};

            int res = sort_rows(tab, 8, 8, comp_max);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 8; ++i)
            {
                for (int j = 0; j < 8; ++j)
                    printf("%d ", tab_sorted[i][j]);

                printf("\n");
            }
            printf("\n");

            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 8; ++i)
            {
                for (int j = 0; j < 8; ++j)
                    printf("%d ", tab[i][j]);

                printf("\n");
            }

            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort_rows() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 8 - 1; ++i)
                test_error(comp_max(tab[i], tab[i + 1], 8) <= 0, "Wynik porównania wierszy %d i %d jest niewłaściwy, powinna być wartość większa bądź równa 0", i, i + 1);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie poprawności działania funkcji sort_rows
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji sort_rows", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int *tab[7] = {(int[]){15 ,16 ,7 ,19 ,10 ,1 ,20 ,8} ,(int[]){9 ,4 ,13 ,17 ,1 ,9 ,12 ,2} ,(int[]){-8 ,-6 ,-14 ,-10 ,-8 ,-1 ,-6 ,-1} ,(int[]){-4 ,-16 ,-1 ,-3 ,-13 ,-12 ,-13 ,-5} ,(int[]){16 ,-20 ,20 ,19 ,14 ,11 ,-6 ,-11} ,(int[]){-17 ,8 ,19 ,-19 ,1 ,-17 ,-2 ,-7} ,(int[]){10 ,-6 ,0 ,0 ,-8 ,11 ,20 ,2}};
            int *tab_sorted[7] = {(int[]){-4 ,-16 ,-1 ,-3 ,-13 ,-12 ,-13 ,-5} ,(int[]){-8 ,-6 ,-14 ,-10 ,-8 ,-1 ,-6 ,-1} ,(int[]){-17 ,8 ,19 ,-19 ,1 ,-17 ,-2 ,-7} ,(int[]){10 ,-6 ,0 ,0 ,-8 ,11 ,20 ,2} ,(int[]){16 ,-20 ,20 ,19 ,14 ,11 ,-6 ,-11} ,(int[]){9 ,4 ,13 ,17 ,1 ,9 ,12 ,2} ,(int[]){15 ,16 ,7 ,19 ,10 ,1 ,20 ,8}};

            int res = sort_rows(tab, 8, 7, comp_sum);

            printf("Oczekiwany wynik sortowania: ");
            for (int i = 0; i < 7; ++i)
            {
                for (int j = 0; j < 8; ++j)
                    printf("%d ", tab_sorted[i][j]);

                printf("\n");
            }
            printf("\n");

            printf("Otrzymany wynik sortowania: ");
            for (int i = 0; i < 7; ++i)
            {
                for (int j = 0; j < 8; ++j)
                    printf("%d ", tab[i][j]);

                printf("\n");
            }

            printf("\n");

            test_error(res == 0, "Wartość %d zwrócona przez funkcję sort_rows() jest niewłaściwa, powinno być 0", res);

            for (int i = 0; i < 7 - 1; ++i)
                test_error(comp_sum(tab[i], tab[i + 1], 8) <= 0, "Wynik porównania wierszy %d i %d jest niewłaściwy, powinna być wartość większa bądź równa 0", i, i + 1);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania funkcji sort_rows
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji sort_rows", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int *tab[7] = {(int[]){15 ,16 ,7 ,19 ,10 ,1 ,20 ,8} ,(int[]){9 ,4 ,13 ,17 ,1 ,9 ,12 ,2} ,(int[]){-8 ,-6 ,-14 ,-10 ,-8 ,-1 ,-6 ,-1} ,(int[]){-4 ,-16 ,-1 ,-3 ,-13 ,-12 ,-13 ,-5} ,(int[]){16 ,-20 ,20 ,19 ,14 ,11 ,-6 ,-11} ,(int[]){-17 ,8 ,19 ,-19 ,1 ,-17 ,-2 ,-7} ,(int[]){10 ,-6 ,0 ,0 ,-8 ,11 ,20 ,2}};
         
            int res = sort_rows(NULL, 8, 7, comp_sum);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_rows() jest niewłaściwa, powinno być 1", res);
                
            res = sort_rows(tab, -8, 7, comp_sum);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_rows() jest niewłaściwa, powinno być 1", res);

            res = sort_rows(tab, 8, -7, comp_sum);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_rows() jest niewłaściwa, powinno być 1", res);

            res = sort_rows(tab, 8, 7, NULL);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_rows() jest niewłaściwa, powinno być 1", res);

            res = sort_rows(tab, 0, 7, comp_sum);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_rows() jest niewłaściwa, powinno być 1", res);

            res = sort_rows(tab, 8, 0, comp_sum);
            test_error(res == 1, "Wartość %d zwrócona przez funkcję sort_rows() jest niewłaściwa, powinno być 1", res);

        
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
    rldebug_heap_set_global_limit(56);
    
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
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 56 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 56 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(56);
    
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
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 88 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 88 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(88);
    
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
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 120 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 120 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(120);
    
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
//  Test 5: Reakcja na brak pamięci - limit ustawiony na 152 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit ustawiony na 152 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(152);
    
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
//  Test 6: Reakcja na brak pamięci - limit ustawiony na 184 bajtów
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na brak pamięci - limit ustawiony na 184 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(184);
    
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
//  Test 7: Reakcja na brak pamięci - limit ustawiony na 216 bajtów
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na brak pamięci - limit ustawiony na 216 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(216);
    
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
//  Test 8: Reakcja na brak pamięci - limit ustawiony na 248 bajtów
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na brak pamięci - limit ustawiony na 248 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(248);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST2, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST3, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST4, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST5, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST6, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST7, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST8, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST9, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST10, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST11, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST12, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST13, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST14, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST15, // Sprawdzanie poprawności działania funkcji comp_sum
            UTEST16, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST17, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST18, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST19, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST20, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST21, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST22, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST23, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST24, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST25, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST26, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST27, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST28, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST29, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST30, // Sprawdzanie poprawności działania funkcji comp_max
            UTEST31, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST32, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST33, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST34, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST35, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST36, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST37, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST38, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST39, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST40, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST41, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST42, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST43, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST44, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST45, // Sprawdzanie poprawności działania funkcji comp_min
            UTEST46, // Sprawdzanie poprawności działania funkcji sort_rows
            UTEST47, // Sprawdzanie poprawności działania funkcji sort_rows
            UTEST48, // Sprawdzanie poprawności działania funkcji sort_rows
            UTEST49, // Sprawdzanie poprawności działania funkcji sort_rows
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
            test_summary(49); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 56 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 88 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 120 bajtów
            MTEST5, // Reakcja na brak pamięci - limit ustawiony na 152 bajtów
            MTEST6, // Reakcja na brak pamięci - limit ustawiony na 184 bajtów
            MTEST7, // Reakcja na brak pamięci - limit ustawiony na 216 bajtów
            MTEST8, // Reakcja na brak pamięci - limit ustawiony na 248 bajtów
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
            test_summary(8); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}