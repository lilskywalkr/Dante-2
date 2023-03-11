/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Licznik słów
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-15 18:55:30.667154
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
//  Test 1: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                int expected_result[] = {10};;
                int err_code = 3;

                int *res = count_words("fish", &err_code, 1, "velit");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 
                test_error(err_code == 0, "Funkcja count_words() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 1; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 


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
//  Test 2: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                int expected_result[] = {1};;
                int err_code = 0;

                int *res = count_words("nor", &err_code, 1, "Sed");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 
                test_error(err_code == 0, "Funkcja count_words() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 1; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 


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
//  Test 3: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                int expected_result[] = {23};;
                int err_code = 1;

                int *res = count_words("much", &err_code, 1, "neque");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 
                test_error(err_code == 0, "Funkcja count_words() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 1; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 


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
//  Test 4: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                int expected_result[] = {1};;
                int err_code = 1;

                int *res = count_words("close", &err_code, 1, "Marcus");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 
                test_error(err_code == 0, "Funkcja count_words() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 1; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 


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
//  Test 5: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 32 bajtów
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 32 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(32);
    
    //
    // -----------
    //
    

                int expected_result[] = {3, 1, 6, 2, 1, 1, 1, 2};;
                int err_code = 3;

                int *res = count_words("stretch", &err_code, 8, "s", "Adams", "is", "I", "works", "Saint", "t", "mind");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 
                test_error(err_code == 0, "Funkcja count_words() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 8; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 


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
//  Test 6: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 56 bajtów
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 56 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(56);
    
    //
    // -----------
    //
    

                int expected_result[] = {16, 2, 1, 2, 1, 4, 12, 12, 1, 2, 1, 0, 2, 1};;
                int err_code = 1;

                int *res = count_words("leave", &err_code, 14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 
                test_error(err_code == 0, "Funkcja count_words() powinna ustawić kod błędu na 0, a ustawiła na %d", err_code); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 


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
//  Test 7: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                int expected_result[] = {10};;

                int *res = count_words("fish", NULL, 1, "velit");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 1; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 

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
//  Test 8: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                int expected_result[] = {1};;

                int *res = count_words("nor", NULL, 1, "Sed");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 1; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 

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
//  Test 9: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                int expected_result[] = {23};;

                int *res = count_words("much", NULL, 1, "neque");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 1; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 

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
//  Test 10: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                int expected_result[] = {1};;

                int *res = count_words("close", NULL, 1, "Marcus");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 1; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 

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
//  Test 11: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 32 bajtów
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 32 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(32);
    
    //
    // -----------
    //
    

                int expected_result[] = {3, 1, 6, 2, 1, 1, 1, 2};;

                int *res = count_words("stretch", NULL, 8, "s", "Adams", "is", "I", "works", "Saint", "t", "mind");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 8; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 

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
//  Test 12: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 56 bajtów
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 56 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(56);
    
    //
    // -----------
    //
    

                int expected_result[] = {16, 2, 1, 2, 1, 4, 12, 12, 1, 2, 1, 0, 2, 1};;

                int *res = count_words("leave", NULL, 14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

                test_error(res != NULL, "Funkcja count_words() powinna zwrócić adres zaalokwoanej pamięci NULL"); 

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                    test_error(expected_result[i] == res[i], "Funkcja count_words() niepoprawnie policzyła liczbę wystąpień słowa %d, powinno być %d, a jest %d", i, expected_result[i], res[i]); 

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
//  Test 13: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 18 bajtów
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 18 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(18);
    
    //
    // -----------
    //
    

            int err_code = 0;

            int *res = count_words("leave", &err_code, 14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

            test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 
            test_error(err_code == 3, "Funkcja count_words() powinna ustawić kod błędu na 3, a ustawiła na %d", err_code); 

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
//  Test 14: Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 18 bajtów
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 18 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(18);
    
    //
    // -----------
    //
    

            int *res = count_words("leave", NULL, 14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

            test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 

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
//  Test 15: Sprawdzanie poprawności działania funkcji count_words
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji count_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int *res = count_words("has", NULL, 14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

            test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 

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
//  Test 16: Sprawdzanie poprawności działania funkcji count_words
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji count_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = 2;

            int *res = count_words("has", &err_code, 14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

            test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 
            test_error(err_code == 2, "Funkcja count_words() powinna ustawić kod błędu na 2, a ustawiła na %d", err_code); 

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
//  Test 17: Sprawdzanie poprawności działania funkcji count_words
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji count_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int err_code = 0;

             int *res = count_words("has", &err_code, -14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

             test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 
             test_error(err_code == 1, "Funkcja count_words() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code); 

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
//  Test 18: Sprawdzanie poprawności działania funkcji count_words
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji count_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int *res = count_words("has", NULL, -14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

             test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 

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
//  Test 19: Sprawdzanie poprawności działania funkcji count_words
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji count_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int err_code = 1;

             int *res = count_words("has", &err_code, 0, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

             test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 
             test_error(err_code == 1, "Funkcja count_words() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code); 

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
//  Test 20: Sprawdzanie poprawności działania funkcji count_words
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji count_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int *res = count_words("has", NULL, 0, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

             test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 

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
//  Test 21: Sprawdzanie poprawności działania funkcji count_words
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji count_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int err_code = 0;

             int *res = count_words(NULL, &err_code, 14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

             test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 
             test_error(err_code == 1, "Funkcja count_words() powinna ustawić kod błędu na 1, a ustawiła na %d", err_code); 

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
//  Test 22: Sprawdzanie poprawności działania funkcji count_words
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji count_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             int *res = count_words(NULL, NULL, 14, "is", "t", "exponentially", "going", "style", "learn", "to", "to", "brilliant", "Is", "still", "eYJthiUtkh", "potential", "use");

             test_error(res == NULL, "Funkcja count_words() powinna zwrócić NULL"); 

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
//  Test 1: Reakcja programu na brak pamięci - limit sterty ustawiony na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja programu na brak pamięci - limit sterty ustawiony na 0 bajtów", __LINE__);

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
            UTEST1, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
            UTEST2, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
            UTEST3, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
            UTEST4, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
            UTEST5, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 32 bajtów
            UTEST6, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 56 bajtów
            UTEST7, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
            UTEST8, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
            UTEST9, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
            UTEST10, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 4 bajtów
            UTEST11, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 32 bajtów
            UTEST12, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 56 bajtów
            UTEST13, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 18 bajtów
            UTEST14, // Sprawdzanie poprawności działania funkcji count_words - limit sterty ustawiony na 18 bajtów
            UTEST15, // Sprawdzanie poprawności działania funkcji count_words
            UTEST16, // Sprawdzanie poprawności działania funkcji count_words
            UTEST17, // Sprawdzanie poprawności działania funkcji count_words
            UTEST18, // Sprawdzanie poprawności działania funkcji count_words
            UTEST19, // Sprawdzanie poprawności działania funkcji count_words
            UTEST20, // Sprawdzanie poprawności działania funkcji count_words
            UTEST21, // Sprawdzanie poprawności działania funkcji count_words
            UTEST22, // Sprawdzanie poprawności działania funkcji count_words
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
            test_summary(22); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja programu na brak pamięci - limit sterty ustawiony na 0 bajtów
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
            test_summary(1); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}