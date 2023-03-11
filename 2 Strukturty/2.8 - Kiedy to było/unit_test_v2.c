/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Kiedy to było?
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-05 21:15:07.907124
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


        struct date_t
        {
            int day;
            int month;
            int year;
        };
    


//
//  Test 1: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;
        
                int err_code = -4;
        
                printf("#####START#####");
                pcp = set_date(&cp_student, 3, 9, 1051, &err_code);
                printf("#####END#####");
            
                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 3, "Funkcja set_date() miała ustawić 3 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 9, "Funkcja set_date() miała ustawić 9 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1051, "Funkcja set_date() miała ustawić 1051 jako dzień, a ustawiła %d", cp_student.year);
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                
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
//  Test 2: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;
        
                int err_code = -2;
        
                printf("#####START#####");
                pcp = set_date(&cp_student, 19, 18, 1872, &err_code);
                printf("#####END#####");
            
                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 19, "Funkcja set_date() miała ustawić 19 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 18, "Funkcja set_date() miała ustawić 18 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1872, "Funkcja set_date() miała ustawić 1872 jako dzień, a ustawiła %d", cp_student.year);
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                
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
//  Test 3: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;
        
                int err_code = -1;
        
                printf("#####START#####");
                pcp = set_date(&cp_student, 56, 1, 1136, &err_code);
                printf("#####END#####");
            
                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 56, "Funkcja set_date() miała ustawić 56 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 1, "Funkcja set_date() miała ustawić 1 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1136, "Funkcja set_date() miała ustawić 1136 jako dzień, a ustawiła %d", cp_student.year);
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                
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
//  Test 4: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;
        
                int err_code = -4;
        
                printf("#####START#####");
                pcp = set_date(&cp_student, -17, 9, 1182, &err_code);
                printf("#####END#####");
            
                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == -17, "Funkcja set_date() miała ustawić -17 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 9, "Funkcja set_date() miała ustawić 9 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1182, "Funkcja set_date() miała ustawić 1182 jako dzień, a ustawiła %d", cp_student.year);
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                
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
//  Test 5: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;
        
                int err_code = -2;
        
                printf("#####START#####");
                pcp = set_date(&cp_student, 28, -7, 1673, &err_code);
                printf("#####END#####");
            
                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 28, "Funkcja set_date() miała ustawić 28 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == -7, "Funkcja set_date() miała ustawić -7 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1673, "Funkcja set_date() miała ustawić 1673 jako dzień, a ustawiła %d", cp_student.year);
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                
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
//  Test 6: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;
        
                int err_code = 3;
        
                printf("#####START#####");
                pcp = set_date(&cp_student, 17, 8, -1863, &err_code);
                printf("#####END#####");
            
                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 17, "Funkcja set_date() miała ustawić 17 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 8, "Funkcja set_date() miała ustawić 8 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == -1863, "Funkcja set_date() miała ustawić -1863 jako dzień, a ustawiła %d", cp_student.year);
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                
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
//  Test 7: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;

                printf("#####START#####");
                pcp = set_date(&cp_student, 3, 9, 1051, NULL);
                printf("#####END#####");

                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 3, "Funkcja set_date() miała ustawić 3 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 9, "Funkcja set_date() miała ustawić 9 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1051, "Funkcja set_date() miała ustawić 1051 jako dzień, a ustawiła %d", cp_student.year);
                
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
//  Test 8: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;

                printf("#####START#####");
                pcp = set_date(&cp_student, 19, 18, 1872, NULL);
                printf("#####END#####");

                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 19, "Funkcja set_date() miała ustawić 19 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 18, "Funkcja set_date() miała ustawić 18 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1872, "Funkcja set_date() miała ustawić 1872 jako dzień, a ustawiła %d", cp_student.year);
                
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
//  Test 9: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;

                printf("#####START#####");
                pcp = set_date(&cp_student, 56, 1, 1136, NULL);
                printf("#####END#####");

                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 56, "Funkcja set_date() miała ustawić 56 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 1, "Funkcja set_date() miała ustawić 1 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1136, "Funkcja set_date() miała ustawić 1136 jako dzień, a ustawiła %d", cp_student.year);
                
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
//  Test 10: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;

                printf("#####START#####");
                pcp = set_date(&cp_student, -17, 9, 1182, NULL);
                printf("#####END#####");

                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == -17, "Funkcja set_date() miała ustawić -17 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 9, "Funkcja set_date() miała ustawić 9 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1182, "Funkcja set_date() miała ustawić 1182 jako dzień, a ustawiła %d", cp_student.year);
                
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
//  Test 11: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;

                printf("#####START#####");
                pcp = set_date(&cp_student, 28, -7, 1673, NULL);
                printf("#####END#####");

                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 28, "Funkcja set_date() miała ustawić 28 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == -7, "Funkcja set_date() miała ustawić -7 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == 1673, "Funkcja set_date() miała ustawić 1673 jako dzień, a ustawiła %d", cp_student.year);
                
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
//  Test 12: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student, *pcp;

                printf("#####START#####");
                pcp = set_date(&cp_student, 17, 8, -1863, NULL);
                printf("#####END#####");

                test_error(pcp == &cp_student, "Funkcja set_date() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
                test_error(cp_student.day == 17, "Funkcja set_date() miała ustawić 17 jako dzień, a ustawiła %d", cp_student.day);
                test_error(cp_student.month == 8, "Funkcja set_date() miała ustawić 8 jako dzień, a ustawiła %d", cp_student.month);
                test_error(cp_student.year == -1863, "Funkcja set_date() miała ustawić -1863 jako dzień, a ustawiła %d", cp_student.year);
                
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
//  Test 13: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct date_t *pcp;

            printf("#####START#####");
            pcp = set_date(NULL, 5, 12, 1236, NULL);
            printf("#####END#####");

            test_error(pcp == NULL, "Funkcja set_date() powinna zwrócić NULL");
            
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
//  Test 14: Sprawdzenie poprawności działania funkcji set_date
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzenie poprawności działania funkcji set_date", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct date_t *pcp;

            int err_code = 2;

            printf("#####START#####");
            pcp = set_date(NULL, 5, 12, 1236, &err_code);
            printf("#####END#####");

            test_error(pcp == NULL, "Funkcja set_date() powinna zwrócić NULL");
            test_error(err_code == 1, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
            
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
//  Test 15: Sprawdzenie poprawności działania funkcji validate
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 0;

                printf("#####START#####");
                set_date(&cp_student, 31, 1, 1991, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzenie poprawności działania funkcji validate
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 4;

                printf("#####START#####");
                set_date(&cp_student, 28, 2, 1998, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzenie poprawności działania funkcji validate
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -5;

                printf("#####START#####");
                set_date(&cp_student, 31, 3, 1997, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzenie poprawności działania funkcji validate
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 2;

                printf("#####START#####");
                set_date(&cp_student, 30, 4, 1998, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzenie poprawności działania funkcji validate
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 2;

                printf("#####START#####");
                set_date(&cp_student, 31, 5, 1999, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzenie poprawności działania funkcji validate
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -4;

                printf("#####START#####");
                set_date(&cp_student, 30, 6, 1986, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzenie poprawności działania funkcji validate
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 4;

                printf("#####START#####");
                set_date(&cp_student, 31, 7, 2005, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzenie poprawności działania funkcji validate
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 2;

                printf("#####START#####");
                set_date(&cp_student, 31, 8, 2006, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzenie poprawności działania funkcji validate
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -5;

                printf("#####START#####");
                set_date(&cp_student, 30, 9, 2012, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzenie poprawności działania funkcji validate
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 1;

                printf("#####START#####");
                set_date(&cp_student, 31, 10, 2000, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzenie poprawności działania funkcji validate
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 4;

                printf("#####START#####");
                set_date(&cp_student, 30, 11, 2007, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzenie poprawności działania funkcji validate
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -4;

                printf("#####START#####");
                set_date(&cp_student, 31, 12, 1988, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzenie poprawności działania funkcji validate
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 3;

                printf("#####START#####");
                set_date(&cp_student, 31, 4, 1984, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzenie poprawności działania funkcji validate
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -5;

                printf("#####START#####");
                set_date(&cp_student, 31, 6, 2018, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzenie poprawności działania funkcji validate
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 4;

                printf("#####START#####");
                set_date(&cp_student, 31, 9, 2015, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzenie poprawności działania funkcji validate
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 2;

                printf("#####START#####");
                set_date(&cp_student, 31, 11, 1995, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzenie poprawności działania funkcji validate
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -1;

                printf("#####START#####");
                set_date(&cp_student, 29, 2, 1924, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzenie poprawności działania funkcji validate
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -4;

                printf("#####START#####");
                set_date(&cp_student, 29, 2, 1700, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzenie poprawności działania funkcji validate
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -2;

                printf("#####START#####");
                set_date(&cp_student, 29, 2, 2000, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 1, "Funkcja validate() powinna zwrócić kod błędu 1, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzenie poprawności działania funkcji validate
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 5;

                printf("#####START#####");
                set_date(&cp_student, 29, 2, 2002, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzenie poprawności działania funkcji validate
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 0;

                printf("#####START#####");
                set_date(&cp_student, 11, 0, 1968, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzenie poprawności działania funkcji validate
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 3;

                printf("#####START#####");
                set_date(&cp_student, 9, 13, 1916, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzenie poprawności działania funkcji validate
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -3;

                printf("#####START#####");
                set_date(&cp_student, 21, -7, 1989, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzenie poprawności działania funkcji validate
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -3;

                printf("#####START#####");
                set_date(&cp_student, 0, 6, 1943, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzenie poprawności działania funkcji validate
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzenie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 1;

                printf("#####START#####");
                set_date(&cp_student, -4, 7, 2007, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                err_code = validate(&cp_student);

                test_error(err_code == 0, "Funkcja validate() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji validate
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int err_code = validate(NULL);
            test_error(err_code == -1, "Funkcja validate() powinna zwrócić kod błędu -1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji show
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji show", __LINE__);

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
//  Test 42: Sprawdzanie poprawności działania funkcji read
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji read", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct date_t *cp_student = read(NULL, NULL);
            test_error(cp_student == NULL, "Funkcja read() powinna zwrócić wartość NULL");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji read
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji read", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int err_code = -4;
            struct date_t *cp_student = read(NULL, &err_code);
            test_error(err_code == 1, "Funkcja read() powinna ustawić kod błędu 1, a zwróciła %d", err_code);
            test_error(cp_student == NULL, "Funkcja read() powinna zwrócić wartość NULL");

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzenie poprawności działania funkcji show
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -2;

                printf("#####START#####");
                set_date(&cp_student, 4, 4, 1804, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                printf("***TEST 1***\n");

                printf("***START***\n");
                show(&cp_student);
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
//  Test 45: Sprawdzenie poprawności działania funkcji show
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = -2;

                printf("#####START#####");
                set_date(&cp_student, 10, 3, 269, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                printf("***TEST 2***\n");

                printf("***START***\n");
                show(&cp_student);
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
//  Test 46: Sprawdzenie poprawności działania funkcji show
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzenie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct date_t cp_student;

                int err_code = 5;

                printf("#####START#####");
                set_date(&cp_student, 1, 18, 1839, &err_code);
                printf("#####END#####");
                
                test_error(err_code == 0, "Funkcja set_date() powinna zwrócić kod błędu 0, a zwróciła %d", err_code);
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                printf("***TEST 3***\n");

                printf("***START***\n");
                show(&cp_student);
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
            UTEST1, // Sprawdzenie poprawności działania funkcji set_date
            UTEST2, // Sprawdzenie poprawności działania funkcji set_date
            UTEST3, // Sprawdzenie poprawności działania funkcji set_date
            UTEST4, // Sprawdzenie poprawności działania funkcji set_date
            UTEST5, // Sprawdzenie poprawności działania funkcji set_date
            UTEST6, // Sprawdzenie poprawności działania funkcji set_date
            UTEST7, // Sprawdzenie poprawności działania funkcji set_date
            UTEST8, // Sprawdzenie poprawności działania funkcji set_date
            UTEST9, // Sprawdzenie poprawności działania funkcji set_date
            UTEST10, // Sprawdzenie poprawności działania funkcji set_date
            UTEST11, // Sprawdzenie poprawności działania funkcji set_date
            UTEST12, // Sprawdzenie poprawności działania funkcji set_date
            UTEST13, // Sprawdzenie poprawności działania funkcji set_date
            UTEST14, // Sprawdzenie poprawności działania funkcji set_date
            UTEST15, // Sprawdzenie poprawności działania funkcji validate
            UTEST16, // Sprawdzenie poprawności działania funkcji validate
            UTEST17, // Sprawdzenie poprawności działania funkcji validate
            UTEST18, // Sprawdzenie poprawności działania funkcji validate
            UTEST19, // Sprawdzenie poprawności działania funkcji validate
            UTEST20, // Sprawdzenie poprawności działania funkcji validate
            UTEST21, // Sprawdzenie poprawności działania funkcji validate
            UTEST22, // Sprawdzenie poprawności działania funkcji validate
            UTEST23, // Sprawdzenie poprawności działania funkcji validate
            UTEST24, // Sprawdzenie poprawności działania funkcji validate
            UTEST25, // Sprawdzenie poprawności działania funkcji validate
            UTEST26, // Sprawdzenie poprawności działania funkcji validate
            UTEST27, // Sprawdzenie poprawności działania funkcji validate
            UTEST28, // Sprawdzenie poprawności działania funkcji validate
            UTEST29, // Sprawdzenie poprawności działania funkcji validate
            UTEST30, // Sprawdzenie poprawności działania funkcji validate
            UTEST31, // Sprawdzenie poprawności działania funkcji validate
            UTEST32, // Sprawdzenie poprawności działania funkcji validate
            UTEST33, // Sprawdzenie poprawności działania funkcji validate
            UTEST34, // Sprawdzenie poprawności działania funkcji validate
            UTEST35, // Sprawdzenie poprawności działania funkcji validate
            UTEST36, // Sprawdzenie poprawności działania funkcji validate
            UTEST37, // Sprawdzenie poprawności działania funkcji validate
            UTEST38, // Sprawdzenie poprawności działania funkcji validate
            UTEST39, // Sprawdzenie poprawności działania funkcji validate
            UTEST40, // Sprawdzanie poprawności działania funkcji validate
            UTEST41, // Sprawdzanie poprawności działania funkcji show
            UTEST42, // Sprawdzanie poprawności działania funkcji read
            UTEST43, // Sprawdzanie poprawności działania funkcji read
            UTEST44, // Sprawdzenie poprawności działania funkcji show
            UTEST45, // Sprawdzenie poprawności działania funkcji show
            UTEST46, // Sprawdzenie poprawności działania funkcji show
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
            test_summary(46); // wszystkie testy muszą zakończyć się sukcesem
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