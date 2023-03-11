/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Alokacja pamięci na tablicę 2D II
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-06 15:51:11.933829
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
            destroy_array_2d(&ptr, 0);
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
            destroy_array_2d(&ptr, -17);
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
    

                int width = 8, height = 19;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
        
                if (!0)
                {
                    test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                    printf("#####START#####");
                    destroy_array_2d(&ptr, height);
                    printf("#####END#####");
                    
                    test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
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
    

                int width = 16, height = 4;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
        
                if (!0)
                {
                    test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                    printf("#####START#####");
                    destroy_array_2d(&ptr, height);
                    printf("#####END#####");
                    
                    test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
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
    

                int width = 453, height = 630;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
        
                if (!0)
                {
                    test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                    printf("#####START#####");
                    destroy_array_2d(&ptr, height);
                    printf("#####END#####");
                    
                    test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
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
    

                int width = 0, height = 17;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_array_2d() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
        
                if (!1)
                {
                    test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                    printf("#####START#####");
                    destroy_array_2d(&ptr, height);
                    printf("#####END#####");
                    
                    test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
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
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_array_2d() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
        
                if (!1)
                {
                    test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                    printf("#####START#####");
                    destroy_array_2d(&ptr, height);
                    printf("#####END#####");
                    
                    test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
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
    

                int width = 7, height = -18;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_array_2d() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
        
                if (!1)
                {
                    test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                    printf("#####START#####");
                    destroy_array_2d(&ptr, height);
                    printf("#####END#####");
                    
                    test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
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
    

                int width = -10, height = 15;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_array_2d() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
        
                if (!1)
                {
                    test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                    printf("#####START#####");
                    destroy_array_2d(&ptr, height);
                    printf("#####END#####");
                    
                    test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
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
//  Test 11: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = -3, height = -13;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_array_2d() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
        
                if (!1)
                {
                    test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                    printf("#####START#####");
                    destroy_array_2d(&ptr, height);
                    printf("#####END#####");
                    
                    test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
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
//  Test 12: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int width = 0, height = 0;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 1, "Funkcja create_array_2d() powinna zwrócić 1");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
        
                if (!1)
                {
                    test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                    printf("#####START#####");
                    destroy_array_2d(&ptr, height);
                    printf("#####END#####");
                    
                    test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
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
//  Test 13: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 448 bajtów)
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 448 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(448);
    
    //
    // -----------
    //
    

                int width = 6, height = 14;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                    
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");

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
//  Test 14: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 152 bajtów)
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 152 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(152);
    
    //
    // -----------
    //
    

                int width = 17, height = 2;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                    
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");

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
//  Test 15: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 1627660 bajtów)
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 1627660 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1627660);
    
    //
    // -----------
    //
    

                int width = 837, height = 485;        
                int **ptr;

                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                test_error(ptr != NULL, "Funkcja create_array_2d_2() powinna przypisać pod ptr adres zaalokowanej pamięci, a przypisała NULL");

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                    
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");

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
//  Test 16: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 17: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 144 bajtów)
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 144 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(144);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 18: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 184 bajtów)
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 184 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(184);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 19: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 224 bajtów)
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 224 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(224);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 20: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 264 bajtów)
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 264 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(264);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 21: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 304 bajtów)
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 304 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(304);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 22: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 344 bajtów)
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 344 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(344);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 23: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 384 bajtów)
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 384 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(384);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 24: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 424 bajtów)
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 424 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(424);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 25: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 464 bajtów)
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 464 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(464);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 26: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 504 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 504 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(504);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 27: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 544 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 544 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(544);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 28: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 584 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 584 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(584);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 29: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 624 bajtów)
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 624 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(624);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 30: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 664 bajtów)
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 664 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(664);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 31: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 704 bajtów)
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 704 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(704);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 32: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 744 bajtów)
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 744 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(744);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 33: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 784 bajtów)
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 784 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(784);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 34: Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 824 bajtów)
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 824 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(824);
    
    //
    // -----------
    //
    

                int **ptr;
                int width = 837, height = 485;        
                
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");

                test_error(res == 2, "Funkcja create_array_2d() powinna zwrócić 2");
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
//  Test 35: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int width = 3, height = 11;        

            printf("#####START#####");
            int res = create_array_2d_2(NULL, width, height);
            printf("#####END#####");

            test_error(res == 1, "Funkcja create_array_2d() powinna zwrócić 1");
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
//  Test 36: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[8][10] = {
    { -5, 2, 2, 7, -4, -1, -1, -7, -4, 10},

    { 8, 4, 2, 4, -7, -9, 8, -6, -1, -7},

    { -6, 8, 0, -9, -6, 3, -4, 10, -9, 4},

    { -1, -6, -7, 4, 10, -6, -9, 2, 10, -10},

    { 10, -7, 10, 10, 7, 10, -9, 7, -5, 10},

    { 9, 4, -5, -10, 10, 5, -7, -2, 9, -1},

    { 9, 3, 10, -2, 3, -9, 6, -8, -6, 7},

    { 9, -6, -7, 6, -4, 0, -3, -5, -2, -4}};

                int width = 10, height = 8;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, 10, 8);
                printf("#####END#####");

                test_error(sum == 25, "Funkcja sum_array_2d() powinna zwrócić 25, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 37: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[19][8] = {
    { 10, -8, 1, -5, -1, 4, -5, -8},

    { -4, 7, -5, 1, -8, 3, 10, 2},

    { 2, -10, -10, -3, 3, 1, 0, 6},

    { 1, 2, 9, -10, 9, 1, -8, -4},

    { 3, 4, 9, -5, 2, -9, -3, 1},

    { 4, -5, 5, -7, 1, -3, 4, 2},

    { -5, -8, 9, 1, 4, -2, -8, 1},

    { 2, -1, 6, 5, 0, 0, 8, -10},

    { 6, 0, -4, -4, 1, 5, -6, 3},

    { 3, -10, 7, 6, 8, -8, -1, 9},

    { -2, -5, 7, 1, -5, 3, -8, -6},

    { 8, -3, 9, -2, -4, 3, -8, -6},

    { -9, 6, -10, 3, -9, -10, -9, 8},

    { -1, -2, -9, -5, 2, 1, -3, 10},

    { 6, -2, 6, 0, -2, -9, 6, 10},

    { 9, 9, -4, -2, 0, -6, -6, 5},

    { 1, 0, -3, 7, -10, -8, -8, 1},

    { -6, -2, -10, 1, -8, -6, -7, 7},

    { 10, 2, -4, -8, -7, 7, -4, -3}};

                int width = 8, height = 19;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, 8, 19);
                printf("#####END#####");

                test_error(sum == -90, "Funkcja sum_array_2d() powinna zwrócić -90, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 38: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[18][1] = {
    { 7},

    { 4},

    { -5},

    { 7},

    { 4},

    { 6},

    { -5},

    { 5},

    { 4},

    { 0},

    { -3},

    { -9},

    { 5},

    { -2},

    { -6},

    { -2},

    { -4},

    { 8}};

                int width = 1, height = 18;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, 1, 18);
                printf("#####END#####");

                test_error(sum == 14, "Funkcja sum_array_2d() powinna zwrócić 14, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 39: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[1][6] = {
    { -5, -7, -4, 8, 5, -6}};

                int width = 6, height = 1;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, 6, 1);
                printf("#####END#####");

                test_error(sum == -9, "Funkcja sum_array_2d() powinna zwrócić -9, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 40: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[1][1] = {
    { 2}};

                int width = 1, height = 1;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, 1, 1);
                printf("#####END#####");

                test_error(sum == 2, "Funkcja sum_array_2d() powinna zwrócić 2, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 41: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[20][9] = {
    { -9, 10, 10, 6, -7, 8, -3, -7, 2},

    { -9, -1, 4, 4, -2, 9, -8, 3, -1},

    { -4, 7, -3, -4, -10, 3, -2, -6, 6},

    { 1, -3, 1, -8, 2, -10, 4, 5, 2},

    { 2, 7, 0, -5, 8, -4, -1, 7, 9},

    { -1, 2, -3, 8, 3, 10, 6, -9, -4},

    { -1, -6, 7, -3, -5, 7, -4, 7, 1},

    { 2, -9, -1, -10, -7, -9, -10, 9, -9},

    { 1, 9, 0, -3, 8, 6, -9, -6, 4},

    { 4, 2, -6, -2, -1, 9, 7, -9, 5},

    { -10, 2, 1, -4, 1, 10, -10, -7, -8},

    { -5, 8, -8, -4, -2, 9, -6, 9, -5},

    { 3, -5, 5, 5, 5, 5, -1, 6, 2},

    { -4, 7, -3, 3, 0, -5, -10, -9, -4},

    { 3, -1, -10, -5, -1, -3, 0, -8, 3},

    { 0, -8, 6, 10, 3, 5, 0, -3, -6},

    { 7, 10, 6, 4, -6, 5, -10, 0, -9},

    { 1, -4, -8, -6, 10, -10, -8, -8, 9},

    { -8, -1, -1, -4, -6, 4, 9, 7, -10},

    { -3, 2, -5, 8, 1, -5, 2, 8, -9}};

                int width = 9, height = 20;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, 9, -20);
                printf("#####END#####");

                test_error(sum == -1, "Funkcja sum_array_2d() powinna zwrócić -1, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 42: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[20][9] = {
    { 7, 0, 8, -6, -6, -1, 10, -10, -6},

    { 8, -6, -10, -10, -9, 8, -9, 6, 5},

    { -2, 9, 9, -6, 1, -2, 7, -10, 9},

    { -8, -4, -6, 1, -8, 9, -6, 0, 7},

    { 2, -10, 9, -10, 5, 10, -9, -8, 4},

    { -3, 4, -8, 1, 4, -3, -5, 9, 5},

    { 7, -6, 10, -7, 6, -5, -6, 10, 2},

    { 0, 4, 3, 5, -4, -5, -6, -7, -7},

    { 2, 10, -6, -5, -4, 7, 8, -3, 10},

    { -5, -6, 6, 5, 8, -2, 10, -8, -10},

    { -1, 3, 9, -2, -2, -10, -4, 1, -3},

    { 5, -10, 8, 5, 6, 3, -4, 9, 4},

    { -1, 6, -10, -3, -1, -9, 3, -9, 7},

    { 5, 7, -7, 4, -8, 1, -5, 4, 9},

    { -3, 0, -9, -9, -7, 5, 8, 5, 2},

    { 10, -10, 2, 3, 3, -10, 7, 8, 0},

    { 8, 2, 3, 4, -6, 6, -3, -8, 5},

    { -6, 8, -5, 2, -4, 2, 4, 6, -9},

    { -8, 7, -1, 6, 9, -9, -3, 9, -4},

    { 0, 2, -10, 3, 9, -8, -4, 9, 4}};

                int width = 9, height = 20;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, -9, -20);
                printf("#####END#####");

                test_error(sum == -1, "Funkcja sum_array_2d() powinna zwrócić -1, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 43: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[20][9] = {
    { 6, 4, -9, -9, 3, -4, -6, 5, -8},

    { 10, 6, 8, 7, 3, -3, 6, -3, -5},

    { 1, 7, -2, -8, -3, 3, -4, -10, -8},

    { 3, -6, 3, 3, 10, 3, 4, -8, 9},

    { -9, 9, 0, 6, 4, 8, 3, 0, -2},

    { -9, -9, 6, 2, -1, 6, 4, 7, 5},

    { 0, -4, -8, 3, 4, -7, 5, 6, 6},

    { 5, -4, -5, -1, -9, 1, 10, -3, -5},

    { 2, -2, -1, 5, 5, 1, 2, -4, -6},

    { -5, 9, -3, 0, 2, -9, -7, -5, -6},

    { -10, -10, 3, 7, -9, 9, -5, 0, -9},

    { -10, 9, -9, 10, 3, -7, -1, 4, -1},

    { 6, 9, -8, -5, 10, -7, 1, -10, 9},

    { -4, -4, -6, 9, -6, -9, -7, 10, 4},

    { 7, -5, -7, 9, 1, 3, -4, 1, -1},

    { 8, -2, 10, 1, -4, 2, 4, 1, 8},

    { 9, -2, -8, -7, 4, 8, -10, -1, 10},

    { -2, -6, -6, 2, -2, 3, 2, 5, 7},

    { 10, -5, -5, -9, 3, 2, -9, -1, 2},

    { 1, 4, 4, -4, 3, -6, 8, 7, -5}};

                int width = 9, height = 20;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, -9, 20);
                printf("#####END#####");

                test_error(sum == -1, "Funkcja sum_array_2d() powinna zwrócić -1, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 44: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[1][9] = {
    { -5}};

                int width = 9, height = 1;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, 9, 0);
                printf("#####END#####");

                test_error(sum == -1, "Funkcja sum_array_2d() powinna zwrócić -1, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 45: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[20][1] = {
    { 5}};

                int width = 1, height = 20;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, 0, 20);
                printf("#####END#####");

                test_error(sum == -1, "Funkcja sum_array_2d() powinna zwrócić -1, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 46: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                int array[1][1] = {
    { 6}};

                int width = 1, height = 1;        
                int **ptr;
        
                printf("#####START#####");
                int res = create_array_2d_2(&ptr, width, height);
                printf("#####END#####");
        
                test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
                test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                for (int i = 0; i < height; ++i)
                    for (int j = 0; j < width; ++j)
                        ptr[i][j] = array[i][j];

                printf("#####START#####");                            
                int sum = sum_array_2d(ptr, 0, 0);
                printf("#####END#####");

                test_error(sum == -1, "Funkcja sum_array_2d() powinna zwrócić -1, a zwróciła %d", sum);

                printf("#####START#####");
                destroy_array_2d(&ptr, height);
                printf("#####END#####");
                
                test_error(ptr == NULL, "Funkcja destroy_array_2d() powinna przypisać pod ptr NULL");
                                
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
//  Test 47: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");                            
            int sum = sum_array_2d(NULL, 6, 6);
            printf("#####END#####");

            test_error(sum == -1, "Funkcja sum_array_2d() powinna zwrócić -1, a zwróciła %d", sum);

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
//  Test 48: Sprawdzanie poprawności działania funkcji sum_row
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji sum_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-3, -8, -1, -7, -4, -5, 0, 0, -1, -7, -5, -7};

                printf("#####START#####");
                int res = sum_row(input_array, 12);           
                printf("#####END#####");

                test_error(res == -48, "Funkcja sum_row() powinna zwrócić wartość -48; a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania funkcji sum_row
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji sum_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {2, 0, 3, 4, 6, 0, 8, 3, 8, 3, 2, 2, 9};

                printf("#####START#####");
                int res = sum_row(input_array, 13);           
                printf("#####END#####");

                test_error(res == 50, "Funkcja sum_row() powinna zwrócić wartość 50; a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania funkcji sum_row
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji sum_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-1, -5, -2, 2, -8, 5, 2, -10, 6, 4, -7};

                printf("#####START#####");
                int res = sum_row(input_array, 11);           
                printf("#####END#####");

                test_error(res == -14, "Funkcja sum_row() powinna zwrócić wartość -14; a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania funkcji sum_row
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji sum_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-1};

                printf("#####START#####");
                int res = sum_row(input_array, 1);           
                printf("#####END#####");

                test_error(res == -1, "Funkcja sum_row() powinna zwrócić wartość -1; a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania funkcji sum_row
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji sum_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {-9, -83, 28, 22, -49, -45, -26, -98, -15, 6, -78, -75, -2, 56, 2, -87, 35, 80, -9, -44, 90, -15, 52, 30, 60, 49, -17, -76, 65, -60, -4, 29, -63, -95, 92, -36, 3, 63, -52, -6, 62, -88, 69, -82, 88, 83, -85, 75, 86, -3, 66, -16, 27, 82, 85, 28, -79, 27, 80, -17, 44, 85, -73, 19, 1, 27, -76, -15, 84, 18, -12, 88, 33, 25, -53, -90, -3, 68, 60, -32, -5, -67, -100, 7, 21, 80, -32, 98, -27, -58, 56, -4, -19, 7, 16, -41, 48, 86, -5, 54, -28, 53, -98, -19, -57, -26, 1, -3, -23, 23, -27, -58, 88, 6, 6, -96, -46, 37, 95, 37, -74, -51, 92, 56, 33, 51, 56, 76, 58, -2, 95, 53, -80, 75, 50, 50, 88, 50, -54, 57, 88, 32, -93, 2, -13, 75, -58, -71, 56, 59, 11, 8, -88, -28, -80, 91, -37, -79, 84, 12, 65, -48, 74, 7, -95, -49, -11, 22, 14, 41, -45, 36, 50, 74, 100, -44, -59, -89, 37, 36, 53, 7, 99, 24, -20, -24, 82, 15, 37, 82};

                printf("#####START#####");
                int res = sum_row(input_array, 190);           
                printf("#####END#####");

                test_error(res == 1505, "Funkcja sum_row() powinna zwrócić wartość 1505; a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzanie poprawności działania funkcji sum_row
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji sum_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {4, -4, 0, 5, 5, 0, 2, -1, -5, -8, 9, -2, 3, -7, 6};

                printf("#####START#####");
                int res = sum_row(input_array, -15);           
                printf("#####END#####");

                test_error(res == -1, "Funkcja sum_row() powinna zwrócić wartość -1; a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzanie poprawności działania funkcji sum_row
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji sum_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int input_array[] = {0, -5, -1, -6, -7, -10, -1, 6, 6, -4, -9, -4, 1, -6, -3, -9, 2};

                printf("#####START#####");
                int res = sum_row(input_array, 0);           
                printf("#####END#####");

                test_error(res == -1, "Funkcja sum_row() powinna zwrócić wartość -1; a zwróciła %d", res);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 55: Sprawdzanie poprawności działania funkcji sum_row
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji sum_row", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = sum_row(NULL, 17);           
            printf("#####END#####");

            test_error(res == -1, "Funkcja sum_row() powinna zwrócić wartość -1; a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 56: Sprawdzanie poprawności działania funkcji create_array_2d
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji create_array_2d", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int **ptr;
            
            int res = create_array_2d_2(&ptr, 6, 11);
            int array[11][6] = {
    { -1, -10, 4, 6, -5, -4},

    { -4, -2, -8, -10, 6, 9},

    { -4, 8, 3, -9, -3, -5},

    { 7, -1, -7, -7, 6, -5},

    { -7, -10, 7, -8, -5, 10},

    { 7, 5, -4, -9, -9, 4},

    { 10, -6, -6, 2, 2, -3},

    { 10, 7, -9, 4, 3, 0},

    { 5, -9, -5, -7, 9, -2},

    { -7, -1, 1, -1, 2, 6},

    { -5, -2, -6, 2, -1, -1}};

            test_error(res == 0, "Funkcja create_array_2d() powinna zwrócić 0");
            test_error(ptr != NULL, "Funkcja create_array_2d() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 11; ++i)
                for (int j = 0; j < 6; ++j)
                    ptr[i][j] = array[i][j];

            printf("\n***TEST 1***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, 0, 11);
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
            display_array_2d(ptr, 6, -11);
            printf("***END***\n");

            printf("\n***TEST 5***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, -6, 11);
            printf("***END***\n");

            printf("\n***TEST 6***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, -6, -11);
            printf("***END***\n");

            printf("\n***TEST 7***\n\n");
            printf("***START***\n");
            display_array_2d(NULL, 6, 11);
            printf("***END***\n");

            printf("\n***TEST 8***\n\n");
            printf("***START***\n");
            display_array_2d(ptr, 6, 11);
            printf("***END***\n");

            destroy_array_2d(&ptr, 11);

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
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 88 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 88 bajtów", __LINE__);

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
//  Test 3: Reakcja na brak pamięci - limit ustawiony na 112 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit ustawiony na 112 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(112);
    
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
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 136 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 136 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(136);
    
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
//  Test 5: Reakcja na brak pamięci - limit ustawiony na 160 bajtów
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit ustawiony na 160 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(160);
    
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
//  Test 7: Reakcja na brak pamięci - limit ustawiony na 208 bajtów
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja na brak pamięci - limit ustawiony na 208 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(208);
    
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
//  Test 8: Reakcja na brak pamięci - limit ustawiony na 232 bajtów
//
void MTEST8(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(8, "Reakcja na brak pamięci - limit ustawiony na 232 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(232);
    
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
//  Test 9: Reakcja na brak pamięci - limit ustawiony na 256 bajtów
//
void MTEST9(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(9, "Reakcja na brak pamięci - limit ustawiony na 256 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(256);
    
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
//  Test 10: Reakcja na brak pamięci - limit ustawiony na 280 bajtów
//
void MTEST10(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(10, "Reakcja na brak pamięci - limit ustawiony na 280 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(280);
    
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
//  Test 11: Reakcja na brak pamięci - limit ustawiony na 304 bajtów
//
void MTEST11(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(11, "Reakcja na brak pamięci - limit ustawiony na 304 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(304);
    
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
//  Test 12: Reakcja na brak pamięci - limit ustawiony na 328 bajtów
//
void MTEST12(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(12, "Reakcja na brak pamięci - limit ustawiony na 328 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(328);
    
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
            UTEST11, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST12, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST13, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 448 bajtów)
            UTEST14, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 152 bajtów)
            UTEST15, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 1627660 bajtów)
            UTEST16, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST17, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 144 bajtów)
            UTEST18, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 184 bajtów)
            UTEST19, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 224 bajtów)
            UTEST20, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 264 bajtów)
            UTEST21, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 304 bajtów)
            UTEST22, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 344 bajtów)
            UTEST23, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 384 bajtów)
            UTEST24, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 424 bajtów)
            UTEST25, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 464 bajtów)
            UTEST26, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 504 bajtów)
            UTEST27, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 544 bajtów)
            UTEST28, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 584 bajtów)
            UTEST29, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 624 bajtów)
            UTEST30, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 664 bajtów)
            UTEST31, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 704 bajtów)
            UTEST32, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 744 bajtów)
            UTEST33, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 784 bajtów)
            UTEST34, // Sprawdzanie reakcji funkcji create_array_2d na limit pamięci (limit sterty ustawiono na 824 bajtów)
            UTEST35, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST36, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST37, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST38, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST39, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST40, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST41, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST42, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST43, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST44, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST45, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST46, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST47, // Sprawdzanie poprawności działania funkcji create_array_2d
            UTEST48, // Sprawdzanie poprawności działania funkcji sum_row
            UTEST49, // Sprawdzanie poprawności działania funkcji sum_row
            UTEST50, // Sprawdzanie poprawności działania funkcji sum_row
            UTEST51, // Sprawdzanie poprawności działania funkcji sum_row
            UTEST52, // Sprawdzanie poprawności działania funkcji sum_row
            UTEST53, // Sprawdzanie poprawności działania funkcji sum_row
            UTEST54, // Sprawdzanie poprawności działania funkcji sum_row
            UTEST55, // Sprawdzanie poprawności działania funkcji sum_row
            UTEST56, // Sprawdzanie poprawności działania funkcji create_array_2d
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
            test_summary(56); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 88 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 112 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 136 bajtów
            MTEST5, // Reakcja na brak pamięci - limit ustawiony na 160 bajtów
            MTEST6, // Reakcja na brak pamięci - limit ustawiony na 184 bajtów
            MTEST7, // Reakcja na brak pamięci - limit ustawiony na 208 bajtów
            MTEST8, // Reakcja na brak pamięci - limit ustawiony na 232 bajtów
            MTEST9, // Reakcja na brak pamięci - limit ustawiony na 256 bajtów
            MTEST10, // Reakcja na brak pamięci - limit ustawiony na 280 bajtów
            MTEST11, // Reakcja na brak pamięci - limit ustawiony na 304 bajtów
            MTEST12, // Reakcja na brak pamięci - limit ustawiony na 328 bajtów
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
            test_summary(12); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}