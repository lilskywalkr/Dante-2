/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Obraz w obrazie
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-27 13:53:21.823585
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
//  Test 1: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[5][7] = {{ 7, -4, 8, 1, -9, 0, -2}, { 10, 2, 6, 3, -7, 6, -4}, { -9, -3, -44, -9, -9, 1, -9}, { 2, 10, 9, 10, 4, 0, -1}, { 8, 5, -1, 0, -3, -8, 1}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("deep.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 5, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 5, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 5; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[17][7] = {{ -10, -2, -6, 8, 5, -7, 8}, { -4, -3, 0, 1, -8, 0, 10}, { 10, 6, -44, -9, 4, 9, -7}, { 1, 0, -2, -8, 4, 8, 8}, { 4, -7, 10, 3, -6, 1, 7}, { -7, 6, -6, 9, 8, 1, -4}, { 3, -4, 6, 0, 6, 7, 6}, { 3, -2, 10, -9, 2, -2, -6}, { 3, 0, 7, -1, 10, 1, 9}, { 6, 9, -4, -1, -6, -5, 3}, { -8, 6, 5, 8, -1, -2, -4}, { -6, -2, -3, 3, 10, 2, -1}, { -4, -3, -9, 5, -6, 5, -4}, { 9, 2, -6, 5, 1, -4, -3}, { -10, 9, -4, 5, 9, 3, -1}, { 2, -7, 1, -3, -4, -1, -9}, { 3, 9, -4, 10, -4, 2, -4}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("nor.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 17, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 17; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[19][1] = {{ 0}, { 7}, { 6}, { 0}, { 9}, { 6}, { 7}, { 3}, { 1}, { 10}, { 2}, { 5}, { 1}, { 1}, { 2}, { 2}, { 10}, { 0}, { 0}};

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("represent.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 1, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 19, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 19; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][6] = {{ 5, 0, 5, 6, 8, 7}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("supply.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 6, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][1] = {{ 6}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("horse.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 1, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("size.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("feel.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("during.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("as.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("iron.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("shine.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("chord.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("pose.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("cross.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("third.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("south.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 3, "Funkcja load_image_t() powinna zwrócić kod błędu 3, a zwróciła %d", err_code);
                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("animal.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 2, "Funkcja load_image_t() powinna zwrócić kod błędu 2, a zwróciła %d", err_code);
                    if (!2)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[5][7] = {{ 7, -4, 8, 1, -9, 0, -2}, { 10, 2, 6, 3, -7, 6, -4}, { -9, -3, -44, -9, -9, 1, -9}, { 2, 10, 9, 10, 4, 0, -1}, { 8, 5, -1, 0, -3, -8, 1}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("deep.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 5, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 5, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 5; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[17][7] = {{ -10, -2, -6, 8, 5, -7, 8}, { -4, -3, 0, 1, -8, 0, 10}, { 10, 6, -44, -9, 4, 9, -7}, { 1, 0, -2, -8, 4, 8, 8}, { 4, -7, 10, 3, -6, 1, 7}, { -7, 6, -6, 9, 8, 1, -4}, { 3, -4, 6, 0, 6, 7, 6}, { 3, -2, 10, -9, 2, -2, -6}, { 3, 0, 7, -1, 10, 1, 9}, { 6, 9, -4, -1, -6, -5, 3}, { -8, 6, 5, 8, -1, -2, -4}, { -6, -2, -3, 3, 10, 2, -1}, { -4, -3, -9, 5, -6, 5, -4}, { 9, 2, -6, 5, 1, -4, -3}, { -10, 9, -4, 5, 9, 3, -1}, { 2, -7, 1, -3, -4, -1, -9}, { 3, 9, -4, 10, -4, 2, -4}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("nor.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 17, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 17, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 17; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[19][1] = {{ 0}, { 7}, { 6}, { 0}, { 9}, { 6}, { 7}, { 3}, { 1}, { 10}, { 2}, { 5}, { 1}, { 1}, { 2}, { 2}, { 10}, { 0}, { 0}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("represent.txt", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 1, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 19, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 19; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][6] = {{ 5, 0, 5, 6, 8, 7}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("supply.txt", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 6, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 6; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][1] = {{ 6}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("horse.txt", NULL);
                    printf("#####END#####");

                    if (!0)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 1, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                        test_error(arr->height == 1, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 1; ++i)
                            for (int j = 0; j < 1; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("size.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("feel.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("during.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("as.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("iron.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("shine.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("chord.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("pose.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("cross.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("third.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("south.txt", NULL);
                    printf("#####END#####");

                    if (!3)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][7] = {{ 6, 10, 4, 9, 3, 8, 4}, { 8, 10, 4, 9, 9, 8, 0}, { 4, 3, 7, 4, 3, 0, 9}, { 1, 9, 1, 1, 8, 7, 2}, { 10, 9, 0, 9, 0, 9, 9}, { 3, 3, 7, 4, 10, 8, 1}, { 2, 0, 4, 4, 9, 1, 2}, { 0, 3, 9, 9, 3, 1, 10}, { 5, 0, 2, 9, 7, 2, 7}, { 2, 5, 9, 6, 3, 10, 2}};

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("animal.txt", NULL);
                    printf("#####END#####");

                    if (!2)
                    {
                        test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                        test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                        test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 7; ++j)
                                test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


                        printf("#####START#####");
                        destroy_image(&arr);
                        printf("#####END#####");

                        test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");
                    }
                    else
                        test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 139 bajtów)
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 139 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(139);
    
    //
    // -----------
    //
    

            int array[4][5] = {{ 4, 6, 3, 9, 6}, { 2, 3, 8, 10, 2}, { 5, 9, 8, 9, 7}, { 0, 9, 3, 8, 2}};

            printf("#####START#####");                            
            struct image_t *arr = load_image_t("capital.bin", NULL);
            printf("#####END#####");

            test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
            test_error(arr->width == 5, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr->width);
            test_error(arr->height == 4, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 4, a ustawiła na %d", arr->height);

            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

            for (int i = 0; i < 4; ++i)
                for (int j = 0; j < 5; ++j)
                    test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);


            printf("#####START#####");
            destroy_image(&arr);
            printf("#####END#####");

            test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

            test_no_heap_leakage();
            onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja load_image_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 3 bajtów)
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 3 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3);
    
    //
    // -----------
    //
    

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja load_image_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 27 bajtów)
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 27 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(27);
    
    //
    // -----------
    //
    

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja load_image_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 59 bajtów)
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 59 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(59);
    
    //
    // -----------
    //
    

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja load_image_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 79 bajtów)
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 79 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(79);
    
    //
    // -----------
    //
    

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja load_image_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 99 bajtów)
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 99 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(99);
    
    //
    // -----------
    //
    

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja load_image_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 119 bajtów)
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 119 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(119);
    
    //
    // -----------
    //
    

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 4, "Funkcja load_image_t() powinna zwrócić kod błędu 4, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 3 bajtów)
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 3 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 27 bajtów)
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 27 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(27);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 59 bajtów)
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 59 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(59);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 79 bajtów)
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 79 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(79);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 99 bajtów)
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 99 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(99);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 119 bajtów)
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 119 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(119);
    
    //
    // -----------
    //
    


                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("capital.bin", NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t(NULL, &err_code);
                    printf("#####END#####");

                    test_error(err_code == 1, "Funkcja load_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);
                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania funkcji load_image_t
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji load_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t(NULL, NULL);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja load_image_t() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[10][10] = {{ 11, 31, 20, 44, 59, 14, 11, 16, 20, 41}, { 95, 73, 78, 28, 76, 82, 97, 73, 52, 36}, { 37, 76, 24, 96, 68, 49, 64, 68, 25, 52}, { 18, 21, 43, 38, 92, 9, 93, 17, 11, 77}, { 11, 97, 67, 45, 83, 2, 23, 76, 71, 17}, { 38, 44, 59, 18, 64, 5, 52, 44, 41, 98}, { 51, 30, 85, 59, 89, 46, 83, 86, 89, 46}, { 33, 43, 65, 2, 95, 72, 23, 66, 39, 40}, { 16, 9, 34, 19, 46, 14, 28, 19, 63, 25}, { 39, 7, 13, 65, 5, 20, 58, 62, 10, 89}};
                    int small_array[10][10] = {{ 1, 78, 60, 26, 26, 95, 39, 60, 22, 32}, { 5, 27, 38, 12, 38, 68, 90, 25, 57, 26}, { 2, 74, 28, 1, 52, 98, 24, 25, 57, 90}, { 69, 96, 70, 95, 84, 49, 31, 75, 66, 28}, { 43, 4, 15, 24, 93, 99, 63, 54, 16, 12}, { 8, 78, 9, 53, 66, 93, 23, 38, 61, 15}, { 61, 70, 66, 68, 23, 20, 73, 50, 91, 64}, { 58, 53, 29, 17, 82, 38, 12, 41, 30, 55}, { 100, 59, 39, 87, 88, 73, 45, 49, 29, 3}, { 40, 27, 71, 33, 5, 48, 78, 1, 75, 95}};
                    
                    int array_draw_rectangle[10][10] = {{ 1, 78, 60, 26, 26, 95, 39, 60, 22, 32}, { 5, 27, 38, 12, 38, 68, 90, 25, 57, 26}, { 2, 74, 28, 1, 52, 98, 24, 25, 57, 90}, { 69, 96, 70, 95, 84, 49, 31, 75, 66, 28}, { 43, 4, 15, 24, 93, 99, 63, 54, 16, 12}, { 8, 78, 9, 53, 66, 93, 23, 38, 61, 15}, { 61, 70, 66, 68, 23, 20, 73, 50, 91, 64}, { 58, 53, 29, 17, 82, 38, 12, 41, 30, 55}, { 100, 59, 39, 87, 88, 73, 45, 49, 29, 3}, { 40, 27, 71, 33, 5, 48, 78, 1, 75, 95}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("party.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 10, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", arr->width);
                    test_error(arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 10; ++i)
                        for (int j = 0; j < 10; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("move.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 10, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 10, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 10, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 10, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 10; ++i)
                        for (int j = 0; j < 10; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 10;
                    small_arr->height = 10;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 10;
                    small_arr->height = 10;   

                    if (!0)
                    {
                        for (int i = 0; i < 10; ++i)
                            for (int j = 0; j < 10; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[19][9] = {{ 82, 99, 46, 47, 89, 80, 35, 30, 25}, { 75, 44, 99, 66, 96, 6, 89, 34, 43}, { 28, 96, 80, 67, 91, 25, 51, 73, 43}, { 19, 61, 6, 53, 84, 17, 1, 57, 51}, { 43, 23, 53, 15, 88, 8, 26, 51, 98}, { 45, 11, 75, 37, 58, 96, 93, 69, 45}, { 47, 5, 71, 94, 14, 86, 32, 40, 32}, { 100, 7, 94, 63, 72, 9, 72, 35, 52}, { 45, 9, 29, 54, 53, 53, 10, 30, 24}, { 56, 17, 27, 78, 38, 72, 13, 18, 22}, { 46, 67, 65, 71, 29, 32, 89, 24, 13}, { 54, 93, 7, 6, 31, 21, 76, 69, 18}, { 10, 27, 24, 59, 31, 100, 72, 77, 22}, { 59, 57, 71, 62, 43, 21, 71, 40, 68}, { 9, 58, 1, 36, 21, 77, 87, 56, 93}, { 46, 17, 86, 11, 43, 63, 43, 78, 46}, { 16, 48, 44, 89, 91, 37, 20, 62, 100}, { 27, 23, 94, 77, 70, 10, 24, 84, 94}, { 38, 95, 99, 31, 24, 65, 58, 72, 20}};
                    int small_array[19][9] = {{ 100, 62, 32, 38, 16, 76, 82, 76, 47}, { 90, 78, 41, 11, 84, 70, 71, 9, 62}, { 11, 65, 73, 60, 77, 61, 72, 65, 50}, { 85, 88, 97, 16, 77, 29, 94, 4, 30}, { 15, 56, 36, 71, 14, 31, 69, 95, 8}, { 71, 41, 7, 32, 10, 56, 80, 22, 37}, { 75, 14, 56, 85, 65, 28, 66, 80, 85}, { 76, 96, 51, 3, 99, 66, 90, 58, 76}, { 22, 46, 12, 65, 69, 77, 37, 64, 14}, { 25, 14, 24, 72, 75, 4, 95, 11, 63}, { 59, 73, 71, 2, 17, 91, 11, 77, 55}, { 92, 58, 35, 98, 28, 43, 94, 86, 46}, { 37, 54, 37, 2, 40, 86, 87, 6, 96}, { 71, 76, 73, 62, 65, 3, 43, 63, 9}, { 88, 84, 83, 89, 46, 42, 48, 81, 27}, { 53, 76, 25, 58, 22, 46, 11, 33, 52}, { 63, 80, 61, 91, 80, 46, 28, 79, 55}, { 78, 95, 30, 65, 80, 22, 56, 91, 15}, { 66, 1, 92, 36, 51, 75, 57, 1, 45}};
                    
                    int array_draw_rectangle[19][9] = {{ 100, 62, 32, 38, 16, 76, 82, 76, 47}, { 90, 78, 41, 11, 84, 70, 71, 9, 62}, { 11, 65, 73, 60, 77, 61, 72, 65, 50}, { 85, 88, 97, 16, 77, 29, 94, 4, 30}, { 15, 56, 36, 71, 14, 31, 69, 95, 8}, { 71, 41, 7, 32, 10, 56, 80, 22, 37}, { 75, 14, 56, 85, 65, 28, 66, 80, 85}, { 76, 96, 51, 3, 99, 66, 90, 58, 76}, { 22, 46, 12, 65, 69, 77, 37, 64, 14}, { 25, 14, 24, 72, 75, 4, 95, 11, 63}, { 59, 73, 71, 2, 17, 91, 11, 77, 55}, { 92, 58, 35, 98, 28, 43, 94, 86, 46}, { 37, 54, 37, 2, 40, 86, 87, 6, 96}, { 71, 76, 73, 62, 65, 3, 43, 63, 9}, { 88, 84, 83, 89, 46, 42, 48, 81, 27}, { 53, 76, 25, 58, 22, 46, 11, 33, 52}, { 63, 80, 61, 91, 80, 46, 28, 79, 55}, { 78, 95, 30, 65, 80, 22, 56, 91, 15}, { 66, 1, 92, 36, 51, 75, 57, 1, 45}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("sudden.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 19, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 19; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("discuss.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 19, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 19, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 19; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 9;
                    small_arr->height = 19;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 9;
                    small_arr->height = 19;   

                    if (!0)
                    {
                        for (int i = 0; i < 19; ++i)
                            for (int j = 0; j < 9; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[35][34] = {{ 88, 8, 56, 24, 63, 35, 49, 1, 62, 37, 22, 9, 41, 34, 47, 76, 85, 11, 67, 13, 85, 56, 98, 71, 48, 67, 4, 45, 45, 16, 85, 33, 44, 86}, { 13, 26, 31, 54, 28, 85, 100, 92, 31, 92, 8, 55, 85, 62, 52, 60, 100, 72, 75, 16, 75, 21, 57, 93, 62, 3, 73, 27, 58, 47, 14, 88, 79, 1}, { 83, 32, 22, 48, 86, 42, 39, 7, 14, 81, 45, 22, 74, 55, 47, 8, 35, 65, 85, 56, 61, 63, 16, 39, 70, 12, 39, 76, 6, 3, 26, 95, 22, 53}, { 9, 81, 76, 43, 57, 4, 24, 99, 11, 59, 49, 42, 45, 45, 98, 78, 15, 70, 56, 40, 76, 23, 42, 8, 57, 87, 54, 37, 59, 15, 23, 95, 33, 80}, { 35, 19, 30, 12, 38, 8, 10, 33, 98, 89, 38, 44, 30, 1, 83, 94, 51, 97, 53, 81, 42, 99, 34, 13, 38, 37, 73, 60, 78, 76, 7, 41, 42, 37}, { 96, 6, 48, 78, 10, 38, 24, 72, 35, 3, 27, 70, 47, 44, 32, 67, 12, 84, 57, 39, 41, 72, 55, 72, 96, 72, 6, 72, 40, 52, 30, 73, 35, 26}, { 6, 61, 25, 27, 81, 54, 12, 2, 27, 60, 99, 7, 35, 26, 56, 10, 92, 18, 22, 85, 8, 45, 38, 75, 97, 84, 59, 55, 9, 49, 55, 65, 49, 43}, { 75, 2, 66, 83, 54, 10, 23, 79, 16, 52, 34, 70, 20, 88, 87, 94, 13, 85, 27, 33, 84, 96, 77, 91, 86, 42, 45, 57, 27, 20, 95, 33, 76, 1}, { 33, 55, 23, 90, 88, 42, 69, 3, 52, 56, 79, 19, 60, 88, 76, 96, 42, 73, 15, 1, 14, 33, 86, 83, 50, 14, 52, 88, 37, 73, 69, 44, 71, 92}, { 39, 34, 28, 93, 7, 56, 55, 63, 5, 40, 61, 42, 17, 72, 37, 96, 8, 41, 62, 53, 60, 69, 67, 47, 73, 24, 95, 41, 100, 78, 87, 13, 15, 33}, { 61, 53, 50, 81, 86, 73, 20, 82, 4, 3, 46, 29, 79, 74, 89, 74, 48, 17, 81, 36, 97, 35, 64, 20, 92, 25, 19, 85, 40, 6, 76, 46, 37, 30}, { 51, 32, 19, 74, 91, 43, 54, 32, 42, 76, 6, 73, 15, 41, 35, 3, 79, 45, 9, 28, 62, 23, 32, 63, 19, 56, 61, 12, 40, 8, 73, 36, 31, 35}, { 2, 69, 82, 4, 3, 4, 84, 81, 24, 97, 95, 33, 61, 3, 69, 5, 26, 83, 15, 49, 11, 39, 44, 38, 80, 13, 6, 71, 46, 87, 98, 42, 94, 25}, { 92, 44, 95, 86, 73, 57, 27, 99, 69, 67, 51, 17, 14, 62, 63, 70, 1, 46, 56, 32, 30, 25, 99, 96, 22, 98, 48, 88, 38, 18, 83, 55, 98, 24}, { 47, 95, 78, 68, 71, 55, 35, 5, 44, 24, 47, 46, 77, 8, 44, 39, 29, 49, 55, 56, 29, 73, 61, 5, 37, 42, 55, 23, 28, 88, 51, 33, 80, 97}, { 100, 32, 30, 45, 78, 90, 74, 50, 94, 29, 39, 62, 27, 9, 54, 28, 50, 70, 64, 2, 68, 66, 53, 55, 33, 41, 85, 94, 97, 54, 31, 69, 1, 12}, { 96, 16, 19, 15, 99, 91, 29, 11, 91, 74, 89, 27, 97, 57, 20, 22, 97, 11, 21, 40, 48, 93, 52, 39, 36, 82, 34, 30, 83, 58, 65, 96, 9, 32}, { 70, 38, 76, 46, 35, 10, 89, 32, 65, 91, 28, 72, 10, 50, 33, 61, 69, 69, 99, 6, 39, 100, 47, 10, 34, 99, 97, 77, 26, 4, 79, 85, 45, 18}, { 7, 23, 9, 23, 33, 70, 15, 9, 61, 83, 29, 2, 94, 23, 99, 62, 78, 87, 99, 30, 32, 30, 73, 26, 97, 10, 52, 66, 47, 59, 9, 63, 23, 14}, { 5, 52, 16, 76, 76, 58, 90, 83, 77, 80, 3, 49, 27, 66, 88, 44, 32, 14, 90, 99, 9, 51, 6, 2, 100, 91, 46, 8, 11, 72, 72, 73, 62, 60}, { 58, 24, 74, 34, 12, 12, 79, 23, 46, 2, 70, 61, 12, 44, 34, 75, 77, 40, 8, 97, 2, 35, 12, 84, 47, 93, 25, 71, 25, 59, 74, 18, 89, 71}, { 1, 33, 6, 68, 76, 25, 78, 72, 65, 28, 90, 46, 96, 99, 43, 87, 75, 87, 7, 74, 73, 43, 100, 86, 16, 38, 64, 17, 45, 54, 44, 98, 19, 64}, { 87, 29, 59, 55, 20, 31, 96, 70, 87, 15, 11, 30, 41, 12, 54, 68, 77, 1, 53, 4, 89, 79, 90, 76, 31, 65, 72, 84, 59, 14, 66, 1, 62, 82}, { 83, 38, 36, 50, 76, 8, 49, 14, 48, 18, 35, 25, 30, 1, 27, 100, 73, 45, 62, 89, 71, 52, 62, 95, 96, 44, 11, 40, 19, 35, 70, 25, 14, 8}, { 29, 35, 3, 94, 96, 87, 94, 6, 18, 33, 66, 27, 76, 8, 3, 88, 17, 51, 90, 13, 48, 84, 31, 36, 82, 50, 70, 43, 40, 70, 34, 92, 90, 96}, { 66, 35, 45, 15, 83, 38, 20, 54, 93, 63, 35, 81, 76, 87, 11, 35, 63, 70, 53, 92, 32, 40, 60, 14, 77, 28, 46, 95, 68, 17, 85, 14, 3, 19}, { 69, 37, 95, 2, 70, 11, 79, 9, 71, 13, 97, 65, 42, 44, 91, 100, 42, 85, 42, 8, 97, 55, 63, 63, 60, 34, 59, 1, 78, 21, 55, 48, 12, 90}, { 49, 21, 37, 74, 38, 66, 7, 40, 23, 90, 48, 68, 3, 32, 60, 60, 8, 51, 63, 97, 99, 85, 64, 93, 45, 11, 74, 59, 15, 13, 50, 5, 10, 93}, { 15, 25, 26, 42, 24, 34, 26, 13, 87, 52, 3, 27, 60, 4, 41, 48, 22, 92, 33, 90, 57, 35, 70, 16, 26, 75, 100, 56, 38, 33, 62, 98, 12, 65}, { 33, 85, 52, 60, 63, 88, 74, 15, 28, 54, 63, 65, 26, 49, 93, 5, 39, 39, 8, 69, 39, 58, 13, 96, 17, 7, 24, 91, 56, 5, 8, 37, 3, 25}, { 68, 99, 81, 34, 78, 49, 32, 39, 85, 66, 30, 5, 79, 63, 33, 36, 98, 22, 12, 29, 55, 9, 16, 16, 22, 97, 94, 91, 44, 91, 100, 94, 16, 33}, { 87, 12, 61, 86, 86, 46, 88, 81, 78, 53, 95, 8, 10, 59, 75, 3, 33, 21, 50, 88, 69, 71, 8, 44, 53, 47, 88, 3, 15, 70, 23, 73, 53, 14}, { 23, 24, 22, 25, 9, 47, 1, 92, 23, 66, 28, 91, 58, 45, 62, 91, 8, 100, 78, 5, 91, 66, 72, 7, 87, 21, 9, 73, 28, 26, 49, 65, 93, 30}, { 24, 89, 62, 93, 27, 83, 43, 18, 23, 80, 61, 29, 75, 67, 46, 38, 100, 4, 74, 37, 89, 91, 85, 87, 20, 99, 2, 4, 8, 40, 84, 1, 28, 28}, { 79, 69, 58, 54, 5, 48, 34, 52, 44, 33, 93, 67, 74, 40, 80, 10, 38, 68, 48, 26, 79, 20, 66, 93, 83, 39, 54, 27, 29, 11, 62, 36, 81, 54}};
                    int small_array[35][34] = {{ 2, 13, 16, 23, 24, 12, 87, 85, 94, 47, 72, 90, 80, 29, 37, 21, 48, 43, 15, 51, 90, 84, 31, 38, 63, 58, 23, 13, 49, 24, 7, 59, 92, 76}, { 64, 59, 51, 62, 61, 70, 21, 81, 38, 27, 2, 75, 22, 17, 72, 2, 74, 96, 53, 27, 100, 32, 53, 98, 84, 8, 4, 69, 25, 98, 8, 65, 97, 26}, { 18, 18, 95, 34, 1, 37, 35, 58, 87, 78, 63, 48, 61, 95, 75, 37, 92, 2, 69, 42, 58, 5, 28, 12, 1, 46, 36, 39, 14, 82, 29, 95, 3, 82}, { 39, 86, 49, 27, 35, 11, 26, 99, 63, 87, 63, 13, 43, 48, 92, 1, 5, 74, 19, 71, 77, 54, 39, 11, 93, 44, 28, 26, 92, 77, 56, 15, 39, 23}, { 56, 78, 69, 12, 11, 33, 80, 61, 14, 20, 58, 55, 3, 11, 42, 14, 34, 32, 89, 67, 86, 44, 55, 79, 8, 98, 88, 53, 4, 12, 28, 21, 61, 23}, { 24, 33, 42, 60, 16, 32, 6, 71, 73, 46, 62, 73, 54, 34, 16, 76, 60, 18, 75, 18, 50, 24, 78, 50, 3, 68, 99, 58, 31, 75, 86, 14, 49, 93}, { 56, 98, 83, 62, 28, 31, 45, 79, 76, 88, 51, 43, 63, 10, 35, 7, 53, 68, 67, 79, 67, 61, 49, 21, 71, 35, 19, 19, 9, 63, 53, 61, 59, 64}, { 76, 60, 87, 6, 37, 45, 76, 91, 44, 48, 21, 84, 62, 30, 8, 60, 78, 24, 38, 2, 85, 44, 100, 55, 69, 39, 88, 2, 61, 1, 42, 31, 69, 1}, { 73, 89, 49, 70, 98, 42, 90, 17, 61, 1, 99, 64, 40, 92, 34, 70, 2, 23, 23, 2, 75, 86, 65, 65, 66, 77, 13, 70, 28, 79, 74, 42, 67, 10}, { 11, 64, 49, 95, 76, 51, 91, 58, 62, 40, 63, 74, 17, 92, 32, 44, 5, 55, 65, 68, 6, 63, 99, 70, 29, 52, 74, 54, 60, 45, 88, 49, 10, 21}, { 78, 80, 65, 8, 13, 60, 1, 56, 63, 3, 37, 69, 20, 95, 84, 72, 29, 54, 5, 40, 31, 5, 17, 14, 58, 74, 13, 95, 62, 23, 52, 57, 20, 87}, { 27, 17, 36, 6, 85, 60, 14, 54, 68, 94, 59, 64, 35, 85, 73, 17, 1, 66, 25, 45, 48, 79, 66, 93, 47, 62, 46, 4, 70, 84, 56, 50, 71, 20}, { 24, 75, 93, 10, 65, 56, 35, 76, 16, 51, 22, 32, 34, 22, 33, 4, 42, 100, 46, 21, 76, 77, 64, 2, 74, 52, 66, 18, 90, 11, 51, 51, 1, 36}, { 69, 94, 40, 70, 11, 62, 67, 78, 16, 12, 76, 13, 99, 1, 36, 17, 71, 83, 41, 27, 67, 42, 5, 97, 59, 40, 71, 49, 80, 53, 69, 17, 63, 93}, { 19, 39, 98, 88, 24, 79, 80, 87, 91, 11, 50, 47, 44, 64, 8, 48, 42, 52, 54, 90, 33, 100, 68, 94, 76, 70, 68, 61, 43, 76, 63, 49, 36, 96}, { 24, 54, 87, 27, 7, 85, 66, 78, 73, 13, 15, 52, 10, 33, 78, 31, 2, 56, 49, 13, 4, 46, 4, 78, 17, 4, 40, 31, 65, 77, 28, 10, 13, 8}, { 85, 61, 20, 88, 88, 88, 4, 19, 50, 18, 36, 7, 58, 57, 19, 96, 72, 36, 11, 49, 77, 11, 98, 18, 89, 58, 98, 38, 19, 63, 72, 17, 50, 11}, { 22, 26, 84, 82, 55, 99, 74, 60, 4, 72, 65, 14, 46, 32, 39, 67, 62, 67, 66, 1, 29, 47, 97, 97, 12, 82, 19, 10, 71, 52, 98, 49, 5, 41}, { 41, 12, 57, 84, 32, 39, 98, 60, 90, 98, 60, 97, 32, 28, 15, 64, 66, 18, 67, 56, 93, 100, 27, 70, 65, 89, 53, 16, 94, 22, 64, 76, 70, 65}, { 9, 88, 29, 91, 12, 67, 47, 39, 92, 86, 55, 36, 92, 60, 23, 74, 63, 41, 39, 87, 32, 34, 44, 19, 74, 20, 15, 78, 87, 91, 12, 83, 4, 43}, { 87, 83, 72, 4, 7, 4, 29, 90, 96, 100, 23, 65, 97, 73, 72, 79, 86, 88, 93, 12, 6, 43, 39, 66, 64, 49, 43, 61, 84, 52, 71, 21, 83, 39}, { 7, 64, 100, 27, 27, 27, 61, 53, 72, 58, 10, 12, 53, 91, 26, 25, 37, 58, 41, 38, 3, 94, 71, 74, 9, 97, 24, 53, 88, 96, 59, 22, 40, 87}, { 39, 98, 71, 2, 92, 64, 70, 60, 42, 20, 43, 90, 80, 52, 42, 73, 61, 54, 61, 7, 100, 63, 65, 19, 96, 51, 70, 43, 67, 71, 8, 41, 8, 17}, { 30, 54, 1, 71, 52, 100, 38, 18, 11, 86, 14, 64, 61, 8, 11, 90, 25, 100, 49, 10, 59, 41, 57, 84, 88, 81, 25, 50, 24, 34, 64, 66, 1, 64}, { 27, 60, 95, 55, 3, 59, 100, 98, 83, 3, 65, 50, 75, 67, 51, 34, 74, 86, 33, 37, 88, 35, 82, 64, 55, 51, 2, 27, 9, 42, 47, 11, 13, 50}, { 37, 49, 42, 77, 30, 41, 78, 37, 64, 46, 23, 36, 58, 13, 21, 3, 56, 86, 51, 37, 38, 48, 10, 65, 84, 89, 71, 82, 40, 79, 31, 83, 29, 14}, { 63, 64, 84, 89, 15, 61, 100, 21, 77, 57, 65, 78, 14, 47, 39, 31, 62, 22, 4, 13, 34, 15, 40, 83, 88, 94, 74, 87, 63, 8, 43, 75, 30, 95}, { 69, 51, 83, 66, 33, 25, 48, 71, 27, 52, 37, 20, 51, 24, 54, 31, 21, 52, 2, 77, 60, 86, 31, 44, 34, 37, 47, 49, 54, 19, 72, 20, 41, 4}, { 1, 64, 53, 54, 70, 12, 98, 40, 4, 11, 30, 80, 21, 33, 35, 24, 8, 2, 94, 76, 43, 21, 62, 58, 100, 73, 46, 63, 37, 90, 68, 57, 2, 26}, { 24, 99, 81, 5, 1, 31, 66, 21, 55, 33, 31, 18, 62, 73, 67, 69, 90, 51, 44, 43, 89, 62, 7, 56, 82, 33, 38, 76, 81, 49, 100, 95, 21, 81}, { 39, 36, 33, 25, 63, 91, 7, 25, 43, 43, 2, 64, 83, 83, 74, 46, 10, 13, 100, 6, 70, 29, 11, 74, 13, 9, 86, 75, 74, 65, 45, 11, 92, 90}, { 6, 81, 5, 49, 98, 48, 58, 32, 9, 96, 28, 68, 5, 19, 72, 57, 78, 84, 76, 57, 28, 7, 92, 12, 90, 16, 20, 52, 67, 7, 47, 83, 61, 81}, { 17, 95, 3, 14, 39, 21, 67, 45, 12, 49, 80, 44, 85, 53, 95, 87, 37, 37, 77, 49, 59, 19, 26, 65, 10, 57, 88, 31, 35, 92, 91, 19, 26, 67}, { 80, 69, 94, 18, 53, 2, 68, 87, 75, 19, 84, 21, 26, 68, 8, 91, 90, 85, 55, 47, 33, 96, 31, 88, 9, 39, 24, 53, 63, 68, 1, 46, 32, 1}, { 45, 48, 4, 67, 8, 21, 28, 4, 59, 36, 36, 8, 6, 65, 34, 71, 87, 100, 12, 85, 69, 44, 76, 52, 10, 12, 62, 9, 90, 75, 66, 94, 12, 81}};
                    
                    int array_draw_rectangle[35][34] = {{ 2, 13, 16, 23, 24, 12, 87, 85, 94, 47, 72, 90, 80, 29, 37, 21, 48, 43, 15, 51, 90, 84, 31, 38, 63, 58, 23, 13, 49, 24, 7, 59, 92, 76}, { 64, 59, 51, 62, 61, 70, 21, 81, 38, 27, 2, 75, 22, 17, 72, 2, 74, 96, 53, 27, 100, 32, 53, 98, 84, 8, 4, 69, 25, 98, 8, 65, 97, 26}, { 18, 18, 95, 34, 1, 37, 35, 58, 87, 78, 63, 48, 61, 95, 75, 37, 92, 2, 69, 42, 58, 5, 28, 12, 1, 46, 36, 39, 14, 82, 29, 95, 3, 82}, { 39, 86, 49, 27, 35, 11, 26, 99, 63, 87, 63, 13, 43, 48, 92, 1, 5, 74, 19, 71, 77, 54, 39, 11, 93, 44, 28, 26, 92, 77, 56, 15, 39, 23}, { 56, 78, 69, 12, 11, 33, 80, 61, 14, 20, 58, 55, 3, 11, 42, 14, 34, 32, 89, 67, 86, 44, 55, 79, 8, 98, 88, 53, 4, 12, 28, 21, 61, 23}, { 24, 33, 42, 60, 16, 32, 6, 71, 73, 46, 62, 73, 54, 34, 16, 76, 60, 18, 75, 18, 50, 24, 78, 50, 3, 68, 99, 58, 31, 75, 86, 14, 49, 93}, { 56, 98, 83, 62, 28, 31, 45, 79, 76, 88, 51, 43, 63, 10, 35, 7, 53, 68, 67, 79, 67, 61, 49, 21, 71, 35, 19, 19, 9, 63, 53, 61, 59, 64}, { 76, 60, 87, 6, 37, 45, 76, 91, 44, 48, 21, 84, 62, 30, 8, 60, 78, 24, 38, 2, 85, 44, 100, 55, 69, 39, 88, 2, 61, 1, 42, 31, 69, 1}, { 73, 89, 49, 70, 98, 42, 90, 17, 61, 1, 99, 64, 40, 92, 34, 70, 2, 23, 23, 2, 75, 86, 65, 65, 66, 77, 13, 70, 28, 79, 74, 42, 67, 10}, { 11, 64, 49, 95, 76, 51, 91, 58, 62, 40, 63, 74, 17, 92, 32, 44, 5, 55, 65, 68, 6, 63, 99, 70, 29, 52, 74, 54, 60, 45, 88, 49, 10, 21}, { 78, 80, 65, 8, 13, 60, 1, 56, 63, 3, 37, 69, 20, 95, 84, 72, 29, 54, 5, 40, 31, 5, 17, 14, 58, 74, 13, 95, 62, 23, 52, 57, 20, 87}, { 27, 17, 36, 6, 85, 60, 14, 54, 68, 94, 59, 64, 35, 85, 73, 17, 1, 66, 25, 45, 48, 79, 66, 93, 47, 62, 46, 4, 70, 84, 56, 50, 71, 20}, { 24, 75, 93, 10, 65, 56, 35, 76, 16, 51, 22, 32, 34, 22, 33, 4, 42, 100, 46, 21, 76, 77, 64, 2, 74, 52, 66, 18, 90, 11, 51, 51, 1, 36}, { 69, 94, 40, 70, 11, 62, 67, 78, 16, 12, 76, 13, 99, 1, 36, 17, 71, 83, 41, 27, 67, 42, 5, 97, 59, 40, 71, 49, 80, 53, 69, 17, 63, 93}, { 19, 39, 98, 88, 24, 79, 80, 87, 91, 11, 50, 47, 44, 64, 8, 48, 42, 52, 54, 90, 33, 100, 68, 94, 76, 70, 68, 61, 43, 76, 63, 49, 36, 96}, { 24, 54, 87, 27, 7, 85, 66, 78, 73, 13, 15, 52, 10, 33, 78, 31, 2, 56, 49, 13, 4, 46, 4, 78, 17, 4, 40, 31, 65, 77, 28, 10, 13, 8}, { 85, 61, 20, 88, 88, 88, 4, 19, 50, 18, 36, 7, 58, 57, 19, 96, 72, 36, 11, 49, 77, 11, 98, 18, 89, 58, 98, 38, 19, 63, 72, 17, 50, 11}, { 22, 26, 84, 82, 55, 99, 74, 60, 4, 72, 65, 14, 46, 32, 39, 67, 62, 67, 66, 1, 29, 47, 97, 97, 12, 82, 19, 10, 71, 52, 98, 49, 5, 41}, { 41, 12, 57, 84, 32, 39, 98, 60, 90, 98, 60, 97, 32, 28, 15, 64, 66, 18, 67, 56, 93, 100, 27, 70, 65, 89, 53, 16, 94, 22, 64, 76, 70, 65}, { 9, 88, 29, 91, 12, 67, 47, 39, 92, 86, 55, 36, 92, 60, 23, 74, 63, 41, 39, 87, 32, 34, 44, 19, 74, 20, 15, 78, 87, 91, 12, 83, 4, 43}, { 87, 83, 72, 4, 7, 4, 29, 90, 96, 100, 23, 65, 97, 73, 72, 79, 86, 88, 93, 12, 6, 43, 39, 66, 64, 49, 43, 61, 84, 52, 71, 21, 83, 39}, { 7, 64, 100, 27, 27, 27, 61, 53, 72, 58, 10, 12, 53, 91, 26, 25, 37, 58, 41, 38, 3, 94, 71, 74, 9, 97, 24, 53, 88, 96, 59, 22, 40, 87}, { 39, 98, 71, 2, 92, 64, 70, 60, 42, 20, 43, 90, 80, 52, 42, 73, 61, 54, 61, 7, 100, 63, 65, 19, 96, 51, 70, 43, 67, 71, 8, 41, 8, 17}, { 30, 54, 1, 71, 52, 100, 38, 18, 11, 86, 14, 64, 61, 8, 11, 90, 25, 100, 49, 10, 59, 41, 57, 84, 88, 81, 25, 50, 24, 34, 64, 66, 1, 64}, { 27, 60, 95, 55, 3, 59, 100, 98, 83, 3, 65, 50, 75, 67, 51, 34, 74, 86, 33, 37, 88, 35, 82, 64, 55, 51, 2, 27, 9, 42, 47, 11, 13, 50}, { 37, 49, 42, 77, 30, 41, 78, 37, 64, 46, 23, 36, 58, 13, 21, 3, 56, 86, 51, 37, 38, 48, 10, 65, 84, 89, 71, 82, 40, 79, 31, 83, 29, 14}, { 63, 64, 84, 89, 15, 61, 100, 21, 77, 57, 65, 78, 14, 47, 39, 31, 62, 22, 4, 13, 34, 15, 40, 83, 88, 94, 74, 87, 63, 8, 43, 75, 30, 95}, { 69, 51, 83, 66, 33, 25, 48, 71, 27, 52, 37, 20, 51, 24, 54, 31, 21, 52, 2, 77, 60, 86, 31, 44, 34, 37, 47, 49, 54, 19, 72, 20, 41, 4}, { 1, 64, 53, 54, 70, 12, 98, 40, 4, 11, 30, 80, 21, 33, 35, 24, 8, 2, 94, 76, 43, 21, 62, 58, 100, 73, 46, 63, 37, 90, 68, 57, 2, 26}, { 24, 99, 81, 5, 1, 31, 66, 21, 55, 33, 31, 18, 62, 73, 67, 69, 90, 51, 44, 43, 89, 62, 7, 56, 82, 33, 38, 76, 81, 49, 100, 95, 21, 81}, { 39, 36, 33, 25, 63, 91, 7, 25, 43, 43, 2, 64, 83, 83, 74, 46, 10, 13, 100, 6, 70, 29, 11, 74, 13, 9, 86, 75, 74, 65, 45, 11, 92, 90}, { 6, 81, 5, 49, 98, 48, 58, 32, 9, 96, 28, 68, 5, 19, 72, 57, 78, 84, 76, 57, 28, 7, 92, 12, 90, 16, 20, 52, 67, 7, 47, 83, 61, 81}, { 17, 95, 3, 14, 39, 21, 67, 45, 12, 49, 80, 44, 85, 53, 95, 87, 37, 37, 77, 49, 59, 19, 26, 65, 10, 57, 88, 31, 35, 92, 91, 19, 26, 67}, { 80, 69, 94, 18, 53, 2, 68, 87, 75, 19, 84, 21, 26, 68, 8, 91, 90, 85, 55, 47, 33, 96, 31, 88, 9, 39, 24, 53, 63, 68, 1, 46, 32, 1}, { 45, 48, 4, 67, 8, 21, 28, 4, 59, 36, 36, 8, 6, 65, 34, 71, 87, 100, 12, 85, 69, 44, 76, 52, 10, 12, 62, 9, 90, 75, 66, 94, 12, 81}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("high.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 34, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 34, a ustawiła na %d", arr->width);
                    test_error(arr->height == 35, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 35, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 35; ++i)
                        for (int j = 0; j < 34; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("matter.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 34, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 34, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 35, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 35, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 35; ++i)
                        for (int j = 0; j < 34; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 34;
                    small_arr->height = 35;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 34;
                    small_arr->height = 35;   

                    if (!0)
                    {
                        for (int i = 0; i < 35; ++i)
                            for (int j = 0; j < 34; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 55: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 71, 71, 8, 38, 38, 15, 59, 14, 23, 35, 55, 40, 11, 12, 69, 24, 36, 35, 69, 48, 83, 35, 70, 1, 28, 80}, { 2, 92, 38, 88, 28, 13, 37, 12, 85, 27, 83, 63, 80, 21, 98, 53, 92, 56, 61, 28, 41, 26, 24, 96, 73, 19}, { 62, 98, 82, 98, 53, 44, 76, 48, 22, 18, 52, 6, 91, 32, 42, 8, 75, 42, 78, 87, 36, 16, 27, 5, 53, 18}, { 51, 63, 19, 67, 1, 34, 46, 35, 27, 77, 11, 87, 96, 2, 10, 72, 14, 40, 84, 47, 56, 55, 63, 85, 86, 63}, { 29, 42, 39, 87, 50, 55, 78, 80, 10, 18, 58, 8, 54, 9, 10, 55, 31, 86, 12, 13, 23, 86, 53, 27, 77, 79}, { 46, 52, 62, 71, 17, 55, 3, 81, 3, 22, 41, 50, 23, 80, 57, 86, 32, 29, 6, 72, 90, 87, 44, 73, 73, 33}, { 62, 81, 48, 40, 36, 7, 96, 15, 25, 74, 72, 70, 86, 83, 100, 52, 5, 54, 62, 61, 63, 99, 40, 97, 62, 39}, { 54, 47, 23, 35, 9, 52, 32, 31, 37, 95, 73, 31, 12, 15, 98, 85, 38, 73, 63, 54, 35, 100, 25, 65, 85, 1}, { 33, 11, 35, 60, 11, 22, 45, 57, 54, 18, 32, 39, 29, 54, 4, 11, 53, 64, 72, 2, 52, 34, 31, 99, 28, 39}, { 51, 53, 39, 13, 6, 19, 18, 72, 75, 74, 66, 47, 1, 15, 61, 44, 40, 95, 45, 30, 32, 87, 64, 45, 69, 14}, { 11, 63, 52, 71, 29, 8, 68, 99, 52, 9, 90, 49, 87, 63, 80, 3, 95, 84, 66, 100, 64, 58, 95, 89, 64, 25}, { 32, 29, 8, 98, 22, 94, 32, 50, 47, 99, 12, 45, 37, 38, 82, 88, 43, 61, 40, 61, 79, 89, 98, 71, 75, 13}, { 94, 90, 72, 94, 71, 48, 9, 4, 14, 11, 70, 32, 12, 9, 20, 34, 18, 79, 59, 67, 84, 87, 7, 21, 39, 91}, { 63, 17, 91, 95, 98, 33, 78, 57, 45, 51, 38, 86, 13, 16, 38, 46, 69, 84, 8, 59, 52, 41, 54, 97, 65, 19}, { 50, 64, 27, 90, 16, 62, 52, 22, 20, 41, 97, 88, 57, 42, 31, 32, 92, 31, 100, 68, 89, 21, 94, 43, 38, 68}, { 46, 23, 32, 76, 96, 62, 75, 94, 84, 97, 40, 48, 51, 14, 92, 50, 86, 9, 73, 66, 86, 55, 13, 25, 42, 76}};
                    
                    int array_draw_rectangle[16][26] = {{ 71, 71, 8, 38, 38, 15, 59, 14, 23, 35, 55, 40, 11, 12, 69, 24, 36, 35, 69, 48, 83, 35, 70, 1, 28, 80}, { 2, 92, 38, 88, 28, 13, 37, 12, 85, 27, 83, 63, 80, 21, 98, 53, 92, 56, 61, 28, 41, 26, 24, 96, 73, 19}, { 62, 98, 82, 98, 53, 44, 76, 48, 22, 18, 52, 6, 91, 32, 42, 8, 75, 42, 78, 87, 36, 16, 27, 5, 53, 18}, { 51, 63, 19, 67, 1, 34, 46, 35, 27, 77, 11, 87, 96, 2, 10, 72, 14, 40, 84, 47, 56, 55, 63, 85, 86, 63}, { 29, 42, 39, 87, 50, 55, 78, 80, 10, 18, 58, 8, 54, 9, 10, 55, 31, 86, 12, 13, 23, 86, 53, 27, 77, 79}, { 46, 52, 62, 71, 17, 55, 3, 81, 3, 22, 41, 50, 23, 80, 57, 86, 32, 29, 6, 72, 90, 87, 44, 73, 73, 33}, { 62, 81, 48, 40, 36, 7, 96, 15, 25, 74, 72, 70, 86, 83, 100, 52, 5, 54, 62, 61, 63, 99, 40, 97, 62, 39}, { 54, 47, 23, 35, 9, 52, 32, 31, 37, 95, 73, 31, 12, 15, 98, 85, 38, 73, 63, 54, 35, 100, 25, 65, 85, 1}, { 33, 11, 35, 60, 11, 22, 45, 57, 54, 18, 32, 39, 29, 54, 4, 11, 53, 64, 72, 2, 52, 34, 31, 99, 28, 39}, { 51, 53, 39, 13, 6, 19, 18, 72, 75, 74, 66, 47, 1, 15, 61, 44, 40, 95, 45, 30, 32, 87, 64, 45, 69, 14}, { 11, 63, 52, 71, 29, 8, 68, 99, 52, 9, 90, 49, 87, 63, 80, 3, 95, 84, 66, 100, 64, 58, 95, 89, 64, 25}, { 32, 29, 8, 98, 22, 94, 32, 50, 47, 99, 12, 45, 37, 38, 82, 88, 43, 61, 40, 61, 79, 89, 98, 71, 75, 13}, { 94, 90, 72, 94, 71, 48, 9, 4, 14, 11, 70, 32, 12, 9, 20, 34, 18, 79, 59, 67, 84, 87, 7, 21, 39, 91}, { 63, 17, 91, 95, 98, 33, 78, 57, 45, 51, 38, 86, 13, 16, 38, 46, 69, 84, 8, 59, 52, 41, 54, 97, 65, 19}, { 50, 64, 27, 90, 16, 62, 52, 22, 20, 41, 97, 88, 57, 42, 31, 32, 92, 31, 100, 68, 89, 21, 94, 43, 38, 68}, { 46, 23, 32, 76, 96, 62, 75, 94, 84, 97, 40, 48, 51, 14, 92, 50, 86, 9, 73, 66, 86, 55, 13, 25, 42, 76}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("moon.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!0)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 56: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[1][1] = {{ 90}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 90, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 3;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("pretty.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 1, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 1, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 1;
                    small_arr->height = 1;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 24, 14);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 1;
                    small_arr->height = 1;   

                    if (!0)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 57: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[1][1] = {{ 90}};
                    
                    int array_draw_rectangle[16][26] = {{ 90, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("pretty.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 1, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 1, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 1;
                    small_arr->height = 1;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 1;
                    small_arr->height = 1;   

                    if (!0)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 58: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[2][12] = {{ 2, 57, 35, 45, 98, 73, 96, 92, 68, 39, 64, 7}, { 96, 64, 29, 80, 35, 23, 71, 86, 1, 27, 73, 70}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 2, 57, 35, 45, 98, 73, 96, 92, 68, 39, 64, 7, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 96, 64, 29, 80, 35, 23, 71, 86, 1, 27, 73, 70, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("key.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 12, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 12, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 2, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 2, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 2; ++i)
                        for (int j = 0; j < 12; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 12;
                    small_arr->height = 2;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 10);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 12;
                    small_arr->height = 2;   

                    if (!0)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 59: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[2][6] = {{ 51, 39, 99, 40, 58, 15}, { 82, 7, 11, 85, 71, 45}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 51, 39, 99, 40, 58, 15, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 82, 7, 11, 85, 71, 45, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("white.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 6, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 6, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 2, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 2, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 2; ++i)
                        for (int j = 0; j < 6; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 6;
                    small_arr->height = 2;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 9, 10);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 0, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 6;
                    small_arr->height = 2;   

                    if (!0)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 60: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 3;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 1;
                    small_arr->height = 7;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 26, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 61: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 0;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 23;
                    small_arr->height = 7;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 26, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 62: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 0;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 1;
                    small_arr->height = 1;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 16);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 63: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 13;
                    small_arr->height = 9;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 16);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 64: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 0;
                    small_arr->height = 15;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 65: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 2;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 10;
                    small_arr->height = 0;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 66: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 1;
                    small_arr->height = -11;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 67: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 3;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = -18;
                    small_arr->height = 1;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 68: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 0;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 1;
                    small_arr->height = 15;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, -15);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 69: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 2;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 12;
                    small_arr->height = 1;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, -1, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 70: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 24;
                    small_arr->height = 27;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 10);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 71: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 34;
                    small_arr->height = 4;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 16, 10);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 72: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 3;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 6;
                    small_arr->height = 1;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 0, 22);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 73: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};
                    int small_array[16][26] = {{ 8, 28, 79, 56, 21, 15, 48, 84, 11, 89, 5, 9, 43, 60, 45, 43, 90, 40, 45, 11, 18, 61, 55, 80, 100, 62}, { 41, 79, 41, 14, 95, 73, 22, 78, 87, 42, 2, 86, 38, 11, 27, 93, 7, 28, 57, 53, 33, 49, 77, 7, 4, 72}, { 11, 25, 34, 43, 36, 46, 66, 93, 58, 74, 83, 3, 95, 26, 77, 63, 66, 18, 6, 73, 8, 39, 37, 29, 3, 51}, { 16, 21, 5, 82, 32, 80, 16, 63, 13, 51, 85, 81, 23, 37, 82, 88, 79, 95, 95, 74, 35, 89, 73, 54, 79, 46}, { 35, 5, 19, 87, 12, 85, 3, 56, 21, 98, 49, 57, 68, 9, 45, 31, 68, 21, 11, 68, 79, 99, 37, 91, 49, 75}, { 37, 68, 70, 34, 43, 21, 9, 52, 41, 18, 17, 100, 82, 63, 56, 77, 53, 66, 59, 52, 46, 13, 23, 83, 88, 5}, { 30, 31, 4, 9, 79, 42, 99, 11, 31, 80, 76, 67, 40, 84, 75, 53, 15, 31, 74, 29, 38, 75, 13, 68, 15, 49}, { 43, 9, 94, 34, 95, 86, 55, 3, 79, 31, 30, 89, 5, 24, 89, 65, 67, 21, 20, 11, 24, 69, 13, 9, 86, 7}, { 36, 11, 26, 45, 73, 5, 49, 28, 88, 4, 45, 41, 65, 18, 25, 50, 90, 14, 95, 16, 49, 70, 92, 84, 65, 6}, { 50, 4, 5, 70, 24, 10, 69, 54, 86, 13, 91, 21, 56, 80, 3, 42, 50, 31, 10, 68, 79, 97, 45, 87, 94, 12}, { 21, 71, 100, 8, 85, 40, 93, 19, 49, 31, 17, 69, 73, 22, 23, 31, 10, 93, 19, 50, 68, 34, 52, 61, 6, 49}, { 85, 96, 71, 84, 9, 45, 56, 31, 13, 99, 66, 18, 8, 59, 72, 19, 82, 100, 32, 19, 3, 70, 31, 57, 86, 100}, { 56, 89, 9, 18, 70, 4, 49, 31, 21, 95, 90, 89, 30, 41, 70, 5, 64, 74, 4, 20, 77, 24, 41, 49, 69, 6}, { 57, 2, 7, 24, 53, 37, 94, 4, 63, 29, 98, 61, 11, 65, 37, 59, 99, 30, 11, 61, 68, 84, 26, 98, 46, 52}, { 24, 61, 30, 48, 88, 82, 27, 94, 73, 28, 97, 17, 6, 38, 57, 65, 30, 7, 24, 11, 81, 71, 44, 89, 55, 3}, { 68, 89, 88, 66, 56, 94, 59, 92, 78, 67, 14, 49, 30, 10, 84, 94, 52, 58, 3, 16, 66, 2, 79, 27, 57, 1}};
                    
                    int array_draw_rectangle[16][26] = {{ 33, 83, 39, 49, 10, 90, 7, 79, 5, 8, 22, 98, 37, 61, 73, 68, 79, 76, 86, 98, 58, 65, 77, 62, 80, 5}, { 71, 23, 98, 13, 27, 71, 33, 76, 57, 15, 1, 61, 90, 47, 10, 77, 86, 18, 26, 66, 85, 68, 92, 51, 94, 74}, { 27, 84, 33, 34, 64, 55, 1, 88, 93, 6, 62, 91, 77, 24, 51, 10, 81, 88, 64, 52, 47, 79, 54, 32, 59, 99}, { 96, 79, 90, 1, 34, 48, 88, 14, 28, 42, 65, 40, 98, 6, 27, 15, 31, 58, 33, 56, 15, 63, 9, 88, 66, 69}, { 39, 76, 72, 75, 67, 80, 59, 84, 54, 8, 95, 42, 66, 70, 93, 65, 84, 6, 1, 12, 78, 93, 85, 57, 5, 90}, { 59, 32, 92, 15, 73, 52, 64, 98, 28, 64, 80, 43, 46, 29, 13, 23, 60, 49, 78, 25, 50, 37, 2, 69, 41, 22}, { 6, 20, 57, 92, 75, 28, 23, 91, 21, 53, 69, 69, 3, 12, 84, 99, 6, 66, 24, 60, 76, 59, 32, 60, 23, 40}, { 69, 2, 8, 78, 69, 96, 90, 9, 32, 22, 86, 60, 81, 58, 44, 93, 55, 22, 11, 1, 97, 91, 39, 84, 48, 33}, { 32, 12, 81, 59, 3, 43, 23, 61, 56, 100, 53, 3, 37, 3, 69, 29, 6, 49, 22, 60, 93, 18, 31, 37, 100, 66}, { 79, 21, 83, 19, 85, 70, 6, 2, 25, 98, 74, 39, 65, 27, 56, 60, 73, 41, 15, 65, 31, 18, 93, 84, 24, 38}, { 34, 60, 68, 31, 25, 27, 2, 87, 28, 27, 44, 44, 80, 20, 57, 48, 16, 11, 65, 86, 61, 12, 56, 9, 32, 78}, { 11, 44, 25, 31, 40, 85, 54, 75, 85, 73, 16, 37, 41, 20, 84, 65, 49, 5, 35, 12, 35, 78, 44, 36, 83, 52}, { 67, 3, 89, 7, 11, 24, 78, 88, 62, 39, 62, 46, 15, 72, 27, 45, 48, 97, 73, 10, 38, 47, 93, 79, 58, 87}, { 49, 43, 79, 91, 87, 96, 86, 97, 43, 61, 81, 54, 72, 71, 24, 90, 59, 6, 83, 83, 38, 14, 47, 26, 21, 75}, { 23, 48, 96, 54, 40, 68, 31, 56, 81, 3, 47, 40, 12, 52, 88, 72, 26, 10, 72, 91, 60, 57, 20, 31, 6, 85}, { 60, 37, 73, 22, 46, 35, 44, 42, 9, 31, 9, 51, 54, 9, 37, 60, 40, 12, 67, 74, 48, 100, 66, 47, 15, 62}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("able.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    struct image_t *small_arr = load_image_t("forward.txt", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_arr->width == 26, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 26, a ustawiła na %d", small_arr->width);
                    test_error(small_arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 26; ++j)
                            test_error(small_arr->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 9;
                    small_arr->height = 8;

                    printf("#####START#####");
                    int res = draw_image(arr, small_arr, 43, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    small_arr->width = 26;
                    small_arr->height = 16;   

                    if (!1)
                    {
                        for (int i = 0; i < 16; ++i)
                            for (int j = 0; j < 26; ++j)
                                test_error(arr->ptr[i][j] == array_draw_rectangle[i][j], "Funkcja image_draw_rectangle() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array_draw_rectangle[i][j], arr->ptr[i][j]);
                    }

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    printf("#####START#####");
                    destroy_image(&small_arr);
                    printf("#####END#####");

                    test_error(small_arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                    test_no_heap_leakage();
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 74: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[8][9] = {{ 100, 59, 75, 24, 99, 27, 59, 96, 95}, { 9, 68, 17, 34, 62, 26, 10, 79, 20}, { 91, 53, 36, 6, 8, 92, 57, 46, 65}, { 88, 58, 68, 50, 84, 9, 33, 65, 92}, { 24, 21, 24, 66, 85, 19, 45, 41, 35}, { 85, 38, 45, 83, 63, 22, 83, 9, 39}, { 5, 71, 49, 31, 73, 58, 16, 45, 83}, { 96, 34, 68, 60, 3, 87, 15, 77, 48}};

                int err_code = 4;

                printf("#####START#####");
                struct image_t *arr = load_image_t("gentle.txt", &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                test_error(arr->height == 8, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 8, a ustawiła na %d", arr->height);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 8; ++i)
                    for (int j = 0; j < 9; ++j)
                        test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                printf("#####START#####");
                int res = draw_image(NULL, arr, 0, 0);
                printf("#####END#####");

                test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                printf("#####START#####");
                destroy_image(&arr);
                printf("#####END#####");

                test_error(arr == NULL, "Funkcja destroy_image() powinna przypisać NULL pod wskaźnik przekazany w parametrze");

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 75: Sprawdzanie poprawności działania funkcji draw_image
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji draw_image", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = draw_image(NULL, NULL, 0, 0);
                printf("#####END#####");

                test_error(res == 1, "Funkcja draw_image() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 76: Sprawdzanie poprawności działania funkcji image_draw_rectangle
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji image_draw_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};
                    int small_array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    printf("#####START#####");
                    struct image_t *small_ar = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_ar != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_ar->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_ar->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", small_ar->width);
                    test_error(small_ar->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_ar->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(small_ar->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_ar->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    arr->width = 9;
                    arr->height = -16;

                    printf("#####START#####");
                    int res = draw_image(arr, small_ar, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                    arr->width = 9;
                    arr->height = 16;

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    destroy_image(&small_ar);
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
//  Test 77: Sprawdzanie poprawności działania funkcji image_draw_rectangle
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji image_draw_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};
                    int small_array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};

                    int err_code = 2;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    printf("#####START#####");
                    struct image_t *small_ar = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_ar != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_ar->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_ar->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", small_ar->width);
                    test_error(small_ar->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_ar->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(small_ar->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_ar->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    arr->width = -9;
                    arr->height = -16;

                    printf("#####START#####");
                    int res = draw_image(arr, small_ar, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                    arr->width = 9;
                    arr->height = 16;

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    destroy_image(&small_ar);
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
//  Test 78: Sprawdzanie poprawności działania funkcji image_draw_rectangle
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji image_draw_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};
                    int small_array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    printf("#####START#####");
                    struct image_t *small_ar = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_ar != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_ar->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_ar->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", small_ar->width);
                    test_error(small_ar->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_ar->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(small_ar->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_ar->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    arr->width = -9;
                    arr->height = 16;

                    printf("#####START#####");
                    int res = draw_image(arr, small_ar, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                    arr->width = 9;
                    arr->height = 16;

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    destroy_image(&small_ar);
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
//  Test 79: Sprawdzanie poprawności działania funkcji image_draw_rectangle
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji image_draw_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};
                    int small_array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};

                    int err_code = 0;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    printf("#####START#####");
                    struct image_t *small_ar = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_ar != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_ar->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_ar->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", small_ar->width);
                    test_error(small_ar->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_ar->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(small_ar->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_ar->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    arr->width = 9;
                    arr->height = 0;

                    printf("#####START#####");
                    int res = draw_image(arr, small_ar, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                    arr->width = 9;
                    arr->height = 16;

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    destroy_image(&small_ar);
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
//  Test 80: Sprawdzanie poprawności działania funkcji image_draw_rectangle
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji image_draw_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};
                    int small_array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};

                    int err_code = 2;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    printf("#####START#####");
                    struct image_t *small_ar = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_ar != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_ar->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_ar->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", small_ar->width);
                    test_error(small_ar->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_ar->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(small_ar->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_ar->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    arr->width = 0;
                    arr->height = 16;

                    printf("#####START#####");
                    int res = draw_image(arr, small_ar, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                    arr->width = 9;
                    arr->height = 16;

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    destroy_image(&small_ar);
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
//  Test 81: Sprawdzanie poprawności działania funkcji image_draw_rectangle
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji image_draw_rectangle", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};
                    int small_array[16][9] = {{ 4, 7, 0, 7, 10, 6, 9, 0, 4}, { 8, 0, 8, 10, 6, 10, 7, 0, 0}, { 10, 7, 9, 2, 3, 8, 2, 0, 9}, { 3, 3, 1, 9, 9, 8, 3, 7, 1}, { 6, 10, 6, 8, 0, 1, 2, 7, 6}, { 0, 6, 2, 5, 2, 5, 10, 0, 9}, { 1, 3, 9, 3, 0, 4, 10, 9, 4}, { 5, 2, 10, 6, 5, 1, 7, 4, 7}, { 4, 9, 6, 5, 8, 4, 1, 7, 5}, { 5, 8, 9, 3, 10, 5, 6, 3, 1}, { 5, 10, 6, 4, 8, 3, 7, 10, 9}, { 8, 8, 2, 5, 1, 1, 5, 5, 1}, { 8, 7, 10, 7, 1, 1, 7, 8, 6}, { 5, 3, 2, 7, 8, 9, 10, 1, 6}, { 4, 2, 8, 1, 7, 3, 8, 5, 6}, { 3, 1, 3, 4, 1, 0, 10, 6, 8}};

                    int err_code = 3;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    printf("#####START#####");
                    struct image_t *small_ar = load_image_t("syllable.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(small_ar != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(small_ar->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(small_ar->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", small_ar->width);
                    test_error(small_ar->height == 16, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 16, a ustawiła na %d", small_ar->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 16; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(small_ar->ptr[i][j] == small_array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, small_array[i][j], small_ar->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)


                    arr->width = 0;
                    arr->height = 0;

                    printf("#####START#####");
                    int res = draw_image(arr, small_ar, 0, 0);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja image_draw_rectangle() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                    arr->width = 9;
                    arr->height = 16;

                    printf("#####START#####");
                    destroy_image(&arr);
                    printf("#####END#####");

                    printf("#####START#####");
                    destroy_image(&small_ar);
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
//  Test 82: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};

                int err_code = 2;

                printf("#####START#####");
                struct image_t *arr = load_image_t("thank.bin", &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 15; ++i)
                    for (int j = 0; j < 7; ++j)
                        test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 15; ++i)
                    for (int j = 0; j < 7; ++j)
                    {
                        printf("#####START#####");
                        const int *res = image_get_pixel(arr, j, i);
                        printf("#####END#####");
                        test_error(res != NULL, "Funkcja image_get_pixel() powinna zwrócić adres komórki (%d, %d) w tablicy, a zwróciła NULL", j, i);
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(*res == array[i][j], "Funkcja image_get_pixel() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], *res);
                        
                    }
                    
                printf("#####START#####");
                destroy_image(&arr);
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
//  Test 83: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};
        
                    int err_code = 0;
        
                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");
        
                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 0, 15);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");
        
                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 84: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};
        
                    int err_code = 0;
        
                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");
        
                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 7, 0);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");
        
                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 85: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};
        
                    int err_code = 1;
        
                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");
        
                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 7, 15);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");
        
                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 86: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};
        
                    int err_code = 2;
        
                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");
        
                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 12, 0);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");
        
                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 87: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};
        
                    int err_code = 3;
        
                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");
        
                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 0, 26);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");
        
                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 88: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};
        
                    int err_code = 2;
        
                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");
        
                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, -7, 0);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");
        
                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 89: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};
        
                    int err_code = 2;
        
                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");
        
                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 0, -6);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");
        
                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 90: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 7;
                    arr->height = -15;

                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");

                    arr->width = 7;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 91: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};

                    int err_code = 2;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = -7;
                    arr->height = -15;

                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");

                    arr->width = 7;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 92: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};

                    int err_code = 0;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = -7;
                    arr->height = 15;

                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");

                    arr->width = 7;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 93: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 7;
                    arr->height = 0;

                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");

                    arr->width = 7;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 94: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};

                    int err_code = 2;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 0;
                    arr->height = 15;

                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");

                    arr->width = 7;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 95: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][7] = {{ 4, 5, 9, 5, 3, 9, 2}, { 5, 4, 9, 1, 1, 9, 7}, { 10, 5, 4, 5, 0, 2, 1}, { 9, 0, 6, 9, 4, 9, 7}, { 3, 10, 3, 3, 4, 2, 5}, { 9, 7, 6, 9, 3, 10, 5}, { 5, 5, 9, 3, 9, 8, 5}, { 10, 7, 8, 7, 9, 5, 5}, { 9, 3, 5, 5, 0, 1, 3}, { 1, 9, 8, 0, 8, 6, 6}, { 9, 4, 2, 0, 2, 6, 0}, { 8, 0, 3, 3, 2, 9, 9}, { 8, 6, 1, 6, 9, 7, 0}, { 1, 0, 1, 7, 0, 9, 2}, { 4, 5, 5, 7, 2, 7, 3}};

                    int err_code = 0;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("thank.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 7, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 7, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 7; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 0;
                    arr->height = 0;

                    printf("#####START#####");
                    const int *res = image_get_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");

                    arr->width = 7;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 96: Sprawdzanie poprawności działania funkcji image_get_pixel
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji image_get_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                const int *res = image_get_pixel(NULL, 0, 0);
                printf("#####END#####");

                test_error(res == NULL, "Funkcja image_get_pixel() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 97: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                int err_code = 1;

                printf("#####START#####");
                struct image_t *arr = load_image_t("expect.bin", &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 15; ++i)
                    for (int j = 0; j < 8; ++j)
                        test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 15; ++i)
                    for (int j = 0; j < 8; ++j)
                    {
                        printf("#####START#####");
                        int *res = image_set_pixel(arr, j, i);
                        printf("#####END#####");
                        test_error(res != NULL, "Funkcja image_set_pixel() powinna zwrócić adres komórki (%d, %d) w tablicy, a zwróciła NULL", j, i);
                        onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        test_error(res == &arr->ptr[i][j], "Funkcja image_set_pixel() zwróciła niepoprawny adres komórki, powinna zwrócić adres komórki (%d, %d)", i, j);

                    }

                printf("#####START#####");
                destroy_image(&arr);
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
//  Test 98: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 3;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 0, 15);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 99: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 0;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 8, 0);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 100: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 8, 15);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 101: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 2;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 14, 0);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 102: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 0;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 0, 18);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 103: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, -2, 0);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 104: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 3;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 0, -3);
                    printf("#####END#####");
                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 105: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 8;
                    arr->height = -15;

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    arr->width = 8;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 106: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 1;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = -8;
                    arr->height = -15;

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    arr->width = 8;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 107: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 3;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = -8;
                    arr->height = 15;

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    arr->width = 8;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 108: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 0;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 8;
                    arr->height = 0;

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    arr->width = 8;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 109: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 2;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 0;
                    arr->height = 15;

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    arr->width = 8;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 110: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][8] = {{ 3, 7, 1, 1, 5, 7, 0, 9}, { 8, 9, 10, 5, 8, 9, 10, 2}, { 2, 8, 5, 9, 8, 3, 6, 0}, { 9, 9, 2, 0, 8, 5, 10, 9}, { 7, 8, 0, 3, 9, 0, 9, 6}, { 6, 8, 7, 5, 10, 7, 3, 4}, { 4, 8, 2, 9, 1, 1, 6, 10}, { 1, 6, 2, 10, 2, 4, 8, 5}, { 7, 9, 2, 8, 10, 0, 7, 0}, { 4, 4, 1, 1, 6, 1, 8, 0}, { 10, 8, 6, 2, 3, 7, 0, 9}, { 1, 6, 5, 7, 9, 9, 10, 4}, { 3, 9, 4, 3, 6, 9, 8, 9}, { 3, 6, 2, 1, 9, 1, 8, 6}, { 0, 3, 2, 9, 3, 5, 9, 10}};

                    int err_code = 4;

                    printf("#####START#####");
                    struct image_t *arr = load_image_t("expect.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 0;
                    arr->height = 0;

                    printf("#####START#####");
                    const int *res = image_set_pixel(arr, 0, 0);
                    printf("#####END#####");

                    test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                    arr->width = 8;
                    arr->height = 15;

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 111: Sprawdzanie poprawności działania funkcji image_set_pixel
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji image_set_pixel", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    


                printf("#####START#####");
                const int *res = image_set_pixel(NULL, 0, 0);
                printf("#####END#####");

                test_error(res == NULL, "Funkcja image_set_pixel() powinna zwrócić NULL");

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 112: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[8][5] = {{ 5, 7, 5, 2, 3}, { 9, 0, 7, 0, 5}, { 7, 9, 0, 10, 3}, { 1, 8, 1, 6, 7}, { 5, 0, 5, 4, 5}, { 10, 2, 6, 9, 3}, { 1, 6, 6, 1, 10}, { 3, 6, 1, 1, 0}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("sight.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 5, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 5, a ustawiła na %d", arr->width);
                    test_error(arr->height == 8, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 8, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 8; ++i)
                        for (int j = 0; j < 5; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    printf("#####START#####");                            
                    int res = save_image_t("could.bin", arr);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja save_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 113: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][9] = {{ 3, 6, 3, 9, 8, 3, 7, 1, 8}, { 10, 1, 1, 7, 0, 5, 10, 5, 7}, { 1, 6, 4, 10, 4, 9, 4, 5, 3}, { 0, 6, 0, 1, 5, 3, 1, 4, 5}, { 7, 7, 8, 5, 6, 2, 1, 7, 5}, { 1, 5, 0, 7, 9, 10, 10, 7, 5}, { 1, 10, 2, 0, 2, 7, 6, 6, 4}, { 10, 7, 9, 0, 0, 8, 2, 7, 9}, { 5, 0, 6, 10, 4, 10, 5, 10, 3}, { 8, 3, 10, 0, 2, 1, 2, 2, 3}, { 8, 1, 3, 3, 1, 1, 10, 1, 2}, { 10, 8, 9, 7, 3, 6, 9, 1, 1}, { 4, 7, 9, 7, 1, 3, 5, 0, 6}, { 4, 10, 8, 7, 7, 2, 2, 8, 9}, { 5, 0, 3, 2, 8, 9, 4, 9, 1}};

                    int err_code = 4;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("clear.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    printf("#####START#####");                            
                    int res = save_image_t("suffix.txt", arr);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja save_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 114: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[15][1] = {{ 2}, { 5}, { 1}, { 2}, { 5}, { 8}, { 0}, { 2}, { 7}, { 3}, { 5}, { 0}, { 0}, { 10}, { 10}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("would.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 1, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                    test_error(arr->height == 15, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 15, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 15; ++i)
                        for (int j = 0; j < 1; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    printf("#####START#####");                            
                    int res = save_image_t("wishtxt", arr);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja save_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 115: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][9] = {{ 3, 6, 8, 1, 7, 5, 2, 2, 2}};

                    int err_code = 2;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("nature.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 9, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 9, a ustawiła na %d", arr->width);
                    test_error(arr->height == 1, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 9; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    printf("#####START#####");                            
                    int res = save_image_t("old", arr);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja save_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 116: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[1][1] = {{ 6}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("sit.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 1, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 1, a ustawiła na %d", arr->width);
                    test_error(arr->height == 1, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 1, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 1; ++i)
                        for (int j = 0; j < 1; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    printf("#####START#####");                            
                    int res = save_image_t("particularhalfchoosethembeatgrassfivevowelliquidforest", arr);
                    printf("#####END#####");

                    test_error(res == 0, "Funkcja save_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", res);

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 117: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][8] = {{ 5, 5, 9, 6, 3, 6, 4, 5}, { 5, 5, 1, 3, 2, 8, 8, 5}, { 1, 3, 0, 4, 9, 7, 9, 8}, { 9, 4, 2, 4, 1, 4, 7, 1}, { 0, 10, 2, 3, 0, 5, 7, 7}, { 8, 4, 4, 7, 10, 5, 6, 10}, { 7, 1, 5, 5, 4, 0, 6, 9}};

                    int err_code = 3;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("next.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 7, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 7, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 8;
                    arr->height = -7;

                    printf("#####START#####");                            
                    int res = save_image_t("sit.bin", arr);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);


                    arr->width = 8;
                    arr->height = 7;            

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 118: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][8] = {{ 5, 5, 9, 6, 3, 6, 4, 5}, { 5, 5, 1, 3, 2, 8, 8, 5}, { 1, 3, 0, 4, 9, 7, 9, 8}, { 9, 4, 2, 4, 1, 4, 7, 1}, { 0, 10, 2, 3, 0, 5, 7, 7}, { 8, 4, 4, 7, 10, 5, 6, 10}, { 7, 1, 5, 5, 4, 0, 6, 9}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("next.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 7, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 7, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = -8;
                    arr->height = -7;

                    printf("#####START#####");                            
                    int res = save_image_t("sit.bin", arr);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);


                    arr->width = 8;
                    arr->height = 7;            

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 119: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][8] = {{ 5, 5, 9, 6, 3, 6, 4, 5}, { 5, 5, 1, 3, 2, 8, 8, 5}, { 1, 3, 0, 4, 9, 7, 9, 8}, { 9, 4, 2, 4, 1, 4, 7, 1}, { 0, 10, 2, 3, 0, 5, 7, 7}, { 8, 4, 4, 7, 10, 5, 6, 10}, { 7, 1, 5, 5, 4, 0, 6, 9}};

                    int err_code = 0;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("next.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 7, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 7, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = -8;
                    arr->height = 7;

                    printf("#####START#####");                            
                    int res = save_image_t("sit.bin", arr);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);


                    arr->width = 8;
                    arr->height = 7;            

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 120: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][8] = {{ 5, 5, 9, 6, 3, 6, 4, 5}, { 5, 5, 1, 3, 2, 8, 8, 5}, { 1, 3, 0, 4, 9, 7, 9, 8}, { 9, 4, 2, 4, 1, 4, 7, 1}, { 0, 10, 2, 3, 0, 5, 7, 7}, { 8, 4, 4, 7, 10, 5, 6, 10}, { 7, 1, 5, 5, 4, 0, 6, 9}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("next.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 7, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 7, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 8;
                    arr->height = 0;

                    printf("#####START#####");                            
                    int res = save_image_t("sit.bin", arr);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);


                    arr->width = 8;
                    arr->height = 7;            

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 121: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][8] = {{ 5, 5, 9, 6, 3, 6, 4, 5}, { 5, 5, 1, 3, 2, 8, 8, 5}, { 1, 3, 0, 4, 9, 7, 9, 8}, { 9, 4, 2, 4, 1, 4, 7, 1}, { 0, 10, 2, 3, 0, 5, 7, 7}, { 8, 4, 4, 7, 10, 5, 6, 10}, { 7, 1, 5, 5, 4, 0, 6, 9}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("next.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 7, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 7, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 0;
                    arr->height = 7;

                    printf("#####START#####");                            
                    int res = save_image_t("sit.bin", arr);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);


                    arr->width = 8;
                    arr->height = 7;            

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 122: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    int array[7][8] = {{ 5, 5, 9, 6, 3, 6, 4, 5}, { 5, 5, 1, 3, 2, 8, 8, 5}, { 1, 3, 0, 4, 9, 7, 9, 8}, { 9, 4, 2, 4, 1, 4, 7, 1}, { 0, 10, 2, 3, 0, 5, 7, 7}, { 8, 4, 4, 7, 10, 5, 6, 10}, { 7, 1, 5, 5, 4, 0, 6, 9}};

                    int err_code = 1;

                    printf("#####START#####");                            
                    struct image_t *arr = load_image_t("next.bin", &err_code);
                    printf("#####END#####");

                    test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                    test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                    test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                    test_error(arr->height == 7, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 7, a ustawiła na %d", arr->height);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    for (int i = 0; i < 7; ++i)
                        for (int j = 0; j < 8; ++j)
                            test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                    arr->width = 0;
                    arr->height = 0;

                    printf("#####START#####");                            
                    int res = save_image_t("sit.bin", arr);
                    printf("#####END#####");

                    test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);


                    arr->width = 8;
                    arr->height = 7;            

                    printf("#####START#####");
                    destroy_image(&arr);
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
//  Test 123: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int array[7][8] = {{ 5, 5, 9, 6, 3, 6, 4, 5}, { 5, 5, 1, 3, 2, 8, 8, 5}, { 1, 3, 0, 4, 9, 7, 9, 8}, { 9, 4, 2, 4, 1, 4, 7, 1}, { 0, 10, 2, 3, 0, 5, 7, 7}, { 8, 4, 4, 7, 10, 5, 6, 10}, { 7, 1, 5, 5, 4, 0, 6, 9}};

                int err_code = 2;

                printf("#####START#####");                            
                struct image_t *arr = load_image_t("next.bin", &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 7, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 7, a ustawiła na %d", arr->height);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 7; ++i)
                    for (int j = 0; j < 8; ++j)
                        test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                arr->width = 0;
                arr->height = 0;

                printf("#####START#####");                            
                int res = save_image_t(NULL, arr);
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);


                arr->width = 8;
                arr->height = 7;            

                printf("#####START#####");
                destroy_image(&arr);
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
//  Test 124: Reakcja funkcji save_image_t na brak możliwości utworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Reakcja funkcji save_image_t na brak możliwości utworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 1);
    
    //
    // -----------
    //
    

                int array[7][8] = {{ 5, 5, 9, 6, 3, 6, 4, 5}, { 5, 5, 1, 3, 2, 8, 8, 5}, { 1, 3, 0, 4, 9, 7, 9, 8}, { 9, 4, 2, 4, 1, 4, 7, 1}, { 0, 10, 2, 3, 0, 5, 7, 7}, { 8, 4, 4, 7, 10, 5, 6, 10}, { 7, 1, 5, 5, 4, 0, 6, 9}};

                int err_code = 2;

                printf("#####START#####");                            
                struct image_t *arr = load_image_t("next.bin", &err_code);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja load_image_t() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                test_error(arr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(arr->ptr != NULL, "Funkcja load_image_t() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");
                test_error(arr->width == 8, "Funkcja load_image_t() powinna ustawić szerokość macierzy na 8, a ustawiła na %d", arr->width);
                test_error(arr->height == 7, "Funkcja load_image_t() powinna ustawić pojemność tablicy na 7, a ustawiła na %d", arr->height);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 7; ++i)
                    for (int j = 0; j < 8; ++j)
                        test_error(arr->ptr[i][j] == array[i][j], "Funkcja load_image_t() niepoprawnie wczytała dane w komórce (%d, %d) powinno być %d, a jest %d", i, j, array[i][j], arr->ptr[i][j]);

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                printf("#####START#####");                            
                int res = save_image_t("sit.bin", arr);
                printf("#####END#####");

                test_error(res == 2, "Funkcja save_image_t() powinna zwrócić kod błędu 2, a zwróciła %d", res);

                printf("#####START#####");
                destroy_image(&arr);
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
//  Test 125: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                struct image_t arr = {.ptr = NULL, .width = 1, .height = 3, .type = "P2" };

                printf("#####START#####");
                int res = save_image_t("next.bin", &arr);
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 126: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = save_image_t("next.bin", NULL);
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 127: Sprawdzanie poprawności działania funkcji save_image_t
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzanie poprawności działania funkcji save_image_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int res = save_image_t(NULL, NULL);
                printf("#####END#####");

                test_error(res == 1, "Funkcja save_image_t() powinna zwrócić kod błędu 1, a zwróciła %d", res);

                test_no_heap_leakage();
                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja bład funkcji fopen (dozwolone dwukrotne wywołanie fopen)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja bład funkcji fopen (dozwolone dwukrotne wywołanie fopen)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 2);
    
    //
    // -----------
    //
    
            //printf("Kolejny test pamięci");
            printf("***START***\n");
            int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
            printf("\n***END***\n");
            test_error(ret_code == 5, "Funkcja main zakończyła się kodem %d a powinna 5", ret_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Reakcja na brak pamięci - limit ustawiony na 0 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit ustawiony na 0 bajtów", __LINE__);

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
//  Test 4: Reakcja na brak pamięci - limit ustawiony na 164 bajtów
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit ustawiony na 164 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(164);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST2, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST3, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST4, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST5, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST6, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST7, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST8, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST9, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST10, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST11, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST12, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST13, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST14, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST15, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST16, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST17, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST18, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST19, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST20, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST21, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST22, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST23, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST24, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST25, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST26, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST27, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST28, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST29, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST30, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST31, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST32, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST33, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST34, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST35, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 139 bajtów)
            UTEST36, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST37, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 3 bajtów)
            UTEST38, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 27 bajtów)
            UTEST39, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 59 bajtów)
            UTEST40, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 79 bajtów)
            UTEST41, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 99 bajtów)
            UTEST42, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 119 bajtów)
            UTEST43, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 0 bajtów)
            UTEST44, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 3 bajtów)
            UTEST45, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 27 bajtów)
            UTEST46, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 59 bajtów)
            UTEST47, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 79 bajtów)
            UTEST48, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 99 bajtów)
            UTEST49, // Sprawdzanie reakcji funkcji load_image_t na limit pamięci (limit sterty ustawiono na 119 bajtów)
            UTEST50, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST51, // Sprawdzanie poprawności działania funkcji load_image_t
            UTEST52, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST53, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST54, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST55, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST56, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST57, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST58, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST59, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST60, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST61, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST62, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST63, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST64, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST65, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST66, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST67, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST68, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST69, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST70, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST71, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST72, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST73, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST74, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST75, // Sprawdzanie poprawności działania funkcji draw_image
            UTEST76, // Sprawdzanie poprawności działania funkcji image_draw_rectangle
            UTEST77, // Sprawdzanie poprawności działania funkcji image_draw_rectangle
            UTEST78, // Sprawdzanie poprawności działania funkcji image_draw_rectangle
            UTEST79, // Sprawdzanie poprawności działania funkcji image_draw_rectangle
            UTEST80, // Sprawdzanie poprawności działania funkcji image_draw_rectangle
            UTEST81, // Sprawdzanie poprawności działania funkcji image_draw_rectangle
            UTEST82, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST83, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST84, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST85, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST86, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST87, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST88, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST89, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST90, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST91, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST92, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST93, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST94, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST95, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST96, // Sprawdzanie poprawności działania funkcji image_get_pixel
            UTEST97, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST98, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST99, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST100, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST101, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST102, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST103, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST104, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST105, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST106, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST107, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST108, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST109, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST110, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST111, // Sprawdzanie poprawności działania funkcji image_set_pixel
            UTEST112, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST113, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST114, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST115, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST116, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST117, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST118, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST119, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST120, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST121, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST122, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST123, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST124, // Reakcja funkcji save_image_t na brak możliwości utworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)
            UTEST125, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST126, // Sprawdzanie poprawności działania funkcji save_image_t
            UTEST127, // Sprawdzanie poprawności działania funkcji save_image_t
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
            test_summary(127); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja bład funkcji fopen (dozwolone dwukrotne wywołanie fopen)
            MTEST2, // Reakcja na brak pamięci - limit ustawiony na 0 bajtów
            MTEST3, // Reakcja na brak pamięci - limit ustawiony na 40 bajtów
            MTEST4, // Reakcja na brak pamięci - limit ustawiony na 164 bajtów
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
            test_summary(4); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}