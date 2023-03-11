/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Łączenie tekstów
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-08 18:06:22.208979
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
//  Test 1: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *expected_result = "On two occasions I have been asked [by members of Parliament]: Pray, Mr. Babbage, if you put into the machine wrong figures, will the right answers come out? I am not able rightly to apprehend the kind of confusion of ideas that could provoke such a question. - Charles Babbage If you are working on something that you really care about, you dont have to be pushed. The vision pulls you.- Steve Jobs I like nonsense, it wakes up the brain cells. Fantasy is a necessary ingredient in living. - Dr. Seuss You never have to change anything you got up in the middle of the night to write. - Saul Bellow";
                char result[599];
                
                int res = concatenate(result, 599, 4, "On two occasions I have been asked [by members of Parliament]: Pray, Mr. Babbage, if you put into the machine wrong figures, will the right answers come out? I am not able rightly to apprehend the kind of confusion of ideas that could provoke such a question. - Charles Babbage", "If you are working on something that you really care about, you dont have to be pushed. The vision pulls you.- Steve Jobs", "I like nonsense, it wakes up the brain cells. Fantasy is a necessary ingredient in living. - Dr. Seuss", "You never have to change anything you got up in the middle of the night to write. - Saul Bellow");
        
                test_error(res == 0, "Funkcja concatenate() powinna zwrócić wartość 0, a zwróciła %d", res);                  
     
                if (!0)
                {

                    int ok = 1, i = 0;
        
                    while (*(result + i) && *(expected_result + i))
                    {
                        if (*(result + i) != *(expected_result + i))
                            ok = 0;
                        i++;
                    }
        
                    ok = ok && *(result + i) == *(expected_result + i);
                    if (!ok)
                    {
                        printf("Oczekiwany wynik: %s\n", expected_result);
                        printf("Otrzymany wynik: %s\n", result);
                    }
           
                    test_error(ok == 1, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa");
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
//  Test 2: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *expected_result = "On two occasions I have been asked [by members of Parliament]: Pray, Mr. Babbage, if you put into the machine wrong figures, will the right answers come out? I am not able rightly to apprehend the kind of confusion of ideas that could provoke such a question. - Charles Babbage If you are working on something that you really care about, you dont have to be pushed. The vision pulls you.- Steve Jobs I like nonsense, it wakes up the brain cells. Fantasy is a necessary ingredient in living. - Dr. Seuss You never have to change anything you got up in the middle of the night to write. - Saul Bellow";
                char result[598];
                
                int res = concatenate(result, 598, 4, "On two occasions I have been asked [by members of Parliament]: Pray, Mr. Babbage, if you put into the machine wrong figures, will the right answers come out? I am not able rightly to apprehend the kind of confusion of ideas that could provoke such a question. - Charles Babbage", "If you are working on something that you really care about, you dont have to be pushed. The vision pulls you.- Steve Jobs", "I like nonsense, it wakes up the brain cells. Fantasy is a necessary ingredient in living. - Dr. Seuss", "You never have to change anything you got up in the middle of the night to write. - Saul Bellow");
        
                test_error(res == 2, "Funkcja concatenate() powinna zwrócić wartość 2, a zwróciła %d", res);                  
     
                if (!2)
                {

                    int ok = 1, i = 0;
        
                    while (*(result + i) && *(expected_result + i))
                    {
                        if (*(result + i) != *(expected_result + i))
                            ok = 0;
                        i++;
                    }
        
                    ok = ok && *(result + i) == *(expected_result + i);
                    if (!ok)
                    {
                        printf("Oczekiwany wynik: %s\n", expected_result);
                        printf("Otrzymany wynik: %s\n", result);
                    }
           
                    test_error(ok == 1, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa");
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
//  Test 3: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *expected_result = "On two occasions I have been asked [by members of Parliament]: Pray, Mr. Babbage, if you put into the machine wrong figures, will the right answers come out? I am not able rightly to apprehend the kind of confusion of ideas that could provoke such a question. - Charles Babbage If you are working on something that you really care about, you dont have to be pushed. The vision pulls you.- Steve Jobs I like nonsense, it wakes up the brain cells. Fantasy is a necessary ingredient in living. - Dr. Seuss You never have to change anything you got up in the middle of the night to write. - Saul Bellow";
                char result[600];
                
                int res = concatenate(result, 600, 4, "On two occasions I have been asked [by members of Parliament]: Pray, Mr. Babbage, if you put into the machine wrong figures, will the right answers come out? I am not able rightly to apprehend the kind of confusion of ideas that could provoke such a question. - Charles Babbage", "If you are working on something that you really care about, you dont have to be pushed. The vision pulls you.- Steve Jobs", "I like nonsense, it wakes up the brain cells. Fantasy is a necessary ingredient in living. - Dr. Seuss", "You never have to change anything you got up in the middle of the night to write. - Saul Bellow");
        
                test_error(res == 0, "Funkcja concatenate() powinna zwrócić wartość 0, a zwróciła %d", res);                  
     
                if (!0)
                {

                    int ok = 1, i = 0;
        
                    while (*(result + i) && *(expected_result + i))
                    {
                        if (*(result + i) != *(expected_result + i))
                            ok = 0;
                        i++;
                    }
        
                    ok = ok && *(result + i) == *(expected_result + i);
                    if (!ok)
                    {
                        printf("Oczekiwany wynik: %s\n", expected_result);
                        printf("Otrzymany wynik: %s\n", result);
                    }
           
                    test_error(ok == 1, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa");
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
//  Test 4: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *expected_result = "The opposite of love is not hate, its indifference. The opposite of art is not ugliness, its indifference. The opposite of faith is not heresy, its indifference. And the opposite of life is not death, its indifference. - Elie Wiesel\nThe only way to do great work is to love what you do. If you havent found it yet, keep looking. Dont settle. - Steve Jobs Art is the lie that enables us to realize the truth. - Pablo Picasso";
                char result[425];
                
                int res = concatenate(result, 425, 2, "The opposite of love is not hate, its indifference. The opposite of art is not ugliness, its indifference. The opposite of faith is not heresy, its indifference. And the opposite of life is not death, its indifference. - Elie Wiesel\nThe only way to do great work is to love what you do. If you havent found it yet, keep looking. Dont settle. - Steve Jobs", "Art is the lie that enables us to realize the truth. - Pablo Picasso");
        
                test_error(res == 0, "Funkcja concatenate() powinna zwrócić wartość 0, a zwróciła %d", res);                  
     
                if (!0)
                {

                    int ok = 1, i = 0;
        
                    while (*(result + i) && *(expected_result + i))
                    {
                        if (*(result + i) != *(expected_result + i))
                            ok = 0;
                        i++;
                    }
        
                    ok = ok && *(result + i) == *(expected_result + i);
                    if (!ok)
                    {
                        printf("Oczekiwany wynik: %s\n", expected_result);
                        printf("Otrzymany wynik: %s\n", result);
                    }
           
                    test_error(ok == 1, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa");
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
//  Test 5: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *expected_result = "If it keeps up, man will atrophy all his limbs but the push-button finger.  - Frank Lloyd Wright  Fantasy is escapist, and that is its glory. If a soldier is imprisioned by the enemy, dont we consider it his duty to escape?. . .If we value the freedom of mind and soul, if were partisans of liberty, then its our plain duty to escape, and to take as many people with us as we can! - J.R.R. Tolkien";
                char result[398];
                
                int res = concatenate(result, 398, 3, "If it keeps up, man will atrophy all his limbs but the push-button finger.  - Frank Lloyd Wright", "", "Fantasy is escapist, and that is its glory. If a soldier is imprisioned by the enemy, dont we consider it his duty to escape?. . .If we value the freedom of mind and soul, if were partisans of liberty, then its our plain duty to escape, and to take as many people with us as we can! - J.R.R. Tolkien");
        
                test_error(res == 0, "Funkcja concatenate() powinna zwrócić wartość 0, a zwróciła %d", res);                  
     
                if (!0)
                {

                    int ok = 1, i = 0;
        
                    while (*(result + i) && *(expected_result + i))
                    {
                        if (*(result + i) != *(expected_result + i))
                            ok = 0;
                        i++;
                    }
        
                    ok = ok && *(result + i) == *(expected_result + i);
                    if (!ok)
                    {
                        printf("Oczekiwany wynik: %s\n", expected_result);
                        printf("Otrzymany wynik: %s\n", result);
                    }
           
                    test_error(ok == 1, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa");
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
//  Test 6: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    
        
                char *expected_result = "    Fantasy is escapist, and that is its glory. If a soldier is imprisioned by the enemy, dont we consider it his duty to escape?. . .If we value the freedom of mind and soul, if were partisans of liberty, then its our plain duty to escape, and to take as many people with us as we can! - J.R.R. Tolkien";
                char result[304];
                
                int res = concatenate(result, 304, 5, "", "", "", "", "Fantasy is escapist, and that is its glory. If a soldier is imprisioned by the enemy, dont we consider it his duty to escape?. . .If we value the freedom of mind and soul, if were partisans of liberty, then its our plain duty to escape, and to take as many people with us as we can! - J.R.R. Tolkien");
        
                test_error(res == 0, "Funkcja concatenate() powinna zwrócić wartość 0, a zwróciła %d", res);                  
     
                if (!0)
                {

                    int ok = 1, i = 0;
        
                    while (*(result + i) && *(expected_result + i))
                    {
                        if (*(result + i) != *(expected_result + i))
                            ok = 0;
                        i++;
                    }
        
                    ok = ok && *(result + i) == *(expected_result + i);
                    if (!ok)
                    {
                        printf("Oczekiwany wynik: %s\n", expected_result);
                        printf("Otrzymany wynik: %s\n", result);
                    }
           
                    test_error(ok == 1, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa");
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
//  Test 7: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                
                int res = concatenate(NULL, 612, 5, "Creativity is intelligence having fun.- Albert Einstein", "Dont walk in front of me... I may not follow. Dont walk behind me... I may not lead. Walk beside me... just be my friend - Albert Camus", "It has become appallingly obvious that our technology has exceeded our humanity.  - Albert Einstein", "What is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison", "Depression is the inability to construct a future. - Rollo May");
                test_error(res == 1, "Funkcja concatenate() powinna zwrócić wartość 1, a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char result[612];

                int res = concatenate(result, 612, -5, "Creativity is intelligence having fun.- Albert Einstein", "Dont walk in front of me... I may not follow. Dont walk behind me... I may not lead. Walk beside me... just be my friend - Albert Camus", "It has become appallingly obvious that our technology has exceeded our humanity.  - Albert Einstein", "What is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison", "Depression is the inability to construct a future. - Rollo May");
                test_error(res == 1, "Funkcja concatenate() powinna zwrócić wartość 1, a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char result[612];
                int res = concatenate(result, -612, 5, "Creativity is intelligence having fun.- Albert Einstein", "Dont walk in front of me... I may not follow. Dont walk behind me... I may not lead. Walk beside me... just be my friend - Albert Camus", "It has become appallingly obvious that our technology has exceeded our humanity.  - Albert Einstein", "What is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison", "Depression is the inability to construct a future. - Rollo May");
                test_error(res == 1, "Funkcja concatenate() powinna zwrócić wartość 1, a zwróciła %d", res);


        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char result[612];
                int res = concatenate(result, 612, 0, "Creativity is intelligence having fun.- Albert Einstein", "Dont walk in front of me... I may not follow. Dont walk behind me... I may not lead. Walk beside me... just be my friend - Albert Camus", "It has become appallingly obvious that our technology has exceeded our humanity.  - Albert Einstein", "What is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison", "Depression is the inability to construct a future. - Rollo May");
                test_error(res == 1, "Funkcja concatenate() powinna zwrócić wartość 1, a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int res = concatenate(NULL, 612, -5, "Creativity is intelligence having fun.- Albert Einstein", "Dont walk in front of me... I may not follow. Dont walk behind me... I may not lead. Walk beside me... just be my friend - Albert Camus", "It has become appallingly obvious that our technology has exceeded our humanity.  - Albert Einstein", "What is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison", "Depression is the inability to construct a future. - Rollo May");
                test_error(res == 1, "Funkcja concatenate() powinna zwrócić wartość 1, a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji concatenate
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji concatenate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char result[612];

                int res = concatenate(result, 0, 5, "Creativity is intelligence having fun.- Albert Einstein", "Dont walk in front of me... I may not follow. Dont walk behind me... I may not lead. Walk beside me... just be my friend - Albert Camus", "It has become appallingly obvious that our technology has exceeded our humanity.  - Albert Einstein", "What is Oracle? A bunch of people. And all of our products were just ideas in the heads of those people - ideas that people typed into a computer, tested, and that turned out to be the best idea for a database or for a programming language. - Larry Ellison", "Depression is the inability to construct a future. - Rollo May");
                test_error(res == 1, "Funkcja concatenate() powinna zwrócić wartość 1, a zwróciła %d", res);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci - limit pamięci ustawiony na 0
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit pamięci ustawiony na 0", __LINE__);

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
//  Test 2: Reakcja na brak pamięci - limit pamięci ustawiony na 32
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit pamięci ustawiony na 32", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(32);
    
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
//  Test 3: Reakcja na brak pamięci - limit pamięci ustawiony na 4036
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit pamięci ustawiony na 4036", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4036);
    
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
//  Test 4: Reakcja na brak pamięci - limit pamięci ustawiony na 6038
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit pamięci ustawiony na 6038", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6038);
    
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
//  Test 5: Reakcja programu na ograniczoną pamięć, wystarczającą na wykonanie wszystkich operacji - limit pamięci ustawiony na 8040
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja programu na ograniczoną pamięć, wystarczającą na wykonanie wszystkich operacji - limit pamięci ustawiony na 8040", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(8040);
    
    //
    // -----------
    //
    
             printf("***START***\n");
             int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
             printf("\n***END***\n");
             test_error(ret_code == 0, "Funkcja main zakończyła się kodem %d a powinna 0", ret_code); 
         
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
            UTEST1, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST2, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST3, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST4, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST5, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST6, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST7, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST8, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST9, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST10, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST11, // Sprawdzanie poprawności działania funkcji concatenate
            UTEST12, // Sprawdzanie poprawności działania funkcji concatenate
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
            test_summary(12); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci - limit pamięci ustawiony na 0
            MTEST2, // Reakcja na brak pamięci - limit pamięci ustawiony na 32
            MTEST3, // Reakcja na brak pamięci - limit pamięci ustawiony na 4036
            MTEST4, // Reakcja na brak pamięci - limit pamięci ustawiony na 6038
            MTEST5, // Reakcja programu na ograniczoną pamięć, wystarczającą na wykonanie wszystkich operacji - limit pamięci ustawiony na 8040
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
            test_summary(5); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}