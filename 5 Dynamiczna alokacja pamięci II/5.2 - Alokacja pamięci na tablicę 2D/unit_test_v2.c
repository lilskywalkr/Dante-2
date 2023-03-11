/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Alokacja pamięci na tablicę 2D
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-05 00:24:47.944788
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
//  Test 1: Sprawdzanie poprawności działania funkcji destroy_array_2d
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji destroy_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr = NULL;

            printf("#####START#####");
            destroy_array_2d(ptr, 0);
            printf("#####END#####");

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
//  Test 2: Sprawdzanie poprawności działania funkcji destroy_array_2d
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji destroy_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr = NULL;

            printf("#####START#####");
            destroy_array_2d(ptr, -12);
            printf("#####END#####");

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
//  Test 3: Sprawdzanie poprawności działania funkcji destroy_array_2d
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji destroy_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            destroy_array_2d(NULL, 13);
            printf("#####END#####");

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
//  Test 4: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 6, height = 12;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                destroy_array_2d(ptr, height);

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
//  Test 5: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 14, height = 3;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                destroy_array_2d(ptr, height);

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
//  Test 6: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 350, height = 346;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                destroy_array_2d(ptr, height);

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
//  Test 7: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 0, height = 18;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                

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
//  Test 8: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 4, height = 0;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                

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
//  Test 9: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 9, height = -15;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                

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
//  Test 10: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = -7, height = 15;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                

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
//  Test 11: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 312 bajtów)
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 312 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(312);
    
    //
    // -----------
    //
    
            
                int width = 4, height = 13;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                destroy_array_2d(ptr, height);

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
//  Test 12: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 180 bajtów)
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 180 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(180);
    
    //
    // -----------
    //
    
            
                int width = 13, height = 3;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                destroy_array_2d(ptr, height);

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
//  Test 13: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 3419364 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 3419364 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3419364);
    
    //
    // -----------
    //
    
            
                int width = 951, height = 897;        

                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");

                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                destroy_array_2d(ptr, height);

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
//  Test 14: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 15: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 152 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 152 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(152);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 16: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 176 bajtów)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 176 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(176);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 17: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 200 bajtów)
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 200 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(200);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 18: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 224 bajtów)
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 224 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(224);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 19: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 248 bajtów)
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 248 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(248);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 20: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 272 bajtów)
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 272 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(272);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 21: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 296 bajtów)
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 296 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(296);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 22: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 320 bajtów)
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 320 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(320);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 23: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 344 bajtów)
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 344 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(344);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 24: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 368 bajtów)
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 368 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(368);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 25: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 392 bajtów)
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 392 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(392);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 26: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 416 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 416 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(416);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 27: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 440 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 440 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(440);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 28: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 464 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 464 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(464);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 29: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 488 bajtów)
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 488 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(488);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 30: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 512 bajtów)
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 512 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(512);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 31: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 536 bajtów)
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 536 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(536);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 32: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 560 bajtów)
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 560 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(560);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 33: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 584 bajtów)
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 584 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(584);
    
    //
    // -----------
    //
    
        
                int width = 951, height = 897;        
        
                printf("#####START#####");
                int **ptr = create_array_2d(width, height);
                printf("#####END#####");
        
                test_error(ptr == NULL, "Funkcja create_array_2d() powinna zwrócić NULL");
        
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
//  Test 34: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr = create_array_2d(6, 19);
            int array[19][6] = {
    { -10, 8, 9, -6, 4, 4},

    { 0, 3, 1, 2, 2, 0},

    { 7, 6, -3, -5, 10, 1},

    { -7, -5, 10, -5, -10, -7},

    { -4, 8, -6, 6, -5, 8},

    { 6, -2, 6, 10, 9, -3},

    { -8, 3, 10, -9, 2, -4},

    { 10, 1, 6, -3, 3, 10},

    { 10, 8, -10, 1, -2, 4},

    { 9, 0, 8, 5, 8, 10},

    { -3, 0, -9, -10, -4, -8},

    { 2, 6, 7, 6, -9, 5},

    { 3, 2, 6, -9, 2, -5},

    { 7, 9, -9, 5, 2, 9},

    { 8, -9, 1, 4, 3, 3},

    { 9, 10, -10, 7, -10, -8},

    { 10, 8, 2, 10, 7, -3},

    { 7, 8, -9, 1, -3, -1},

    { 8, 3, 4, 7, 1, -6}};
            
            test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 19; ++i)
                for (int j = 0; j < 6; ++j)
                    ptr[i][j] = array[i][j];
            
            printf("\n***TEST 1***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, 0, 19);
            printf("***END***\n");

            printf("\n***TEST 2***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, 6, 0);
            printf("***END***\n");

            printf("\n***TEST 3***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, 0, 0);
            printf("***END***\n");
            
            printf("\n***TEST 4***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, 6, -19);
            printf("***END***\n");
            
            printf("\n***TEST 5***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, -6, 19);
            printf("***END***\n");
            
            printf("\n***TEST 6***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, -6, -19);
            printf("***END***\n");
            
            printf("\n***TEST 7***\n\n");
            printf("***START***\n");
            display_array_2d(NULL, 6, 19);
            printf("***END***\n");

            printf("\n***TEST 8***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, 6, 19);
            printf("***END***\n");

            destroy_array_2d(ptr, 19);

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
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 152 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 152 bajtów", __LINE__);

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
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 176 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 176 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(176);
    
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
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 200 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 200 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(200);
    
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
//  Test 5: Reakcja na brak pamięci - limit ustawiony na 224 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit ustawiony na 224 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(224);
    
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
//  Test 6: Reakcja na brak pamięci - limit ustawiony na 248 bajtów
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na brak pamięci - limit ustawiony na 248 bajtów", __LINE__);

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

//
//  Test 7: Reakcja na brak pamięci - limit ustawiony na 272 bajtów
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na brak pamięci - limit ustawiony na 272 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(272);
    
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
//  Test 8: Reakcja na brak pamięci - limit ustawiony na 296 bajtów
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na brak pamięci - limit ustawiony na 296 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(296);
    
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
//  Test 9: Reakcja na brak pamięci - limit ustawiony na 320 bajtów
//
void MTEST9(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(9, "Reakcja na brak pamięci - limit ustawiony na 320 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(320);
    
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
//  Test 10: Reakcja na brak pamięci - limit ustawiony na 344 bajtów
//
void MTEST10(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(10, "Reakcja na brak pamięci - limit ustawiony na 344 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(344);
    
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
//  Test 11: Reakcja na brak pamięci - limit ustawiony na 368 bajtów
//
void MTEST11(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(11, "Reakcja na brak pamięci - limit ustawiony na 368 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(368);
    
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
//  Test 12: Reakcja na brak pamięci - limit ustawiony na 392 bajtów
//
void MTEST12(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(12, "Reakcja na brak pamięci - limit ustawiony na 392 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(392);
    
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
//  Test 13: Reakcja na brak pamięci - limit ustawiony na 416 bajtów
//
void MTEST13(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(13, "Reakcja na brak pamięci - limit ustawiony na 416 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(416);
    
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
//  Test 14: Reakcja na brak pamięci - limit ustawiony na 440 bajtów
//
void MTEST14(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(14, "Reakcja na brak pamięci - limit ustawiony na 440 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(440);
    
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
//  Test 15: Reakcja na brak pamięci - limit ustawiony na 464 bajtów
//
void MTEST15(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(15, "Reakcja na brak pamięci - limit ustawiony na 464 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(464);
    
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
//  Test 16: Reakcja na brak pamięci - limit ustawiony na 488 bajtów
//
void MTEST16(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(16, "Reakcja na brak pamięci - limit ustawiony na 488 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(488);
    
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
//  Test 17: Reakcja na brak pamięci - limit ustawiony na 512 bajtów
//
void MTEST17(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(17, "Reakcja na brak pamięci - limit ustawiony na 512 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(512);
    
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
//  Test 18: Reakcja na brak pamięci - limit ustawiony na 536 bajtów
//
void MTEST18(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(18, "Reakcja na brak pamięci - limit ustawiony na 536 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(536);
    
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
//  Test 19: Reakcja na brak pamięci - limit ustawiony na 560 bajtów
//
void MTEST19(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(19, "Reakcja na brak pamięci - limit ustawiony na 560 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(560);
    
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
//  Test 20: Reakcja na brak pamięci - limit ustawiony na 584 bajtów
//
void MTEST20(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(20, "Reakcja na brak pamięci - limit ustawiony na 584 bajtów", __LINE__);

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
            UTEST1, // Sprawdzanie poprawności działania funkcji destroy_array_2d
            UTEST2, // Sprawdzanie poprawności działania funkcji destroy_array_2d
            UTEST3, // Sprawdzanie poprawności działania funkcji destroy_array_2d
            UTEST4, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST5, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST6, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST7, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST8, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST9, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST10, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST11, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 312 bajtów)
            UTEST12, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 180 bajtów)
            UTEST13, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 3419364 bajtów)
            UTEST14, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST15, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 152 bajtów)
            UTEST16, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 176 bajtów)
            UTEST17, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 200 bajtów)
            UTEST18, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 224 bajtów)
            UTEST19, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 248 bajtów)
            UTEST20, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 272 bajtów)
            UTEST21, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 296 bajtów)
            UTEST22, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 320 bajtów)
            UTEST23, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 344 bajtów)
            UTEST24, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 368 bajtów)
            UTEST25, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 392 bajtów)
            UTEST26, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 416 bajtów)
            UTEST27, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 440 bajtów)
            UTEST28, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 464 bajtów)
            UTEST29, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 488 bajtów)
            UTEST30, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 512 bajtów)
            UTEST31, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 536 bajtów)
            UTEST32, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 560 bajtów)
            UTEST33, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 584 bajtów)
            UTEST34, // Sprawdzanie poprawności działania funkcji create_array_2d
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
            test_summary(34); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 152 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 176 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 200 bajtów
            MTEST5, // Reakcja na brak pamięci - limit ustawiony na 224 bajtów
            MTEST6, // Reakcja na brak pamięci - limit ustawiony na 248 bajtów
            MTEST7, // Reakcja na brak pamięci - limit ustawiony na 272 bajtów
            MTEST8, // Reakcja na brak pamięci - limit ustawiony na 296 bajtów
            MTEST9, // Reakcja na brak pamięci - limit ustawiony na 320 bajtów
            MTEST10, // Reakcja na brak pamięci - limit ustawiony na 344 bajtów
            MTEST11, // Reakcja na brak pamięci - limit ustawiony na 368 bajtów
            MTEST12, // Reakcja na brak pamięci - limit ustawiony na 392 bajtów
            MTEST13, // Reakcja na brak pamięci - limit ustawiony na 416 bajtów
            MTEST14, // Reakcja na brak pamięci - limit ustawiony na 440 bajtów
            MTEST15, // Reakcja na brak pamięci - limit ustawiony na 464 bajtów
            MTEST16, // Reakcja na brak pamięci - limit ustawiony na 488 bajtów
            MTEST17, // Reakcja na brak pamięci - limit ustawiony na 512 bajtów
            MTEST18, // Reakcja na brak pamięci - limit ustawiony na 536 bajtów
            MTEST19, // Reakcja na brak pamięci - limit ustawiony na 560 bajtów
            MTEST20, // Reakcja na brak pamięci - limit ustawiony na 584 bajtów
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
            test_summary(20); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}