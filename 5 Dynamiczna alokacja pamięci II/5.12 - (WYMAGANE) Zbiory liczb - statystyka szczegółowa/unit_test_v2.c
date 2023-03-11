/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Zbiory liczb - statystyka szczegółowa
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-19 21:15:49.634661
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


        struct statistic_t
        {
          int min;
          int max;
          float avg;
          float standard_deviation;
          int range;
        };    
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji display
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("\n***TEST 1***\n\n");
            printf("***START***\n");
            display(NULL);
            printf("***END***\n");

            test_no_heap_leakage();
            onerror_terminate();
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji display
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji display", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int K[] = {-2, -879, -954, -1};
    int X[] = {300, 499, 41, 491, 844, 764, -1};
    int M[] = {-752, -855, -908, -344, -628, -116, -230, -408, -135, -598, -1};
    int I[] = {529, 681, 234, 864, 418, 797, 923, 81, 280, 354, -1};
    int S[] = {436, 748, 193, 881, 279, 484, 369, 47, 659, 924, -1};
    int R[] = {664, 364, 835, 534, 260, 785, 850, 996, 271, 819, -1};
    int J[] = {-1};
    int P[] = {-314, -273, -815, -370, -531, -605, -275, -1};
    int F[] = {-425, -779, -322, -624, -1};
    int *B[] = {K, X, M, I, S, R, J, P, F, NULL};
      

            printf("\n***TEST 1***\n\n");
            printf("***START***\n");
            display(B);
            printf("***END***\n");

            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji statistics_row
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji statistics_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct statistic_t *stats;

                int K[] = {-2, -879, -954, -1};
    int X[] = {300, 499, 41, 491, 844, 764, -1};
    int M[] = {-752, -855, -908, -344, -628, -116, -230, -408, -135, -598, -1};
    int I[] = {529, 681, 234, 864, 418, 797, 923, 81, 280, 354, -1};
    int S[] = {436, 748, 193, 881, 279, 484, 369, 47, 659, 924, -1};
    int R[] = {664, 364, 835, 534, 260, 785, 850, 996, 271, 819, -1};
    int J[] = {-1};
    int P[] = {-314, -273, -815, -370, -531, -605, -275, -1};
    int F[] = {-425, -779, -322, -624, -1};
    int *B[] = {K, X, M, I, S, R, J, P, F, NULL};
      

                int err_code = statistics_row(B, &stats);
                test_error(err_code == 9, "Funkcja statistics_row() powinna zwrócić  9, a zwróciła %d", err_code);

                test_error(stats != NULL, "Funkcja statistics_row() powinna zaalokować pamięć na strukturę stats, a przypisała NULL");

                onerror_terminate();

                           
                 
                    test_error((stats + 0)->min == -954, "Funkcja statistics_row() powinna ustawić minimum na -954, a ustawiła na %d", (stats + 0)->min);
                    test_error((stats + 0)->max == -2, "Funkcja statistics_row() powinna ustawić maximum na -2, a ustawiła na %d", (stats + 0)->max);
                    test_error((stats + 0)->range == 952, "Funkcja statistics_row() powinna ustawić zakres na 952, a ustawiła na %d", (stats + 0)->range);
                    test_error(((stats + 0)->avg > -611.6666666666666 - 0.01) && ((stats + 0)->avg < -611.6666666666666 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -611.6666666666666, a ustawiła na %f", (stats + 0)->avg);
                    test_error(((stats + 0)->standard_deviation > 432.1854026019647 - 0.01) && ((stats + 0)->standard_deviation < 432.1854026019647 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 432.1854026019647, a ustawiła na %f", (stats + 0)->standard_deviation);
                           
                 
                    test_error((stats + 1)->min == 41, "Funkcja statistics_row() powinna ustawić minimum na 41, a ustawiła na %d", (stats + 1)->min);
                    test_error((stats + 1)->max == 844, "Funkcja statistics_row() powinna ustawić maximum na 844, a ustawiła na %d", (stats + 1)->max);
                    test_error((stats + 1)->range == 803, "Funkcja statistics_row() powinna ustawić zakres na 803, a ustawiła na %d", (stats + 1)->range);
                    test_error(((stats + 1)->avg > 489.8333333333333 - 0.01) && ((stats + 1)->avg < 489.8333333333333 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 489.8333333333333, a ustawiła na %f", (stats + 1)->avg);
                    test_error(((stats + 1)->standard_deviation > 270.2390402752513 - 0.01) && ((stats + 1)->standard_deviation < 270.2390402752513 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 270.2390402752513, a ustawiła na %f", (stats + 1)->standard_deviation);
                           
                 
                    test_error((stats + 2)->min == -908, "Funkcja statistics_row() powinna ustawić minimum na -908, a ustawiła na %d", (stats + 2)->min);
                    test_error((stats + 2)->max == -116, "Funkcja statistics_row() powinna ustawić maximum na -116, a ustawiła na %d", (stats + 2)->max);
                    test_error((stats + 2)->range == 792, "Funkcja statistics_row() powinna ustawić zakres na 792, a ustawiła na %d", (stats + 2)->range);
                    test_error(((stats + 2)->avg > -497.4 - 0.01) && ((stats + 2)->avg < -497.4 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -497.4, a ustawiła na %f", (stats + 2)->avg);
                    test_error(((stats + 2)->standard_deviation > 277.1812403464564 - 0.01) && ((stats + 2)->standard_deviation < 277.1812403464564 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 277.1812403464564, a ustawiła na %f", (stats + 2)->standard_deviation);
                           
                 
                    test_error((stats + 3)->min == 81, "Funkcja statistics_row() powinna ustawić minimum na 81, a ustawiła na %d", (stats + 3)->min);
                    test_error((stats + 3)->max == 923, "Funkcja statistics_row() powinna ustawić maximum na 923, a ustawiła na %d", (stats + 3)->max);
                    test_error((stats + 3)->range == 842, "Funkcja statistics_row() powinna ustawić zakres na 842, a ustawiła na %d", (stats + 3)->range);
                    test_error(((stats + 3)->avg > 516.1 - 0.01) && ((stats + 3)->avg < 516.1 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 516.1, a ustawiła na %f", (stats + 3)->avg);
                    test_error(((stats + 3)->standard_deviation > 274.48149300089426 - 0.01) && ((stats + 3)->standard_deviation < 274.48149300089426 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 274.48149300089426, a ustawiła na %f", (stats + 3)->standard_deviation);
                           
                 
                    test_error((stats + 4)->min == 47, "Funkcja statistics_row() powinna ustawić minimum na 47, a ustawiła na %d", (stats + 4)->min);
                    test_error((stats + 4)->max == 924, "Funkcja statistics_row() powinna ustawić maximum na 924, a ustawiła na %d", (stats + 4)->max);
                    test_error((stats + 4)->range == 877, "Funkcja statistics_row() powinna ustawić zakres na 877, a ustawiła na %d", (stats + 4)->range);
                    test_error(((stats + 4)->avg > 502.0 - 0.01) && ((stats + 4)->avg < 502.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 502.0, a ustawiła na %f", (stats + 4)->avg);
                    test_error(((stats + 4)->standard_deviation > 279.5521418268871 - 0.01) && ((stats + 4)->standard_deviation < 279.5521418268871 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 279.5521418268871, a ustawiła na %f", (stats + 4)->standard_deviation);
                           
                 
                    test_error((stats + 5)->min == 260, "Funkcja statistics_row() powinna ustawić minimum na 260, a ustawiła na %d", (stats + 5)->min);
                    test_error((stats + 5)->max == 996, "Funkcja statistics_row() powinna ustawić maximum na 996, a ustawiła na %d", (stats + 5)->max);
                    test_error((stats + 5)->range == 736, "Funkcja statistics_row() powinna ustawić zakres na 736, a ustawiła na %d", (stats + 5)->range);
                    test_error(((stats + 5)->avg > 637.8 - 0.01) && ((stats + 5)->avg < 637.8 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 637.8, a ustawiła na %f", (stats + 5)->avg);
                    test_error(((stats + 5)->standard_deviation > 251.08317347046577 - 0.01) && ((stats + 5)->standard_deviation < 251.08317347046577 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 251.08317347046577, a ustawiła na %f", (stats + 5)->standard_deviation);
                           
                 
                    test_error((stats + 6)->min == -1, "Funkcja statistics_row() powinna ustawić minimum na -1, a ustawiła na %d", (stats + 6)->min);
                    test_error((stats + 6)->max == -1, "Funkcja statistics_row() powinna ustawić maximum na -1, a ustawiła na %d", (stats + 6)->max);
                    test_error((stats + 6)->range == -1, "Funkcja statistics_row() powinna ustawić zakres na -1, a ustawiła na %d", (stats + 6)->range);
                    test_error(((stats + 6)->avg > -1 - 0.01) && ((stats + 6)->avg < -1 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -1, a ustawiła na %f", (stats + 6)->avg);
                    test_error(((stats + 6)->standard_deviation > -1 - 0.01) && ((stats + 6)->standard_deviation < -1 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na -1, a ustawiła na %f", (stats + 6)->standard_deviation);
                           
                 
                    test_error((stats + 7)->min == -815, "Funkcja statistics_row() powinna ustawić minimum na -815, a ustawiła na %d", (stats + 7)->min);
                    test_error((stats + 7)->max == -273, "Funkcja statistics_row() powinna ustawić maximum na -273, a ustawiła na %d", (stats + 7)->max);
                    test_error((stats + 7)->range == 542, "Funkcja statistics_row() powinna ustawić zakres na 542, a ustawiła na %d", (stats + 7)->range);
                    test_error(((stats + 7)->avg > -454.7142857142857 - 0.01) && ((stats + 7)->avg < -454.7142857142857 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -454.7142857142857, a ustawiła na %f", (stats + 7)->avg);
                    test_error(((stats + 7)->standard_deviation > 189.1731740916728 - 0.01) && ((stats + 7)->standard_deviation < 189.1731740916728 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 189.1731740916728, a ustawiła na %f", (stats + 7)->standard_deviation);
                           
                 
                    test_error((stats + 8)->min == -779, "Funkcja statistics_row() powinna ustawić minimum na -779, a ustawiła na %d", (stats + 8)->min);
                    test_error((stats + 8)->max == -322, "Funkcja statistics_row() powinna ustawić maximum na -322, a ustawiła na %d", (stats + 8)->max);
                    test_error((stats + 8)->range == 457, "Funkcja statistics_row() powinna ustawić zakres na 457, a ustawiła na %d", (stats + 8)->range);
                    test_error(((stats + 8)->avg > -537.5 - 0.01) && ((stats + 8)->avg < -537.5 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -537.5, a ustawiła na %f", (stats + 8)->avg);
                    test_error(((stats + 8)->standard_deviation > 176.70667785910072 - 0.01) && ((stats + 8)->standard_deviation < 176.70667785910072 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 176.70667785910072, a ustawiła na %f", (stats + 8)->standard_deviation);
                

                free(stats);

                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji statistics_row
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji statistics_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct statistic_t *stats;

                int K[] = {233, 183, 75, 469, 392, -1};
    int X[] = {150, -1};
    int M[] = {60, -1};
    int I[] = {832, 76, 574, 733, 628, 282, 114, 913, -1};
    int S[] = {832, 76, 574, 733, 628, 282, 114, 913, -1};
    int *R[] = {K, X, M, I, S, NULL};
      

                int err_code = statistics_row(R, &stats);
                test_error(err_code == 5, "Funkcja statistics_row() powinna zwrócić  5, a zwróciła %d", err_code);

                test_error(stats != NULL, "Funkcja statistics_row() powinna zaalokować pamięć na strukturę stats, a przypisała NULL");

                onerror_terminate();

                           
                 
                    test_error((stats + 0)->min == 75, "Funkcja statistics_row() powinna ustawić minimum na 75, a ustawiła na %d", (stats + 0)->min);
                    test_error((stats + 0)->max == 469, "Funkcja statistics_row() powinna ustawić maximum na 469, a ustawiła na %d", (stats + 0)->max);
                    test_error((stats + 0)->range == 394, "Funkcja statistics_row() powinna ustawić zakres na 394, a ustawiła na %d", (stats + 0)->range);
                    test_error(((stats + 0)->avg > 270.4 - 0.01) && ((stats + 0)->avg < 270.4 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 270.4, a ustawiła na %f", (stats + 0)->avg);
                    test_error(((stats + 0)->standard_deviation > 142.44100533203218 - 0.01) && ((stats + 0)->standard_deviation < 142.44100533203218 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 142.44100533203218, a ustawiła na %f", (stats + 0)->standard_deviation);
                           
                 
                    test_error((stats + 1)->min == 150, "Funkcja statistics_row() powinna ustawić minimum na 150, a ustawiła na %d", (stats + 1)->min);
                    test_error((stats + 1)->max == 150, "Funkcja statistics_row() powinna ustawić maximum na 150, a ustawiła na %d", (stats + 1)->max);
                    test_error((stats + 1)->range == 0, "Funkcja statistics_row() powinna ustawić zakres na 0, a ustawiła na %d", (stats + 1)->range);
                    test_error(((stats + 1)->avg > 150.0 - 0.01) && ((stats + 1)->avg < 150.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 150.0, a ustawiła na %f", (stats + 1)->avg);
                    test_error(((stats + 1)->standard_deviation > 0.0 - 0.01) && ((stats + 1)->standard_deviation < 0.0 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 0.0, a ustawiła na %f", (stats + 1)->standard_deviation);
                           
                 
                    test_error((stats + 2)->min == 60, "Funkcja statistics_row() powinna ustawić minimum na 60, a ustawiła na %d", (stats + 2)->min);
                    test_error((stats + 2)->max == 60, "Funkcja statistics_row() powinna ustawić maximum na 60, a ustawiła na %d", (stats + 2)->max);
                    test_error((stats + 2)->range == 0, "Funkcja statistics_row() powinna ustawić zakres na 0, a ustawiła na %d", (stats + 2)->range);
                    test_error(((stats + 2)->avg > 60.0 - 0.01) && ((stats + 2)->avg < 60.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 60.0, a ustawiła na %f", (stats + 2)->avg);
                    test_error(((stats + 2)->standard_deviation > 0.0 - 0.01) && ((stats + 2)->standard_deviation < 0.0 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 0.0, a ustawiła na %f", (stats + 2)->standard_deviation);
                           
                 
                    test_error((stats + 3)->min == 76, "Funkcja statistics_row() powinna ustawić minimum na 76, a ustawiła na %d", (stats + 3)->min);
                    test_error((stats + 3)->max == 913, "Funkcja statistics_row() powinna ustawić maximum na 913, a ustawiła na %d", (stats + 3)->max);
                    test_error((stats + 3)->range == 837, "Funkcja statistics_row() powinna ustawić zakres na 837, a ustawiła na %d", (stats + 3)->range);
                    test_error(((stats + 3)->avg > 519.0 - 0.01) && ((stats + 3)->avg < 519.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 519.0, a ustawiła na %f", (stats + 3)->avg);
                    test_error(((stats + 3)->standard_deviation > 302.1485561772553 - 0.01) && ((stats + 3)->standard_deviation < 302.1485561772553 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 302.1485561772553, a ustawiła na %f", (stats + 3)->standard_deviation);
                           
                 
                    test_error((stats + 4)->min == 76, "Funkcja statistics_row() powinna ustawić minimum na 76, a ustawiła na %d", (stats + 4)->min);
                    test_error((stats + 4)->max == 913, "Funkcja statistics_row() powinna ustawić maximum na 913, a ustawiła na %d", (stats + 4)->max);
                    test_error((stats + 4)->range == 837, "Funkcja statistics_row() powinna ustawić zakres na 837, a ustawiła na %d", (stats + 4)->range);
                    test_error(((stats + 4)->avg > 519.0 - 0.01) && ((stats + 4)->avg < 519.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 519.0, a ustawiła na %f", (stats + 4)->avg);
                    test_error(((stats + 4)->standard_deviation > 302.1485561772553 - 0.01) && ((stats + 4)->standard_deviation < 302.1485561772553 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 302.1485561772553, a ustawiła na %f", (stats + 4)->standard_deviation);
                

                free(stats);

                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji statistics_row
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji statistics_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct statistic_t *stats;

                int K[] = {-86, -77, -43, -21, -14, -29, -9, -1};
    int X[] = {-56, -39, -4, -51, -1};
    int M[] = {-89, -1};
    int I[] = {-89, -1};
    int *S[] = {K, X, M, I, NULL};
      

                int err_code = statistics_row(S, &stats);
                test_error(err_code == 4, "Funkcja statistics_row() powinna zwrócić  4, a zwróciła %d", err_code);

                test_error(stats != NULL, "Funkcja statistics_row() powinna zaalokować pamięć na strukturę stats, a przypisała NULL");

                onerror_terminate();

                           
                 
                    test_error((stats + 0)->min == -86, "Funkcja statistics_row() powinna ustawić minimum na -86, a ustawiła na %d", (stats + 0)->min);
                    test_error((stats + 0)->max == -9, "Funkcja statistics_row() powinna ustawić maximum na -9, a ustawiła na %d", (stats + 0)->max);
                    test_error((stats + 0)->range == 77, "Funkcja statistics_row() powinna ustawić zakres na 77, a ustawiła na %d", (stats + 0)->range);
                    test_error(((stats + 0)->avg > -39.857142857142854 - 0.01) && ((stats + 0)->avg < -39.857142857142854 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -39.857142857142854, a ustawiła na %f", (stats + 0)->avg);
                    test_error(((stats + 0)->standard_deviation > 28.316721821105595 - 0.01) && ((stats + 0)->standard_deviation < 28.316721821105595 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 28.316721821105595, a ustawiła na %f", (stats + 0)->standard_deviation);
                           
                 
                    test_error((stats + 1)->min == -56, "Funkcja statistics_row() powinna ustawić minimum na -56, a ustawiła na %d", (stats + 1)->min);
                    test_error((stats + 1)->max == -4, "Funkcja statistics_row() powinna ustawić maximum na -4, a ustawiła na %d", (stats + 1)->max);
                    test_error((stats + 1)->range == 52, "Funkcja statistics_row() powinna ustawić zakres na 52, a ustawiła na %d", (stats + 1)->range);
                    test_error(((stats + 1)->avg > -37.5 - 0.01) && ((stats + 1)->avg < -37.5 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -37.5, a ustawiła na %f", (stats + 1)->avg);
                    test_error(((stats + 1)->standard_deviation > 20.303940504246953 - 0.01) && ((stats + 1)->standard_deviation < 20.303940504246953 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 20.303940504246953, a ustawiła na %f", (stats + 1)->standard_deviation);
                           
                 
                    test_error((stats + 2)->min == -89, "Funkcja statistics_row() powinna ustawić minimum na -89, a ustawiła na %d", (stats + 2)->min);
                    test_error((stats + 2)->max == -89, "Funkcja statistics_row() powinna ustawić maximum na -89, a ustawiła na %d", (stats + 2)->max);
                    test_error((stats + 2)->range == 0, "Funkcja statistics_row() powinna ustawić zakres na 0, a ustawiła na %d", (stats + 2)->range);
                    test_error(((stats + 2)->avg > -89.0 - 0.01) && ((stats + 2)->avg < -89.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -89.0, a ustawiła na %f", (stats + 2)->avg);
                    test_error(((stats + 2)->standard_deviation > 0.0 - 0.01) && ((stats + 2)->standard_deviation < 0.0 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 0.0, a ustawiła na %f", (stats + 2)->standard_deviation);
                           
                 
                    test_error((stats + 3)->min == -89, "Funkcja statistics_row() powinna ustawić minimum na -89, a ustawiła na %d", (stats + 3)->min);
                    test_error((stats + 3)->max == -89, "Funkcja statistics_row() powinna ustawić maximum na -89, a ustawiła na %d", (stats + 3)->max);
                    test_error((stats + 3)->range == 0, "Funkcja statistics_row() powinna ustawić zakres na 0, a ustawiła na %d", (stats + 3)->range);
                    test_error(((stats + 3)->avg > -89.0 - 0.01) && ((stats + 3)->avg < -89.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -89.0, a ustawiła na %f", (stats + 3)->avg);
                    test_error(((stats + 3)->standard_deviation > 0.0 - 0.01) && ((stats + 3)->standard_deviation < 0.0 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 0.0, a ustawiła na %f", (stats + 3)->standard_deviation);
                

                free(stats);

                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji statistics_row
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji statistics_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct statistic_t *stats;

                int K[] = {90, -1};
    int X[] = {-99, 79, 56, -91, 62, -67, -1};
    int M[] = {-34, 98, -1};
    int I[] = {22, 60, -49, 29, -28, 67, 48, -1};
    int S[] = {22, 60, -49, 29, -28, 67, 48, -1};
    int *R[] = {K, X, M, I, S, NULL};
      

                int err_code = statistics_row(R, &stats);
                test_error(err_code == 5, "Funkcja statistics_row() powinna zwrócić  5, a zwróciła %d", err_code);

                test_error(stats != NULL, "Funkcja statistics_row() powinna zaalokować pamięć na strukturę stats, a przypisała NULL");

                onerror_terminate();

                           
                 
                    test_error((stats + 0)->min == 90, "Funkcja statistics_row() powinna ustawić minimum na 90, a ustawiła na %d", (stats + 0)->min);
                    test_error((stats + 0)->max == 90, "Funkcja statistics_row() powinna ustawić maximum na 90, a ustawiła na %d", (stats + 0)->max);
                    test_error((stats + 0)->range == 0, "Funkcja statistics_row() powinna ustawić zakres na 0, a ustawiła na %d", (stats + 0)->range);
                    test_error(((stats + 0)->avg > 90.0 - 0.01) && ((stats + 0)->avg < 90.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 90.0, a ustawiła na %f", (stats + 0)->avg);
                    test_error(((stats + 0)->standard_deviation > 0.0 - 0.01) && ((stats + 0)->standard_deviation < 0.0 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 0.0, a ustawiła na %f", (stats + 0)->standard_deviation);
                           
                 
                    test_error((stats + 1)->min == -99, "Funkcja statistics_row() powinna ustawić minimum na -99, a ustawiła na %d", (stats + 1)->min);
                    test_error((stats + 1)->max == 79, "Funkcja statistics_row() powinna ustawić maximum na 79, a ustawiła na %d", (stats + 1)->max);
                    test_error((stats + 1)->range == 178, "Funkcja statistics_row() powinna ustawić zakres na 178, a ustawiła na %d", (stats + 1)->range);
                    test_error(((stats + 1)->avg > -10.0 - 0.01) && ((stats + 1)->avg < -10.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na -10.0, a ustawiła na %f", (stats + 1)->avg);
                    test_error(((stats + 1)->standard_deviation > 76.58546424311426 - 0.01) && ((stats + 1)->standard_deviation < 76.58546424311426 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 76.58546424311426, a ustawiła na %f", (stats + 1)->standard_deviation);
                           
                 
                    test_error((stats + 2)->min == -34, "Funkcja statistics_row() powinna ustawić minimum na -34, a ustawiła na %d", (stats + 2)->min);
                    test_error((stats + 2)->max == 98, "Funkcja statistics_row() powinna ustawić maximum na 98, a ustawiła na %d", (stats + 2)->max);
                    test_error((stats + 2)->range == 132, "Funkcja statistics_row() powinna ustawić zakres na 132, a ustawiła na %d", (stats + 2)->range);
                    test_error(((stats + 2)->avg > 32.0 - 0.01) && ((stats + 2)->avg < 32.0 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 32.0, a ustawiła na %f", (stats + 2)->avg);
                    test_error(((stats + 2)->standard_deviation > 66.0 - 0.01) && ((stats + 2)->standard_deviation < 66.0 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 66.0, a ustawiła na %f", (stats + 2)->standard_deviation);
                           
                 
                    test_error((stats + 3)->min == -49, "Funkcja statistics_row() powinna ustawić minimum na -49, a ustawiła na %d", (stats + 3)->min);
                    test_error((stats + 3)->max == 67, "Funkcja statistics_row() powinna ustawić maximum na 67, a ustawiła na %d", (stats + 3)->max);
                    test_error((stats + 3)->range == 116, "Funkcja statistics_row() powinna ustawić zakres na 116, a ustawiła na %d", (stats + 3)->range);
                    test_error(((stats + 3)->avg > 21.285714285714285 - 0.01) && ((stats + 3)->avg < 21.285714285714285 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 21.285714285714285, a ustawiła na %f", (stats + 3)->avg);
                    test_error(((stats + 3)->standard_deviation > 40.93798196475907 - 0.01) && ((stats + 3)->standard_deviation < 40.93798196475907 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 40.93798196475907, a ustawiła na %f", (stats + 3)->standard_deviation);
                           
                 
                    test_error((stats + 4)->min == -49, "Funkcja statistics_row() powinna ustawić minimum na -49, a ustawiła na %d", (stats + 4)->min);
                    test_error((stats + 4)->max == 67, "Funkcja statistics_row() powinna ustawić maximum na 67, a ustawiła na %d", (stats + 4)->max);
                    test_error((stats + 4)->range == 116, "Funkcja statistics_row() powinna ustawić zakres na 116, a ustawiła na %d", (stats + 4)->range);
                    test_error(((stats + 4)->avg > 21.285714285714285 - 0.01) && ((stats + 4)->avg < 21.285714285714285 + 0.01), "Funkcja statistics_row() powinna ustawić średnią na 21.285714285714285, a ustawiła na %f", (stats + 4)->avg);
                    test_error(((stats + 4)->standard_deviation > 40.93798196475907 - 0.01) && ((stats + 4)->standard_deviation < 40.93798196475907 + 0.01), "Funkcja statistics_row() powinna ustawić odchylenie standardowe na 40.93798196475907, a ustawiła na %f", (stats + 4)->standard_deviation);
                

                free(stats);

                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji statistics_row
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji statistics_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int K[] = {90, -1};
    int X[] = {-99, 79, 56, -91, 62, -67, -1};
    int M[] = {-34, 98, -1};
    int I[] = {22, 60, -49, 29, -28, 67, 48, -1};
    int S[] = {22, 60, -49, 29, -28, 67, 48, -1};
    int *R[] = {K, X, M, I, S, NULL};
      

            int err_code = statistics_row(R, NULL);
            test_error(err_code == -1, "Funkcja statistics_row() powinna zwrócić -1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji statistics_row
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji statistics_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = statistics_row(NULL, NULL);
            test_error(err_code == -1, "Funkcja statistics_row() powinna zwrócić -1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji statistics_row
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji statistics_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct statistic_t *stats;

            int err_code = statistics_row(NULL, &stats);
            test_error(err_code == -1, "Funkcja statistics_row() powinna zwrócić -1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji statistics_row (limit sterty ustawiono na 0 bajtów)
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji statistics_row (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

            struct statistic_t *stats;

            int K[] = {90, -1};
    int X[] = {-99, 79, 56, -91, 62, -67, -1};
    int M[] = {-34, 98, -1};
    int I[] = {22, 60, -49, 29, -28, 67, 48, -1};
    int S[] = {22, 60, -49, 29, -28, 67, 48, -1};
    int *R[] = {K, X, M, I, S, NULL};
      

            int err_code = statistics_row(R, &stats);
            test_error(err_code == -2, "Funkcja statistics_row() powinna zwrócić -2, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 356 bajtów)
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 356 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(356);
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load("window.txt", &ptr, fmt_binary);
            test_error(err_code == 0, "Funkcja load() powinna zwrócić 0, a zwróciła %d", err_code);

            onerror_terminate();

            printf("\n***TEST 3***\n\n");
            printf("***START***\n");
            display(ptr);
            printf("***END***\n");

            destroy(&ptr);

            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 160 bajtów)
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 160 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(160);
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load("have.bin", &ptr, fmt_text);
            test_error(err_code == 0, "Funkcja load() powinna zwrócić 0, a zwróciła %d", err_code);

            printf("\n***TEST 4***\n\n");
            printf("***START***\n");
            display(ptr);
            printf("***END***\n");


            destroy(&ptr);
            
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji load
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load("danger.bin", &ptr, fmt_binary);
            test_error(err_code == 3, "Funkcja load() powinna zwrócić 3, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji load
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load("produce.txt", &ptr, fmt_text);
            test_error(err_code == 3, "Funkcja load() powinna zwrócić 3, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji load
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load("rest.txt", &ptr, fmt_text);
            test_error(err_code == 3, "Funkcja load() powinna zwrócić 3, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji load
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load("hair", &ptr, fmt_text);
            test_error(err_code == 2, "Funkcja load() powinna zwrócić 2, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji load
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load("hair", &ptr, fmt_binary);
            test_error(err_code == 2, "Funkcja load() powinna zwrócić 2, a zwróciła %d", err_code);

            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji load
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = load("window.txt", NULL, fmt_binary);
            test_error(err_code == 1, "Funkcja load() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji load
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = load("have.bin", NULL, fmt_text);
            test_error(err_code == 1, "Funkcja load() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji load
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load(NULL, &ptr, fmt_binary);
            test_error(err_code == 1, "Funkcja load() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji load
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load(NULL, &ptr, fmt_text);
            test_error(err_code == 1, "Funkcja load() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji load
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = load(NULL, NULL, fmt_binary);
            test_error(err_code == 1, "Funkcja load() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji load
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = load(NULL, NULL, fmt_text);
            test_error(err_code == 1, "Funkcja load() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji load
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji load", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr;

            int err_code = load("have.bin", &ptr, 4);
            test_error(err_code == 1, "Funkcja load() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 0 bajtów)
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("have.bin", &ptr, fmt_text);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 48 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 48 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(48);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("have.bin", &ptr, fmt_text);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 72 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 72 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(72);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("have.bin", &ptr, fmt_text);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 80 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 80 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(80);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("have.bin", &ptr, fmt_text);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 88 bajtów)
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 88 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(88);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("have.bin", &ptr, fmt_text);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 124 bajtów)
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 124 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(124);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("have.bin", &ptr, fmt_text);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 0 bajtów)
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 80 bajtów)
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 80 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(80);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 96 bajtów)
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 96 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(96);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 124 bajtów)
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 124 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(124);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 168 bajtów)
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 168 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(168);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 212 bajtów)
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 212 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(212);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 256 bajtów)
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 256 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(256);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 300 bajtów)
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 300 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(300);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 304 bajtów)
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 304 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(304);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 336 bajtów)
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 336 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(336);
    
    //
    // -----------
    //
    
        
                int **ptr;
        
                int err_code = load("window.txt", &ptr, fmt_binary);
                test_error(err_code == 4, "Funkcja load() powinna zwrócić 4, a zwróciła %d", err_code);
        
                test_no_heap_leakage();
                onerror_terminate();
            
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
    
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n");
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
    
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n");
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
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 40 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 40 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(40);
    
    //
    // -----------
    //
    
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n");
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
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 172 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 172 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(172);
    
    //
    // -----------
    //
    
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n");
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
//  Test 5: Reakcja na brak pamięci - limit ustawiony na 172 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit ustawiony na 172 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(172);
    
    //
    // -----------
    //
    
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n");
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
            UTEST1, // Sprawdzanie poprawności działania funkcji display
            UTEST2, // Sprawdzanie poprawności działania funkcji display
            UTEST3, // Sprawdzanie poprawności działania funkcji statistics_row
            UTEST4, // Sprawdzanie poprawności działania funkcji statistics_row
            UTEST5, // Sprawdzanie poprawności działania funkcji statistics_row
            UTEST6, // Sprawdzanie poprawności działania funkcji statistics_row
            UTEST7, // Sprawdzanie poprawności działania funkcji statistics_row
            UTEST8, // Sprawdzanie poprawności działania funkcji statistics_row
            UTEST9, // Sprawdzanie poprawności działania funkcji statistics_row
            UTEST10, // Sprawdzanie poprawności działania funkcji statistics_row (limit sterty ustawiono na 0 bajtów)
            UTEST11, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 356 bajtów)
            UTEST12, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 160 bajtów)
            UTEST13, // Sprawdzanie poprawności działania funkcji load
            UTEST14, // Sprawdzanie poprawności działania funkcji load
            UTEST15, // Sprawdzanie poprawności działania funkcji load
            UTEST16, // Sprawdzanie poprawności działania funkcji load
            UTEST17, // Sprawdzanie poprawności działania funkcji load
            UTEST18, // Sprawdzanie poprawności działania funkcji load
            UTEST19, // Sprawdzanie poprawności działania funkcji load
            UTEST20, // Sprawdzanie poprawności działania funkcji load
            UTEST21, // Sprawdzanie poprawności działania funkcji load
            UTEST22, // Sprawdzanie poprawności działania funkcji load
            UTEST23, // Sprawdzanie poprawności działania funkcji load
            UTEST24, // Sprawdzanie poprawności działania funkcji load
            UTEST25, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 0 bajtów)
            UTEST26, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 48 bajtów)
            UTEST27, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 72 bajtów)
            UTEST28, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 80 bajtów)
            UTEST29, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 88 bajtów)
            UTEST30, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 124 bajtów)
            UTEST31, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 0 bajtów)
            UTEST32, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 80 bajtów)
            UTEST33, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 96 bajtów)
            UTEST34, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 124 bajtów)
            UTEST35, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 168 bajtów)
            UTEST36, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 212 bajtów)
            UTEST37, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 256 bajtów)
            UTEST38, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 300 bajtów)
            UTEST39, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 304 bajtów)
            UTEST40, // Sprawdzanie poprawności działania funkcji load (limit sterty ustawiono na 336 bajtów)
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
            test_summary(40); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 40 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 172 bajtów
            MTEST5, // Reakcja na brak pamięci - limit ustawiony na 172 bajtów
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
            test_summary(5); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}