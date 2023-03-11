/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Liczb zespolonych ciąg dalszy
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-06 00:59:34.276548
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


    struct complex_t
    {
        float re;
        float im;
    };
    


//
//  Test 1: Sprawdzenie poprawności struktury
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzenie poprawności struktury", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct complex_t cp1 = {.re = -5.989434753578338, .im = -3.6209875822358004};

            struct complex_t cp_student;
            int err_code = 2;
            set(&cp_student, cp1.re, cp1.im, &err_code);

            // znajdź pierwszą różnicę
            int diff_pos = mem_find_first_difference(&cp1, &cp_student, sizeof(struct complex_t));

            // jeśli jest, to raportuj błąd
            test_error(diff_pos == -1, "Struktura complex_t nie jest zgodna z zadaniem; różnica w bajcie %d; jest 0x%02x a powinno być 0x%02x",
                diff_pos, mem_get_byte(&cp_student, diff_pos), mem_get_byte(&cp1, diff_pos));

            // jeśli jest błąd, to wyświetl porównanie pamięci
            onerror_compare_memory(&cp_student, &cp1, sizeof(struct complex_t));
            //onerror_return(); // przerwanie tylko tego tej funkcji testującej
            onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzenie poprawności działania funkcji set
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzenie poprawności działania funkcji set", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct complex_t cp_student, *pcp;

            int err_code = 4;

            printf("#####START#####");
            pcp = set(&cp_student, -5.989434753578338, -3.6209875822358004, &err_code);
            printf("#####END#####");

            test_error(pcp == &cp_student, "Funkcja set() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
            test_error(cp_student.re < 0.05 + -5.989434753578338 && -5.989434753578338 - 0.05 < cp_student.re, "Funkcja set() miała ustawić -5.989434753578338 w cześci rzeczywistej, a ustawiła %f", cp_student.re);
            test_error(cp_student.im < 0.05 + -3.6209875822358004 && -3.6209875822358004 - 0.05 < cp_student.im, "Funkcja set() miała ustawić -3.6209875822358004 w cześci urojonej, a ustawiła %f", cp_student.im);
            test_error(err_code == 0, "Funkcja set() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzenie poprawności działania funkcji set
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzenie poprawności działania funkcji set", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct complex_t cp_student, *pcp;

            printf("#####START#####");
            pcp = set(&cp_student, -5.989434753578338, -3.6209875822358004, NULL);
            printf("#####END#####");

            test_error(pcp == &cp_student, "Funkcja set() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
            test_error(cp_student.re < 0.05 + -5.989434753578338 && -5.989434753578338 - 0.05 < cp_student.re, "Funkcja set() miała ustawić -5.989434753578338 w cześci rzeczywistej, a ustawiła %f", cp_student.re);
            test_error(cp_student.im < 0.05 + -3.6209875822358004 && -3.6209875822358004 - 0.05 < cp_student.im, "Funkcja set() miała ustawić -3.6209875822358004 w cześci urojonej, a ustawiła %f", cp_student.im);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzenie poprawności działania funkcji set
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzenie poprawności działania funkcji set", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct complex_t *pcp;

            int err_code = 1;

            printf("#####START#####");
            pcp = set(NULL, -5.989434753578338, -3.6209875822358004, &err_code);
            printf("#####END#####");

            test_error(pcp == NULL, "Funkcja set() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
            test_error(err_code == 1, "Funkcja set() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzenie poprawności działania funkcji set
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzenie poprawności działania funkcji set", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct complex_t *pcp;

            printf("#####START#####");
            pcp = set(NULL, -5.989434753578338, -3.6209875822358004, NULL);
            printf("#####END#####");

            test_error(pcp == NULL, "Funkcja set() powinna zwracać wskaźnik przekazany w pierwszym parametrze");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -3.467864163705401, .im = -4.727590990710604};

                int err_code = 1;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 5.863121901628878 + 0.05 && 5.863121901628878 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 5.863121901628878, cpl_abs);
                test_error(err_code == 0, "Funkcja complex_abs() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.891404375866861, .im = 3.514877906434759};

                int err_code = 1;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 6.023305028420251 + 0.05 && 6.023305028420251 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 6.023305028420251, cpl_abs);
                test_error(err_code == 0, "Funkcja complex_abs() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 3.1536680523230762, .im = -3.644588197881151};

                int err_code = 5;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 4.819610494259655 + 0.05 && 4.819610494259655 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 4.819610494259655, cpl_abs);
                test_error(err_code == 0, "Funkcja complex_abs() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 8.473358468126904, .im = 5.851962063364771};

                int err_code = 1;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 10.297730998644234 + 0.05 && 10.297730998644234 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 10.297730998644234, cpl_abs);
                test_error(err_code == 0, "Funkcja complex_abs() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.679083176613002, .im = -4.679083176613002};

                int err_code = 5;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 6.617222887837891 + 0.05 && 6.617222887837891 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 6.617222887837891, cpl_abs);
                test_error(err_code == 0, "Funkcja complex_abs() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.649395814675547, .im = -6.114315046532668};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 7.681258355880128 + 0.05 && 7.681258355880128 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 7.681258355880128, cpl_abs);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -9.61538150245287, .im = 5.004950665126006};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 10.839976595826121 + 0.05 && 10.839976595826121 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 10.839976595826121, cpl_abs);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.829298454713803, .im = -7.382251260302333};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 7.905856273426762 + 0.05 && 7.905856273426762 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 7.905856273426762, cpl_abs);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 4.086130735814967, .im = 4.412145402339864};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 6.013608853389167 + 0.05 && 6.013608853389167 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 6.013608853389167, cpl_abs);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 4.568659475737256, .im = 4.568659475737256};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 6.461060192451982 + 0.05 && 6.461060192451982 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 6.461060192451982, cpl_abs);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            printf("#####START#####");
            float cpl_abs = complex_abs(NULL, NULL);
            printf("#####END#####");

            test_error(cpl_abs < -1 + 0.05 && -1 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", -1, cpl_abs);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzenie poprawności działania funkcji complex_abs
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzenie poprawności działania funkcji complex_abs", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = 0;

            printf("#####START#####");
            float cpl_abs = complex_abs(NULL, &err_code);
            printf("#####END#####");
                
            test_error(cpl_abs < -1 + 0.05 && -1 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", -1, cpl_abs);

            test_error(err_code == 1, "Funkcja complex_abs() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzenie poprawności działania funkcji add
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.142781026349179, .im = -3.577174544535322};
                struct complex_t cp2 = {.re = -6.447679760722358, .im = -6.203467496976525};
                struct complex_t cp3 = {.re = -6.447679760722358, .im = -6.203467496976525};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -10.590460787071537 + 0.05 && -10.590460787071537 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -10.590460787071537, cp3.re);
                test_error(cp3.im < -9.780642041511847 + 0.05 && -9.780642041511847 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -9.780642041511847, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzenie poprawności działania funkcji add
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.8840253094266934, .im = -2.016960909519482};
                struct complex_t cp2 = {.re = -5.613999309401676, .im = 8.429445512111045};
                struct complex_t cp3 = {.re = -5.613999309401676, .im = 8.429445512111045};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -7.498024618828369 + 0.05 && -7.498024618828369 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -7.498024618828369, cp3.re);
                test_error(cp3.im < 6.4124846025915625 + 0.05 && 6.4124846025915625 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 6.4124846025915625, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzenie poprawności działania funkcji add
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.9357485078446626, .im = -1.2202390116724935};
                struct complex_t cp2 = {.re = 5.999301322393412, .im = 7.230306445151914};
                struct complex_t cp3 = {.re = 5.999301322393412, .im = 7.230306445151914};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 4.06355281454875 + 0.05 && 4.06355281454875 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 4.06355281454875, cp3.re);
                test_error(cp3.im < 6.010067433479421 + 0.05 && 6.010067433479421 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 6.010067433479421, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzenie poprawności działania funkcji add
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -6.376673968796026, .im = -9.44104722718983};
                struct complex_t cp2 = {.re = 5.104480051588856, .im = -3.796353799004959};
                struct complex_t cp3 = {.re = 5.104480051588856, .im = -3.796353799004959};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -1.2721939172071695 + 0.05 && -1.2721939172071695 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -1.2721939172071695, cp3.re);
                test_error(cp3.im < -13.237401026194789 + 0.05 && -13.237401026194789 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -13.237401026194789, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzenie poprawności działania funkcji add
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -7.804269248506317, .im = 6.68047184563922};
                struct complex_t cp2 = {.re = -3.6122700747863217, .im = -9.336148544382368};
                struct complex_t cp3 = {.re = -3.6122700747863217, .im = -9.336148544382368};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -11.416539323292639 + 0.05 && -11.416539323292639 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -11.416539323292639, cp3.re);
                test_error(cp3.im < -2.6556766987431484 + 0.05 && -2.6556766987431484 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -2.6556766987431484, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzenie poprawności działania funkcji add
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.498234743115473, .im = 5.6472299810788975};
                struct complex_t cp2 = {.re = -6.2179388110434655, .im = 9.388687639430989};
                struct complex_t cp3 = {.re = -6.2179388110434655, .im = 9.388687639430989};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -10.716173554158939 + 0.05 && -10.716173554158939 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -10.716173554158939, cp3.re);
                test_error(cp3.im < 15.035917620509887 + 0.05 && 15.035917620509887 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 15.035917620509887, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzenie poprawności działania funkcji add
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -3.7756883065229125, .im = 5.344154790377496};
                struct complex_t cp2 = {.re = 3.0439985199443935, .im = 1.4570682673621485};
                struct complex_t cp3 = {.re = 3.0439985199443935, .im = 1.4570682673621485};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -0.731689786578519 + 0.05 && -0.731689786578519 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.731689786578519, cp3.re);
                test_error(cp3.im < 6.801223057739644 + 0.05 && 6.801223057739644 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 6.801223057739644, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzenie poprawności działania funkcji add
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.804706034457273, .im = 2.0713518527991055};
                struct complex_t cp2 = {.re = 4.823752406427821, .im = -8.94090290657186};
                struct complex_t cp3 = {.re = 4.823752406427821, .im = -8.94090290657186};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 0.019046371970548037 + 0.05 && 0.019046371970548037 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.019046371970548037, cp3.re);
                test_error(cp3.im < -6.869551053772755 + 0.05 && -6.869551053772755 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -6.869551053772755, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzenie poprawności działania funkcji add
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.638408591614327, .im = 1.3441325784596612};
                struct complex_t cp2 = {.re = -1.3380117763944064, .im = -8.038410632492154};
                struct complex_t cp3 = {.re = -1.3380117763944064, .im = -8.038410632492154};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 1.3003968152199206 + 0.05 && 1.3003968152199206 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 1.3003968152199206, cp3.re);
                test_error(cp3.im < -6.694278054032493 + 0.05 && -6.694278054032493 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -6.694278054032493, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzenie poprawności działania funkcji add
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 8.71284415188115, .im = 6.654747514620115};
                struct complex_t cp2 = {.re = -1.970379716046132, .im = 1.8887965231663824};
                struct complex_t cp3 = {.re = -1.970379716046132, .im = 1.8887965231663824};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 6.742464435835018 + 0.05 && 6.742464435835018 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 6.742464435835018, cp3.re);
                test_error(cp3.im < 8.543544037786496 + 0.05 && 8.543544037786496 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 8.543544037786496, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzenie poprawności działania funkcji add
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 9.098478028897755, .im = 6.323134235454892};
                struct complex_t cp2 = {.re = 2.943389293061534, .im = 6.407192258566695};
                struct complex_t cp3 = {.re = 2.943389293061534, .im = 6.407192258566695};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 12.04186732195929 + 0.05 && 12.04186732195929 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 12.04186732195929, cp3.re);
                test_error(cp3.im < 12.730326494021586 + 0.05 && 12.730326494021586 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 12.730326494021586, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzenie poprawności działania funkcji add
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.454776082547255, .im = 4.671510030877853};
                struct complex_t cp2 = {.re = 5.891821483126718, .im = -5.973651309935579};
                struct complex_t cp3 = {.re = 5.891821483126718, .im = -5.973651309935579};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 8.346597565673974 + 0.05 && 8.346597565673974 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 8.346597565673974, cp3.re);
                test_error(cp3.im < -1.302141279057726 + 0.05 && -1.302141279057726 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -1.302141279057726, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzenie poprawności działania funkcji add
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.887623926498122, .im = -8.782929264791628};
                struct complex_t cp2 = {.re = -7.552837951371917, .im = -5.219667783236293};
                struct complex_t cp3 = {.re = -7.552837951371917, .im = -5.219667783236293};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -4.665214024873794 + 0.05 && -4.665214024873794 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -4.665214024873794, cp3.re);
                test_error(cp3.im < -14.002597048027921 + 0.05 && -14.002597048027921 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -14.002597048027921, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzenie poprawności działania funkcji add
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 7.184405503461129, .im = -7.783145499693557};
                struct complex_t cp2 = {.re = -2.0353371993418783, .im = 7.839702467599523};
                struct complex_t cp3 = {.re = -2.0353371993418783, .im = 7.839702467599523};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 5.14906830411925 + 0.05 && 5.14906830411925 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 5.14906830411925, cp3.re);
                test_error(cp3.im < 0.05655696790596565 + 0.05 && 0.05655696790596565 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.05655696790596565, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzenie poprawności działania funkcji add
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 6.293075519669118, .im = -6.841103440307995};
                struct complex_t cp2 = {.re = 9.019512318464182, .im = 5.497115336316063};
                struct complex_t cp3 = {.re = 9.019512318464182, .im = 5.497115336316063};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 15.3125878381333 + 0.05 && 15.3125878381333 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 15.3125878381333, cp3.re);
                test_error(cp3.im < -1.343988103991932 + 0.05 && -1.343988103991932 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -1.343988103991932, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzenie poprawności działania funkcji add
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.3039191868156674, .im = -2.9598542790566817};
                struct complex_t cp2 = {.re = 9.16428051061271, .im = -5.255547401101992};
                struct complex_t cp3 = {.re = 9.16428051061271, .im = -5.255547401101992};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 11.468199697428377 + 0.05 && 11.468199697428377 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 11.468199697428377, cp3.re);
                test_error(cp3.im < -8.215401680158674 + 0.05 && -8.215401680158674 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -8.215401680158674, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzenie poprawności działania funkcji add
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -0.16521377889738886, .im = -3.6892918064681934};
                struct complex_t cp2 = {.re = 4.162473282593515, .im = 0};
                struct complex_t cp3 = {.re = 4.162473282593515, .im = 0};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 3.9972595036961263 + 0.05 && 3.9972595036961263 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 3.9972595036961263, cp3.re);
                test_error(cp3.im < -3.6892918064681934 + 0.05 && -3.6892918064681934 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -3.6892918064681934, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzenie poprawności działania funkcji add
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0.8237446695638404, .im = 8.929016505335884};
                struct complex_t cp2 = {.re = 0, .im = 0.11608873812152076};
                struct complex_t cp3 = {.re = 0, .im = 0.11608873812152076};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 0.8237446695638404 + 0.05 && 0.8237446695638404 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.8237446695638404, cp3.re);
                test_error(cp3.im < 9.045105243457405 + 0.05 && 9.045105243457405 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 9.045105243457405, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzenie poprawności działania funkcji add
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 6.623372659224366, .im = 0};
                struct complex_t cp2 = {.re = 2.488402062338327, .im = 0.49690352223361245};
                struct complex_t cp3 = {.re = 2.488402062338327, .im = 0.49690352223361245};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 9.111774721562693 + 0.05 && 9.111774721562693 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 9.111774721562693, cp3.re);
                test_error(cp3.im < 0.49690352223361245 + 0.05 && 0.49690352223361245 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.49690352223361245, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzenie poprawności działania funkcji add
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 4.187933571529612};
                struct complex_t cp2 = {.re = 9.97117817018557, .im = 5.30974948232717};
                struct complex_t cp3 = {.re = 9.97117817018557, .im = 5.30974948232717};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 9.97117817018557 + 0.05 && 9.97117817018557 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 9.97117817018557, cp3.re);
                test_error(cp3.im < 9.497683053856782 + 0.05 && 9.497683053856782 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 9.497683053856782, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzenie poprawności działania funkcji add
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -6.743211996034133, .im = -1.6223076043230389};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -6.743211996034133 + 0.05 && -6.743211996034133 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -6.743211996034133, cp3.re);
                test_error(cp3.im < -1.6223076043230389 + 0.05 && -1.6223076043230389 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -1.6223076043230389, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzenie poprawności działania funkcji add
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 7.701825264225395, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0.033610920252893806};
                struct complex_t cp3 = {.re = 0, .im = 0.033610920252893806};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 7.701825264225395 + 0.05 && 7.701825264225395 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 7.701825264225395, cp3.re);
                test_error(cp3.im < 0.033610920252893806 + 0.05 && 0.033610920252893806 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.033610920252893806, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzenie poprawności działania funkcji add
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = -2.5049517122947744, .im = -1.794327611781295};
                struct complex_t cp3 = {.re = -2.5049517122947744, .im = -1.794327611781295};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -2.5049517122947744 + 0.05 && -2.5049517122947744 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -2.5049517122947744, cp3.re);
                test_error(cp3.im < -1.794327611781295 + 0.05 && -1.794327611781295 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -1.794327611781295, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzenie poprawności działania funkcji add
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = -2.642658489685708};
                struct complex_t cp2 = {.re = -3.7360399278161127, .im = 0};
                struct complex_t cp3 = {.re = -3.7360399278161127, .im = 0};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -3.7360399278161127 + 0.05 && -3.7360399278161127 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -3.7360399278161127, cp3.re);
                test_error(cp3.im < -2.642658489685708 + 0.05 && -2.642658489685708 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -2.642658489685708, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzenie poprawności działania funkcji add
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = -0.19881531458460877};
                struct complex_t cp2 = {.re = 0, .im = 0.20720199697194452};
                struct complex_t cp3 = {.re = 0, .im = 0.20720199697194452};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                test_error(cp3.im < 0.008386682387335753 + 0.05 && 0.008386682387335753 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.008386682387335753, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzenie poprawności działania funkcji add
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -9.857466398441016, .im = 0};
                struct complex_t cp2 = {.re = -4.312330094305183, .im = 0};
                struct complex_t cp3 = {.re = -4.312330094305183, .im = 0};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -14.1697964927462 + 0.05 && -14.1697964927462 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -14.1697964927462, cp3.re);
                test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzenie poprawności działania funkcji add
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -9.095966394920216, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -9.095966394920216 + 0.05 && -9.095966394920216 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -9.095966394920216, cp3.re);
                test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzenie poprawności działania funkcji add
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 2.2457291930280583};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                test_error(cp3.im < 2.2457291930280583 + 0.05 && 2.2457291930280583 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 2.2457291930280583, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzenie poprawności działania funkcji add
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = -0.0394269572985646, .im = 0};
                struct complex_t cp3 = {.re = -0.0394269572985646, .im = 0};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < -0.0394269572985646 + 0.05 && -0.0394269572985646 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.0394269572985646, cp3.re);
                test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzenie poprawności działania funkcji add
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = -2.0177220127195383};
                struct complex_t cp3 = {.re = 0, .im = -2.0177220127195383};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                test_error(cp3.im < -2.0177220127195383 + 0.05 && -2.0177220127195383 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -2.0177220127195383, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzenie poprawności działania funkcji add
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};
        
                printf("#####START#####");
                int err_code = add(&cp1, &cp2, &cp3);
                printf("#####END#####");
        
                test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja add() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja add() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzenie poprawności działania funkcji add
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 13.859381464676673, .im = 54.76588510774408};

                printf("#####START#####");
                int err_code = add(&cp1, &cp1, NULL);
                printf("#####END#####");
                
                test_error(err_code == 1, "Funkcja add() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzenie poprawności działania funkcji add
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 59.12485513277451, .im = 22.202192158509604};

                printf("#####START#####");
                int err_code = add(&cp1, NULL, &cp1);
                printf("#####END#####");
                
                test_error(err_code == 1, "Funkcja add() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzenie poprawności działania funkcji add
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 67.58952469549985, .im = -6.3717433192337865};

                printf("#####START#####");
                int err_code = add(NULL, &cp1, &cp1);
                printf("#####END#####");
                
                test_error(err_code == 1, "Funkcja add() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzenie poprawności działania funkcji add
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -67.94626483260397, .im = -71.80343677888862};

                printf("#####START#####");
                int err_code = add(&cp1, NULL, NULL);
                printf("#####END#####");
                
                test_error(err_code == 1, "Funkcja add() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzenie poprawności działania funkcji add
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 73.52046099127202, .im = -66.95459203378616};

                printf("#####START#####");
                int err_code = add(NULL, &cp1, NULL);
                printf("#####END#####");
                
                test_error(err_code == 1, "Funkcja add() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzenie poprawności działania funkcji add
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -59.92790940390624, .im = 54.64765554090826};

                printf("#####START#####");
                int err_code = add(NULL, NULL, &cp1);
                printf("#####END#####");
                
                test_error(err_code == 1, "Funkcja add() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 55: Sprawdzenie poprawności działania funkcji add
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzenie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = add(NULL, NULL, NULL);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja add() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 56: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.142781026349179, .im = -3.577174544535322};
                struct complex_t cp2 = {.re = -6.447679760722358, .im = -6.203467496976525};
                struct complex_t cp3 = {.re = -6.447679760722358, .im = -6.203467496976525};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 2.304898734373179 + 0.05 && 2.304898734373179 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 2.304898734373179, cp3.re);
                test_error(cp3.im < 2.6262929524412026 + 0.05 && 2.6262929524412026 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 2.6262929524412026, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 57: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.8840253094266934, .im = -2.016960909519482};
                struct complex_t cp2 = {.re = -5.613999309401676, .im = 8.429445512111045};
                struct complex_t cp3 = {.re = -5.613999309401676, .im = 8.429445512111045};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 3.729973999974982 + 0.05 && 3.729973999974982 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 3.729973999974982, cp3.re);
                test_error(cp3.im < -10.446406421630527 + 0.05 && -10.446406421630527 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -10.446406421630527, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 58: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.9357485078446626, .im = -1.2202390116724935};
                struct complex_t cp2 = {.re = 5.999301322393412, .im = 7.230306445151914};
                struct complex_t cp3 = {.re = 5.999301322393412, .im = 7.230306445151914};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -7.935049830238075 + 0.05 && -7.935049830238075 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -7.935049830238075, cp3.re);
                test_error(cp3.im < -8.450545456824408 + 0.05 && -8.450545456824408 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -8.450545456824408, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 59: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -6.376673968796026, .im = -9.44104722718983};
                struct complex_t cp2 = {.re = 5.104480051588856, .im = -3.796353799004959};
                struct complex_t cp3 = {.re = 5.104480051588856, .im = -3.796353799004959};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -11.481154020384881 + 0.05 && -11.481154020384881 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -11.481154020384881, cp3.re);
                test_error(cp3.im < -5.644693428184872 + 0.05 && -5.644693428184872 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -5.644693428184872, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 60: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -7.804269248506317, .im = 6.68047184563922};
                struct complex_t cp2 = {.re = -3.6122700747863217, .im = -9.336148544382368};
                struct complex_t cp3 = {.re = -3.6122700747863217, .im = -9.336148544382368};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -4.191999173719996 + 0.05 && -4.191999173719996 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -4.191999173719996, cp3.re);
                test_error(cp3.im < 16.016620390021586 + 0.05 && 16.016620390021586 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 16.016620390021586, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 61: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.498234743115473, .im = 5.6472299810788975};
                struct complex_t cp2 = {.re = -6.2179388110434655, .im = 9.388687639430989};
                struct complex_t cp3 = {.re = -6.2179388110434655, .im = 9.388687639430989};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 1.7197040679279922 + 0.05 && 1.7197040679279922 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 1.7197040679279922, cp3.re);
                test_error(cp3.im < -3.7414576583520915 + 0.05 && -3.7414576583520915 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -3.7414576583520915, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 62: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -3.7756883065229125, .im = 5.344154790377496};
                struct complex_t cp2 = {.re = 3.0439985199443935, .im = 1.4570682673621485};
                struct complex_t cp3 = {.re = 3.0439985199443935, .im = 1.4570682673621485};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -6.819686826467306 + 0.05 && -6.819686826467306 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -6.819686826467306, cp3.re);
                test_error(cp3.im < 3.887086523015348 + 0.05 && 3.887086523015348 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 3.887086523015348, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 63: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.804706034457273, .im = 2.0713518527991055};
                struct complex_t cp2 = {.re = 4.823752406427821, .im = -8.94090290657186};
                struct complex_t cp3 = {.re = 4.823752406427821, .im = -8.94090290657186};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -9.628458440885094 + 0.05 && -9.628458440885094 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -9.628458440885094, cp3.re);
                test_error(cp3.im < 11.012254759370967 + 0.05 && 11.012254759370967 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 11.012254759370967, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 64: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.638408591614327, .im = 1.3441325784596612};
                struct complex_t cp2 = {.re = -1.3380117763944064, .im = -8.038410632492154};
                struct complex_t cp3 = {.re = -1.3380117763944064, .im = -8.038410632492154};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 3.9764203680087333 + 0.05 && 3.9764203680087333 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 3.9764203680087333, cp3.re);
                test_error(cp3.im < 9.382543210951814 + 0.05 && 9.382543210951814 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 9.382543210951814, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 65: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 8.71284415188115, .im = 6.654747514620115};
                struct complex_t cp2 = {.re = -1.970379716046132, .im = 1.8887965231663824};
                struct complex_t cp3 = {.re = -1.970379716046132, .im = 1.8887965231663824};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 10.683223867927282 + 0.05 && 10.683223867927282 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 10.683223867927282, cp3.re);
                test_error(cp3.im < 4.765950991453733 + 0.05 && 4.765950991453733 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 4.765950991453733, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 66: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 9.098478028897755, .im = 6.323134235454892};
                struct complex_t cp2 = {.re = 2.943389293061534, .im = 6.407192258566695};
                struct complex_t cp3 = {.re = 2.943389293061534, .im = 6.407192258566695};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 6.155088735836221 + 0.05 && 6.155088735836221 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 6.155088735836221, cp3.re);
                test_error(cp3.im < -0.08405802311180377 + 0.05 && -0.08405802311180377 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.08405802311180377, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 67: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.454776082547255, .im = 4.671510030877853};
                struct complex_t cp2 = {.re = 5.891821483126718, .im = -5.973651309935579};
                struct complex_t cp3 = {.re = 5.891821483126718, .im = -5.973651309935579};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -3.4370454005794633 + 0.05 && -3.4370454005794633 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -3.4370454005794633, cp3.re);
                test_error(cp3.im < 10.64516134081343 + 0.05 && 10.64516134081343 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 10.64516134081343, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 68: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.887623926498122, .im = -8.782929264791628};
                struct complex_t cp2 = {.re = -7.552837951371917, .im = -5.219667783236293};
                struct complex_t cp3 = {.re = -7.552837951371917, .im = -5.219667783236293};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 10.440461877870039 + 0.05 && 10.440461877870039 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 10.440461877870039, cp3.re);
                test_error(cp3.im < -3.563261481555335 + 0.05 && -3.563261481555335 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -3.563261481555335, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 69: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 7.184405503461129, .im = -7.783145499693557};
                struct complex_t cp2 = {.re = -2.0353371993418783, .im = 7.839702467599523};
                struct complex_t cp3 = {.re = -2.0353371993418783, .im = 7.839702467599523};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 9.219742702803007 + 0.05 && 9.219742702803007 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 9.219742702803007, cp3.re);
                test_error(cp3.im < -15.62284796729308 + 0.05 && -15.62284796729308 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -15.62284796729308, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 70: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 6.293075519669118, .im = -6.841103440307995};
                struct complex_t cp2 = {.re = 9.019512318464182, .im = 5.497115336316063};
                struct complex_t cp3 = {.re = 9.019512318464182, .im = 5.497115336316063};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -2.7264367987950635 + 0.05 && -2.7264367987950635 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -2.7264367987950635, cp3.re);
                test_error(cp3.im < -12.338218776624057 + 0.05 && -12.338218776624057 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -12.338218776624057, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 71: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.3039191868156674, .im = -2.9598542790566817};
                struct complex_t cp2 = {.re = 9.16428051061271, .im = -5.255547401101992};
                struct complex_t cp3 = {.re = 9.16428051061271, .im = -5.255547401101992};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -6.860361323797042 + 0.05 && -6.860361323797042 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -6.860361323797042, cp3.re);
                test_error(cp3.im < 2.29569312204531 + 0.05 && 2.29569312204531 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 2.29569312204531, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 72: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -0.16521377889738886, .im = -3.6892918064681934};
                struct complex_t cp2 = {.re = 4.162473282593515, .im = 0};
                struct complex_t cp3 = {.re = 4.162473282593515, .im = 0};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -4.327687061490904 + 0.05 && -4.327687061490904 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -4.327687061490904, cp3.re);
                test_error(cp3.im < -3.6892918064681934 + 0.05 && -3.6892918064681934 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -3.6892918064681934, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 73: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0.8237446695638404, .im = 8.929016505335884};
                struct complex_t cp2 = {.re = 0, .im = 0.11608873812152076};
                struct complex_t cp3 = {.re = 0, .im = 0.11608873812152076};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0.8237446695638404 + 0.05 && 0.8237446695638404 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.8237446695638404, cp3.re);
                test_error(cp3.im < 8.812927767214363 + 0.05 && 8.812927767214363 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 8.812927767214363, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 74: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 6.623372659224366, .im = 0};
                struct complex_t cp2 = {.re = 2.488402062338327, .im = 0.49690352223361245};
                struct complex_t cp3 = {.re = 2.488402062338327, .im = 0.49690352223361245};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 4.134970596886038 + 0.05 && 4.134970596886038 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 4.134970596886038, cp3.re);
                test_error(cp3.im < -0.49690352223361245 + 0.05 && -0.49690352223361245 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.49690352223361245, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 75: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 4.187933571529612};
                struct complex_t cp2 = {.re = 9.97117817018557, .im = 5.30974948232717};
                struct complex_t cp3 = {.re = 9.97117817018557, .im = 5.30974948232717};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -9.97117817018557 + 0.05 && -9.97117817018557 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -9.97117817018557, cp3.re);
                test_error(cp3.im < -1.121815910797558 + 0.05 && -1.121815910797558 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -1.121815910797558, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 76: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -6.743211996034133, .im = -1.6223076043230389};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -6.743211996034133 + 0.05 && -6.743211996034133 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -6.743211996034133, cp3.re);
                test_error(cp3.im < -1.6223076043230389 + 0.05 && -1.6223076043230389 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -1.6223076043230389, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 77: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 7.701825264225395, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0.033610920252893806};
                struct complex_t cp3 = {.re = 0, .im = 0.033610920252893806};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 7.701825264225395 + 0.05 && 7.701825264225395 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 7.701825264225395, cp3.re);
                test_error(cp3.im < -0.033610920252893806 + 0.05 && -0.033610920252893806 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.033610920252893806, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 78: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = -2.5049517122947744, .im = -1.794327611781295};
                struct complex_t cp3 = {.re = -2.5049517122947744, .im = -1.794327611781295};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 2.5049517122947744 + 0.05 && 2.5049517122947744 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 2.5049517122947744, cp3.re);
                test_error(cp3.im < 1.794327611781295 + 0.05 && 1.794327611781295 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 1.794327611781295, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 79: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = -2.642658489685708};
                struct complex_t cp2 = {.re = -3.7360399278161127, .im = 0};
                struct complex_t cp3 = {.re = -3.7360399278161127, .im = 0};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 3.7360399278161127 + 0.05 && 3.7360399278161127 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 3.7360399278161127, cp3.re);
                test_error(cp3.im < -2.642658489685708 + 0.05 && -2.642658489685708 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -2.642658489685708, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 80: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = -0.19881531458460877};
                struct complex_t cp2 = {.re = 0, .im = 0.20720199697194452};
                struct complex_t cp3 = {.re = 0, .im = 0.20720199697194452};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                test_error(cp3.im < -0.4060173115565533 + 0.05 && -0.4060173115565533 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.4060173115565533, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 81: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -9.857466398441016, .im = 0};
                struct complex_t cp2 = {.re = -4.312330094305183, .im = 0};
                struct complex_t cp3 = {.re = -4.312330094305183, .im = 0};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -5.545136304135832 + 0.05 && -5.545136304135832 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -5.545136304135832, cp3.re);
                test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 82: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -9.095966394920216, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -9.095966394920216 + 0.05 && -9.095966394920216 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -9.095966394920216, cp3.re);
                test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 83: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 2.2457291930280583};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                test_error(cp3.im < 2.2457291930280583 + 0.05 && 2.2457291930280583 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 2.2457291930280583, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 84: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = -0.0394269572985646, .im = 0};
                struct complex_t cp3 = {.re = -0.0394269572985646, .im = 0};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0.0394269572985646 + 0.05 && 0.0394269572985646 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0394269572985646, cp3.re);
                test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 85: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = -2.0177220127195383};
                struct complex_t cp3 = {.re = 0, .im = -2.0177220127195383};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                test_error(cp3.im < 2.0177220127195383 + 0.05 && 2.0177220127195383 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 2.0177220127195383, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 86: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja subtract() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja subtract() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 87: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 76.04240562406136, .im = 54.12050895165797};

                printf("#####START#####");
                int err_code = subtract(&cp1, &cp1, NULL);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja subtract() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 88: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -55.910599602840975, .im = 9.51882027877214};

                printf("#####START#####");
                int err_code = subtract(&cp1, NULL, &cp1);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja subtract() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 89: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 40.48903974331071, .im = -77.56560687366796};

                printf("#####START#####");
                int err_code = subtract(NULL, &cp1, &cp1);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja subtract() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 90: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 6.263059856783286, .im = 14.039485898282251};

                printf("#####START#####");
                int err_code = subtract(&cp1, NULL, NULL);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja subtract() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 91: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 94.267645585595, .im = 65.45142440014797};

                printf("#####START#####");
                int err_code = subtract(NULL, &cp1, NULL);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja subtract() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 92: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 44.34549888501775, .im = 78.7321867402589};

                printf("#####START#####");
                int err_code = subtract(NULL, NULL, &cp1);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja subtract() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 93: Sprawdzenie poprawności działania funkcji subtract
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzenie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = subtract(NULL, NULL, NULL);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja subtract() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 94: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.142781026349179, .im = -3.577174544535322};
                struct complex_t cp2 = {.re = -6.447679760722358, .im = -6.203467496976525};
                struct complex_t cp3 = {.re = -6.447679760722358, .im = -6.203467496976525};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 4.520439358659523 + 0.05 && 4.520439358659523 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 4.520439358659523, cp3.re);
                test_error(cp3.im < 48.7640833554198 + 0.05 && 48.7640833554198 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 48.7640833554198, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 95: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.8840253094266934, .im = -2.016960909519482};
                struct complex_t cp2 = {.re = -5.613999309401676, .im = 8.429445512111045};
                struct complex_t cp3 = {.re = -5.613999309401676, .im = 8.429445512111045};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 27.578778872869144 + 0.05 && 27.578778872869144 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 27.578778872869144, cp3.re);
                test_error(cp3.im < -4.5580715361179145 + 0.05 && -4.5580715361179145 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -4.5580715361179145, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 96: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.9357485078446626, .im = -1.2202390116724935};
                struct complex_t cp2 = {.re = 5.999301322393412, .im = 7.230306445151914};
                struct complex_t cp3 = {.re = 5.999301322393412, .im = 7.230306445151914};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -2.790436592212128 + 0.05 && -2.790436592212128 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -2.790436592212128, cp3.re);
                test_error(cp3.im < -21.316636428825284 + 0.05 && -21.316636428825284 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -21.316636428825284, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 97: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -6.376673968796026, .im = -9.44104722718983};
                struct complex_t cp2 = {.re = 5.104480051588856, .im = -3.796353799004959};
                struct complex_t cp3 = {.re = 5.104480051588856, .im = -3.796353799004959};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -68.3911605767326 + 0.05 && -68.3911605767326 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -68.3911605767326, cp3.re);
                test_error(cp3.im < -23.983526790843957 + 0.05 && -23.983526790843957 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -23.983526790843957, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 98: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -7.804269248506317, .im = 6.68047184563922};
                struct complex_t cp2 = {.re = -3.6122700747863217, .im = -9.336148544382368};
                struct complex_t cp3 = {.re = -3.6122700747863217, .im = -9.336148544382368};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 90.5610057594065 + 0.05 && 90.5610057594065 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 90.5610057594065, cp3.re);
                test_error(cp3.im < 48.73014845095524 + 0.05 && 48.73014845095524 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 48.73014845095524, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 99: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.498234743115473, .im = 5.6472299810788975};
                struct complex_t cp2 = {.re = -6.2179388110434655, .im = 9.388687639430989};
                struct complex_t cp3 = {.re = -6.2179388110434655, .im = 9.388687639430989};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -25.050329929977714 + 0.05 && -25.050329929977714 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -25.050329929977714, cp3.re);
                test_error(cp3.im < -77.346651406186 + 0.05 && -77.346651406186 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -77.346651406186, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 100: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -3.7756883065229125, .im = 5.344154790377496};
                struct complex_t cp2 = {.re = 3.0439985199443935, .im = 1.4570682673621485};
                struct complex_t cp3 = {.re = 3.0439985199443935, .im = 1.4570682673621485};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -19.279987977757564 + 0.05 && -19.279987977757564 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -19.279987977757564, cp3.re);
                test_error(cp3.im < 10.766163653377973 + 0.05 && 10.766163653377973 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 10.766163653377973, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 101: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.804706034457273, .im = 2.0713518527991055};
                struct complex_t cp2 = {.re = 4.823752406427821, .im = -8.94090290657186};
                struct complex_t cp3 = {.re = 4.823752406427821, .im = -8.94090290657186};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -4.656956494667014 + 0.05 && -4.656956494667014 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -4.656956494667014, cp3.re);
                test_error(cp3.im < 52.9500986332008 + 0.05 && 52.9500986332008 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 52.9500986332008, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 102: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.638408591614327, .im = 1.3441325784596612};
                struct complex_t cp2 = {.re = -1.3380117763944064, .im = -8.038410632492154};
                struct complex_t cp3 = {.re = -1.3380117763944064, .im = -8.038410632492154};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 7.274467843649084 + 0.05 && 7.274467843649084 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 7.274467843649084, cp3.re);
                test_error(cp3.im < -23.007076894705662 + 0.05 && -23.007076894705662 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -23.007076894705662, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 103: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 8.71284415188115, .im = 6.654747514620115};
                struct complex_t cp2 = {.re = -1.970379716046132, .im = 1.8887965231663824};
                struct complex_t cp3 = {.re = -1.970379716046132, .im = 1.8887965231663824};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -29.73707535410238 + 0.05 && -29.73707535410238 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -29.73707535410238, cp3.re);
                test_error(cp3.im < 3.344410222747779 + 0.05 && 3.344410222747779 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 3.344410222747779, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 104: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 9.098478028897755, .im = 6.323134235454892};
                struct complex_t cp2 = {.re = 2.943389293061534, .im = 6.407192258566695};
                struct complex_t cp3 = {.re = 2.943389293061534, .im = 6.407192258566695};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -13.733173909871361 + 0.05 && -13.733173909871361 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -13.733173909871361, cp3.re);
                test_error(cp3.im < 76.90714359872162 + 0.05 && 76.90714359872162 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 76.90714359872162, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 105: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.454776082547255, .im = 4.671510030877853};
                struct complex_t cp2 = {.re = 5.891821483126718, .im = -5.973651309935579};
                struct complex_t cp3 = {.re = 5.891821483126718, .im = -5.973651309935579};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 42.369074474748246 + 0.05 && 42.369074474748246 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 42.369074474748246, cp3.re);
                test_error(cp3.im < 12.859726797461153 + 0.05 && 12.859726797461153 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 12.859726797461153, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 106: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.887623926498122, .im = -8.782929264791628};
                struct complex_t cp2 = {.re = -7.552837951371917, .im = -5.219667783236293};
                struct complex_t cp3 = {.re = -7.552837951371917, .im = -5.219667783236293};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -67.65372850722068 + 0.05 && -67.65372850722068 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -67.65372850722068, cp3.re);
                test_error(cp3.im < 51.26360389608871 + 0.05 && 51.26360389608871 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 51.26360389608871, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 107: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 7.184405503461129, .im = -7.783145499693557};
                struct complex_t cp2 = {.re = -2.0353371993418783, .im = 7.839702467599523};
                struct complex_t cp3 = {.re = -2.0353371993418783, .im = 7.839702467599523};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 46.39485720328275 + 0.05 && 46.39485720328275 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 46.39485720328275, cp3.re);
                test_error(cp3.im < 72.16492711713643 + 0.05 && 72.16492711713643 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 72.16492711713643, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 108: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 6.293075519669118, .im = -6.841103440307995};
                struct complex_t cp2 = {.re = 9.019512318464182, .im = 5.497115336316063};
                struct complex_t cp3 = {.re = 9.019512318464182, .im = 5.497115336316063};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 94.36680680972265 + 0.05 && 94.36680680972265 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 94.36680680972265, cp3.re);
                test_error(cp3.im < -27.10965479997737 + 0.05 && -27.10965479997737 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -27.10965479997737, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 109: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.3039191868156674, .im = -2.9598542790566817};
                struct complex_t cp2 = {.re = 9.16428051061271, .im = -5.255547401101992};
                struct complex_t cp3 = {.re = 9.16428051061271, .im = -5.255547401101992};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 5.558107237824551 + 0.05 && 5.558107237824551 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 5.558107237824551, cp3.re);
                test_error(cp3.im < -39.23329137843088 + 0.05 && -39.23329137843088 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -39.23329137843088, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 110: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -0.16521377889738886, .im = -3.6892918064681934};
                struct complex_t cp2 = {.re = 4.162473282593515, .im = 0};
                struct complex_t cp3 = {.re = 4.162473282593515, .im = 0};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -0.6876979405766934 + 0.05 && -0.6876979405766934 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.6876979405766934, cp3.re);
                test_error(cp3.im < -15.356578576115021 + 0.05 && -15.356578576115021 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -15.356578576115021, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 111: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0.8237446695638404, .im = 8.929016505335884};
                struct complex_t cp2 = {.re = 0, .im = 0.11608873812152076};
                struct complex_t cp3 = {.re = 0, .im = 0.11608873812152076};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -1.0365582587706739 + 0.05 && -1.0365582587706739 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -1.0365582587706739, cp3.re);
                test_error(cp3.im < 0.09562747922399532 + 0.05 && 0.09562747922399532 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.09562747922399532, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 112: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 6.623372659224366, .im = 0};
                struct complex_t cp2 = {.re = 2.488402062338327, .im = 0.49690352223361245};
                struct complex_t cp3 = {.re = 2.488402062338327, .im = 0.49690352223361245};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 16.481614184849203 + 0.05 && 16.481614184849203 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 16.481614184849203, cp3.re);
                test_error(cp3.im < 3.2911772034343953 + 0.05 && 3.2911772034343953 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 3.2911772034343953, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 113: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 4.187933571529612};
                struct complex_t cp2 = {.re = 9.97117817018557, .im = 5.30974948232717};
                struct complex_t cp3 = {.re = 9.97117817018557, .im = 5.30974948232717};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -22.236878113449936 + 0.05 && -22.236878113449936 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -22.236878113449936, cp3.re);
                test_error(cp3.im < 41.75863180662336 + 0.05 && 41.75863180662336 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 41.75863180662336, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 114: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -6.743211996034133, .im = -1.6223076043230389};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0.0 + 0.05 && 0.0 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.re);
                test_error(cp3.im < -0.0 + 0.05 && -0.0 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.0, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 115: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 7.701825264225395, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0.033610920252893806};
                struct complex_t cp3 = {.re = 0, .im = 0.033610920252893806};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0.0 + 0.05 && 0.0 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.re);
                test_error(cp3.im < 0.2588654347576025 + 0.05 && 0.2588654347576025 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.2588654347576025, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 116: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = -2.5049517122947744, .im = -1.794327611781295};
                struct complex_t cp3 = {.re = -2.5049517122947744, .im = -1.794327611781295};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0.0 + 0.05 && 0.0 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.re);
                test_error(cp3.im < -0.0 + 0.05 && -0.0 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.0, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 117: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = -2.642658489685708};
                struct complex_t cp2 = {.re = -3.7360399278161127, .im = 0};
                struct complex_t cp3 = {.re = -3.7360399278161127, .im = 0};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0.0 + 0.05 && 0.0 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.re);
                test_error(cp3.im < 9.87307763304803 + 0.05 && 9.87307763304803 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 9.87307763304803, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 118: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = -0.19881531458460877};
                struct complex_t cp2 = {.re = 0, .im = 0.20720199697194452};
                struct complex_t cp3 = {.re = 0, .im = 0.20720199697194452};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0.0411949302105363 + 0.05 && 0.0411949302105363 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0411949302105363, cp3.re);
                test_error(cp3.im < 0.0 + 0.05 && 0.0 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 119: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -9.857466398441016, .im = 0};
                struct complex_t cp2 = {.re = -4.312330094305183, .im = 0};
                struct complex_t cp3 = {.re = -4.312330094305183, .im = 0};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 42.508649003599324 + 0.05 && 42.508649003599324 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 42.508649003599324, cp3.re);
                test_error(cp3.im < -0.0 + 0.05 && -0.0 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.0, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 120: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -9.095966394920216, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -0.0 + 0.05 && -0.0 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.0, cp3.re);
                test_error(cp3.im < 0.0 + 0.05 && 0.0 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 121: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 2.2457291930280583};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0.0 + 0.05 && 0.0 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.re);
                test_error(cp3.im < 0.0 + 0.05 && 0.0 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 122: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = -0.0394269572985646, .im = 0};
                struct complex_t cp3 = {.re = -0.0394269572985646, .im = 0};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < -0.0 + 0.05 && -0.0 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.0, cp3.re);
                test_error(cp3.im < 0.0 + 0.05 && 0.0 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 123: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = -2.0177220127195383};
                struct complex_t cp3 = {.re = 0, .im = -2.0177220127195383};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0.0 + 0.05 && 0.0 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.re);
                test_error(cp3.im < 0.0 + 0.05 && 0.0 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 124: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja multiply() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja multiply() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 125: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -41.317137448958775, .im = -92.83012982138588};

                printf("#####START#####");
                int err_code = multiply(&cp1, &cp1, NULL);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja multiply() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 126: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 47.95488583705023, .im = -97.02145334608281};

                printf("#####START#####");
                int err_code = multiply(&cp1, NULL, &cp1);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja multiply() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 127: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -70.81608295595157, .im = -79.8773907282623};

                printf("#####START#####");
                int err_code = multiply(NULL, &cp1, &cp1);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja multiply() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 128: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST128(void)
{
    // informacje o teście
    test_start(128, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 32.452438601263594, .im = 47.04473201404679};

                printf("#####START#####");
                int err_code = multiply(&cp1, NULL, NULL);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja multiply() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 129: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST129(void)
{
    // informacje o teście
    test_start(129, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 38.53870263236075, .im = -85.77043336804171};

                printf("#####START#####");
                int err_code = multiply(NULL, &cp1, NULL);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja multiply() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 130: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST130(void)
{
    // informacje o teście
    test_start(130, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -11.885500875802265, .im = 33.169975693348505};

                printf("#####START#####");
                int err_code = multiply(NULL, NULL, &cp1);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja multiply() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 131: Sprawdzenie poprawności działania funkcji multiply
//
void UTEST131(void)
{
    // informacje o teście
    test_start(131, "Sprawdzenie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = multiply(NULL, NULL, NULL);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 132: Sprawdzenie poprawności działania funkcji divide
//
void UTEST132(void)
{
    // informacje o teście
    test_start(132, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.142781026349179, .im = -3.577174544535322};
                struct complex_t cp2 = {.re = -6.447679760722358, .im = -6.203467496976525};
                struct complex_t cp3 = {.re = -6.447679760722358, .im = -6.203467496976525};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.6108532270877228 + 0.05 && 0.6108532270877228 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.6108532270877228, cp3.re);
                    test_error(cp3.im < -0.032916274226189084 + 0.05 && -0.032916274226189084 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.032916274226189084, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 133: Sprawdzenie poprawności działania funkcji divide
//
void UTEST133(void)
{
    // informacje o teście
    test_start(133, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.8840253094266934, .im = -2.016960909519482};
                struct complex_t cp2 = {.re = -5.613999309401676, .im = 8.429445512111045};
                struct complex_t cp3 = {.re = -5.613999309401676, .im = 8.429445512111045};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.06263806383146474 + 0.05 && -0.06263806383146474 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.06263806383146474, cp3.re);
                    test_error(cp3.im < 0.26522211375667326 + 0.05 && 0.26522211375667326 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.26522211375667326, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 134: Sprawdzenie poprawności działania funkcji divide
//
void UTEST134(void)
{
    // informacje o teście
    test_start(134, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.9357485078446626, .im = -1.2202390116724935};
                struct complex_t cp2 = {.re = 5.999301322393412, .im = 7.230306445151914};
                struct complex_t cp3 = {.re = 5.999301322393412, .im = 7.230306445151914};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.23151789069950338 + 0.05 && -0.23151789069950338 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.23151789069950338, cp3.re);
                    test_error(cp3.im < 0.07562652069609611 + 0.05 && 0.07562652069609611 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.07562652069609611, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 135: Sprawdzenie poprawności działania funkcji divide
//
void UTEST135(void)
{
    // informacje o teście
    test_start(135, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -6.376673968796026, .im = -9.44104722718983};
                struct complex_t cp2 = {.re = 5.104480051588856, .im = -3.796353799004959};
                struct complex_t cp3 = {.re = 5.104480051588856, .im = -3.796353799004959};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.08134696332668392 + 0.05 && 0.08134696332668392 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.08134696332668392, cp3.re);
                    test_error(cp3.im < -1.789060840992903 + 0.05 && -1.789060840992903 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -1.789060840992903, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 136: Sprawdzenie poprawności działania funkcji divide
//
void UTEST136(void)
{
    // informacje o teście
    test_start(136, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -7.804269248506317, .im = 6.68047184563922};
                struct complex_t cp2 = {.re = -3.6122700747863217, .im = -9.336148544382368};
                struct complex_t cp3 = {.re = -3.6122700747863217, .im = -9.336148544382368};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.34106387508491265 + 0.05 && -0.34106387508491265 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.34106387508491265, cp3.re);
                    test_error(cp3.im < -0.9678813522631244 + 0.05 && -0.9678813522631244 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.9678813522631244, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 137: Sprawdzenie poprawności działania funkcji divide
//
void UTEST137(void)
{
    // informacje o teście
    test_start(137, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.498234743115473, .im = 5.6472299810788975};
                struct complex_t cp2 = {.re = -6.2179388110434655, .im = 9.388687639430989};
                struct complex_t cp3 = {.re = -6.2179388110434655, .im = 9.388687639430989};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.6386695612847705 + 0.05 && 0.6386695612847705 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.6386695612847705, cp3.re);
                    test_error(cp3.im < 0.056134202224107276 + 0.05 && 0.056134202224107276 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.056134202224107276, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 138: Sprawdzenie poprawności działania funkcji divide
//
void UTEST138(void)
{
    // informacje o teście
    test_start(138, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -3.7756883065229125, .im = 5.344154790377496};
                struct complex_t cp2 = {.re = 3.0439985199443935, .im = 1.4570682673621485};
                struct complex_t cp3 = {.re = 3.0439985199443935, .im = 1.4570682673621485};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.3254367737436128 + 0.05 && -0.3254367737436128 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.3254367737436128, cp3.re);
                    test_error(cp3.im < 1.9114130142672727 + 0.05 && 1.9114130142672727 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 1.9114130142672727, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 139: Sprawdzenie poprawności działania funkcji divide
//
void UTEST139(void)
{
    // informacje o teście
    test_start(139, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.804706034457273, .im = 2.0713518527991055};
                struct complex_t cp2 = {.re = 4.823752406427821, .im = -8.94090290657186};
                struct complex_t cp3 = {.re = 4.823752406427821, .im = -8.94090290657186};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.40400292557346534 + 0.05 && -0.40400292557346534 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.40400292557346534, cp3.re);
                    test_error(cp3.im < -0.3194191884042507 + 0.05 && -0.3194191884042507 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.3194191884042507, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 140: Sprawdzenie poprawności działania funkcji divide
//
void UTEST140(void)
{
    // informacje o teście
    test_start(140, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.638408591614327, .im = 1.3441325784596612};
                struct complex_t cp2 = {.re = -1.3380117763944064, .im = -8.038410632492154};
                struct complex_t cp3 = {.re = -1.3380117763944064, .im = -8.038410632492154};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.21586666989816872 + 0.05 && -0.21586666989816872 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.21586666989816872, cp3.re);
                    test_error(cp3.im < 0.2922936576121507 + 0.05 && 0.2922936576121507 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.2922936576121507, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 141: Sprawdzenie poprawności działania funkcji divide
//
void UTEST141(void)
{
    // informacje o teście
    test_start(141, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 8.71284415188115, .im = 6.654747514620115};
                struct complex_t cp2 = {.re = -1.970379716046132, .im = 1.8887965231663824};
                struct complex_t cp3 = {.re = -1.970379716046132, .im = 1.8887965231663824};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.6172052596652511 + 0.05 && -0.6172052596652511 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.6172052596652511, cp3.re);
                    test_error(cp3.im < -3.969043428263116 + 0.05 && -3.969043428263116 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -3.969043428263116, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 142: Sprawdzenie poprawności działania funkcji divide
//
void UTEST142(void)
{
    // informacje o teście
    test_start(142, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 9.098478028897755, .im = 6.323134235454892};
                struct complex_t cp2 = {.re = 2.943389293061534, .im = 6.407192258566695};
                struct complex_t cp3 = {.re = 2.943389293061534, .im = 6.407192258566695};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 1.3535756898996587 + 0.05 && 1.3535756898996587 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 1.3535756898996587, cp3.re);
                    test_error(cp3.im < -0.7982244998283882 + 0.05 && -0.7982244998283882 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.7982244998283882, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 143: Sprawdzenie poprawności działania funkcji divide
//
void UTEST143(void)
{
    // informacje o teście
    test_start(143, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.454776082547255, .im = 4.671510030877853};
                struct complex_t cp2 = {.re = 5.891821483126718, .im = -5.973651309935579};
                struct complex_t cp3 = {.re = 5.891821483126718, .im = -5.973651309935579};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.190955085655604 + 0.05 && -0.190955085655604 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.190955085655604, cp3.re);
                    test_error(cp3.im < 0.5992732372194405 + 0.05 && 0.5992732372194405 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.5992732372194405, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 144: Sprawdzenie poprawności działania funkcji divide
//
void UTEST144(void)
{
    // informacje o teście
    test_start(144, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.887623926498122, .im = -8.782929264791628};
                struct complex_t cp2 = {.re = -7.552837951371917, .im = -5.219667783236293};
                struct complex_t cp3 = {.re = -7.552837951371917, .im = -5.219667783236293};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.285136241924569 + 0.05 && 0.285136241924569 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.285136241924569, cp3.re);
                    test_error(cp3.im < 0.965810845664956 + 0.05 && 0.965810845664956 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.965810845664956, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 145: Sprawdzenie poprawności działania funkcji divide
//
void UTEST145(void)
{
    // informacje o teście
    test_start(145, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 7.184405503461129, .im = -7.783145499693557};
                struct complex_t cp2 = {.re = -2.0353371993418783, .im = 7.839702467599523};
                struct complex_t cp3 = {.re = -2.0353371993418783, .im = 7.839702467599523};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -1.152990244721328 + 0.05 && -1.152990244721328 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -1.152990244721328, cp3.re);
                    test_error(cp3.im < -0.6170746387244959 + 0.05 && -0.6170746387244959 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.6170746387244959, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 146: Sprawdzenie poprawności działania funkcji divide
//
void UTEST146(void)
{
    // informacje o teście
    test_start(146, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 6.293075519669118, .im = -6.841103440307995};
                struct complex_t cp2 = {.re = 9.019512318464182, .im = 5.497115336316063};
                struct complex_t cp3 = {.re = 9.019512318464182, .im = 5.497115336316063};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.1716783922352421 + 0.05 && 0.1716783922352421 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.1716783922352421, cp3.re);
                    test_error(cp3.im < -0.8631108964995581 + 0.05 && -0.8631108964995581 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.8631108964995581, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 147: Sprawdzenie poprawności działania funkcji divide
//
void UTEST147(void)
{
    // informacje o teście
    test_start(147, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.3039191868156674, .im = -2.9598542790566817};
                struct complex_t cp2 = {.re = 9.16428051061271, .im = -5.255547401101992};
                struct complex_t cp3 = {.re = 9.16428051061271, .im = -5.255547401101992};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.3285648196737045 + 0.05 && 0.3285648196737045 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.3285648196737045, cp3.re);
                    test_error(cp3.im < -0.13455134786621226 + 0.05 && -0.13455134786621226 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.13455134786621226, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 148: Sprawdzenie poprawności działania funkcji divide
//
void UTEST148(void)
{
    // informacje o teście
    test_start(148, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -0.16521377889738886, .im = -3.6892918064681934};
                struct complex_t cp2 = {.re = 4.162473282593515, .im = 0};
                struct complex_t cp3 = {.re = 4.162473282593515, .im = 0};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.03969125269542847 + 0.05 && -0.03969125269542847 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.03969125269542847, cp3.re);
                    test_error(cp3.im < -0.8863220388454971 + 0.05 && -0.8863220388454971 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.8863220388454971, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 149: Sprawdzenie poprawności działania funkcji divide
//
void UTEST149(void)
{
    // informacje o teście
    test_start(149, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0.8237446695638404, .im = 8.929016505335884};
                struct complex_t cp2 = {.re = 0, .im = 0.11608873812152076};
                struct complex_t cp3 = {.re = 0, .im = 0.11608873812152076};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 76.91544115148415 + 0.05 && 76.91544115148415 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 76.91544115148415, cp3.re);
                    test_error(cp3.im < -7.095818964812514 + 0.05 && -7.095818964812514 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -7.095818964812514, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 150: Sprawdzenie poprawności działania funkcji divide
//
void UTEST150(void)
{
    // informacje o teście
    test_start(150, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 6.623372659224366, .im = 0};
                struct complex_t cp2 = {.re = 2.488402062338327, .im = 0.49690352223361245};
                struct complex_t cp3 = {.re = 2.488402062338327, .im = 0.49690352223361245};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 2.559631292826524 + 0.05 && 2.559631292826524 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 2.559631292826524, cp3.re);
                    test_error(cp3.im < -0.5111271302474698 + 0.05 && -0.5111271302474698 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.5111271302474698, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 151: Sprawdzenie poprawności działania funkcji divide
//
void UTEST151(void)
{
    // informacje o teście
    test_start(151, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 4.187933571529612};
                struct complex_t cp2 = {.re = 9.97117817018557, .im = 5.30974948232717};
                struct complex_t cp3 = {.re = 9.97117817018557, .im = 5.30974948232717};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.17424585165372133 + 0.05 && 0.17424585165372133 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.17424585165372133, cp3.re);
                    test_error(cp3.im < 0.3272162722625271 + 0.05 && 0.3272162722625271 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.3272162722625271, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 152: Sprawdzenie poprawności działania funkcji divide
//
void UTEST152(void)
{
    // informacje o teście
    test_start(152, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -6.743211996034133, .im = -1.6223076043230389};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 2, "Funkcja divide() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                if (!2)
                {
                    test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                    test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 153: Sprawdzenie poprawności działania funkcji divide
//
void UTEST153(void)
{
    // informacje o teście
    test_start(153, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 7.701825264225395, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0.033610920252893806};
                struct complex_t cp3 = {.re = 0, .im = 0.033610920252893806};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.0 + 0.05 && 0.0 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.re);
                    test_error(cp3.im < -229.14651566442276 + 0.05 && -229.14651566442276 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -229.14651566442276, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 154: Sprawdzenie poprawności działania funkcji divide
//
void UTEST154(void)
{
    // informacje o teście
    test_start(154, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = -2.5049517122947744, .im = -1.794327611781295};
                struct complex_t cp3 = {.re = -2.5049517122947744, .im = -1.794327611781295};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.0 + 0.05 && -0.0 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.0, cp3.re);
                    test_error(cp3.im < 0.0 + 0.05 && 0.0 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 155: Sprawdzenie poprawności działania funkcji divide
//
void UTEST155(void)
{
    // informacje o teście
    test_start(155, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = -2.642658489685708};
                struct complex_t cp2 = {.re = -3.7360399278161127, .im = 0};
                struct complex_t cp3 = {.re = -3.7360399278161127, .im = 0};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.0 + 0.05 && -0.0 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.0, cp3.re);
                    test_error(cp3.im < 0.7073421432169927 + 0.05 && 0.7073421432169927 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.7073421432169927, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 156: Sprawdzenie poprawności działania funkcji divide
//
void UTEST156(void)
{
    // informacje o teście
    test_start(156, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = -0.19881531458460877};
                struct complex_t cp2 = {.re = 0, .im = 0.20720199697194452};
                struct complex_t cp3 = {.re = 0, .im = 0.20720199697194452};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < -0.9595241237541193 + 0.05 && -0.9595241237541193 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", -0.9595241237541193, cp3.re);
                    test_error(cp3.im < -0.0 + 0.05 && -0.0 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.0, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 157: Sprawdzenie poprawności działania funkcji divide
//
void UTEST157(void)
{
    // informacje o teście
    test_start(157, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -9.857466398441016, .im = 0};
                struct complex_t cp2 = {.re = -4.312330094305183, .im = 0};
                struct complex_t cp3 = {.re = -4.312330094305183, .im = 0};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 2.2858793698234465 + 0.05 && 2.2858793698234465 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 2.2858793698234465, cp3.re);
                    test_error(cp3.im < 0.0 + 0.05 && 0.0 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 158: Sprawdzenie poprawności działania funkcji divide
//
void UTEST158(void)
{
    // informacje o teście
    test_start(158, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -9.095966394920216, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 2, "Funkcja divide() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                if (!2)
                {
                    test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                    test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 159: Sprawdzenie poprawności działania funkcji divide
//
void UTEST159(void)
{
    // informacje o teście
    test_start(159, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 2.2457291930280583};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 2, "Funkcja divide() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                if (!2)
                {
                    test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                    test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 160: Sprawdzenie poprawności działania funkcji divide
//
void UTEST160(void)
{
    // informacje o teście
    test_start(160, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = -0.0394269572985646, .im = 0};
                struct complex_t cp3 = {.re = -0.0394269572985646, .im = 0};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.0 + 0.05 && 0.0 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.re);
                    test_error(cp3.im < -0.0 + 0.05 && -0.0 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", -0.0, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 161: Sprawdzenie poprawności działania funkcji divide
//
void UTEST161(void)
{
    // informacje o teście
    test_start(161, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = -2.0177220127195383};
                struct complex_t cp3 = {.re = 0, .im = -2.0177220127195383};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 0, "Funkcja divide() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                if (!0)
                {
                    test_error(cp3.re < 0.0 + 0.05 && 0.0 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.re);
                    test_error(cp3.im < 0.0 + 0.05 && 0.0 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0.0, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 162: Sprawdzenie poprawności działania funkcji divide
//
void UTEST162(void)
{
    // informacje o teście
    test_start(162, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0, .im = 0};
                struct complex_t cp2 = {.re = 0, .im = 0};
                struct complex_t cp3 = {.re = 0, .im = 0};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp2, &cp3);
                printf("#####END#####");

                test_error(err_code == 2, "Funkcja divide() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                if (!2)
                {
                    test_error(cp3.re < 0 + 0.05 && 0 - 0.05 < cp3.re, "Funkcja divide() niepoprawnie wyznaczyła część rzeczywistą sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.re);
                    test_error(cp3.im < 0 + 0.05 && 0 - 0.05 < cp3.im, "Funkcja divide() niepoprawnie wyznaczyła część urojoną sumy liczb zespolonych, powinno być %f a jest %f", 0, cp3.im);
                }
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 163: Sprawdzenie poprawności działania funkcji divide
//
void UTEST163(void)
{
    // informacje o teście
    test_start(163, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 84.91543977151724, .im = 76.50277004867843};

                printf("#####START#####");
                int err_code = divide(&cp1, &cp1, NULL);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja divide() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 164: Sprawdzenie poprawności działania funkcji divide
//
void UTEST164(void)
{
    // informacje o teście
    test_start(164, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -51.21917174728061, .im = 99.03638774988514};

                printf("#####START#####");
                int err_code = divide(&cp1, NULL, &cp1);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja divide() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 165: Sprawdzenie poprawności działania funkcji divide
//
void UTEST165(void)
{
    // informacje o teście
    test_start(165, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 55.586767695416256, .im = 26.150072968721076};

                printf("#####START#####");
                int err_code = divide(NULL, &cp1, &cp1);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja divide() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 166: Sprawdzenie poprawności działania funkcji divide
//
void UTEST166(void)
{
    // informacje o teście
    test_start(166, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -44.53232051106399, .im = -40.27140413809411};

                printf("#####START#####");
                int err_code = divide(&cp1, NULL, NULL);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja divide() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 167: Sprawdzenie poprawności działania funkcji divide
//
void UTEST167(void)
{
    // informacje o teście
    test_start(167, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -98.43684805612436, .im = 17.62138314702773};

                printf("#####START#####");
                int err_code = divide(NULL, &cp1, NULL);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja divide() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 168: Sprawdzenie poprawności działania funkcji divide
//
void UTEST168(void)
{
    // informacje o teście
    test_start(168, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -93.44657115844062, .im = 57.437423099288594};

                printf("#####START#####");
                int err_code = divide(NULL, NULL, &cp1);
                printf("#####END#####");

                test_error(err_code == 1, "Funkcja divide() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 169: Sprawdzenie poprawności działania funkcji divide
//
void UTEST169(void)
{
    // informacje o teście
    test_start(169, "Sprawdzenie poprawności działania funkcji divide", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = divide(NULL, NULL, NULL);
            printf("#####END#####");

            test_error(err_code == 1, "Funkcja divide() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 170: Sprawdzenie poprawności działania funkcji show
//
void UTEST170(void)
{
    // informacje o teście
    test_start(170, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.712218594289073, .im = -3.417565849122978};
                printf("***TEST 1***\n");

                printf("***START***\n");
                show(&cp1);
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
//  Test 171: Sprawdzenie poprawności działania funkcji show
//
void UTEST171(void)
{
    // informacje o teście
    test_start(171, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -0.9102530820936661, .im = 3.6626615671385663};
                printf("***TEST 2***\n");

                printf("***START***\n");
                show(&cp1);
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
//  Test 172: Sprawdzenie poprawności działania funkcji show
//
void UTEST172(void)
{
    // informacje o teście
    test_start(172, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.7706238799909033, .im = -3.5165265729179946};
                printf("***TEST 3***\n");

                printf("***START***\n");
                show(&cp1);
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
//  Test 173: Sprawdzenie poprawności działania funkcji show
//
void UTEST173(void)
{
    // informacje o teście
    test_start(173, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.584184044047583, .im = 3.5699200842703496};
                printf("***TEST 4***\n");

                printf("***START***\n");
                show(&cp1);
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
//  Test 174: Sprawdzanie poprawności działania funkcji show
//
void UTEST174(void)
{
    // informacje o teście
    test_start(174, "Sprawdzanie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            show(NULL);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 175: Sprawdzanie poprawności działania funkcji read
//
void UTEST175(void)
{
    // informacje o teście
    test_start(175, "Sprawdzanie poprawności działania funkcji read", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        read(NULL);
        
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
            UTEST1, // Sprawdzenie poprawności struktury
            UTEST2, // Sprawdzenie poprawności działania funkcji set
            UTEST3, // Sprawdzenie poprawności działania funkcji set
            UTEST4, // Sprawdzenie poprawności działania funkcji set
            UTEST5, // Sprawdzenie poprawności działania funkcji set
            UTEST6, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST7, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST8, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST9, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST10, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST11, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST12, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST13, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST14, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST15, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST16, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST17, // Sprawdzenie poprawności działania funkcji complex_abs
            UTEST18, // Sprawdzenie poprawności działania funkcji add
            UTEST19, // Sprawdzenie poprawności działania funkcji add
            UTEST20, // Sprawdzenie poprawności działania funkcji add
            UTEST21, // Sprawdzenie poprawności działania funkcji add
            UTEST22, // Sprawdzenie poprawności działania funkcji add
            UTEST23, // Sprawdzenie poprawności działania funkcji add
            UTEST24, // Sprawdzenie poprawności działania funkcji add
            UTEST25, // Sprawdzenie poprawności działania funkcji add
            UTEST26, // Sprawdzenie poprawności działania funkcji add
            UTEST27, // Sprawdzenie poprawności działania funkcji add
            UTEST28, // Sprawdzenie poprawności działania funkcji add
            UTEST29, // Sprawdzenie poprawności działania funkcji add
            UTEST30, // Sprawdzenie poprawności działania funkcji add
            UTEST31, // Sprawdzenie poprawności działania funkcji add
            UTEST32, // Sprawdzenie poprawności działania funkcji add
            UTEST33, // Sprawdzenie poprawności działania funkcji add
            UTEST34, // Sprawdzenie poprawności działania funkcji add
            UTEST35, // Sprawdzenie poprawności działania funkcji add
            UTEST36, // Sprawdzenie poprawności działania funkcji add
            UTEST37, // Sprawdzenie poprawności działania funkcji add
            UTEST38, // Sprawdzenie poprawności działania funkcji add
            UTEST39, // Sprawdzenie poprawności działania funkcji add
            UTEST40, // Sprawdzenie poprawności działania funkcji add
            UTEST41, // Sprawdzenie poprawności działania funkcji add
            UTEST42, // Sprawdzenie poprawności działania funkcji add
            UTEST43, // Sprawdzenie poprawności działania funkcji add
            UTEST44, // Sprawdzenie poprawności działania funkcji add
            UTEST45, // Sprawdzenie poprawności działania funkcji add
            UTEST46, // Sprawdzenie poprawności działania funkcji add
            UTEST47, // Sprawdzenie poprawności działania funkcji add
            UTEST48, // Sprawdzenie poprawności działania funkcji add
            UTEST49, // Sprawdzenie poprawności działania funkcji add
            UTEST50, // Sprawdzenie poprawności działania funkcji add
            UTEST51, // Sprawdzenie poprawności działania funkcji add
            UTEST52, // Sprawdzenie poprawności działania funkcji add
            UTEST53, // Sprawdzenie poprawności działania funkcji add
            UTEST54, // Sprawdzenie poprawności działania funkcji add
            UTEST55, // Sprawdzenie poprawności działania funkcji add
            UTEST56, // Sprawdzenie poprawności działania funkcji subtract
            UTEST57, // Sprawdzenie poprawności działania funkcji subtract
            UTEST58, // Sprawdzenie poprawności działania funkcji subtract
            UTEST59, // Sprawdzenie poprawności działania funkcji subtract
            UTEST60, // Sprawdzenie poprawności działania funkcji subtract
            UTEST61, // Sprawdzenie poprawności działania funkcji subtract
            UTEST62, // Sprawdzenie poprawności działania funkcji subtract
            UTEST63, // Sprawdzenie poprawności działania funkcji subtract
            UTEST64, // Sprawdzenie poprawności działania funkcji subtract
            UTEST65, // Sprawdzenie poprawności działania funkcji subtract
            UTEST66, // Sprawdzenie poprawności działania funkcji subtract
            UTEST67, // Sprawdzenie poprawności działania funkcji subtract
            UTEST68, // Sprawdzenie poprawności działania funkcji subtract
            UTEST69, // Sprawdzenie poprawności działania funkcji subtract
            UTEST70, // Sprawdzenie poprawności działania funkcji subtract
            UTEST71, // Sprawdzenie poprawności działania funkcji subtract
            UTEST72, // Sprawdzenie poprawności działania funkcji subtract
            UTEST73, // Sprawdzenie poprawności działania funkcji subtract
            UTEST74, // Sprawdzenie poprawności działania funkcji subtract
            UTEST75, // Sprawdzenie poprawności działania funkcji subtract
            UTEST76, // Sprawdzenie poprawności działania funkcji subtract
            UTEST77, // Sprawdzenie poprawności działania funkcji subtract
            UTEST78, // Sprawdzenie poprawności działania funkcji subtract
            UTEST79, // Sprawdzenie poprawności działania funkcji subtract
            UTEST80, // Sprawdzenie poprawności działania funkcji subtract
            UTEST81, // Sprawdzenie poprawności działania funkcji subtract
            UTEST82, // Sprawdzenie poprawności działania funkcji subtract
            UTEST83, // Sprawdzenie poprawności działania funkcji subtract
            UTEST84, // Sprawdzenie poprawności działania funkcji subtract
            UTEST85, // Sprawdzenie poprawności działania funkcji subtract
            UTEST86, // Sprawdzenie poprawności działania funkcji subtract
            UTEST87, // Sprawdzenie poprawności działania funkcji subtract
            UTEST88, // Sprawdzenie poprawności działania funkcji subtract
            UTEST89, // Sprawdzenie poprawności działania funkcji subtract
            UTEST90, // Sprawdzenie poprawności działania funkcji subtract
            UTEST91, // Sprawdzenie poprawności działania funkcji subtract
            UTEST92, // Sprawdzenie poprawności działania funkcji subtract
            UTEST93, // Sprawdzenie poprawności działania funkcji subtract
            UTEST94, // Sprawdzenie poprawności działania funkcji multiply
            UTEST95, // Sprawdzenie poprawności działania funkcji multiply
            UTEST96, // Sprawdzenie poprawności działania funkcji multiply
            UTEST97, // Sprawdzenie poprawności działania funkcji multiply
            UTEST98, // Sprawdzenie poprawności działania funkcji multiply
            UTEST99, // Sprawdzenie poprawności działania funkcji multiply
            UTEST100, // Sprawdzenie poprawności działania funkcji multiply
            UTEST101, // Sprawdzenie poprawności działania funkcji multiply
            UTEST102, // Sprawdzenie poprawności działania funkcji multiply
            UTEST103, // Sprawdzenie poprawności działania funkcji multiply
            UTEST104, // Sprawdzenie poprawności działania funkcji multiply
            UTEST105, // Sprawdzenie poprawności działania funkcji multiply
            UTEST106, // Sprawdzenie poprawności działania funkcji multiply
            UTEST107, // Sprawdzenie poprawności działania funkcji multiply
            UTEST108, // Sprawdzenie poprawności działania funkcji multiply
            UTEST109, // Sprawdzenie poprawności działania funkcji multiply
            UTEST110, // Sprawdzenie poprawności działania funkcji multiply
            UTEST111, // Sprawdzenie poprawności działania funkcji multiply
            UTEST112, // Sprawdzenie poprawności działania funkcji multiply
            UTEST113, // Sprawdzenie poprawności działania funkcji multiply
            UTEST114, // Sprawdzenie poprawności działania funkcji multiply
            UTEST115, // Sprawdzenie poprawności działania funkcji multiply
            UTEST116, // Sprawdzenie poprawności działania funkcji multiply
            UTEST117, // Sprawdzenie poprawności działania funkcji multiply
            UTEST118, // Sprawdzenie poprawności działania funkcji multiply
            UTEST119, // Sprawdzenie poprawności działania funkcji multiply
            UTEST120, // Sprawdzenie poprawności działania funkcji multiply
            UTEST121, // Sprawdzenie poprawności działania funkcji multiply
            UTEST122, // Sprawdzenie poprawności działania funkcji multiply
            UTEST123, // Sprawdzenie poprawności działania funkcji multiply
            UTEST124, // Sprawdzenie poprawności działania funkcji multiply
            UTEST125, // Sprawdzenie poprawności działania funkcji multiply
            UTEST126, // Sprawdzenie poprawności działania funkcji multiply
            UTEST127, // Sprawdzenie poprawności działania funkcji multiply
            UTEST128, // Sprawdzenie poprawności działania funkcji multiply
            UTEST129, // Sprawdzenie poprawności działania funkcji multiply
            UTEST130, // Sprawdzenie poprawności działania funkcji multiply
            UTEST131, // Sprawdzenie poprawności działania funkcji multiply
            UTEST132, // Sprawdzenie poprawności działania funkcji divide
            UTEST133, // Sprawdzenie poprawności działania funkcji divide
            UTEST134, // Sprawdzenie poprawności działania funkcji divide
            UTEST135, // Sprawdzenie poprawności działania funkcji divide
            UTEST136, // Sprawdzenie poprawności działania funkcji divide
            UTEST137, // Sprawdzenie poprawności działania funkcji divide
            UTEST138, // Sprawdzenie poprawności działania funkcji divide
            UTEST139, // Sprawdzenie poprawności działania funkcji divide
            UTEST140, // Sprawdzenie poprawności działania funkcji divide
            UTEST141, // Sprawdzenie poprawności działania funkcji divide
            UTEST142, // Sprawdzenie poprawności działania funkcji divide
            UTEST143, // Sprawdzenie poprawności działania funkcji divide
            UTEST144, // Sprawdzenie poprawności działania funkcji divide
            UTEST145, // Sprawdzenie poprawności działania funkcji divide
            UTEST146, // Sprawdzenie poprawności działania funkcji divide
            UTEST147, // Sprawdzenie poprawności działania funkcji divide
            UTEST148, // Sprawdzenie poprawności działania funkcji divide
            UTEST149, // Sprawdzenie poprawności działania funkcji divide
            UTEST150, // Sprawdzenie poprawności działania funkcji divide
            UTEST151, // Sprawdzenie poprawności działania funkcji divide
            UTEST152, // Sprawdzenie poprawności działania funkcji divide
            UTEST153, // Sprawdzenie poprawności działania funkcji divide
            UTEST154, // Sprawdzenie poprawności działania funkcji divide
            UTEST155, // Sprawdzenie poprawności działania funkcji divide
            UTEST156, // Sprawdzenie poprawności działania funkcji divide
            UTEST157, // Sprawdzenie poprawności działania funkcji divide
            UTEST158, // Sprawdzenie poprawności działania funkcji divide
            UTEST159, // Sprawdzenie poprawności działania funkcji divide
            UTEST160, // Sprawdzenie poprawności działania funkcji divide
            UTEST161, // Sprawdzenie poprawności działania funkcji divide
            UTEST162, // Sprawdzenie poprawności działania funkcji divide
            UTEST163, // Sprawdzenie poprawności działania funkcji divide
            UTEST164, // Sprawdzenie poprawności działania funkcji divide
            UTEST165, // Sprawdzenie poprawności działania funkcji divide
            UTEST166, // Sprawdzenie poprawności działania funkcji divide
            UTEST167, // Sprawdzenie poprawności działania funkcji divide
            UTEST168, // Sprawdzenie poprawności działania funkcji divide
            UTEST169, // Sprawdzenie poprawności działania funkcji divide
            UTEST170, // Sprawdzenie poprawności działania funkcji show
            UTEST171, // Sprawdzenie poprawności działania funkcji show
            UTEST172, // Sprawdzenie poprawności działania funkcji show
            UTEST173, // Sprawdzenie poprawności działania funkcji show
            UTEST174, // Sprawdzanie poprawności działania funkcji show
            UTEST175, // Sprawdzanie poprawności działania funkcji read
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
            test_summary(175); // wszystkie testy muszą zakończyć się sukcesem
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