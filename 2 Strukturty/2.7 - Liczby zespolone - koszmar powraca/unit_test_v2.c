/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Liczby zespolone - koszmar powraca
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-05 16:58:07.326993
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
    
            struct complex_t cp1 = {.re = -0.20081824107877821, .im = -6.289513155554386};
            
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

            int err_code = 1;

            printf("#####START#####");
            pcp = set(&cp_student, -0.20081824107877821, -6.289513155554386, &err_code);
            printf("#####END#####");

            test_error(pcp == &cp_student, "Funkcja set() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
            test_error(cp_student.re < 0.05 + -0.20081824107877821 && -0.20081824107877821 - 0.05 < cp_student.re, "Funkcja set() miała ustawić -0.20081824107877821 w cześci rzeczywistej, a ustawiła %f", cp_student.re);
            test_error(cp_student.im < 0.05 + -6.289513155554386 && -6.289513155554386 - 0.05 < cp_student.im, "Funkcja set() miała ustawić -6.289513155554386 w cześci urojonej, a ustawiła %f", cp_student.im);
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
            pcp = set(&cp_student, -0.20081824107877821, -6.289513155554386, NULL);
            printf("#####END#####");

            test_error(pcp == &cp_student, "Funkcja set() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
            test_error(cp_student.re < 0.05 + -0.20081824107877821 && -0.20081824107877821 - 0.05 < cp_student.re, "Funkcja set() miała ustawić -0.20081824107877821 w cześci rzeczywistej, a ustawiła %f", cp_student.re);
            test_error(cp_student.im < 0.05 + -6.289513155554386 && -6.289513155554386 - 0.05 < cp_student.im, "Funkcja set() miała ustawić -6.289513155554386 w cześci urojonej, a ustawiła %f", cp_student.im);
        
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

            int err_code = 3;

            printf("#####START#####");
            pcp = set(NULL, -0.20081824107877821, -6.289513155554386, &err_code);
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
            pcp = set(NULL, -0.20081824107877821, -6.289513155554386, NULL);
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
    
                struct complex_t cp1 = {.re = -3.67671872954758, .im = -6.685439874376416};

                int err_code = 1;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 7.629768471592577 + 0.05 && 7.629768471592577 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 7.629768471592577, cpl_abs);
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
    
                struct complex_t cp1 = {.re = -0.9687878098016505, .im = 2.945477638025821};

                int err_code = 3;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 3.100707715430535 + 0.05 && 3.100707715430535 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 3.100707715430535, cpl_abs);
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
    
                struct complex_t cp1 = {.re = 9.588505880491834, .im = -8.121809058785269};

                int err_code = 4;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 12.565955093330269 + 0.05 && 12.565955093330269 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 12.565955093330269, cpl_abs);
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
    
                struct complex_t cp1 = {.re = 3.1506105583188737, .im = 3.9127797916143345};

                int err_code = 3;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 5.023563733830385 + 0.05 && 5.023563733830385 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 5.023563733830385, cpl_abs);
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
    
                struct complex_t cp1 = {.re = -9.207490760808843, .im = -9.207490760808843};

                int err_code = 5;
                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, &err_code);
                printf("#####END#####");

                test_error(cpl_abs < 13.021358309360833 + 0.05 && 13.021358309360833 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 13.021358309360833, cpl_abs);
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
    
                struct complex_t cp1 = {.re = -8.317486513484246, .im = -3.1970852723354835};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 8.91077640503771 + 0.05 && 8.91077640503771 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 8.91077640503771, cpl_abs);

                
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
    
                struct complex_t cp1 = {.re = -3.073880158548442, .im = 5.148489734166841};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 5.996306010531746 + 0.05 && 5.996306010531746 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 5.996306010531746, cpl_abs);

                
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
    
                struct complex_t cp1 = {.re = 3.0071045283313156, .im = -3.9210663494359688};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 4.941400506029623 + 0.05 && 4.941400506029623 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 4.941400506029623, cpl_abs);

                
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
    
                struct complex_t cp1 = {.re = 6.421644034498413, .im = 6.706417208276507};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 9.285124871388447 + 0.05 && 9.285124871388447 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 9.285124871388447, cpl_abs);

                
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
    
                struct complex_t cp1 = {.re = -0.32120659814196095, .im = -0.32120659814196095};

                printf("#####START#####");
                float cpl_abs = complex_abs(&cp1, NULL);
                printf("#####END#####");

                test_error(cpl_abs < 0.4542547274160858 + 0.05 && 0.4542547274160858 - 0.05 < cpl_abs, "Funkcja complex_abs() niepoprawnie wyznaczyła moduł liczby zespolonej, powinno być %f a jest %f", 0.4542547274160858, cpl_abs);

                
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
//  Test 18: Sprawdzenie poprawności działania funkcji show
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -4.426606578613605, .im = -0.696549230963333};
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
//  Test 19: Sprawdzenie poprawności działania funkcji show
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = -1.4488979998375875, .im = 5.128562081856658};
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
//  Test 20: Sprawdzenie poprawności działania funkcji show
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 2.4756111243062295, .im = -7.534996017642943};
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
//  Test 21: Sprawdzenie poprawności działania funkcji show
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct complex_t cp1 = {.re = 0.689321778799521, .im = 2.463852996958135};
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
//  Test 22: Sprawdzanie poprawności działania funkcji show
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji show", __LINE__);

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
            UTEST18, // Sprawdzenie poprawności działania funkcji show
            UTEST19, // Sprawdzenie poprawności działania funkcji show
            UTEST20, // Sprawdzenie poprawności działania funkcji show
            UTEST21, // Sprawdzenie poprawności działania funkcji show
            UTEST22, // Sprawdzanie poprawności działania funkcji show
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