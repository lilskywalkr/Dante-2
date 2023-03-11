/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Ukryta wiadomość
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-21 02:01:39.387146
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
//  Test 1: Sprawdzenie poprawności działania funkcji decode
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[5];
                char expected_text[] = "also";

                printf("#####START#####");
                int err_code = decode("sign.txt", text, 5);
                printf("#####END#####\n");

                test_error(err_code == 0, "Funkcja decode() powinna zwrócić 0, a zwróciła %d", err_code);
                
                if (!0)
                    test_error(strcmp(text, expected_text) == 0, "Tekst odczytany przez funkcje decode() jest nieprawidłowy; powinno być %s, a jest %s", expected_text, text);
                
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzenie poprawności działania funkcji decode
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[191];
                char expected_text[] = "It is good to love many things, for therein lies the true strength, and whosoever loves much performs much, and can accomplish much, and what is done in love is well done. - Vincent van Gogh";

                printf("#####START#####");
                int err_code = decode("visitde.jpg.txt", text, 191);
                printf("#####END#####\n");

                test_error(err_code == 0, "Funkcja decode() powinna zwrócić 0, a zwróciła %d", err_code);
                
                if (!0)
                    test_error(strcmp(text, expected_text) == 0, "Tekst odczytany przez funkcje decode() jest nieprawidłowy; powinno być %s, a jest %s", expected_text, text);
                
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzenie poprawności działania funkcji decode
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[126];
                char expected_text[] = "It is good to love many things, for therein lies the true strength, and whosoever loves much performs much, and can accomplis";

                printf("#####START#####");
                int err_code = decode("visitde.jpg.txt", text, 126);
                printf("#####END#####\n");

                test_error(err_code == 0, "Funkcja decode() powinna zwrócić 0, a zwróciła %d", err_code);
                
                if (!0)
                    test_error(strcmp(text, expected_text) == 0, "Tekst odczytany przez funkcje decode() jest nieprawidłowy; powinno być %s, a jest %s", expected_text, text);
                
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzenie poprawności działania funkcji decode
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[5];
                char expected_text[] = "same";

                printf("#####START#####");
                int err_code = decode("lost.txt", text, 5);
                printf("#####END#####\n");

                test_error(err_code == 3, "Funkcja decode() powinna zwrócić 3, a zwróciła %d", err_code);
                
                if (!3)
                    test_error(strcmp(text, expected_text) == 0, "Tekst odczytany przez funkcje decode() jest nieprawidłowy; powinno być %s, a jest %s", expected_text, text);
                
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzenie poprawności działania funkcji decode
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[34];
                char expected_text[] = "same";

                printf("#####START#####");
                int err_code = decode("serve.txt", text, 34);
                printf("#####END#####\n");

                test_error(err_code == 3, "Funkcja decode() powinna zwrócić 3, a zwróciła %d", err_code);
                
                if (!3)
                    test_error(strcmp(text, expected_text) == 0, "Tekst odczytany przez funkcje decode() jest nieprawidłowy; powinno być %s, a jest %s", expected_text, text);
                
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzenie poprawności działania funkcji decode
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[5];
                char expected_text[] = "same";

                printf("#####START#####");
                int err_code = decode("number.txt", text, 5);
                printf("#####END#####\n");

                test_error(err_code == 2, "Funkcja decode() powinna zwrócić 2, a zwróciła %d", err_code);
                
                if (!2)
                    test_error(strcmp(text, expected_text) == 0, "Tekst odczytany przez funkcje decode() jest nieprawidłowy; powinno być %s, a jest %s", expected_text, text);
                
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzenie poprawności działania funkcji decode
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char text[16];

            printf("#####START#####");
            int err_code = decode("phrase.txt", text, -16);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja decode() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzenie poprawności działania funkcji decode
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char text[16];

            printf("#####START#####");
            int err_code = decode("phrase.txt", text, 0);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja decode() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzenie poprawności działania funkcji decode
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = decode("phrase.txt", NULL, 16);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja decode() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzenie poprawności działania funkcji decode
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char text[16];

            printf("#####START#####");
            int err_code = decode(NULL, text, 16);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja decode() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzenie poprawności działania funkcji decode
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzenie poprawności działania funkcji decode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = decode(NULL, NULL, 16);
            printf("#####END#####\n");

            test_error(err_code == 1, "Funkcja decode() powinna zwrócić 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzenie poprawności działania funkcji encode
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = encode("surface.txt", "produce", "second_out.txt");            
                test_error(err_code == 0, "Funkcja encode() powinna zwrócić 0, a zwróciła %d", err_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzenie poprawności działania funkcji encode
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = encode("surface.txt", "Some people worry that artificial intelligence will make us feel inferior, but then, anybody in his right mind should have an inferiority complex every time he looks at a flower. - Alan Kay", "loud_out.txt");            
                test_error(err_code == 3, "Funkcja encode() powinna zwrócić 3, a zwróciła %d", err_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzenie poprawności działania funkcji encode
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = encode("just.txt", "came", "don't_out.txt");            
                test_error(err_code == 3, "Funkcja encode() powinna zwrócić 3, a zwróciła %d", err_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzenie poprawności działania funkcji encode
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = encode("de.jpg.txt", "By far, the greatest danger of Artificial Intelligence is that people conclude too early that they understand it. - Eliezer Yudkowsky", "de.jpg_out.txt");            
                test_error(err_code == 0, "Funkcja encode() powinna zwrócić 0, a zwróciła %d", err_code);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Reakcja funkcji encode na brak możliwości utworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Reakcja funkcji encode na brak możliwości utworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 1);
    
    //
    // -----------
    //
    
        
            int err_code = encode("experience.txt", "dog", "find_out.txt");            
            test_error(err_code == 4, "Funkcja encode() powinna zwrócić 4, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzenie poprawności działania funkcji encode
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = encode(NULL, "dog", "find_out.txt");            
            test_error(err_code == 1, "Funkcja encode() powinna zwrócić 1, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzenie poprawności działania funkcji encode
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = encode("experience.txt", NULL, "find_out.txt");            
            test_error(err_code == 1, "Funkcja encode() powinna zwrócić 1, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzenie poprawności działania funkcji encode
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = encode("experience.txt", "dog", NULL);            
            test_error(err_code == 1, "Funkcja encode() powinna zwrócić 1, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzenie poprawności działania funkcji encode
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = encode("experience.txt", NULL, NULL);            
            test_error(err_code == 1, "Funkcja encode() powinna zwrócić 1, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzenie poprawności działania funkcji encode
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = encode(NULL, "dog", NULL);            
            test_error(err_code == 1, "Funkcja encode() powinna zwrócić 1, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzenie poprawności działania funkcji encode
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = encode(NULL, NULL, "find_out.txt");            
            test_error(err_code == 1, "Funkcja encode() powinna zwrócić 1, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzenie poprawności działania funkcji encode
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = encode(NULL, NULL, NULL);            
            test_error(err_code == 1, "Funkcja encode() powinna zwrócić 1, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzenie poprawności działania funkcji encode
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzenie poprawności działania funkcji encode", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = encode("case.txt", "dog", "find_out.txt");            
            test_error(err_code == 2, "Funkcja encode() powinna zwrócić 2, a zwróciła %d", err_code);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak możliwości utworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak możliwości utworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_set_function_success_limit(HFC_FOPEN, 1);
    
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
            UTEST1, // Sprawdzenie poprawności działania funkcji decode
            UTEST2, // Sprawdzenie poprawności działania funkcji decode
            UTEST3, // Sprawdzenie poprawności działania funkcji decode
            UTEST4, // Sprawdzenie poprawności działania funkcji decode
            UTEST5, // Sprawdzenie poprawności działania funkcji decode
            UTEST6, // Sprawdzenie poprawności działania funkcji decode
            UTEST7, // Sprawdzenie poprawności działania funkcji decode
            UTEST8, // Sprawdzenie poprawności działania funkcji decode
            UTEST9, // Sprawdzenie poprawności działania funkcji decode
            UTEST10, // Sprawdzenie poprawności działania funkcji decode
            UTEST11, // Sprawdzenie poprawności działania funkcji decode
            UTEST12, // Sprawdzenie poprawności działania funkcji encode
            UTEST13, // Sprawdzenie poprawności działania funkcji encode
            UTEST14, // Sprawdzenie poprawności działania funkcji encode
            UTEST15, // Sprawdzenie poprawności działania funkcji encode
            UTEST16, // Reakcja funkcji encode na brak możliwości utworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)
            UTEST17, // Sprawdzenie poprawności działania funkcji encode
            UTEST18, // Sprawdzenie poprawności działania funkcji encode
            UTEST19, // Sprawdzenie poprawności działania funkcji encode
            UTEST20, // Sprawdzenie poprawności działania funkcji encode
            UTEST21, // Sprawdzenie poprawności działania funkcji encode
            UTEST22, // Sprawdzenie poprawności działania funkcji encode
            UTEST23, // Sprawdzenie poprawności działania funkcji encode
            UTEST24, // Sprawdzenie poprawności działania funkcji encode
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
            test_summary(24); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak możliwości utworzenia pliku (fopen zwróci NULL przy drugim wywołaniu)
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