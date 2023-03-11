/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Podwójnie skrzyżowane słowa
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-04-26 12:28:48.264259
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
//  Test 1: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 74 bajtów
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 74 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(74);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"FINDING", "A", "B", "R", "I", "C"};

                int err_code = create_leading_word_cross("FABRIC", "FINDING", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 6) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 2: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 104 bajtów
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 104 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(104);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"ASSAULT", "      W", "      E", "      N", "      T", "      Y"};

                int err_code = create_leading_word_cross("TWENTY", "ASSAULT", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 6) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 3: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 104 bajtów
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 104 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(104);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"      H", "      A", "      P", "      P", "      E", "MISSION"};

                int err_code = create_leading_word_cross("HAPPEN", "MISSION", &output);
                test_error(err_code == 5, "Funkcja create_leading_word_cross() powinna zwrócić 5, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 6) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 4: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 74 bajtów
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 74 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(74);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"D", "E", "P", "I", "C", "TOTALLY"};

                int err_code = create_leading_word_cross("DEPICT", "TOTALLY", &output);
                test_error(err_code == 5, "Funkcja create_leading_word_cross() powinna zwrócić 5, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 6) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 5: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 104 bajtów
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 104 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(104);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"      K", "      I", "UNUSUAL", "      L", "      E", "      R"};

                int err_code = create_leading_word_cross("KILLER", "UNUSUAL", &output);
                test_error(err_code == 2, "Funkcja create_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 6) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 6: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 18 bajtów
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 18 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(18);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"T"};

                int err_code = create_leading_word_cross("T", "T", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!1)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 1; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 1) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 7: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 26 bajtów
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 26 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(26);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"AUTHORITY"};

                int err_code = create_leading_word_cross("A", "AUTHORITY", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!1)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 1; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 1) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 8: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 26 bajtów
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 26 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(26);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"IMPLEMENT"};

                int err_code = create_leading_word_cross("T", "IMPLEMENT", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!1)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 1; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 1) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 9: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 26 bajtów
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 26 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(26);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"EXTENSIVE"};

                int err_code = create_leading_word_cross("T", "EXTENSIVE", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!1)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 1; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 1) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 10: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 189 bajtów
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 189 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(189);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"GY", "N", "A", "T", "M", "I", "F", "A", "K", "G", "Z", "X", "D", "N", "U", "F", "L", "R"};

                int err_code = create_leading_word_cross("GNATMIFAKGZXDNUFLR", "GY", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!18)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 18) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 11: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 189 bajtów
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 189 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(189);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"O", "S", "L", "T", "S", "F", "K", "Q", "D", "R", "R", "F", "P", "E", "O", "E", "UV", "X"};

                int err_code = create_leading_word_cross("OSLTSFKQDRRFPEOEUX", "UV", &output);
                test_error(err_code == 16, "Funkcja create_leading_word_cross() powinna zwrócić 16, a zwróciła %d", err_code);        

                if (!18)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 18) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 12: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 189 bajtów
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 189 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(189);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"R", "F", "Y", "I", "I", "T", "R", "WI", "W", "B", "Y", "L", "L", "A", "D", "O", "S", "U"};

                int err_code = create_leading_word_cross("RFYIITRWWBYLLADOSU", "WI", &output);
                test_error(err_code == 7, "Funkcja create_leading_word_cross() powinna zwrócić 7, a zwróciła %d", err_code);        

                if (!18)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 18; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 18) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 13: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 126 bajtów
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 126 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(126);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"AFAPJDTMG", "I", "T", "U", "T", "A", "Q", "E", "Q", "G", "L"};

                int err_code = create_leading_word_cross("AITUTAQEQGL", "AFAPJDTMG", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!11)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 11; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 11) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 14: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 147 bajtów
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 147 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(147);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"  A", "PSHDPZHLSD", "  L", "  Y", "  N", "  F", "  O", "  G", "  J", "  E", "  H"};

                int err_code = create_leading_word_cross("AHLYNFOGJEH", "PSHDPZHLSD", &output);
                test_error(err_code == 1, "Funkcja create_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!11)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 11; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 11) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 15: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 48 bajtów
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 48 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(48);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"ITZYNOWFNDI", "I", "K"};

                int err_code = create_leading_word_cross("IIK", "ITZYNOWFNDI", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!3)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 3; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 3) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 16: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 59 bajtów
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 59 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(59);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"HSHXOILINATY", "     A", "     I"};

                int err_code = create_leading_word_cross("IAI", "HSHXOILINATY", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!3)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 3; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 3) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 17: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 230 bajtów
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 230 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(230);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"NNY", "L", "Z", "U", "X", "J", "Z", "O", "K", "W", "M", "C", "G", "Y", "H", "N", "K", "M", "Z", "T", "L", "J"};

                int err_code = create_leading_word_cross("NLZUXJZOKWMCGYHNKMZTLJ", "NNY", &output);
                test_error(err_code == 0, "Funkcja create_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!22)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 22; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 22) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 18: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(231);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {"R", "E", "S", "P", "O", "N", "S", "I", "B", "I", "L", "I", "T", "YMYJ", "F", "Y", "F", "F", "U", "Z", "T", "S"};

                int err_code = create_leading_word_cross("RESPONSIBILITYFYFFUZTS", "YMYJ", &output);
                test_error(err_code == 13, "Funkcja create_leading_word_cross() powinna zwrócić 13, a zwróciła %d", err_code);        

                if (!22)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 22; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 22) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 19: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(231);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("MEDICATION", "XUYPZLWKQF", &output);
                test_error(err_code == -2, "Funkcja create_leading_word_cross() powinna zwrócić -2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 20: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(231);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("CHEMICAL", "N", &output);
                test_error(err_code == -2, "Funkcja create_leading_word_cross() powinna zwrócić -2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 21: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(231);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("N", "VOLUME", &output);
                test_error(err_code == -2, "Funkcja create_leading_word_cross() powinna zwrócić -2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 22: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(231);
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("HTOKCVSNTJPPWMLDUDJ", "AYEXEFEEXZBRGFZAQFR", &output);
                test_error(err_code == -2, "Funkcja create_leading_word_cross() powinna zwrócić -2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 23: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("OBZIWKNSRHXJLRXSYDFV", "uqcegcqmamemaweyhxcg", &output);
                test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 24: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("obziwknsrhxjlrxsydfv", "UQCEGCQMAMEMAWEYHXCG", &output);
                test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 25: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("OBZIWKNSRHXJLRXSYDFV", "UQCEGCQMAMEMAWEYHXCG\n", &output);
                test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 26: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("OBZIWKNSRHXJLRXSYDFV\n", "UQCEGCQMAMEMAWEYHXCG", &output);
                test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 27: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("OBZIWKNSRHXJLRXSsYDFV", "UQCEGCQMAMEMAWEYHXCG", &output);
                test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 28: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output;
            
                const char *expected_array[] = {""};

                int err_code = create_leading_word_cross("OBZIWKNSRHXJLRXSYDFV", "UQCEGCxQMAMEMAWEYHXCG", &output);
                test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        
        
                    test_error(*(output + 0) == NULL, "Funkcja create_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(output);
                }

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
//  Test 29: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 0 bajtów
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 30: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 80 bajtów
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 80 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(80);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 31: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 87 bajtów
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 87 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(87);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 32: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 94 bajtów
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 94 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(94);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 33: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 101 bajtów
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 101 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(101);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 34: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 108 bajtów
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 108 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(108);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 35: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 117 bajtów
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 117 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(117);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 36: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 124 bajtów
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 124 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(124);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 37: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 131 bajtów
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 131 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(131);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 38: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(138);
    
    //
    // -----------
    //
    
        
                        char **output;
        
                        int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", &output);
                        test_error(err_code == -3, "Funkcja create_leading_word_cross() powinna zwrócić -3, a zwróciła %d", err_code);        
        
                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                       
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
//  Test 39: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_leading_word_cross("SOMEWHERE", "DFIIZWYO", NULL);
                    test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

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
//  Test 40: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output;

                    int err_code = create_leading_word_cross("SOMEWHERE", NULL, &output);
                    test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

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
//  Test 41: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output;

                    int err_code = create_leading_word_cross(NULL, "DFIIZWYO", &output);
                    test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

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
//  Test 42: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output;

                    int err_code = create_leading_word_cross(NULL, NULL, &output);
                    test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

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
//  Test 43: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_leading_word_cross(NULL, "DFIIZWYO", NULL);
                    test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

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
//  Test 44: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_leading_word_cross("SOMEWHERE", NULL, NULL);
                    test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

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
//  Test 45: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_leading_word_cross(NULL, NULL, NULL);
                    test_error(err_code == -1, "Funkcja create_leading_word_cross() powinna zwrócić -1, a zwróciła %d", err_code);        

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
//  Test 46: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 264 bajtów
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 264 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(264);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"REGULAR   WORKSHOP", "E         H", "C         E", "E         R", "N         E", "T"};
                const char *expected_array_first[] = {"REGULAR", "E", "C", "E", "N", "T"};
                const char *expected_array_second[] = {"WORKSHOP", "H", "E", "R", "E"};

                int err_code = create_double_leading_word_cross("REGULAR", "RECENT", "WORKSHOP", "WHERE", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 47: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 279 bajtów
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 279 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(279);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"WORKSHOP   REGULAR", "H          E", "E          C", "R          E", "E          N", "           T"};
                const char *expected_array_first[] = {"WORKSHOP", "H", "E", "R", "E"};
                const char *expected_array_second[] = {"REGULAR", "E", "C", "E", "N", "T"};

                int err_code = create_double_leading_word_cross("WORKSHOP", "WHERE", "REGULAR", "RECENT", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 48: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 306 bajtów
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 306 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(306);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"ZBKSKSFE   WORKSHOP", "      L    H", "      O    E", "      W    R", "      E    E", "      R"};
                const char *expected_array_first[] = {"ZBKSKSFE", "      L", "      O", "      W", "      E", "      R"};
                const char *expected_array_second[] = {"WORKSHOP", "H", "E", "R", "E"};

                int err_code = create_double_leading_word_cross("ZBKSKSFE", "FLOWER", "WORKSHOP", "WHERE", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 49: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 341 bajtów
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 341 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(341);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"WORKSHOP   ZBKSKSFE", "H                L", "E                O", "R                W", "E                E", "                 R"};
                const char *expected_array_first[] = {"WORKSHOP", "H", "E", "R", "E"};
                const char *expected_array_second[] = {"ZBKSKSFE", "      L", "      O", "      W", "      E", "      R"};

                int err_code = create_double_leading_word_cross("WORKSHOP", "WHERE", "ZBKSKSFE", "FLOWER", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 50: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 364 bajtów
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 364 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(364);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"      W", "      E", "      E", "      K", "      L", "INQUIRY   WORKSHOP", "          H", "          E", "          R", "          E"};
                const char *expected_array_first[] = {"      W", "      E", "      E", "      K", "      L", "INQUIRY"};
                const char *expected_array_second[] = {"WORKSHOP", "H", "E", "R", "E"};

                int err_code = create_double_leading_word_cross("INQUIRY", "WEEKLY", "WORKSHOP", "WHERE", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!10)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 10; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 10) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 51: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 379 bajtów
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 379 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(379);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"                 W", "                 E", "                 E", "                 K", "                 L", "WORKSHOP   INQUIRY", "H", "E", "R", "E"};
                const char *expected_array_first[] = {"WORKSHOP", "H", "E", "R", "E"};
                const char *expected_array_second[] = {"      W", "      E", "      E", "      K", "      L", "INQUIRY"};

                int err_code = create_double_leading_word_cross("WORKSHOP", "WHERE", "INQUIRY", "WEEKLY", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!10)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 10; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 10) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 52: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 304 bajtów
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 304 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(304);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"E", "X", "P", "E", "R", "TESTIFY   WORKSHOP", "          H", "          E", "          R", "          E"};
                const char *expected_array_first[] = {"E", "X", "P", "E", "R", "TESTIFY"};
                const char *expected_array_second[] = {"WORKSHOP", "H", "E", "R", "E"};

                int err_code = create_double_leading_word_cross("TESTIFY", "EXPERT", "WORKSHOP", "WHERE", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!10)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 10; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 10) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 53: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 319 bajtów
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 319 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(319);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"           E", "           X", "           P", "           E", "           R", "WORKSHOP   TESTIFY", "H", "E", "R", "E"};
                const char *expected_array_first[] = {"WORKSHOP", "H", "E", "R", "E"};
                const char *expected_array_second[] = {"E", "X", "P", "E", "R", "TESTIFY"};

                int err_code = create_double_leading_word_cross("WORKSHOP", "WHERE", "TESTIFY", "EXPERT", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!10)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 10; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 10) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 54: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 276 bajtów
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 276 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(276);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"  C", "PROGRAM   WORKSHOP", "  F       H", "  F       E", "  E       R", "  E       E"};
                const char *expected_array_first[] = {"  C", "PROGRAM", "  F", "  F", "  E", "  E"};
                const char *expected_array_second[] = {"WORKSHOP", "H", "E", "R", "E"};

                int err_code = create_double_leading_word_cross("PROGRAM", "COFFEE", "WORKSHOP", "WHERE", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 55: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 299 bajtów
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 299 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(299);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"             C", "WORKSHOP   PROGRAM", "H            F", "E            F", "R            E", "E            E"};
                const char *expected_array_first[] = {"WORKSHOP", "H", "E", "R", "E"};
                const char *expected_array_second[] = {"  C", "PROGRAM", "  F", "  F", "  E", "  E"};

                int err_code = create_double_leading_word_cross("WORKSHOP", "WHERE", "PROGRAM", "COFFEE", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!6)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 6; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 56: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 168 bajtów
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 168 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(168);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"N   WORKSHOP", "    H", "    E", "    R", "    E"};
                const char *expected_array_first[] = {"N"};
                const char *expected_array_second[] = {"WORKSHOP", "H", "E", "R", "E"};

                int err_code = create_double_leading_word_cross("N", "N", "WORKSHOP", "WHERE", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!5)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 5; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 1; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 1) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 57: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 152 bajtów
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 152 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(152);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"WORKSHOP   N", "H", "E", "R", "E"};
                const char *expected_array_first[] = {"WORKSHOP", "H", "E", "R", "E"};
                const char *expected_array_second[] = {"N"};

                int err_code = create_double_leading_word_cross("WORKSHOP", "WHERE", "N", "N", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!5)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 5; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 1; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 1) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 58: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 246 bajtów
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 246 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(246);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"       S", "       U", "       S", "A   PHOTO", "       A", "       I", "       N"};
                const char *expected_array_first[] = {"A"};
                const char *expected_array_second[] = {"   S", "   U", "   S", "PHOTO", "   A", "   I", "   N"};

                int err_code = create_double_leading_word_cross("A", "A", "PHOTO", "SUSTAIN", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!7)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 1; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 1) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 59: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 222 bajtów
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 222 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(222);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"   S", "   U", "   S", "PHOTO   A", "   A", "   I", "   N"};
                const char *expected_array_first[] = {"   S", "   U", "   S", "PHOTO", "   A", "   I", "   N"};
                const char *expected_array_second[] = {"A"};

                int err_code = create_double_leading_word_cross("PHOTO", "SUSTAIN", "A", "A", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!7)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 1; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 1) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 60: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 436 bajtów
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 436 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(436);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"       L          S", "       I          U", "       K          S", "GRADUATEAPDE   PHOTO", "       Z          A", "       E          I", "       X          N"};
                const char *expected_array_first[] = {"       L", "       I", "       K", "GRADUATEAPDE", "       Z", "       E", "       X"};
                const char *expected_array_second[] = {"   S", "   U", "   S", "PHOTO", "   A", "   I", "   N"};

                int err_code = create_double_leading_word_cross("GRADUATEAPDE", "LIKEZEX", "PHOTO", "SUSTAIN", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!7)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 61: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 418 bajtów
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 418 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(418);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"   S           L", "   U           I", "   S           K", "PHOTO   GRADUATEAPDE", "   A           Z", "   I           E", "   N           X"};
                const char *expected_array_first[] = {"   S", "   U", "   S", "PHOTO", "   A", "   I", "   N"};
                const char *expected_array_second[] = {"       L", "       I", "       K", "GRADUATEAPDE", "       Z", "       E", "       X"};

                int err_code = create_double_leading_word_cross("PHOTO", "SUSTAIN", "GRADUATEAPDE", "LIKEZEX", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!7)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 62: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 668 bajtów
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 668 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(668);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"                   M", "                   O", "                   R", "CSYESFSMTWMVCHP   ANCIENT", "E                  I", "M                  N", "P                  G", "R", "O", "W", "L", "R", "E", "G", "H", "M", "R", "P", "I", "K", "Z", "I"};
                const char *expected_array_first[] = {"CSYESFSMTWMVCHP", "E", "M", "P", "R", "O", "W", "L", "R", "E", "G", "H", "M", "R", "P", "I", "K", "Z", "I"};
                const char *expected_array_second[] = {" M", " O", " R", "ANCIENT", " I", " N", " G"};

                int err_code = create_double_leading_word_cross("CSYESFSMTWMVCHP", "CEMPROWLREGHMRPIKZI", "ANCIENT", "MORNING", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!22)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 22; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 22) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 19; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 19) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 63: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 737 bajtów
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 737 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(737);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {" M", " O", " R", "ANCIENT   CSYESFSMTWMVCHP", " I        E", " N        M", " G        P", "          R", "          O", "          W", "          L", "          R", "          E", "          G", "          H", "          M", "          R", "          P", "          I", "          K", "          Z", "          I"};
                const char *expected_array_first[] = {" M", " O", " R", "ANCIENT", " I", " N", " G"};
                const char *expected_array_second[] = {"CSYESFSMTWMVCHP", "E", "M", "P", "R", "O", "W", "L", "R", "E", "G", "H", "M", "R", "P", "I", "K", "Z", "I"};

                int err_code = create_double_leading_word_cross("ANCIENT", "MORNING", "CSYESFSMTWMVCHP", "CEMPROWLREGHMRPIKZI", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!22)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 22; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 22) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 19; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 19) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 64: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 741 bajtów
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 741 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(741);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"                   M", "   P               O", "   A               R", "YSFRENCUZLCXORC   ANCIENT", "   A               I", "   I               N", "   O               G", "   R", "   N", "   D", "   L", "   P", "   U", "   U", "   W", "   K", "   Q", "   P", "   K", "   V"};
                const char *expected_array_first[] = {"   P", "   A", "YSFRENCUZLCXORC", "   A", "   I", "   O", "   R", "   N", "   D", "   L", "   P", "   U", "   U", "   W", "   K", "   Q", "   P", "   K", "   V"};
                const char *expected_array_second[] = {" M", " O", " R", "ANCIENT", " I", " N", " G"};

                int err_code = create_double_leading_word_cross("YSFRENCUZLCXORC", "PARAIORNDLPUUWKQPKV", "ANCIENT", "MORNING", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!20)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 20) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 19; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 19) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 65: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 823 bajtów
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 823 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(823);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {" M", " O           P", " R           A", "ANCIENT   YSFRENCUZLCXORC", " I           A", " N           I", " G           O", "             R", "             N", "             D", "             L", "             P", "             U", "             U", "             W", "             K", "             Q", "             P", "             K", "             V"};
                const char *expected_array_first[] = {" M", " O", " R", "ANCIENT", " I", " N", " G"};
                const char *expected_array_second[] = {"   P", "   A", "YSFRENCUZLCXORC", "   A", "   I", "   O", "   R", "   N", "   D", "   L", "   P", "   U", "   U", "   W", "   K", "   Q", "   P", "   K", "   V"};

                int err_code = create_double_leading_word_cross("ANCIENT", "MORNING", "YSFRENCUZLCXORC", "PARAIORNDLPUUWKQPKV", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!20)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 20; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 20) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 19; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 19) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 66: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 818 bajtów
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 818 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(818);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"      Y", "      C", "      H            M", "      W            O", "      T            R", "UBFGFEAOKFQUUPF   ANCIENT", "      X            I", "      A            N", "      R            G", "      O", "      X", "      M", "      H", "      K", "      Z", "      I", "      L", "      S", "      V"};
                const char *expected_array_first[] = {"      Y", "      C", "      H", "      W", "      T", "UBFGFEAOKFQUUPF", "      X", "      A", "      R", "      O", "      X", "      M", "      H", "      K", "      Z", "      I", "      L", "      S", "      V"};
                const char *expected_array_second[] = {" M", " O", " R", "ANCIENT", " I", " N", " G"};

                int err_code = create_double_leading_word_cross("UBFGFEAOKFQUUPF", "YCHWTAXAROXMHKZILSV", "ANCIENT", "MORNING", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!19)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 19; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 19) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 19; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 19) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 67: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 920 bajtów
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 920 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(920);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"                Y", "                C", " M              H", " O              W", " R              T", "ANCIENT   UBFGFEAOKFQUUPF", " I              X", " N              A", " G              R", "                O", "                X", "                M", "                H", "                K", "                Z", "                I", "                L", "                S", "                V"};
                const char *expected_array_first[] = {" M", " O", " R", "ANCIENT", " I", " N", " G"};
                const char *expected_array_second[] = {"      Y", "      C", "      H", "      W", "      T", "UBFGFEAOKFQUUPF", "      X", "      A", "      R", "      O", "      X", "      M", "      H", "      K", "      Z", "      I", "      L", "      S", "      V"};

                int err_code = create_double_leading_word_cross("ANCIENT", "MORNING", "UBFGFEAOKFQUUPF", "YCHWTAXAROXMHKZILSV", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!19)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 19; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 19) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 7; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 7) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 19; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 19) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 68: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 520 bajtów
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 520 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(520);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"CGTYGLEDYNWAUDEMC   INVESTOR", "O                          U", "M                          R", "M                          A", "U                          L", "N", "I", "C", "A", "T", "I", "O", "N"};
                const char *expected_array_first[] = {"CGTYGLEDYNWAUDEMC", "O", "M", "M", "U", "N", "I", "C", "A", "T", "I", "O", "N"};
                const char *expected_array_second[] = {"INVESTOR", "       U", "       R", "       A", "       L"};

                int err_code = create_double_leading_word_cross("CGTYGLEDYNWAUDEMC", "COMMUNICATION", "INVESTOR", "RURAL", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!13)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 13; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 13; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 69: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 544 bajtów
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 544 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(544);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"INVESTOR   CGTYGLEDYNWAUDEMC", "       U   O", "       R   M", "       A   M", "       L   U", "           N", "           I", "           C", "           A", "           T", "           I", "           O", "           N"};
                const char *expected_array_first[] = {"INVESTOR", "       U", "       R", "       A", "       L"};
                const char *expected_array_second[] = {"CGTYGLEDYNWAUDEMC", "O", "M", "M", "U", "N", "I", "C", "A", "T", "I", "O", "N"};

                int err_code = create_double_leading_word_cross("INVESTOR", "RURAL", "CGTYGLEDYNWAUDEMC", "COMMUNICATION", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!13)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 13; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 13; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 70: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 620 bajtów
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 620 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(620);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"KFRNYSNYOAXAQWGBO   INVESTOR", "     O                     U", "     P                     R", "     H                     A", "     I                     L", "     S", "     T", "     I", "     C", "     A", "     T", "     E", "     D"};
                const char *expected_array_first[] = {"KFRNYSNYOAXAQWGBO", "     O", "     P", "     H", "     I", "     S", "     T", "     I", "     C", "     A", "     T", "     E", "     D"};
                const char *expected_array_second[] = {"INVESTOR", "       U", "       R", "       A", "       L"};

                int err_code = create_double_leading_word_cross("KFRNYSNYOAXAQWGBO", "SOPHISTICATED", "INVESTOR", "RURAL", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!13)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 13; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 13; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 71: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 664 bajtów
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 664 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(664);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"INVESTOR   KFRNYSNYOAXAQWGBO", "       U        O", "       R        P", "       A        H", "       L        I", "                S", "                T", "                I", "                C", "                A", "                T", "                E", "                D"};
                const char *expected_array_first[] = {"INVESTOR", "       U", "       R", "       A", "       L"};
                const char *expected_array_second[] = {"KFRNYSNYOAXAQWGBO", "     O", "     P", "     H", "     I", "     S", "     T", "     I", "     C", "     A", "     T", "     E", "     D"};

                int err_code = create_double_leading_word_cross("INVESTOR", "RURAL", "KFRNYSNYOAXAQWGBO", "SOPHISTICATED", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!13)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 13; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 13; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 72: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 620 bajtów
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 620 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(620);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"     C", "     O", "     M", "     M", "EWQEJUTIEBJPFFBFT   INVESTOR", "     N                     U", "     I                     R", "     C                     A", "     A                     L", "     T", "     I", "     O", "     N"};
                const char *expected_array_first[] = {"     C", "     O", "     M", "     M", "EWQEJUTIEBJPFFBFT", "     N", "     I", "     C", "     A", "     T", "     I", "     O", "     N"};
                const char *expected_array_second[] = {"INVESTOR", "       U", "       R", "       A", "       L"};

                int err_code = create_double_leading_word_cross("EWQEJUTIEBJPFFBFT", "COMMUNICATION", "INVESTOR", "RURAL", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!13)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 13; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 13; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 73: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 664 bajtów
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 664 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(664);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"                C", "                O", "                M", "                M", "INVESTOR   EWQEJUTIEBJPFFBFT", "       U        N", "       R        I", "       A        C", "       L        A", "                T", "                I", "                O", "                N"};
                const char *expected_array_first[] = {"INVESTOR", "       U", "       R", "       A", "       L"};
                const char *expected_array_second[] = {"     C", "     O", "     M", "     M", "EWQEJUTIEBJPFFBFT", "     N", "     I", "     C", "     A", "     T", "     I", "     O", "     N"};

                int err_code = create_double_leading_word_cross("INVESTOR", "RURAL", "EWQEJUTIEBJPFFBFT", "COMMUNICATION", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!13)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 13; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 5; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 5) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 13; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 13) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 74: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 404 bajtów
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 404 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(404);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"             F", "             L", "SUBMIT   PIANO", "   I         W", "   N         E", "   O         R", "   R", "   I", "   T", "   Y"};
                const char *expected_array_first[] = {"SUBMIT", "   I", "   N", "   O", "   R", "   I", "   T", "   Y"};
                const char *expected_array_second[] = {"    F", "    L", "PIANO", "    W", "    E", "    R"};

                int err_code = create_double_leading_word_cross("SUBMIT", "MINORITY", "PIANO", "FLOWER", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!10)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 10; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 10) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 8; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 8) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 75: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 412 bajtów
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 412 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(412);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {"    F", "    L", "PIANO   SUBMIT", "    W      I", "    E      N", "    R      O", "           R", "           I", "           T", "           Y"};
                const char *expected_array_first[] = {"    F", "    L", "PIANO", "    W", "    E", "    R"};
                const char *expected_array_second[] = {"SUBMIT", "   I", "   N", "   O", "   R", "   I", "   T", "   Y"};

                int err_code = create_double_leading_word_cross("PIANO", "FLOWER", "SUBMIT", "MINORITY", &output, &output_first, &output_second);
                test_error(err_code == 0, "Funkcja create_double_leading_word_cross() powinna zwrócić 0, a zwróciła %d", err_code);        

                if (!10)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 10; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 10) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 6; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 6) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 8; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 8) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 76: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(164);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {"       D", "       I", "       S", "       A", "       P", "       P", "       E", "       A", "UCOVOXXRMDA"};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("UCOVOXXRMDA", "DISAPPEAR", "GLDSJZDZZ", "PORTION", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 77: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(328);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {"       D", "       I", "       S", "       A", "       P", "       P", "       E", "       A", "UCOVOXXRMDA"};

                int err_code = create_double_leading_word_cross("GLDSJZDZZ", "PORTION", "UCOVOXXRMDA", "DISAPPEAR", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 78: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(164);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {"       D", "       I", "       S", "       A", "       P", "       P", "       E", "       A", "UCOVOXXRMDA"};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("UCOVOXXRMDA", "DISAPPEAR", "T", "COUNSELOR", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 79: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(328);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {"       D", "       I", "       S", "       A", "       P", "       P", "       E", "       A", "UCOVOXXRMDA"};

                int err_code = create_double_leading_word_cross("T", "COUNSELOR", "UCOVOXXRMDA", "DISAPPEAR", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 80: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(164);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {"       D", "       I", "       S", "       A", "       P", "       P", "       E", "       A", "UCOVOXXRMDA"};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("UCOVOXXRMDA", "DISAPPEAR", "DISTINCT", "A", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 81: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(328);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {"       D", "       I", "       S", "       A", "       P", "       P", "       E", "       A", "UCOVOXXRMDA"};

                int err_code = create_double_leading_word_cross("DISTINCT", "A", "UCOVOXXRMDA", "DISAPPEAR", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 82: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(164);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {"       D", "       I", "       S", "       A", "       P", "       P", "       E", "       A", "UCOVOXXRMDA"};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("UCOVOXXRMDA", "DISAPPEAR", "HRCRRMRZCIKNRKDDI", "VQWTYBXUPEFVPGFUL", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 83: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(328);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {"       D", "       I", "       S", "       A", "       P", "       P", "       E", "       A", "UCOVOXXRMDA"};

                int err_code = create_double_leading_word_cross("HRCRRMRZCIKNRKDDI", "VQWTYBXUPEFVPGFUL", "UCOVOXXRMDA", "DISAPPEAR", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 84: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(328);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("HCUQJKQDSCEIEYQJ", "WMTRZOFNRPMMVLAAP", "XSMQJLIHOWLQNHMXH", "KUTCKRFKYZZFFBABV", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 85: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(328);
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("XSMQJLIHOWLQNHMXH", "KUTCKRFKYZZFFBABV", "HCUQJKQDSCEIEYQJ", "WMTRZOFNRPMMVLAAP", &output, &output_first, &output_second);
                test_error(err_code == 2, "Funkcja create_double_leading_word_cross() powinna zwrócić 2, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 86: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("ENSURE", "asian", "MOSTLY", "ASIDE", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 87: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("mostly", "ASIDE", "ENSURE", "ASIAN", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 88: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("ENSURE", "ASIAN", "mostly", "ASIDE", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 89: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("MOSTLY", "ASIDE", "ENSURE", "asian", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 90: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("ASIAN", "ENSURE\n", "MOSTLY", "ASIDE", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 91: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("ASIAN\n", "ENSURE", "MOSTLY", "ASIDE", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 92: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("MOSTLY", "ASIDE", "ASIAN", "ENSURE\n", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 93: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("MOSTLY", "ASIDE", "ASIAN\n", "ENSURE", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 94: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("xASIAN", "ENSURE", "MOSTLY", "ASIDE", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 95: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("MOSTLY", "ASIDE", "xASIAN", "ENSURE", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 96: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("ASIAN", "ENSURoE", "MOSTLY", "ASIDE", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 97: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char **output, **output_first, **output_second;

                const char *expected_array[] = {""};
                const char *expected_array_first[] = {""};
                const char *expected_array_second[] = {""};

                int err_code = create_double_leading_word_cross("MOSTLY", "ASIDE", "ASIAN", "ENSURoE", &output, &output_first, &output_second);
                test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);        

                if (!0)
                    test_error(output == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output NULL");        
                else
                {
                    test_error(output != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output adres przydzielonej pamięci, a przypisała NULL");        
                    test_error(output_first != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_first adres przydzielonej pamięci, a przypisała NULL");
                    test_error(output_second != NULL, "Funkcja create_double_leading_word_cross() powinna przypisać pod zmienną output_second adres przydzielonej pamięci, a przypisała NULL");        
            
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], output[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], output[i]);        

                    test_error(*(output + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_first[i], output_first[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_first[i], output_first[i]);        
            
                            test_error(*(output_first + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        
            
                    for (int i = 0; i < 0; ++i)
                                test_error(strcmp(expected_array_second[i], output_second[i]) == 0, "Funkcja create_double_leading_word_cross() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array_second[i], output_second[i]);        

                    test_error(*(output_second + 0) == NULL, "Funkcja create_double_leading_word_cross() powinna przypisać na końcu tablicy wartość NULL");        

                    destroy(output);
                    destroy(output_first);
                    destroy(output_second);

                }

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
//  Test 98: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 0 bajtów
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 99: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 80 bajtów
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 80 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(80);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 100: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 85 bajtów
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 85 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(85);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 101: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 90 bajtów
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 90 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(90);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 102: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 101 bajtów
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 101 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(101);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 103: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 112 bajtów
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 112 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(112);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 104: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 123 bajtów
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 123 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(123);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 105: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 134 bajtów
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 134 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(134);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 106: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 145 bajtów
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 145 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(145);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 107: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 165 bajtów
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 165 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(165);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 108: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 245 bajtów
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 245 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(245);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 109: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 250 bajtów
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 250 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(250);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 110: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 255 bajtów
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 255 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(255);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 111: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 260 bajtów
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 260 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(260);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 112: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 265 bajtów
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 265 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(265);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 113: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 270 bajtów
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 270 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(270);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 114: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 275 bajtów
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 275 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(275);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 115: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 280 bajtów
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 280 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(280);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 116: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 287 bajtów
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 287 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(287);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 117: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 351 bajtów
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 351 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(351);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 118: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 353 bajtów
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 353 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(353);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 119: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 355 bajtów
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 355 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(355);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 120: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 357 bajtów
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 357 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(357);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 121: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 359 bajtów
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 359 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(359);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 122: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 361 bajtów
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 361 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(361);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 123: Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(372);
    
    //
    // -----------
    //
    

                        char **output, **output_first, **output_second;

                        int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "ATMOSPHERE", "INITIAL", &output, &output_first, &output_second);
                        test_error(err_code == 3, "Funkcja create_leading_word_cross() powinna zwrócić 3, a zwróciła %d", err_code);

                        test_error(output == NULL, "Funkcja create_leading_word_cross() powinna przypisać pod zmienną output NULL");

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
//  Test 124: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output_first, **output_second;

                    int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "STUDIO", "EVERYBODY", NULL, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 125: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross("STUDIO", NULL, "STUDIO", "EVERYBODY", &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 126: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross(NULL, "EVERYBODY", "STUDIO", "EVERYBODY", &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 127: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross(NULL, NULL, "STUDIO", "EVERYBODY", &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 128: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST128(void)
{
    // informacje o teście
    test_start(128, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross(NULL, "EVERYBODY", "STUDIO", "EVERYBODY", NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 129: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST129(void)
{
    // informacje o teście
    test_start(129, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross("STUDIO", NULL, "STUDIO", "EVERYBODY", NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 130: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST130(void)
{
    // informacje o teście
    test_start(130, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross(NULL, NULL, "STUDIO", "EVERYBODY", NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 131: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST131(void)
{
    // informacje o teście
    test_start(131, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", "STUDIO", NULL, NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 132: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST132(void)
{
    // informacje o teście
    test_start(132, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross("STUDIO", NULL, "STUDIO", NULL, &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 133: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST133(void)
{
    // informacje o teście
    test_start(133, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross(NULL, "EVERYBODY", "STUDIO", NULL, &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 134: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST134(void)
{
    // informacje o teście
    test_start(134, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross(NULL, NULL, "STUDIO", NULL, &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 135: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST135(void)
{
    // informacje o teście
    test_start(135, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross(NULL, "EVERYBODY", "STUDIO", NULL, NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 136: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST136(void)
{
    // informacje o teście
    test_start(136, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross("STUDIO", NULL, "STUDIO", NULL, NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 137: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST137(void)
{
    // informacje o teście
    test_start(137, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross(NULL, NULL, "STUDIO", NULL, NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 138: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST138(void)
{
    // informacje o teście
    test_start(138, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", NULL, "EVERYBODY", NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 139: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST139(void)
{
    // informacje o teście
    test_start(139, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross("STUDIO", NULL, NULL, "EVERYBODY", &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 140: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST140(void)
{
    // informacje o teście
    test_start(140, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross(NULL, "EVERYBODY", NULL, "EVERYBODY", &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 141: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST141(void)
{
    // informacje o teście
    test_start(141, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross(NULL, NULL, NULL, "EVERYBODY", &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 142: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST142(void)
{
    // informacje o teście
    test_start(142, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross(NULL, "EVERYBODY", NULL, "EVERYBODY", NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 143: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST143(void)
{
    // informacje o teście
    test_start(143, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross("STUDIO", NULL, NULL, "EVERYBODY", NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 144: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST144(void)
{
    // informacje o teście
    test_start(144, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross(NULL, NULL, NULL, "EVERYBODY", NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 145: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST145(void)
{
    // informacje o teście
    test_start(145, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross("STUDIO", "EVERYBODY", NULL, NULL, NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 146: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST146(void)
{
    // informacje o teście
    test_start(146, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross("STUDIO", NULL, NULL, NULL, &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 147: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST147(void)
{
    // informacje o teście
    test_start(147, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross(NULL, "EVERYBODY", NULL, NULL, &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 148: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST148(void)
{
    // informacje o teście
    test_start(148, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output, **output_first, **output_second;

                    int err_code = create_double_leading_word_cross(NULL, NULL, NULL, NULL, &output, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 149: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST149(void)
{
    // informacje o teście
    test_start(149, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross(NULL, "EVERYBODY", NULL, NULL, NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 150: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST150(void)
{
    // informacje o teście
    test_start(150, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross("STUDIO", NULL, NULL, NULL, NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 151: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST151(void)
{
    // informacje o teście
    test_start(151, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = create_double_leading_word_cross(NULL, NULL, NULL, NULL, NULL, NULL, NULL);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 152: Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
//
void UTEST152(void)
{
    // informacje o teście
    test_start(152, "Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **output_first, **output_second;

                    int err_code = create_double_leading_word_cross(NULL, NULL, NULL, NULL, NULL, &output_first, &output_second);
                    test_error(err_code == 1, "Funkcja create_double_leading_word_cross() powinna zwrócić 1, a zwróciła %d", err_code);

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
//  Test 1: Reakcja na brak pamięci; limit ustawiono na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci; limit ustawiono na 0 bajtów", __LINE__);

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
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Reakcja na brak pamięci; limit ustawiono na 11 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci; limit ustawiono na 11 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(11);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Reakcja na brak pamięci; limit ustawiono na 22 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci; limit ustawiono na 22 bajtów", __LINE__);

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
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Reakcja na brak pamięci; limit ustawiono na 33 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci; limit ustawiono na 33 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(33);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Reakcja na brak pamięci; limit ustawiono na 44 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci; limit ustawiono na 44 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(44);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Reakcja na brak pamięci; limit ustawiono na 196 bajtów
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na brak pamięci; limit ustawiono na 196 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(196);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Reakcja na brak pamięci; limit ustawiono na 333 bajtów
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na brak pamięci; limit ustawiono na 333 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(333);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Reakcja na brak pamięci; limit ustawiono na 574 bajtów
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na brak pamięci; limit ustawiono na 574 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(574);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Reakcja na brak pamięci; limit ustawiono na 584 bajtów
//
void MTEST9(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(9, "Reakcja na brak pamięci; limit ustawiono na 584 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(584);
    
    //
    // -----------
    //
    
            printf("***START***\n");
            int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
            printf("\n***END***\n");
            test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code);
            test_no_heap_leakage();
        
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
            UTEST1, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 74 bajtów
            UTEST2, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 104 bajtów
            UTEST3, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 104 bajtów
            UTEST4, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 74 bajtów
            UTEST5, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 104 bajtów
            UTEST6, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 18 bajtów
            UTEST7, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 26 bajtów
            UTEST8, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 26 bajtów
            UTEST9, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 26 bajtów
            UTEST10, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 189 bajtów
            UTEST11, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 189 bajtów
            UTEST12, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 189 bajtów
            UTEST13, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 126 bajtów
            UTEST14, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 147 bajtów
            UTEST15, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 48 bajtów
            UTEST16, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 59 bajtów
            UTEST17, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 230 bajtów
            UTEST18, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST19, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST20, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST21, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST22, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST23, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST24, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST25, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST26, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST27, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST28, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 231 bajtów
            UTEST29, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 0 bajtów
            UTEST30, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 80 bajtów
            UTEST31, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 87 bajtów
            UTEST32, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 94 bajtów
            UTEST33, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 101 bajtów
            UTEST34, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 108 bajtów
            UTEST35, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 117 bajtów
            UTEST36, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 124 bajtów
            UTEST37, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 131 bajtów
            UTEST38, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
            UTEST39, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
            UTEST40, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
            UTEST41, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
            UTEST42, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
            UTEST43, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
            UTEST44, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
            UTEST45, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 138 bajtów
            UTEST46, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 264 bajtów
            UTEST47, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 279 bajtów
            UTEST48, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 306 bajtów
            UTEST49, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 341 bajtów
            UTEST50, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 364 bajtów
            UTEST51, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 379 bajtów
            UTEST52, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 304 bajtów
            UTEST53, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 319 bajtów
            UTEST54, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 276 bajtów
            UTEST55, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 299 bajtów
            UTEST56, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 168 bajtów
            UTEST57, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 152 bajtów
            UTEST58, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 246 bajtów
            UTEST59, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 222 bajtów
            UTEST60, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 436 bajtów
            UTEST61, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 418 bajtów
            UTEST62, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 668 bajtów
            UTEST63, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 737 bajtów
            UTEST64, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 741 bajtów
            UTEST65, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 823 bajtów
            UTEST66, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 818 bajtów
            UTEST67, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 920 bajtów
            UTEST68, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 520 bajtów
            UTEST69, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 544 bajtów
            UTEST70, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 620 bajtów
            UTEST71, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 664 bajtów
            UTEST72, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 620 bajtów
            UTEST73, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 664 bajtów
            UTEST74, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 404 bajtów
            UTEST75, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 412 bajtów
            UTEST76, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów
            UTEST77, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST78, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów
            UTEST79, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST80, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów
            UTEST81, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST82, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 164 bajtów
            UTEST83, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST84, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST85, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST86, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST87, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST88, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST89, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST90, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST91, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST92, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST93, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST94, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST95, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST96, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST97, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 328 bajtów
            UTEST98, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 0 bajtów
            UTEST99, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 80 bajtów
            UTEST100, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 85 bajtów
            UTEST101, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 90 bajtów
            UTEST102, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 101 bajtów
            UTEST103, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 112 bajtów
            UTEST104, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 123 bajtów
            UTEST105, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 134 bajtów
            UTEST106, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 145 bajtów
            UTEST107, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 165 bajtów
            UTEST108, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 245 bajtów
            UTEST109, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 250 bajtów
            UTEST110, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 255 bajtów
            UTEST111, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 260 bajtów
            UTEST112, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 265 bajtów
            UTEST113, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 270 bajtów
            UTEST114, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 275 bajtów
            UTEST115, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 280 bajtów
            UTEST116, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 287 bajtów
            UTEST117, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 351 bajtów
            UTEST118, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 353 bajtów
            UTEST119, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 355 bajtów
            UTEST120, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 357 bajtów
            UTEST121, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 359 bajtów
            UTEST122, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 361 bajtów
            UTEST123, // Sprawdzanie poprawności działania funkcji create_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST124, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST125, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST126, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST127, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST128, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST129, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST130, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST131, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST132, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST133, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST134, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST135, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST136, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST137, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST138, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST139, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST140, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST141, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST142, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST143, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST144, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST145, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST146, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST147, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST148, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST149, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST150, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST151, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
            UTEST152, // Sprawdzanie poprawności działania funkcji create_double_leading_word_cross - limit pamięci ustawiony na 372 bajtów
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
            test_summary(152); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci; limit ustawiono na 0 bajtów
            MTEST2, // Reakcja na brak pamięci; limit ustawiono na 11 bajtów
            MTEST3, // Reakcja na brak pamięci; limit ustawiono na 22 bajtów
            MTEST4, // Reakcja na brak pamięci; limit ustawiono na 33 bajtów
            MTEST5, // Reakcja na brak pamięci; limit ustawiono na 44 bajtów
            MTEST6, // Reakcja na brak pamięci; limit ustawiono na 196 bajtów
            MTEST7, // Reakcja na brak pamięci; limit ustawiono na 333 bajtów
            MTEST8, // Reakcja na brak pamięci; limit ustawiono na 574 bajtów
            MTEST9, // Reakcja na brak pamięci; limit ustawiono na 584 bajtów
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
            test_summary(9); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}