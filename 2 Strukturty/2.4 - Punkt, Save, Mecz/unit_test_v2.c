/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Punkt, Save, Mecz
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-01-04 21:56:04.067006
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


        struct point_t
        {
            int x;
            int y;
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
    
        struct point_t p1 = {.x = 7, .y = -1};

        struct point_t p_student;
        printf("#####START#####");
        set(&p_student, p1.x, p1.y);
        printf("#####END#####");

        // znajdź pierwszą różnicę
        int diff_pos = mem_find_first_difference(&p1, &p_student, sizeof(struct point_t));

        // jeśli jest, to raportuj błąd
        test_error(diff_pos == -1, "Struktura point_t nie jest zgodna z zadaniem; różnica w bajcie %d; jest 0x%02x a powinno być 0x%02x",
            diff_pos, mem_get_byte(&p_student, diff_pos), mem_get_byte(&p1, diff_pos));


        onerror_compare_memory(&p_student, &p1, sizeof(struct point_t));

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
//  Test 2: Sprawdzanie poprawności działania funkcji set
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji set", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t *p = set(NULL, 9, -6);

            test_error(p == NULL, "Funkcja set() powinna zwrócić NULL w przypadku przekazania do funkcji wartości NULL w pierwszym parametrze");
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji set
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji set", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            int x = 2, y = -7; 
            struct point_t p1, *ptr;
            printf("#####START#####");
            ptr = set(&p1, x, y);
            printf("#####END#####");

            test_error(ptr == &p1, "Funkcja set() powinna zwracać wskaźnik przekazany w pierwszym parametrze");
            test_error(p1.x == x, "Funkcja set() miała ustawić %d jako współrzędną x, a ustawiła %d", x, p1.x);
            test_error(p1.y == y, "Funkcja set() miała ustawić %d jako współrzędną y, a ustawiła %d", y, p1.y);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji show
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji show", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            //-------------1-----------------------
                printf("\n***TEST 1***\n\n");
                printf("***START***\n");
                show(NULL);
                printf("***END***\n");

                struct point_t p1 = {.x = 6, .y = -8}; 


            //-------------2-----------------------
                printf("\n***TEST 2***\n\n");
                printf("***START***\n");
                show(&p1);
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
//  Test 5: Sprawdzanie poprawności działania funkcji save_point_b
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji save_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 5, .y = -10};
        
                printf("#####START#####");
                int err_code = save_point_b("nose.bin", &p);
                printf("#####END#####\n");
                test_error(err_code == 0, "Funkcja save_point_b powinna zwrócić 0, a zwróciła %d", err_code );
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji save_point_b
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji save_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 8, .y = -10};
        
                printf("#####START#####");
                int err_code = save_point_b("pass.txt", &p);
                printf("#####END#####\n");
                test_error(err_code == 0, "Funkcja save_point_b powinna zwrócić 0, a zwróciła %d", err_code );
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji save_point_b
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji save_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 3, .y = -8};
        
                printf("#####START#####");
                int err_code = save_point_b("feet", &p);
                printf("#####END#####\n");
                test_error(err_code == 0, "Funkcja save_point_b powinna zwrócić 0, a zwróciła %d", err_code );
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Reakcja funkcji save_point_b na brak możliwości utworzenia pliku (fopen zwróci NULL)
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Reakcja funkcji save_point_b na brak możliwości utworzenia pliku (fopen zwróci NULL)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    
            struct point_t p = { .x = 3, .y = 7};

            printf("#####START#####");
            int err_code = save_point_b("rather.bin", &p);
            printf("#####END#####\\n");

            test_error(err_code == 2, "Funkcja save_point_b zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 2, err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji save_point_b
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji save_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p = { .x = 4, .y = 5};

            printf("#####START#####");
            int err_code = save_point_b(NULL, &p);
            printf("#####END#####\n");
            
            test_error(err_code == 1, "Funkcja save_point_b powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji save_point_b
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji save_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = save_point_b("rather.bin", NULL);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja save_point_b powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji save_point_b
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji save_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = save_point_b(NULL, NULL);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja save_point_b powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji load_point_b
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji load_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 0, .y = -7};
                struct point_t p1;

                printf("#####START#####");
                int err_code = load_point_b("country.bin", &p1);
                printf("#####END#####\n");

                test_error(err_code == 0, "Funkcja load_point_b powinna zwrócić 0, a zwróciła %d", err_code );
                if (!0)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_b odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_b odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 13: Sprawdzanie poprawności działania funkcji load_point_b
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji load_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 9, .y = -1};
                struct point_t p1;

                printf("#####START#####");
                int err_code = load_point_b("dry.txt", &p1);
                printf("#####END#####\n");

                test_error(err_code == 0, "Funkcja load_point_b powinna zwrócić 0, a zwróciła %d", err_code );
                if (!0)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_b odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_b odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 14: Sprawdzanie poprawności działania funkcji load_point_b
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji load_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 2, .y = -4};
                struct point_t p1;

                printf("#####START#####");
                int err_code = load_point_b("only", &p1);
                printf("#####END#####\n");

                test_error(err_code == 0, "Funkcja load_point_b powinna zwrócić 0, a zwróciła %d", err_code );
                if (!0)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_b odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_b odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 15: Sprawdzanie poprawności działania funkcji load_point_b
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji load_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 10, .y = 0};
                struct point_t p1;

                printf("#####START#####");
                int err_code = load_point_b("usual.bin", &p1);
                printf("#####END#####\n");

                test_error(err_code == 3, "Funkcja load_point_b powinna zwrócić 3, a zwróciła %d", err_code );
                if (!3)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_b odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_b odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 16: Sprawdzanie poprawności działania funkcji load_point_b
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji load_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 10, .y = 0};
                struct point_t p1;

                printf("#####START#####");
                int err_code = load_point_b("simple.bin", &p1);
                printf("#####END#####\n");

                test_error(err_code == 2, "Funkcja load_point_b powinna zwrócić 2, a zwróciła %d", err_code );
                if (!2)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_b odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_b odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 17: Sprawdzanie poprawności działania funkcji load_point_b
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji load_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p = { .x = 10, .y = 6};

            printf("#####START#####");
            int err_code = load_point_b(NULL, &p);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja load_point_b powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji load_point_b
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji load_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = load_point_b("simple.bin", NULL);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja load_point_b powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji load_point_b
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji load_point_b", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = load_point_b(NULL, NULL);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja load_point_b powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji save_point_t
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji save_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 2, .y = 0};

                printf("#####START#####");
                int err_code = save_point_t("fraction.bin", &p);
                printf("#####END#####\n");
                test_error(err_code == 0, "Funkcja save_point_t powinna zwrócić 0, a zwróciła %d", err_code );
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji save_point_t
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji save_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 8, .y = -10};

                printf("#####START#####");
                int err_code = save_point_t("dress.txt", &p);
                printf("#####END#####\n");
                test_error(err_code == 0, "Funkcja save_point_t powinna zwrócić 0, a zwróciła %d", err_code );
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji save_point_t
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji save_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 10, .y = -8};

                printf("#####START#####");
                int err_code = save_point_t("can", &p);
                printf("#####END#####\n");
                test_error(err_code == 0, "Funkcja save_point_t powinna zwrócić 0, a zwróciła %d", err_code );
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Reakcja funkcji save_point_t na brak możliwości utworzenia pliku (fopen zwróci NULL)
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Reakcja funkcji save_point_t na brak możliwości utworzenia pliku (fopen zwróci NULL)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    
            struct point_t p = { .x = 2, .y = 3};

            printf("#####START#####");
            int err_code = save_point_t("division.txt", &p);
            printf("#####END#####\\n");

            test_error(err_code == 2, "Funkcja save_point_t zwróciła nieprawidłową wartość, powinna zwrócić %d, a zwróciła %d", 2, err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji save_point_t
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji save_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p = { .x = 3, .y = 7};

            printf("#####START#####");
            int err_code = save_point_t(NULL, &p);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja save_point_t powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji save_point_t
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji save_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = save_point_t("division.txt", NULL);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja save_point_t powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji save_point_t
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji save_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = save_point_t(NULL, NULL);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja save_point_t powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji load_point_t
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji load_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 2, .y = 0};
                struct point_t p1;
                printf("#####START#####");
                int err_code = load_point_t("woman.bin", &p1);
                printf("#####END#####\n");
                test_error(err_code == 0, "Funkcja load_point_t powinna zwrócić 0, a zwróciła %d", err_code );
                if (!0)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_t odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_t odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 28: Sprawdzanie poprawności działania funkcji load_point_t
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji load_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 4, .y = -5};
                struct point_t p1;
                printf("#####START#####");
                int err_code = load_point_t("slave.txt", &p1);
                printf("#####END#####\n");
                test_error(err_code == 0, "Funkcja load_point_t powinna zwrócić 0, a zwróciła %d", err_code );
                if (!0)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_t odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_t odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 29: Sprawdzanie poprawności działania funkcji load_point_t
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji load_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 1, .y = -10};
                struct point_t p1;
                printf("#####START#####");
                int err_code = load_point_t("desert", &p1);
                printf("#####END#####\n");
                test_error(err_code == 0, "Funkcja load_point_t powinna zwrócić 0, a zwróciła %d", err_code );
                if (!0)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_t odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_t odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 30: Sprawdzanie poprawności działania funkcji load_point_t
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji load_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 1, .y = -6};
                struct point_t p1;
                printf("#####START#####");
                int err_code = load_point_t("free.bin", &p1);
                printf("#####END#####\n");
                test_error(err_code == 3, "Funkcja load_point_t powinna zwrócić 3, a zwróciła %d", err_code );
                if (!3)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_t odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_t odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 31: Sprawdzanie poprawności działania funkcji load_point_t
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji load_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 9, .y = -10};
                struct point_t p1;
                printf("#####START#####");
                int err_code = load_point_t("and.bin", &p1);
                printf("#####END#####\n");
                test_error(err_code == 3, "Funkcja load_point_t powinna zwrócić 3, a zwróciła %d", err_code );
                if (!3)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_t odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_t odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 32: Sprawdzanie poprawności działania funkcji load_point_t
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji load_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
                struct point_t p = { .x = 9, .y = -10};
                struct point_t p1;
                printf("#####START#####");
                int err_code = load_point_t("protect.txt", &p1);
                printf("#####END#####\n");
                test_error(err_code == 2, "Funkcja load_point_t powinna zwrócić 2, a zwróciła %d", err_code );
                if (!2)
                {
                      test_error(p.x == p1.x, "Funkcja load_point_t odczytała błędne dane, współrzędna x powinna mieć wartość %d, a ma %d", p.x, p1.x );
                      test_error(p.y == p1.y, "Funkcja load_point_t odczytała błędne dane, współrzędna y powinna mieć wartość %d, a ma %d", p.y, p1.y );      
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
//  Test 33: Sprawdzanie poprawności działania funkcji load_point_t
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji load_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
            struct point_t p = { .x = 3, .y = 4};

            printf("#####START#####");
            int err_code = load_point_t(NULL, &p);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja load_point_t powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji load_point_t
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji load_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = load_point_t("protect.txt", NULL);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja load_point_t powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji load_point_t
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji load_point_t", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = load_point_t(NULL, NULL);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja load_point_t powinna zwrócić 1, a zwróciła %d", err_code );
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    
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
//  Test 2: Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 0);
    
    //
    // -----------
    //
    
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
            UTEST2, // Sprawdzanie poprawności działania funkcji set
            UTEST3, // Sprawdzanie poprawności działania funkcji set
            UTEST4, // Sprawdzanie poprawności działania funkcji show
            UTEST5, // Sprawdzanie poprawności działania funkcji save_point_b
            UTEST6, // Sprawdzanie poprawności działania funkcji save_point_b
            UTEST7, // Sprawdzanie poprawności działania funkcji save_point_b
            UTEST8, // Reakcja funkcji save_point_b na brak możliwości utworzenia pliku (fopen zwróci NULL)
            UTEST9, // Sprawdzanie poprawności działania funkcji save_point_b
            UTEST10, // Sprawdzanie poprawności działania funkcji save_point_b
            UTEST11, // Sprawdzanie poprawności działania funkcji save_point_b
            UTEST12, // Sprawdzanie poprawności działania funkcji load_point_b
            UTEST13, // Sprawdzanie poprawności działania funkcji load_point_b
            UTEST14, // Sprawdzanie poprawności działania funkcji load_point_b
            UTEST15, // Sprawdzanie poprawności działania funkcji load_point_b
            UTEST16, // Sprawdzanie poprawności działania funkcji load_point_b
            UTEST17, // Sprawdzanie poprawności działania funkcji load_point_b
            UTEST18, // Sprawdzanie poprawności działania funkcji load_point_b
            UTEST19, // Sprawdzanie poprawności działania funkcji load_point_b
            UTEST20, // Sprawdzanie poprawności działania funkcji save_point_t
            UTEST21, // Sprawdzanie poprawności działania funkcji save_point_t
            UTEST22, // Sprawdzanie poprawności działania funkcji save_point_t
            UTEST23, // Reakcja funkcji save_point_t na brak możliwości utworzenia pliku (fopen zwróci NULL)
            UTEST24, // Sprawdzanie poprawności działania funkcji save_point_t
            UTEST25, // Sprawdzanie poprawności działania funkcji save_point_t
            UTEST26, // Sprawdzanie poprawności działania funkcji save_point_t
            UTEST27, // Sprawdzanie poprawności działania funkcji load_point_t
            UTEST28, // Sprawdzanie poprawności działania funkcji load_point_t
            UTEST29, // Sprawdzanie poprawności działania funkcji load_point_t
            UTEST30, // Sprawdzanie poprawności działania funkcji load_point_t
            UTEST31, // Sprawdzanie poprawności działania funkcji load_point_t
            UTEST32, // Sprawdzanie poprawności działania funkcji load_point_t
            UTEST33, // Sprawdzanie poprawności działania funkcji load_point_t
            UTEST34, // Sprawdzanie poprawności działania funkcji load_point_t
            UTEST35, // Sprawdzanie poprawności działania funkcji load_point_t
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
            test_summary(35); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
            MTEST2, // Reakcja na brak możliwości otworzenia pliku (fopen zwróci NULL przy pierwszym wywołaniu)
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
            test_summary(2); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}