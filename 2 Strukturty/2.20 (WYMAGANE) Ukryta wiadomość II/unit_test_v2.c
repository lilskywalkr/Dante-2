/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Ukryta wiadomość II
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-09 22:04:56.709077
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


    
            struct message_t
            {
                char a;
                double b;
                int c;
            };
    


//
//  Test 1: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char input_array[] = {85, 84, 104, 101, 32, 109, 111, 115, 216, 109, 215, 239, 76, 42, 77, 64, 30, 0, 0, 0, 116, 32, 100, 105, 99, 115, 97, 115, 116, 114, 111, 117, 8, 237, 200, 100, 17, 111, 56, 64, 5, 0, 0, 0, 115, 32, 116, 104, 101, 105, 110, 103, 32, 116, 104, 97, 112, 4, 241, 148, 68, 157, 59, 192, 69, 0, 0, 0, 116, 32, 121, 111, 109, 117, 32, 99, 97, 110, 32, 101, 228, 119, 236, 78, 163, 158, 67, 192, 221, 255, 255, 255, 118, 101, 114, 32, 68, 108, 101, 97, 114, 110, 32, 105, 192, 42, 64, 85, 140, 195, 57, 192, 72, 0, 0, 0, 115, 32, 121, 111, 113, 117, 114, 32, 102, 105, 114, 115, 250, 98, 61, 97, 27, 20, 87, 192, 247, 255, 255, 255, 116, 32, 112, 114, 89, 111, 103, 114, 97, 109, 109, 105, 48, 34, 139, 104, 96, 179, 22, 192, 167, 255, 255, 255, 110, 103, 32, 108, 108, 97, 110, 103, 117, 97, 103, 101, 164, 236, 45, 78, 48, 41, 87, 64, 68, 0, 0, 0, 46, 32, 45, 32, 119, 65, 108, 97, 110, 32, 75, 97, 0, 104, 118, 147, 227, 143, 237, 191, 199, 255, 255, 255, 121, 0, 0, 0};
                char encoded_msg[97];
                char *expected_msg = "The most disastrous thing that you can ever learn is your first programming language. - Alan Kay";

                struct message_t msg[9];
                
                memcpy(msg, input_array, sizeof(input_array));
                
                printf("#####START#####");
                int res = decode_message(msg, 9, encoded_msg, 97);
                printf("#####END#####\n");

                test_error(strcmp(expected_msg, encoded_msg) == 0, "Funkcja decode_message niepoprawnie rozszyfrowała wiadomość, powinno być %s, a jest %s", expected_msg, encoded_msg);
                test_error(res == 0, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 0, res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char input_array[] = {72, 34, 70, 111, 114, 32, 97, 32, 24, 174, 98, 225, 24, 61, 63, 64, 18, 0, 0, 0, 108, 105, 115, 116, 106, 32, 111, 102, 32, 97, 108, 108, 0, 36, 219, 195, 25, 228, 9, 64, 182, 255, 255, 255, 32, 116, 104, 101, 85, 32, 119, 97, 121, 115, 32, 116, 2, 13, 219, 210, 22, 52, 88, 64, 0, 0, 0, 0, 101, 99, 104, 110, 121, 111, 108, 111, 103, 121, 32, 104, 78, 251, 248, 198, 209, 117, 85, 64, 177, 255, 255, 255, 97, 115, 32, 102, 117, 97, 105, 108, 101, 100, 32, 116, 64, 87, 43, 114, 173, 11, 252, 191, 64, 0, 0, 0, 111, 32, 105, 109, 76, 112, 114, 111, 118, 101, 32, 116, 166, 75, 157, 145, 209, 119, 85, 64, 203, 255, 255, 255, 104, 101, 32, 113, 110, 117, 97, 108, 105, 116, 121, 32, 24, 126, 104, 24, 142, 170, 52, 64, 74, 0, 0, 0, 111, 102, 32, 108, 106, 105, 102, 101, 44, 32, 112, 108, 184, 247, 33, 239, 8, 162, 37, 192, 51, 0, 0, 0, 101, 97, 115, 101, 111, 32, 112, 114, 101, 115, 115, 32, 71, 241, 66, 152, 31, 141, 79, 192, 41, 0, 0, 0, 116, 104, 114, 101, 81, 101, 46, 32, 32, 45, 32, 65, 252, 71, 64, 94, 155, 57, 74, 64, 247, 255, 255, 255, 108, 105, 99, 101, 106, 32, 75, 97, 104, 110, 0, 0, 199, 140, 144, 234, 85, 89, 83, 192, 238, 255, 255, 255, 0, 0, 0, 0};
                char encoded_msg[115];
                char *expected_msg = "\"For a list of all the ways technology has failed to improve the quality of life, please press three.  - Alice Kah";

                struct message_t msg[11];
                
                memcpy(msg, input_array, sizeof(input_array));
                
                printf("#####START#####");
                int res = decode_message(msg, 11, encoded_msg, 115);
                printf("#####END#####\n");

                test_error(strcmp(expected_msg, encoded_msg) == 0, "Funkcja decode_message niepoprawnie rozszyfrowała wiadomość, powinno być %s, a jest %s", expected_msg, encoded_msg);
                test_error(res == 0, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 0, res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char input_array[] = {99, 87, 101, 32, 97, 114, 101, 32, 92, 130, 215, 31, 232, 98, 77, 64, 179, 255, 255, 255, 109, 97, 100, 101, 109, 32, 119, 105, 115, 101, 32, 110, 160, 20, 55, 11, 129, 168, 32, 64, 96, 0, 0, 0, 111, 116, 32, 98, 83, 121, 32, 116, 104, 101, 32, 114, 184, 43, 42, 4, 157, 175, 88, 192, 25, 0, 0, 0, 101, 99, 111, 108, 112, 108, 101, 99, 116, 105, 111, 110, 80, 173, 111, 30, 32, 245, 49, 192, 29, 0, 0, 0, 32, 111, 102, 32, 122, 111, 117, 114, 32, 112, 97, 115, 144, 143, 100, 152, 120, 177, 57, 192, 6, 0, 0, 0, 116, 44, 32, 98, 87, 117, 116, 32, 98, 121, 32, 116, 88, 121, 109, 130, 73, 28, 45, 192, 10, 0, 0, 0, 104, 101, 32, 114, 121, 101, 115, 112, 111, 110, 115, 105, 160, 175, 45, 112, 192, 236, 11, 192, 65, 0, 0, 0, 98, 105, 108, 105, 108, 116, 121, 32, 102, 111, 114, 32, 104, 137, 51, 25, 43, 32, 48, 64, 190, 255, 255, 255, 111, 117, 114, 32, 119, 102, 117, 116, 117, 114, 101, 46, 184, 134, 9, 121, 73, 147, 80, 64, 207, 255, 255, 255, 32, 45, 32, 71, 85, 101, 111, 114, 103, 101, 32, 66, 64, 40, 58, 40, 255, 105, 78, 192, 79, 0, 0, 0, 101, 114, 110, 97, 73, 114, 100, 32, 83, 104, 97, 119, 160, 244, 247, 254, 64, 57, 83, 192, 164, 255, 255, 255, 0, 0, 0, 0};
                char encoded_msg[1];
                char *expected_msg = "";

                struct message_t msg[11];
                
                memcpy(msg, input_array, sizeof(input_array));
                
                printf("#####START#####");
                int res = decode_message(msg, 11, encoded_msg, 1);
                printf("#####END#####\n");

                test_error(strcmp(expected_msg, encoded_msg) == 0, "Funkcja decode_message niepoprawnie rozszyfrowała wiadomość, powinno być %s, a jest %s", expected_msg, encoded_msg);
                test_error(res == 0, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 0, res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char input_array[] = {77, 65, 110, 121, 116, 104, 105, 110, 188, 217, 41, 37, 12, 187, 78, 64, 173, 255, 255, 255, 103, 32, 116, 104, 85, 97, 116, 32, 99, 111, 117, 108, 64, 158, 93, 189, 186, 221, 60, 64, 98, 0, 0, 0, 100, 32, 103, 105, 103, 118, 101, 32, 114, 105, 115, 101, 60, 189, 119, 0, 90, 38, 66, 64, 32, 0, 0, 0, 32, 116, 111, 32, 100, 115, 109, 97, 114, 116, 101, 114, 78, 75, 35, 23, 107, 66, 82, 64, 88, 0, 0, 0, 45, 116, 104, 97, 106, 110, 45, 104, 117, 109, 97, 110, 160, 22, 118, 181, 37, 217, 53, 64, 67, 0, 0, 0, 32, 105, 110, 116, 103, 101, 108, 108, 105, 103, 101, 110, 106, 70, 231, 107, 78, 7, 70, 192, 197, 255, 255, 255, 99, 101, 32, 45, 108, 32, 105, 110, 32, 116, 104, 101, 100, 181, 92, 40, 241, 240, 83, 64, 199, 255, 255, 255, 32, 102, 111, 114, 79, 109, 32, 111, 102, 32, 65, 114, 128, 104, 188, 55, 26, 241, 71, 192, 225, 255, 255, 255, 116, 105, 102, 105, 65, 99, 105, 97, 108, 32, 73, 110, 116, 154, 169, 55, 16, 196, 48, 64, 98, 0, 0, 0, 116, 101, 108, 108, 73, 105, 103, 101, 110, 99, 101, 44, 124, 40, 131, 149, 213, 39, 55, 192, 207, 255, 255, 255, 32, 98, 114, 97, 101, 105, 110, 45, 99, 111, 109, 112, 6, 45, 67, 198, 70, 68, 74, 192, 218, 255, 255, 255, 117, 116, 101, 114, 81, 32, 105, 110, 116, 101, 114, 102, 108, 79, 36, 142, 201, 125, 69, 64, 43, 0, 0, 0, 97, 99, 101, 115, 70, 44, 32, 111, 114, 32, 110, 101, 43, 209, 49, 215, 70, 67, 74, 192, 181, 255, 255, 255, 117, 114, 111, 115, 101, 99, 105, 101, 110, 99, 101, 45, 76, 219, 144, 76, 234, 127, 85, 64, 24, 0, 0, 0, 98, 97, 115, 101, 83, 100, 32, 104, 117, 109, 97, 110, 164, 44, 129, 194, 73, 71, 72, 64, 6, 0, 0, 0, 32, 105, 110, 116, 74, 101, 108, 108, 105, 103, 101, 110, 252, 73, 229, 53, 202, 42, 87, 64, 180, 255, 255, 255, 99, 101, 32, 101, 119, 110, 104, 97, 110, 99, 101, 109, 20, 4, 62, 20, 144, 85, 66, 64, 166, 255, 255, 255, 101, 110, 116, 32, 85, 45, 32, 119, 105, 110, 115, 32, 52, 220, 206, 200, 111, 243, 53, 64, 61, 0, 0, 0, 104, 97, 110, 100, 105, 115, 32, 100, 111, 119, 110, 32, 32, 103, 148, 83, 82, 133, 74, 64, 10, 0, 0, 0, 98, 101, 121, 111, 112, 110, 100, 32, 99, 111, 110, 116, 14, 232, 50, 155, 225, 13, 71, 192, 246, 255, 255, 255, 101, 115, 116, 32, 120, 97, 115, 32, 100, 111, 105, 110, 136, 245, 30, 21, 201, 252, 87, 64, 194, 255, 255, 255, 103, 32, 116, 104, 104, 101, 32, 109, 111, 115, 116, 32, 29, 248, 228, 238, 15, 132, 85, 192, 237, 255, 255, 255, 116, 111, 32, 99, 84, 104, 97, 110, 103, 101, 32, 116, 240, 22, 53, 83, 247, 24, 84, 64, 25, 0, 0, 0, 104, 101, 32, 119, 118, 111, 114, 108, 100, 46, 32, 78, 100, 160, 249, 8, 115, 228, 73, 64, 159, 255, 255, 255, 111, 116, 104, 105, 122, 110, 103, 32, 101, 108, 115, 101, 3, 131, 23, 6, 205, 1, 74, 192, 11, 0, 0, 0, 32, 105, 115, 32, 121, 101, 118, 101, 110, 32, 105, 110, 49, 125, 6, 47, 108, 151, 66, 192, 225, 255, 255, 255, 32, 116, 104, 101, 72, 32, 115, 97, 109, 101, 32, 108, 232, 98, 102, 180, 117, 176, 36, 64, 16, 0, 0, 0, 101, 97, 103, 117, 71, 101, 46, 32, 45, 32, 69, 108, 92, 245, 184, 146, 37, 131, 73, 64, 241, 255, 255, 255, 105, 101, 122, 101, 71, 114, 32, 89, 117, 100, 107, 111, 68, 23, 18, 57, 238, 123, 62, 192, 168, 255, 255, 255, 119, 115, 107, 121, 115, 0, 0, 0, 0, 0, 0, 0, 81, 222, 85, 223, 195, 219, 69, 192, 84, 0, 0, 0, 0, 0, 0, 0};
                char encoded_msg[320];
                char *expected_msg = "Anything that could give rise to smarter-than-human intelligence - in the form of Artificial Intelligence, brain-computer interfaces, or neuroscience-based human intelligence enhancement - wins hands down beyond contest as doing the most to change the world. Nothing else is even in the same league. - Eliezer Yudkowsky";

                struct message_t msg[30];
                
                memcpy(msg, input_array, sizeof(input_array));
                
                printf("#####START#####");
                int res = decode_message(msg, 30, encoded_msg, 320);
                printf("#####END#####\n");

                test_error(strcmp(expected_msg, encoded_msg) == 0, "Funkcja decode_message niepoprawnie rozszyfrowała wiadomość, powinno być %s, a jest %s", expected_msg, encoded_msg);
                test_error(res == 0, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 0, res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct message_t msg[26];

            printf("#####START#####");
            int res = decode_message(msg, 8, NULL, 10);
            printf("#####END#####\n");

            test_error(res == 1, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char encoded_msg[63];

            printf("#####START#####");
            int res = decode_message(NULL, 10, encoded_msg, 80);
            printf("#####END#####\n");

            test_error(res == 1, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct message_t msg[48];
            char encoded_msg[53];

            printf("#####START#####");
            int res = decode_message(msg, 0, encoded_msg, 57);
            printf("#####END#####\n");

            test_error(res == 1, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct message_t msg[29];
            char encoded_msg[20];

            printf("#####START#####");
            int res = decode_message(msg, 12, encoded_msg, 0);
            printf("#####END#####\n");

            test_error(res == 1, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct message_t msg[23];
            char encoded_msg[15];

            printf("#####START#####");
            int res = decode_message(msg, -93, encoded_msg, 30);
            printf("#####END#####\n");

            test_error(res == 1, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzenie poprawności działania funkcji decode_message
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzenie poprawności działania funkcji decode_message", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct message_t msg[38];
            char encoded_msg[27];

            printf("#####START#####");
            int res = decode_message(msg, 29, encoded_msg, -91);
            printf("#####END#####\n");

            test_error(res == 1, "Funkcja decode_message zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char input_array[] = {85, 73, 115, 32, 97, 114, 116, 105, 100, 118, 157, 143, 3, 157, 49, 192, 13, 0, 0, 0, 102, 105, 99, 105, 83, 97, 108, 32, 105, 110, 116, 101, 210, 167, 51, 18, 49, 152, 86, 192, 233, 255, 255, 255, 108, 108, 105, 103, 107, 101, 110, 99, 101, 32, 108, 101, 236, 161, 110, 159, 68, 89, 83, 64, 166, 255, 255, 255, 115, 115, 32, 116, 84, 104, 97, 110, 32, 111, 117, 114, 12, 213, 91, 141, 74, 53, 87, 192, 216, 255, 255, 255, 32, 105, 110, 116, 77, 101, 108, 108, 105, 103, 101, 110, 189, 156, 253, 35, 224, 188, 85, 192, 185, 255, 255, 255, 99, 101, 63, 32, 107, 45, 32, 83, 112, 105, 107, 101, 150, 190, 134, 224, 40, 188, 84, 64, 12, 0, 0, 0, 32, 74, 111, 110, 106, 122, 101, 0, 0, 0, 0, 0, 66, 116, 209, 119, 203, 57, 80, 192, 240, 255, 255, 255, 0, 0, 0, 0};

                struct message_t msg[7];
                
                printf("#####START#####");
                int res = load_data(msg, 7, "finger.bin");
                printf("#####END#####\n");

                // znajdź pierwszą różnicę
                int diff_pos = mem_find_first_difference(input_array, &msg, sizeof(input_array));
            
                // jeśli jest, to raportuj błąd
                test_error(diff_pos == -1, "Treść odczytana z pliku suddenly.bin nie jest poprawna; różnica w bajcie %d; jest 0x%02x a powinno być 0x%02x",
                    diff_pos, mem_get_byte(input_array, diff_pos), mem_get_byte(&msg, diff_pos));

                test_error(res == 7, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 7, res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char input_array[] = {98, 34, 84, 104, 101, 32, 117, 115, 128, 254, 38, 186, 74, 86, 226, 63, 6, 0, 0, 0, 101, 32, 111, 102};

                struct message_t msg[1];
                
                printf("#####START#####");
                int res = load_data(msg, 1, "PC.bin");
                printf("#####END#####\n");

                // znajdź pierwszą różnicę
                int diff_pos = mem_find_first_difference(input_array, &msg, sizeof(input_array));
            
                // jeśli jest, to raportuj błąd
                test_error(diff_pos == -1, "Treść odczytana z pliku suddenly.bin nie jest poprawna; różnica w bajcie %d; jest 0x%02x a powinno być 0x%02x",
                    diff_pos, mem_get_byte(input_array, diff_pos), mem_get_byte(&msg, diff_pos));

                test_error(res == 1, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 1, res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                unsigned char input_array[] = {111, 84, 101, 99, 104, 110, 111, 108, 156, 146, 192, 81, 253, 38, 69, 64, 214, 255, 255, 255, 111, 103, 121, 32, 79, 112, 114, 101, 115, 117, 109, 101, 68, 67, 52, 75, 90, 44, 54, 192, 203, 255, 255, 255, 115, 32, 116, 104, 88, 101, 114, 101, 39, 115, 32, 106, 82, 209, 148, 41, 52, 255, 66, 192, 34, 0, 0, 0, 117, 115, 116, 32, 112, 111, 110, 101, 32, 114, 105, 103, 184, 195, 78, 47, 231, 217, 76, 192, 246, 255, 255, 255, 104, 116, 32, 119, 103, 97, 121, 32, 116, 111, 32, 100, 144, 95, 14, 70, 136, 2, 81, 192, 179, 255, 255, 255, 111, 32, 116, 104, 114, 105, 110, 103, 115, 32, 97, 110, 164, 159, 109, 8, 135, 156, 77, 64, 15, 0, 0, 0, 100, 32, 116, 104, 74, 101, 114, 101, 32, 110, 101, 118, 114, 196, 99, 101, 2, 13, 88, 64, 186, 255, 255, 255, 101, 114, 32, 105, 72, 115, 46, 45, 82, 111, 98, 101, 0, 190, 68, 144, 245, 246, 6, 192, 24, 0, 0, 0, 114, 116, 32, 77, 110, 46, 32, 80, 105, 114, 115, 105, 176, 121, 64, 204, 201, 206, 52, 192, 227, 255, 255, 255, 103, 10, 73, 39, 108, 108, 108, 32, 109, 97, 107, 101, 22, 197, 23, 232, 199, 171, 86, 64, 236, 255, 255, 255, 32, 104, 105, 109, 99, 32, 97, 110, 32, 111, 102, 102, 128, 38, 217, 249, 181, 12, 13, 192, 92, 0, 0, 0, 101, 114, 32, 104, 74, 101, 32, 99, 97, 110, 39, 116, 248, 135, 11, 220, 31, 212, 63, 192, 223, 255, 255, 255, 32, 114, 101, 102, 103, 117, 115, 101, 46, 32, 45, 32, 52, 80, 184, 232, 1, 71, 83, 64, 235, 255, 255, 255, 77, 97, 114, 105, 122, 111, 32, 80, 117, 122, 111, 44, 136, 107, 242, 245, 218, 39, 71, 64, 23, 0, 0, 0, 32, 84, 104, 101, 115, 32, 71, 111, 100, 102, 97, 116, 166, 41, 235, 216, 189, 42, 87, 192, 82, 0, 0, 0, 104, 101, 114, 0};

                struct message_t msg[15];
                
                printf("#####START#####");
                int res = load_data(msg, 15, "suddenly.bin");
                printf("#####END#####\n");

                // znajdź pierwszą różnicę
                int diff_pos = mem_find_first_difference(input_array, &msg, sizeof(input_array));
            
                // jeśli jest, to raportuj błąd
                test_error(diff_pos == -1, "Treść odczytana z pliku suddenly.bin nie jest poprawna; różnica w bajcie %d; jest 0x%02x a powinno być 0x%02x",
                    diff_pos, mem_get_byte(input_array, diff_pos), mem_get_byte(&msg, diff_pos));

                test_error(res == 15, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", 15, res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct message_t msg[24];

            printf("#####START#####");
            int res = load_data(msg, 24, "generally.bin");
            printf("#####END#####\n");

            test_error(res == -2, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", -2, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct message_t msg[24];

            printf("#####START#####");
            int res = load_data(msg, 0, "generally.bin");
            printf("#####END#####\n");

            test_error(res == -1, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", -1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct message_t msg[24];

            printf("#####START#####");
            int res = load_data(msg, -24, "generally.bin");
            printf("#####END#####\n");

            test_error(res == -1, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", -1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            struct message_t msg[24];

            printf("#####START#####");
            int res = load_data(msg, 24, NULL);
            printf("#####END#####\n");

            test_error(res == -1, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", -1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int res = load_data(NULL, 24, "generally.bin");
            printf("#####END#####\n");

            test_error(res == -1, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", -1, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             struct message_t msg[26];

             printf("#####START#####");
             int res = load_data(msg, 26, "unable.bin");
             printf("#####END#####\n");

             test_error(res == -3, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", -3, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             struct message_t msg[9];

             printf("#####START#####");
             int res = load_data(msg, 9, "arm.bin");
             printf("#####END#####\n");

             test_error(res == -3, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", -3, res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzenie poprawności działania funkcji load_data
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzenie poprawności działania funkcji load_data", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

             struct message_t msg[10];

             printf("#####START#####");
             int res = load_data(msg, 10, "distinction.bin");
             printf("#####END#####\n");

             test_error(res == -3, "Funkcja load_data zwróciła nieprawidłową wartość, powinno być %d, a jest %d", -3, res);
        
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
            UTEST1, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST2, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST3, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST4, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST5, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST6, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST7, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST8, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST9, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST10, // Sprawdzenie poprawności działania funkcji decode_message
            UTEST11, // Sprawdzenie poprawności działania funkcji load_data
            UTEST12, // Sprawdzenie poprawności działania funkcji load_data
            UTEST13, // Sprawdzenie poprawności działania funkcji load_data
            UTEST14, // Sprawdzenie poprawności działania funkcji load_data
            UTEST15, // Sprawdzenie poprawności działania funkcji load_data
            UTEST16, // Sprawdzenie poprawności działania funkcji load_data
            UTEST17, // Sprawdzenie poprawności działania funkcji load_data
            UTEST18, // Sprawdzenie poprawności działania funkcji load_data
            UTEST19, // Sprawdzenie poprawności działania funkcji load_data
            UTEST20, // Sprawdzenie poprawności działania funkcji load_data
            UTEST21, // Sprawdzenie poprawności działania funkcji load_data
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
            test_summary(21); // wszystkie testy muszą zakończyć się sukcesem
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