/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Makra i bity
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-21 13:57:03.087021
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
//  Test 1: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 1;
                unsigned char value = 0;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 0, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 0, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 8, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 8, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 7;
                unsigned char value = 255;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 8, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 8, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 0, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 0, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 1;
                unsigned char value = 95;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 6, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 6, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 2, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 2, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 6;
                unsigned short value = 0;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 0, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 0, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 16, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 16, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 1, bits_cleared = 5;
                unsigned short value = 65535;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 16, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 16, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 0, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 0, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 2;
                unsigned short value = 48;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 2, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 2, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 14, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 14, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 7;
                unsigned int value = 0;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 0, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 0, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 32, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 32, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 8;
                unsigned int value = 4294967295;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 32, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 32, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 0, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 0, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 2;
                unsigned int value = 3602125553;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 16, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 16, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 16, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 16, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 5;
                unsigned long value = 0UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 0, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 0, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 64, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 64, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 7;
                unsigned long value = 18446744073709551615UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 64, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 64, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 0, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 0, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 1;
                unsigned long value = 1322533228660636704UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 32, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 32, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 32, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 32, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 1, bits_cleared = 2;
                unsigned long value = 2UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 5, bits_cleared = 7;
                unsigned long value = 4UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 1, bits_cleared = 8;
                unsigned long value = 8UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 8;
                unsigned long value = 16UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 6, bits_cleared = 6;
                unsigned long value = 32UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 8;
                unsigned long value = 64UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 6, bits_cleared = 5;
                unsigned long value = 128UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 5;
                unsigned long value = 256UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 6;
                unsigned long value = 512UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 1;
                unsigned long value = 1024UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 7;
                unsigned long value = 2048UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 5, bits_cleared = 4;
                unsigned long value = 4096UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 8;
                unsigned long value = 8192UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 5, bits_cleared = 4;
                unsigned long value = 16384UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 1;
                unsigned long value = 32768UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 1;
                unsigned long value = 65536UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 1, bits_cleared = 2;
                unsigned long value = 131072UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 3;
                unsigned long value = 262144UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 3;
                unsigned long value = 524288UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 8;
                unsigned long value = 1048576UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 2, bits_cleared = 8;
                unsigned long value = 2097152UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 2, bits_cleared = 7;
                unsigned long value = 4194304UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 1, bits_cleared = 2;
                unsigned long value = 8388608UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 2;
                unsigned long value = 16777216UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 6, bits_cleared = 6;
                unsigned long value = 33554432UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 6, bits_cleared = 1;
                unsigned long value = 67108864UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 6, bits_cleared = 2;
                unsigned long value = 134217728UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 5, bits_cleared = 3;
                unsigned long value = 268435456UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 5;
                unsigned long value = 536870912UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 7;
                unsigned long value = 1073741824UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 8;
                unsigned long value = 2147483648UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 5;
                unsigned long value = 4294967296UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 5;
                unsigned long value = 8589934592UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 8;
                unsigned long value = 17179869184UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 2;
                unsigned long value = 34359738368UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 8;
                unsigned long value = 68719476736UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 4;
                unsigned long value = 137438953472UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 7;
                unsigned long value = 274877906944UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 2, bits_cleared = 1;
                unsigned long value = 549755813888UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 1, bits_cleared = 2;
                unsigned long value = 1099511627776UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 1, bits_cleared = 2;
                unsigned long value = 2199023255552UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 7;
                unsigned long value = 4398046511104UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 55: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 5, bits_cleared = 3;
                unsigned long value = 8796093022208UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 56: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 5;
                unsigned long value = 17592186044416UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 57: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 5;
                unsigned long value = 35184372088832UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 58: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 6, bits_cleared = 1;
                unsigned long value = 70368744177664UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 59: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 6, bits_cleared = 3;
                unsigned long value = 140737488355328UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 60: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 5;
                unsigned long value = 281474976710656UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 61: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 1;
                unsigned long value = 562949953421312UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 62: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 1, bits_cleared = 2;
                unsigned long value = 1125899906842624UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 63: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 5, bits_cleared = 5;
                unsigned long value = 2251799813685248UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 64: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 3, bits_cleared = 6;
                unsigned long value = 4503599627370496UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 65: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 5, bits_cleared = 1;
                unsigned long value = 9007199254740992UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 66: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 7, bits_cleared = 6;
                unsigned long value = 18014398509481984UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 67: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 5;
                unsigned long value = 36028797018963968UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 68: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 2;
                unsigned long value = 72057594037927936UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 69: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 5, bits_cleared = 8;
                unsigned long value = 144115188075855872UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 70: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 6, bits_cleared = 2;
                unsigned long value = 288230376151711744UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 71: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 5, bits_cleared = 8;
                unsigned long value = 576460752303423488UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 72: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 1;
                unsigned long value = 1152921504606846976UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 73: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 8, bits_cleared = 6;
                unsigned long value = 2305843009213693952UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 74: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 1, bits_cleared = 7;
                unsigned long value = 4611686018427387904UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 75: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int bits_set = 4, bits_cleared = 1;
                unsigned long value = 9223372036854775808UL;

                printf("#####START#####");
                COUNT_BITS(value, &bits_set, &bits_cleared);
                printf("#####END#####");
                test_error(bits_set == 1, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 1, a ustawiła na %d", bits_set);
                test_error(bits_cleared == 63, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 63, a ustawiła na %d", bits_cleared);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 76: Sprawdzanie poprawności działania makra COUNT_BITS
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania makra COUNT_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int bits_set = 5, bits_cleared = 5;

            printf("#####START#####");
            COUNT_BITS(79 + 82, &bits_set, &bits_cleared);
            printf("#####END#####");
            test_error(bits_set == 3, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 3, a ustawiła na %d", bits_set);
            test_error(bits_cleared == 29, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 29, a ustawiła na %d", bits_cleared);

            printf("#####START#####");
            COUNT_BITS(79 + 82, &bits_set, &bits_cleared);
            printf("#####END#####");
            test_error(bits_set == 3, "Funkcja COUNT_BITS() powinna ustawić liczbę ustawionych bitów na 3, a ustawiła na %d", bits_set);
            test_error(bits_cleared == 29, "Funkcja COUNT_BITS() powinna ustawić liczbę wyzerowanych bitów na 29, a ustawiła na %d", bits_cleared);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 77: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char v = 0;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 0, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 0, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 0, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 0, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 78: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char v = 255;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 255, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 255, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 255, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 255, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 79: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char v = 95;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 250, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 250, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 95, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 250, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 80: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned short v = 0;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 0, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 0, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 0, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 0, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 81: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned short v = 65535;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 65535, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 65535, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 65535, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 65535, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 82: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned short v = 33448;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 5441, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 5441, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 33448, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 5441, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 83: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned int v = 0;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 0, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 0, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 0, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 0, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 84: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned int v = 4294967295;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4294967295, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4294967295, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4294967295, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4294967295, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 85: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned int v = 2316694414;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1909434449, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1909434449, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2316694414, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1909434449, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 86: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 0UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 0UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 0, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 0UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 0, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 87: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 18446744073709551615UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 18446744073709551615UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 18446744073709551615, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 18446744073709551615UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 18446744073709551615, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 88: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 17254518585708212426UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 5984934243916721911UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 5984934243916721911, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 17254518585708212426UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 5984934243916721911, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 89: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 2UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4611686018427387904UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4611686018427387904, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4611686018427387904, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 90: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 4UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2305843009213693952UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2305843009213693952, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2305843009213693952, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 91: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 8UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1152921504606846976UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1152921504606846976, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1152921504606846976, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 92: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 16UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 576460752303423488UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 576460752303423488, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 16UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 576460752303423488, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 93: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 32UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 288230376151711744UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 288230376151711744, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 32UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 288230376151711744, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 94: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 64UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 144115188075855872UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 144115188075855872, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 64UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 144115188075855872, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 95: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 128UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 72057594037927936UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 72057594037927936, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 128UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 72057594037927936, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 96: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 256UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 36028797018963968UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 36028797018963968, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 256UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 36028797018963968, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 97: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 512UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 18014398509481984UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 18014398509481984, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 512UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 18014398509481984, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 98: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 1024UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 9007199254740992UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 9007199254740992, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1024UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 9007199254740992, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 99: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 2048UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4503599627370496UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4503599627370496, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2048UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4503599627370496, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 100: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 4096UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2251799813685248UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2251799813685248, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4096UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2251799813685248, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 101: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 8192UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1125899906842624UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1125899906842624, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8192UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1125899906842624, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 102: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 16384UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 562949953421312UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 562949953421312, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 16384UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 562949953421312, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 103: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 32768UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 281474976710656UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 281474976710656, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 32768UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 281474976710656, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 104: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 65536UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 140737488355328UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 140737488355328, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 65536UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 140737488355328, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 105: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 131072UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 70368744177664UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 70368744177664, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 131072UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 70368744177664, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 106: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 262144UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 35184372088832UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 35184372088832, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 262144UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 35184372088832, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 107: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 524288UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 17592186044416UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 17592186044416, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 524288UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 17592186044416, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 108: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 1048576UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8796093022208UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8796093022208, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1048576UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8796093022208, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 109: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 2097152UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4398046511104UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4398046511104, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2097152UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4398046511104, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 110: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 4194304UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2199023255552UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2199023255552, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4194304UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2199023255552, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 111: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 8388608UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1099511627776UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1099511627776, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8388608UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1099511627776, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 112: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 16777216UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 549755813888UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 549755813888, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 16777216UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 549755813888, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 113: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 33554432UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 274877906944UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 274877906944, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 33554432UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 274877906944, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 114: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 67108864UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 137438953472UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 137438953472, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 67108864UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 137438953472, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 115: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 134217728UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 68719476736UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 68719476736, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 134217728UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 68719476736, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 116: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 268435456UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 34359738368UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 34359738368, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 268435456UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 34359738368, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 117: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 536870912UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 17179869184UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 17179869184, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 536870912UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 17179869184, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 118: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 1073741824UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8589934592UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8589934592, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1073741824UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8589934592, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 119: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 2147483648UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4294967296UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4294967296, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2147483648UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4294967296, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 120: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 4294967296UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2147483648UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2147483648, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4294967296UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2147483648, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 121: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 8589934592UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1073741824UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1073741824, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8589934592UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1073741824, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 122: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 17179869184UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 536870912UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 536870912, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 17179869184UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 536870912, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 123: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 34359738368UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 268435456UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 268435456, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 34359738368UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 268435456, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 124: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 68719476736UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 134217728UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 134217728, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 68719476736UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 134217728, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 125: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 137438953472UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 67108864UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 67108864, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 137438953472UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 67108864, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 126: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 274877906944UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 33554432UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 33554432, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 274877906944UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 33554432, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 127: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 549755813888UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 16777216UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 16777216, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 549755813888UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 16777216, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 128: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST128(void)
{
    // informacje o teście
    test_start(128, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 1099511627776UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8388608UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8388608, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1099511627776UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8388608, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 129: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST129(void)
{
    // informacje o teście
    test_start(129, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 2199023255552UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4194304UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4194304, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2199023255552UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4194304, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 130: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST130(void)
{
    // informacje o teście
    test_start(130, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 4398046511104UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2097152UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2097152, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4398046511104UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2097152, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 131: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST131(void)
{
    // informacje o teście
    test_start(131, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 8796093022208UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1048576UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1048576, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8796093022208UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1048576, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 132: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST132(void)
{
    // informacje o teście
    test_start(132, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 17592186044416UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 524288UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 524288, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 17592186044416UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 524288, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 133: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST133(void)
{
    // informacje o teście
    test_start(133, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 35184372088832UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 262144UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 262144, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 35184372088832UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 262144, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 134: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST134(void)
{
    // informacje o teście
    test_start(134, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 70368744177664UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 131072UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 131072, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 70368744177664UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 131072, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 135: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST135(void)
{
    // informacje o teście
    test_start(135, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 140737488355328UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 65536UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 65536, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 140737488355328UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 65536, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 136: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST136(void)
{
    // informacje o teście
    test_start(136, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 281474976710656UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 32768UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 32768, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 281474976710656UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 32768, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 137: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST137(void)
{
    // informacje o teście
    test_start(137, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 562949953421312UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 16384UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 16384, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 562949953421312UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 16384, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 138: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST138(void)
{
    // informacje o teście
    test_start(138, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 1125899906842624UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8192UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8192, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1125899906842624UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8192, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 139: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST139(void)
{
    // informacje o teście
    test_start(139, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 2251799813685248UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4096UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4096, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2251799813685248UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4096, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 140: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST140(void)
{
    // informacje o teście
    test_start(140, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 4503599627370496UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2048UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2048, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4503599627370496UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2048, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 141: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST141(void)
{
    // informacje o teście
    test_start(141, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 9007199254740992UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1024UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1024, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 9007199254740992UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1024, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 142: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST142(void)
{
    // informacje o teście
    test_start(142, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 18014398509481984UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 512UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 512, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 18014398509481984UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 512, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 143: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST143(void)
{
    // informacje o teście
    test_start(143, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 36028797018963968UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 256UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 256, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 36028797018963968UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 256, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 144: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST144(void)
{
    // informacje o teście
    test_start(144, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 72057594037927936UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 128UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 128, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 72057594037927936UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 128, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 145: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST145(void)
{
    // informacje o teście
    test_start(145, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 144115188075855872UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 64UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 64, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 144115188075855872UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 64, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 146: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST146(void)
{
    // informacje o teście
    test_start(146, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 288230376151711744UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 32UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 32, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 288230376151711744UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 32, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 147: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST147(void)
{
    // informacje o teście
    test_start(147, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 576460752303423488UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 16UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 16, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 576460752303423488UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 16, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 148: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST148(void)
{
    // informacje o teście
    test_start(148, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 1152921504606846976UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 8UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1152921504606846976UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 8, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 149: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST149(void)
{
    // informacje o teście
    test_start(149, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 2305843009213693952UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2305843009213693952UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 4, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 150: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST150(void)
{
    // informacje o teście
    test_start(150, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 4611686018427387904UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 2UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 4611686018427387904UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 2, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 151: Sprawdzanie poprawności działania makra REVERSE_BITS
//
void UTEST151(void)
{
    // informacje o teście
    test_start(151, "Sprawdzanie poprawności działania makra REVERSE_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned long v = 9223372036854775808UL;

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 1UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1, a ustawiła na %lu", v);

                printf("#####START#####");
                REVERSE_BITS(&v);
                printf("#####END#####");
                test_error(v == 9223372036854775808UL, "Funkcja REVERSE_BITS() niepoprawnie odwróciła kolejność bitów, powinna zwrócić 1, a ustawiła na %lu", v);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 152: Sprawdzanie poprawności działania makra DISPLAY_BITS
//
void UTEST152(void)
{
    // informacje o teście
    test_start(152, "Sprawdzanie poprawności działania makra DISPLAY_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    //-------------1-----------------------
            
                    unsigned char v = 159;
            
                    printf("Test 1: ***START***\n");
                    DISPLAY_BITS(v);
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
//  Test 153: Sprawdzanie poprawności działania makra DISPLAY_BITS
//
void UTEST153(void)
{
    // informacje o teście
    test_start(153, "Sprawdzanie poprawności działania makra DISPLAY_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    //-------------2-----------------------
            
                    unsigned short v = 30351;
            
                    printf("Test 2: ***START***\n");
                    DISPLAY_BITS(v);
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
//  Test 154: Sprawdzanie poprawności działania makra DISPLAY_BITS
//
void UTEST154(void)
{
    // informacje o teście
    test_start(154, "Sprawdzanie poprawności działania makra DISPLAY_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    //-------------3-----------------------
            
                    unsigned int v = 3761507840;
            
                    printf("Test 3: ***START***\n");
                    DISPLAY_BITS(v);
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
//  Test 155: Sprawdzanie poprawności działania makra DISPLAY_BITS
//
void UTEST155(void)
{
    // informacje o teście
    test_start(155, "Sprawdzanie poprawności działania makra DISPLAY_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    //-------------4-----------------------
            
                    unsigned long v = 10597078168399649630UL;
            
                    printf("Test 4: ***START***\n");
                    DISPLAY_BITS(v);
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
//  Test 156: Sprawdzanie poprawności działania makra DISPLAY_BITS
//
void UTEST156(void)
{
    // informacje o teście
    test_start(156, "Sprawdzanie poprawności działania makra DISPLAY_BITS", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                //-------------5-----------------------

                printf("Test 5: ***START***\n");
                DISPLAY_BITS(75 + 99);
                printf("***END***\n");
        
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
            UTEST1, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST2, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST3, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST4, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST5, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST6, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST7, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST8, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST9, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST10, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST11, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST12, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST13, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST14, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST15, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST16, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST17, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST18, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST19, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST20, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST21, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST22, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST23, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST24, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST25, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST26, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST27, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST28, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST29, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST30, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST31, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST32, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST33, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST34, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST35, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST36, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST37, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST38, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST39, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST40, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST41, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST42, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST43, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST44, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST45, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST46, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST47, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST48, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST49, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST50, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST51, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST52, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST53, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST54, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST55, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST56, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST57, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST58, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST59, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST60, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST61, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST62, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST63, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST64, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST65, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST66, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST67, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST68, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST69, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST70, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST71, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST72, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST73, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST74, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST75, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST76, // Sprawdzanie poprawności działania makra COUNT_BITS
            UTEST77, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST78, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST79, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST80, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST81, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST82, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST83, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST84, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST85, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST86, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST87, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST88, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST89, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST90, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST91, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST92, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST93, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST94, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST95, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST96, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST97, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST98, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST99, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST100, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST101, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST102, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST103, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST104, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST105, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST106, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST107, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST108, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST109, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST110, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST111, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST112, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST113, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST114, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST115, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST116, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST117, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST118, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST119, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST120, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST121, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST122, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST123, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST124, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST125, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST126, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST127, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST128, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST129, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST130, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST131, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST132, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST133, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST134, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST135, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST136, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST137, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST138, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST139, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST140, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST141, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST142, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST143, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST144, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST145, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST146, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST147, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST148, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST149, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST150, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST151, // Sprawdzanie poprawności działania makra REVERSE_BITS
            UTEST152, // Sprawdzanie poprawności działania makra DISPLAY_BITS
            UTEST153, // Sprawdzanie poprawności działania makra DISPLAY_BITS
            UTEST154, // Sprawdzanie poprawności działania makra DISPLAY_BITS
            UTEST155, // Sprawdzanie poprawności działania makra DISPLAY_BITS
            UTEST156, // Sprawdzanie poprawności działania makra DISPLAY_BITS
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
            test_summary(156); // wszystkie testy muszą zakończyć się sukcesem
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