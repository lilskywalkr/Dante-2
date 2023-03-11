/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Słowa
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-04-09 12:53:25.020584
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
//  Test 1: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 8 bajtów
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 8 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(8);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {""};

                char **words = split_words("");

                if (!0)
                    test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        
                else
                {
                    test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        
        
                    test_error(*(words + 0) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(words);
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
//  Test 2: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 8 bajtów
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 8 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(8);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {""};

                char **words = split_words("                     .        ,              . -    ");

                if (!0)
                    test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        
                else
                {
                    test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 0; ++i)
                        test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        
        
                    test_error(*(words + 0) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(words);
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
//  Test 3: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 349 bajtów
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 349 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(349);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Never", "doubt", "that", "a", "small", "group", "of", "thoughtful", "committed", "citizens", "can", "change", "the", "world", "Indeed", "it", "is", "the", "only", "thing", "that", "ever", "has", "Margaret", "Mead"};

                char **words = split_words("Never doubt that a small group of thoughtful, committed, citizens can change the world. Indeed, it is the only thing that ever has. - Margaret Mead");

                if (!25)
                    test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        
                else
                {
                    test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 25; ++i)
                        test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        
        
                    test_error(*(words + 25) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(words);
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
//  Test 4: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 22 bajtów
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 22 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(22);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Fairy"};

                char **words = split_words("Fairy");

                if (!1)
                    test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        
                else
                {
                    test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 1; ++i)
                        test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        
        
                    test_error(*(words + 1) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(words);
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
//  Test 5: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 704 bajtów
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 704 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(704);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"A", "lie", "can", "travel", "half", "way", "around", "the", "world", "while", "the", "truth", "is", "putting", "on", "its", "shoes", "Mark", "Twain", "The", "way", "get", "started", "is", "to", "quit", "talking", "and", "begin", "doing", "Walt", "Disney", "The", "person", "be", "it", "gentleman", "or", "lady", "who", "has", "not", "pleasure", "in", "a", "good", "novel", "must", "be", "intolerably", "stupid", "Jane", "Austen"};

                char **words = split_words("A lie can travel half way around the world while the truth is putting on its shoes. - Mark Twain\n\"The way get started is to quit talking and begin doing.\" -Walt Disney\nThe person, be it gentleman or lady, who has not pleasure in a good novel, must be intolerably stupid. - Jane Austen");

                if (!53)
                    test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        
                else
                {
                    test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        
        
                    onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
        
                    for (int i = 0; i < 53; ++i)
                        test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        
        
                    test_error(*(words + 53) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        
        
                    destroy(words);
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
//  Test 6: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 337 bajtów
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 337 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(337);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Darkness", "cannot", "drive", "out", "darkness", "only", "light", "can", "do", "that", "Hate", "cannot", "drive", "out", "hate", "only", "love", "can", "do", "that", "Mart", "n", "Luther", "King", "Jr"};

                char input_text[] = "Darkness cannot drive out darkness: only light can do that. Hate cannot drive out hate: only love can do that. - Mart+n Luther King Jr.";

                input_text[117] = 1;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 25; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 25) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 7: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 312 bajtów
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 312 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(312);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Ye", "terday", "is", "history", "tomorrow", "is", "a", "mystery", "today", "is", "a", "gift", "of", "God", "which", "is", "why", "we", "call", "it", "the", "present", "Bil", "Keane"};

                char input_text[] = "Ye+terday is history, tomorrow is a mystery, today is a gift of God, which is why we call it the present. - Bil Keane";

                input_text[2] = 2;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 24; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 24) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 8: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(182);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Hardware", "The", "parts", "of", "a", "computer", "system", "that", "can", "be", "kicked", "Jeff", "Pesis"};

                char input_text[] = "Hardware:+The parts of a computer system that can be kicked. - Jeff Pesis";

                input_text[9] = 3;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 13) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 9: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 269 bajtów
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 269 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(269);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"This", "is", "why", "I", "loved", "technology", "if", "you", "used", "it", "right", "it", "ould", "give", "you", "power", "and", "privacy", "Cory", "Doctorow"};

                char input_text[] = "This is why I loved technology: if you used it right, it +ould give you power and privacy.-Cory Doctorow";

                input_text[57] = 4;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 20) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 10: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 218 bajtów
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 218 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(218);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Imagine", "your", "life", "is", "perfect", "in", "every", "respect", "what", "wou", "d", "it", "look", "like", "Brian", "Tracy"};

                char input_text[] = "Imagine your life is perfect in every respect; what wou+d it look like?- Brian Tracy";

                input_text[55] = 5;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 16; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 16) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 11: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 161 bajtów
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 161 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(161);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Whats", "meant", "to", "be", "w", "ll", "always", "find", "a", "way", "Trisha", "Yearwood"};

                char input_text[] = "Whats meant to be w+ll always find a way - Trisha Yearwood";

                input_text[19] = 6;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 12; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 12) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 12: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 257 bajtów
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 257 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(257);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"I", "invented", "the", "term", "Object", "Oriented", "and", "I", "can", "tell", "you", "I", "did", "not", "have", "C", "in", "mind", "Alan", "Kay"};

                char input_text[] = "I invented the term Object-Oriented+ and I can tell you I did not have C++ in mind. - Alan Kay";

                input_text[35] = 7;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 20) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 13: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 297 bajtów
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 297 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(297);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"By", "ar", "the", "greatest", "danger", "of", "Artificial", "Intelligence", "is", "that", "people", "conclude", "too", "early", "that", "they", "understand", "it", "Eliezer", "Yudkowsky"};

                char input_text[] = "By +ar, the greatest danger of Artificial Intelligence is that people conclude too early that they understand it. - Eliezer Yudkowsky";

                input_text[3] = 8;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 20) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 14: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 833 bajtów
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 833 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(833);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Nobody", "can", "predict", "the", "future", "You", "just", "have", "to", "give", "your", "all", "to", "the", "relationship", "youre", "in", "and", "do", "your", "best", "to", "take", "care", "of", "your", "partner", "communicate", "and", "giv", "them", "every", "last", "drop", "of", "love", "you", "have", "I", "think", "one", "of", "the", "most", "important", "things", "in", "a", "relationship", "is", "caring", "for", "your", "significant", "other", "through", "good", "times", "and", "bad", "Nick", "Cannon"};

                char input_text[] = "Nobody can predict the future. You just have to give your all to the relationship youre in and do your best to take care of your partner, communicate and giv+ them every last drop of love you have. I think one of the most important things in a relationship is caring for your significant other through good times and bad. - Nick Cannon";

                input_text[157] = 9;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 62; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 62) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 15: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 892 bajtów
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 892 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(892);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"When", "they", "first", "built", "the", "University", "of", "California", "at", "Irvine", "they", "just", "put", "the", "buildings", "in", "They", "did", "not", "put", "any", "sidewalks", "they", "just", "planted", "grass", "The", "next", "year", "they", "ame", "back", "and", "put", "the", "sidewalks", "where", "the", "trails", "were", "in", "the", "grass", "Perl", "is", "just", "that", "kind", "of", "language", "It", "is", "not", "designed", "from", "first", "principles", "Perl", "is", "those", "sidewalks", "in", "the", "grass", "Larry", "Wall"};

                char input_text[] = "When they first built the University of California at Irvine they just put the buildings in. They did not put any sidewalks, they just planted grass. The next year, they +ame back and put the sidewalks where the trails were in the grass. Perl is just that kind of language. It is not designed from first principles. Perl is those sidewalks in the grass. - Larry Wall";

                input_text[170] = 10;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 66; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 66) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 16: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 514 bajtów
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 514 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(514);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "system", "is", "that", "there", "is", "no", "system", "That", "doesnt", "mean", "we", "dont", "have", "process", "Apple", "is", "a", "very", "disciplined", "company", "and", "we", "have", "great", "processes", "But", "tha", "s", "not", "what", "its", "about", "Process", "makes", "you", "more", "efficient"};

                char input_text[] = "The system is that there is no system. That doesnt mean we dont have process. Apple is a very disciplined company, and we have great processes. But tha+s not what its about. Process makes you more efficient. - ";

                input_text[151] = 11;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 38; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 38) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 17: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 238 bajtów
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 238 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(238);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"I", "dont", "care", "if", "it", "works", "on", "your", "mac", "ine", "We", "are", "not", "shipping", "your", "machine", "Vidiu", "Platon"};

                char input_text[] = "I dont care if it works on your mac+ine! We are not shipping your machine! - Vidiu Platon.";

                input_text[35] = 12;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 18) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 18: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 283 bajtów
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 283 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(283);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"What", "you", "do", "makes", "a", "difference", "and", "you", "have", "to", "decide", "wha", "kind", "of", "difference", "you", "want", "to", "make", "Jane", "Goodall"};

                char input_text[] = "What you do makes a difference, and you have to decide wha+ kind of difference you want to make. - Jane Goodall";

                input_text[58] = 13;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 21; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 21) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 19: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 290 bajtów
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 290 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(290);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "new", "information", "technology", "Internet", "and", "e", "mail", "have", "prac", "ically", "eliminated", "the", "physical", "costs", "of", "communications", "Peter", "Drucker"};

                char input_text[] = "The new information technology... Internet and e-mail... have prac+ically eliminated the physical costs of communications. - Peter Drucker";

                input_text[66] = 14;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 19; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 19) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 20: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 882 bajtów
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 882 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(882);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Infuse", "your", "life", "with", "action", "Dont", "wait", "for", "it", "to", "happen", "Make", "it", "happen", "Make", "your", "own", "future", "Make", "your", "own", "hope", "Make", "your", "own", "love", "And", "whatever", "your", "beliefs", "honor", "your", "creator", "not", "by", "passively", "waiting", "for", "grace", "to", "come", "down", "from", "upon", "high", "but", "by", "doing", "what", "you", "can", "to", "make", "grace", "happen", "yourself", "rig", "t", "now", "right", "down", "here", "on", "Earth", "Bradley", "Whitford"};

                char input_text[] = "Infuse your life with action. Dont wait for it to happen. Make it happen. Make your own future. Make your own hope. Make your own love. And whatever your beliefs, honor your creator, not by passively waiting for grace to come down from upon high, but by doing what you can to make grace happen... yourself, rig+t now, right down here on Earth. - Bradley Whitford";

                input_text[310] = 15;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 66; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 66) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 21: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 545 bajtów
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 545 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(545);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"I", "believe", "in", "everything", "until", "ts", "disproved", "So", "I", "believe", "in", "fairies", "the", "myths", "dragons", "It", "all", "exists", "even", "if", "its", "in", "your", "mind", "Whos", "to", "say", "that", "dreams", "and", "nightmares", "arent", "as", "real", "as", "the", "here", "and", "now", "John", "Lennon"};

                char input_text[] = "I believe in everything until +ts disproved. So I believe in fairies, the myths, dragons. It all exists, even if its in your mind. Whos to say that dreams and nightmares arent as real as the here and now? - John Lennon";

                input_text[30] = 16;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 41; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 41) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 22: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 368 bajtów
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 368 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(368);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "trouble", "with", "having", "an", "open", "mind", "of", "course", "is", "that", "people", "will", "nsist", "on", "coming", "along", "and", "trying", "to", "put", "things", "in", "it", "Terry", "Pratchett", "Diggers"};

                char input_text[] = "The trouble with having an open mind, of course, is that people will +nsist on coming along and trying to put things in it. - Terry Pratchett, Diggers";

                input_text[69] = 17;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 27; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 27) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 23: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 343 bajtów
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 343 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(343);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Artificial", "intelligence", "is", "growing", "up", "fast", "as", "are", "robots", "whose", "facial", "expression", "can", "elicit", "empathy", "and", "make", "your", "mirror", "neurons", "quiver", "Diane", "Ackerman"};

                char input_text[] = "Artificial intelligence is growing up fast, as are robots whose facial expression+ can elicit empathy and make your mirror neurons quiver. - Diane Ackerman";

                input_text[81] = 18;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 23; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 23) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 24: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(182);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Do", "what", "you", "can", "with", "all", "you", "have", "wherever", "you", "are", "Theodore", "Roosevelt"};

                char input_text[] = "Do what you can with all you have, wherever you are+- Theodore Roosevelt";

                input_text[51] = 19;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 13) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 25: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 256 bajtów
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 256 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(256);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"You", "have", "power", "ver", "your", "mind", "not", "outside", "events", "Realize", "this", "and", "you", "will", "find", "strength", "Marcus", "Aurelius"};

                char input_text[] = "You have power +ver your mind - not outside events. Realize this, and you will find strength. - Marcus Aurelius";

                input_text[15] = 20;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 18) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 26: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 129 bajtów
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 129 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(129);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"So", "much", "te", "hnology", "so", "little", "talent", "Vernor", "Vinge"};

                char input_text[] = "So much te+hnology, so little talent.-Vernor Vinge";

                input_text[10] = 21;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 9) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 27: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 274 bajtów
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 274 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(274);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"How", "wonderful", "it", "is", "that", "nobody", "need", "wait", "a", "single", "mom", "nt", "before", "starting", "to", "improve", "the", "world", "Anne", "Frank"};

                char input_text[] = "How wonderful it is that nobody need wait a single mom+nt before starting to improve the world. - Anne Frank";

                input_text[54] = 22;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 20) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 28: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 130 bajtów
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 130 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(130);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"They", "dont", "make", "ugs", "like", "Bunny", "anymore", "Olav", "Mjelde"};

                char input_text[] = "They dont make +ugs like Bunny anymore. - Olav Mjelde.";

                input_text[15] = 23;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 9) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 29: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 451 bajtów
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 451 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(451);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Is", "the", "system", "going", "to", "flatten", "you", "out", "and", "deny", "you", "your", "humanity", "or", "are", "you", "going", "to", "be", "able", "to", "make", "use", "f", "the", "system", "to", "the", "attainment", "of", "human", "purposes", "Joseph", "Campbell"};

                char input_text[] = "Is the system going to flatten you out and deny you your humanity, or are you going to be able to make use +f the system to the attainment of human purposes? - Joseph Campbell";

                input_text[107] = 24;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 34; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 34) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 30: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 710 bajtów
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 710 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(710);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"You", "need", "to", "learn", "how", "to", "select", "your", "thoughts", "just", "the", "same", "way", "you", "select", "your", "clothes", "every", "day", "This", "is", "a", "power", "you", "can", "cultivate", "If", "you", "want", "to", "control", "things", "in", "your", "life", "so", "bad", "work", "on", "the", "mind", "Thats", "the", "only", "thing", "you", "should", "be", "trying", "to", "cont", "ol", "Elizabeth", "Gilbert"};

                char input_text[] = "You need to learn how to select your thoughts just the same way you select your clothes every day. This is a power you can cultivate. If you want to control things in your life so bad, work on the mind. Thats the only thing you should be trying to cont+ol. - Elizabeth Gilbert";

                input_text[252] = 25;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 54; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 54) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 31: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 232 bajtów
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 232 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(232);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"You", "dont", "have", "to", "be", "great", "to", "start", "but", "you", "have", "to", "start", "to", "be", "great", "Zig", "Ziglar"};

                char input_text[] = "You dont have to be great to start,+but you have to start to be great. - Zig Ziglar";

                input_text[35] = 26;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 18) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 32: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 155 bajtów
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 155 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(155);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Successful", "we", "ght", "loss", "takes", "programming", "not", "willpower", "Phil", "McGraw"};

                char input_text[] = "Successful we+ght loss takes programming, not willpower. - Phil McGraw";

                input_text[13] = 27;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 10; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 10) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 33: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 126 bajtów
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 126 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(126);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Programming", "is", "a", "f", "ur", "letter", "word", "Craig", "Bruce"};

                char input_text[] = "Programming is a f+ur-letter word. - Craig Bruce";

                input_text[18] = 28;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 9) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 34: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 229 bajtów
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 229 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(229);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"I", "like", "the", "dreams", "of", "the", "future", "be", "ter", "than", "the", "history", "of", "the", "past", "Thomas", "Jefferson"};

                char input_text[] = "I like the dreams of the future be+ter than the history of the past. - Thomas Jefferson";

                input_text[34] = 29;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 17) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 35: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 669 bajtów
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 669 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(669);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Simplicity", "patience", "compassion", "These", "three", "are", "your", "greatest", "treasures", "Simple", "in", "actions", "and", "thoughts", "you", "return", "to", "the", "source", "of", "being", "Patient", "with", "both", "friends", "and", "enemies", "you", "accord", "with", "the", "way", "things", "are", "Compassionate", "toward", "yours", "lf", "you", "reconcile", "all", "beings", "in", "the", "world", "Lao", "Tzu"};

                char input_text[] = "Simplicity, patience, compassion.These three are your greatest treasures.Simple in actions and thoughts, you return to the source of being.Patient with both friends and enemies,you accord with the way things are.Compassionate toward yours+lf,you reconcile all beings in the world. - Lao Tzu";

                input_text[238] = 30;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 47; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 47) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 36: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 282 bajtów
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 282 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(282);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Thats", "the", "thing", "about", "people", "who", "th", "nk", "they", "hate", "computers", "What", "they", "really", "hate", "is", "lousy", "programmers", "Larry", "Niven"};

                char input_text[] = "Thats the thing about people who th+nk they hate computers. What they really hate is lousy programmers. - Larry Niven";

                input_text[35] = 31;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 20) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 37: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 117 bajtów
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 117 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(117);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Programming", "is", "a", "four", "etter", "word", "Craig", "Bruce"};

                char input_text[] = "Programming is a four-+etter word. - Craig Bruce";

                input_text[22] = 32;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 8; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 8) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 38: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 194 bajtów
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 194 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(194);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"If", "you", "dont", "stand", "for", "something", "you", "will", "fall", "for", "anything", "Gordon", "A", "Eadie"};

                char input_text[] = "If you dont stand for something you will fall+for anything. - Gordon A. Eadie";

                input_text[45] = 33;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 14) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 39: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 205 bajtów
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 205 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(205);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Go", "to", "heaven", "for", "the", "climate", "and", "hell", "f", "r", "the", "company", "Benjamin", "Franklin", "Wade"};

                char input_text[] = "Go to heaven for the climate and hell f+r the company. - Benjamin Franklin Wade";

                input_text[39] = 34;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 15; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 15) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 40: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 465 bajtów
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 465 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(465);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Technology", "is", "nothing", "Whats", "important", "is", "that", "you", "have", "a", "fai", "h", "in", "people", "that", "theyre", "basically", "good", "and", "smart", "and", "if", "you", "give", "them", "tools", "theyll", "do", "wonderful", "things", "with", "them", "Steve", "Jobs"};

                char input_text[] = "Technology is nothing. Whats important is that you have a fai+h in people, that theyre basically good and smart, and if you give them tools, theyll do wonderful things with them.-Steve Jobs";

                input_text[61] = 35;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 34; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 34) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 41: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 332 bajtów
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 332 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(332);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "greatest", "achievement", "of", "humanity", "is", "not", "its", "works", "of", "art", "science", "or", "technology", "but", "the", "recognition", "of", "its", "own", "dysfunction", "Eckhart", "Tolle"};

                char input_text[] = "The greatest achievement of humanity is not its works of art, science, or technology, but the recognition of its own+dysfunction.-Eckhart Tolle";

                input_text[116] = 36;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 23; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 23) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 42: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 187 bajtów
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 187 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(187);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "past", "cannot", "be", "chang", "d", "The", "future", "is", "yet", "in", "your", "power", "Unknown"};

                char input_text[] = "The past cannot be chang+d. The future is yet in your power. - Unknown";

                input_text[24] = 37;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 14) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 43: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 242 bajtów
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 242 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(242);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Its", "not", "whether", "you", "get", "knocked", "down", "its", "whether", "you", "get", "up", "Inspirational", "Quote", "by", "Vince", "Lombardi"};

                char input_text[] = "Its not whether+you get knocked down, its whether you get up. - Inspirational Quote by Vince Lombardi";

                input_text[15] = 38;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 17) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 44: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 257 bajtów
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 257 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(257);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Measuring", "programming", "progress", "by", "lines", "of", "code", "is", "lik", "measuring", "aircraft", "building", "progress", "by", "weight", "Bill", "Gates"};

                char input_text[] = "Measuring programming progress by lines of code is lik+ measuring aircraft building progress by weight. - Bill Gates";

                input_text[54] = 39;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 17) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 45: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 483 bajtów
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 483 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(483);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"If", "McDonalds", "were", "run", "like", "a", "software", "company", "one", "out", "of", "every", "hundred", "Big", "Macs", "would", "give", "you", "food", "poisoning", "and", "the", "response", "would", "be", "Were", "sorry", "h", "res", "a", "coupon", "for", "two", "more", "Mark", "Minasi"};

                char input_text[] = "If McDonalds were run like a software company, one out of every hundred Big Macs would give you food poisoning, and the response would be, Were sorry, h+res a coupon for two more.  - Mark Minasi";

                input_text[152] = 40;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 36; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 36) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 46: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 224 bajtów
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 224 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(224);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"It", "has", "become", "appallingly", "obvious", "that", "our", "technology", "has", "exceeded", "our", "humanity", "Al", "ert", "Einstein"};

                char input_text[] = "It has become appallingly obvious that our technology has exceeded our humanity.  - Al+ert Einstein";

                input_text[86] = 41;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 15; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 15) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 47: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 126 bajtów
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 126 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(126);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Programming", "is", "a", "fo", "r", "letter", "word", "Craig", "Bruce"};

                char input_text[] = "Programming is a fo+r-letter word. - Craig Bruce";

                input_text[19] = 42;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 9) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 48: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 248 bajtów
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 248 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(248);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Knowing", "is", "not", "enough", "we", "must", "apply", "Wishing", "is", "not", "enough", "we", "must", "do", "Johann", "Wolfgang", "Von", "Goethe"};

                char input_text[] = "Knowing is not enough; we must apply. Wishing is not enough;+we must do.- Johann Wolfgang Von Goethe";

                input_text[60] = 43;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 18) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 49: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 251 bajtów
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 251 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(251);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"It", "is", "our", "choices", "Harry", "that", "show", "what", "we", "truly", "ar", "far", "more", "than", "our", "abilities", "J", "K", "Rowling"};

                char input_text[] = "It is our choices, Harry, that show what we truly ar+, far more than our abilities. - J.K. Rowling";

                input_text[52] = 44;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 19; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 19) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 50: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 309 bajtów
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 309 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(309);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"One", "machine", "can", "do", "the", "work", "of", "fifty", "ordinary", "men", "No", "machine", "can", "do", "the", "work", "of", "one", "extraor", "inary", "man", "Elbert", "Hubbard"};

                char input_text[] = "One machine can do the work of fifty ordinary men.  No machine can do the work of one extraor+inary man.  - Elbert Hubbard";

                input_text[93] = 45;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 23; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 23) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 51: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 273 bajtów
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 273 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(273);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "most", "important", "property", "of", "a", "program", "is", "whethe", "it", "accomplishes", "the", "intention", "of", "its", "user", "C", "A", "R", "Hoare"};

                char input_text[] = "The most important property of a program is whethe+ it accomplishes the intention of its user. - C.A.R. Hoare";

                input_text[50] = 46;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 20) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 52: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 163 bajtów
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 163 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(163);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Always", "forgive", "your", "enemies", "nothing", "annoys", "them", "so", "much", "scar", "Wilde"};

                char input_text[] = "Always forgive your enemies; nothing annoys them so much. - +scar Wilde";

                input_text[60] = 47;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 11; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 11) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 53: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 126 bajtów
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 126 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(126);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Crea", "ivity", "is", "intelligence", "having", "fun", "Albert", "Einstein"};

                char input_text[] = "Crea+ivity is intelligence having fun.- Albert Einstein";

                input_text[4] = 48;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 8; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 8) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 54: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 164 bajtów
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 164 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(164);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Without", "eviation", "from", "the", "norm", "progress", "is", "not", "possible", "Frank", "Zappa"};

                char input_text[] = "Without +eviation from the norm, progress is not possible. - Frank Zappa";

                input_text[8] = 49;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 11; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 11) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 55: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 120 bajtów
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 120 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(120);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "unexamined", "life", "is", "not", "worth", "iving", "Socrates"};

                char input_text[] = "The unexamined life is not worth +iving. - Socrates";

                input_text[33] = 50;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 8; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 8) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 56: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 369 bajtów
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 369 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(369);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "trouble", "with", "having", "an", "open", "mind", "of", "course", "is", "that", "people", "will", "insist", "on", "coming", "along", "and", "trying", "to", "put", "things", "in", "it", "Terry", "Pratchett", "Diggers"};

                char input_text[] = "The trouble with having an open mind, of course, is that people will insist on coming along and trying to put+things in it. - Terry Pratchett, Diggers";

                input_text[109] = 51;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 27; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 27) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 57: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 237 bajtów
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 237 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(237);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Technology", "the", "knack", "of", "so", "arranging", "the", "world", "that", "we", "dont", "have", "to", "experience", "it", "Max", "Frisch"};

                char input_text[] = "Technology... the knack of so+arranging the world that we dont have to experience it.  - Max Frisch";

                input_text[29] = 52;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 17) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 58: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 196 bajtów
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 196 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(196);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Computer", "programming", "has", "always", "been", "a", "self", "taught", "maverick", "occ", "pation", "Ellen", "Ullman"};

                char input_text[] = "Computer programming has always been a self-taught, maverick occ+pation. - Ellen Ullman";

                input_text[64] = 53;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 13) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 59: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 566 bajtów
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 566 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(566);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Ou", "intuition", "about", "the", "future", "is", "linear", "But", "the", "reality", "of", "information", "technology", "is", "exponential", "and", "that", "makes", "a", "profound", "difference", "If", "I", "take", "steps", "linearly", "I", "get", "to", "If", "I", "take", "steps", "exponentially", "I", "get", "to", "a", "billion", "Ray", "Kurzweil"};

                char input_text[] = "Ou+ intuition about the future is linear. But the reality of information technology is exponential, and that makes a profound difference. If I take 30 steps linearly, I get to 30. If I take 30 steps exponentially, I get to a billion. - Ray Kurzweil";

                input_text[2] = 54;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 41; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 41) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 60: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 197 bajtów
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 197 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(197);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"In", "theory", "theor", "and", "practice", "are", "the", "same", "In", "practice", "theyre", "not", "Yoggi", "Berra"};

                char input_text[] = "In theory, theor+ and practice are the same. In practice, theyre not. - Yoggi Berra";

                input_text[16] = 55;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 14) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 61: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 257 bajtów
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 257 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(257);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Understanding", "is", "the", "first", "step", "to", "acceptance", "and", "only", "with", "acceptance", "can", "there", "be", "recovery", "J", "K", "Rowling"};

                char input_text[] = "Understanding is the first step to acceptance+ and only with acceptance can there be recovery. - J.K. Rowling";

                input_text[45] = 56;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 18) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 62: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 340 bajtów
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 340 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(340);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"When", "someone", "says", "I", "want", "a", "programmi", "g", "language", "in", "which", "I", "need", "only", "say", "what", "I", "wish", "done", "give", "him", "a", "lollipop", "Alan", "J", "Perlis"};

                char input_text[] = "When someone says: I want a programmi+g language in which I need only say what I wish done, give him a lollipop. - Alan J. Perlis";

                input_text[37] = 57;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 26; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 26) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 63: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 560 bajtów
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 560 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(560);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "first", "rule", "of", "any", "technology", "used", "in", "a", "business", "is", "that", "automation", "applied", "to", "an", "efficient", "operat", "on", "will", "magnify", "the", "efficiency", "The", "second", "is", "that", "automation", "applied", "to", "an", "inefficient", "operation", "will", "magnify", "the", "inefficiency", "Bill", "Gates"};

                char input_text[] = "The first rule of any technology used in a business is that automation applied to an efficient operat+on will magnify the efficiency. The second is that automation applied to an inefficient operation will magnify the inefficiency. - Bill Gates";

                input_text[101] = 58;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 39; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 39) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 64: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 306 bajtów
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 306 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(306);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"I", "may", "not", "have", "gone", "where", "I", "intended", "to", "go", "but", "I", "think", "I", "have", "ended", "up", "where", "I", "needed", "to", "be", "Douglas", "Adams"};

                char input_text[] = "I may not have gone where I+intended to go, but I think I have ended up where I needed to be. - Douglas Adams";

                input_text[27] = 59;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 24; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 24) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 65: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 323 bajtów
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 323 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(323);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "ultimate", "promise", "of", "technology", "is", "to", "make", "us", "master", "f", "a", "world", "that", "we", "command", "by", "the", "push", "of", "a", "button", "Volker", "Grassmuck"};

                char input_text[] = "The ultimate promise of technology is to make us master +f a world that we command by the push of a button.-Volker Grassmuck";

                input_text[56] = 60;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 24; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 24) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 66: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 161 bajtów
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 161 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(161);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Do", "t", "let", "yesterday", "take", "up", "too", "much", "of", "today", "Will", "Rogers"};

                char input_text[] = "Do+t let yesterday take up too much of today. -Will Rogers";

                input_text[2] = 61;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 12; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 12) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 67: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(182);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Reading", "is", "to", "the", "mind", "as", "exercise", "is", "to", "t", "e", "body", "Brian", "Tracy"};

                char input_text[] = "Reading is to the mind, as exercise is to t+e body.- Brian Tracy";

                input_text[43] = 62;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 14) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 68: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 241 bajtów
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 241 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(241);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Insanity", "is", "doing", "the", "same", "thing", "over", "and", "over", "again", "but", "expecting", "different", "results", "Narcotics", "Anonymous"};

                char input_text[] = "Insanity is doing the same thing, over and over again, but+expecting different results. - Narcotics Anonymous";

                input_text[58] = 63;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 16; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 16) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 69: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(182);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Hardware", "The", "parts", "of", "a", "computer", "system", "that", "can", "be", "kicked", "Jeff", "Pesis"};

                char input_text[] = "Hardware: The parts of a+computer system that can be kicked. - Jeff Pesis";

                input_text[24] = 64;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 13; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 13) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 70: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 127 bajtów
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 127 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(127);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Love", "is", "the", "absence", "of", "judgment", "Dalai", "Lama", "XIV"};

                char input_text[] = "Love is the absence of judgment+ - Dalai Lama XIV";

                input_text[31] = 91;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 9; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 9) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 71: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 338 bajtów
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 338 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(338);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"We", "are", "look", "ng", "at", "a", "society", "increasingly", "dependent", "on", "machines", "yet", "decreasingly", "capable", "of", "making", "or", "even", "using", "them", "effectively", "Douglas", "Rushkoff"};

                char input_text[] = "We are look+ng at a society increasingly dependent on machines, yet decreasingly capable of making or even using them effectively. - Douglas Rushkoff";

                input_text[11] = 92;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 23; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 23) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 72: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 312 bajtów
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 312 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(312);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"The", "truth", "Dumbledore", "sighed", "It", "is", "a", "beautiful", "and", "terrible", "thing", "and", "should", "therefore", "be", "treated", "with", "great", "caution", "J", "K", "Rowling"};

                char input_text[] = "The truth. Dumbledore sighed. It is+a beautiful and terrible thing, and should therefore be treated with great caution. - J.K. Rowling";

                input_text[35] = 93;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 22; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 22) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 73: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 301 bajtów
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 301 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(301);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Pythons", "drop", "in", "replacement", "for", "BASIC", "in", "the", "sense", "that", "Optimus", "Prime", "is", "a", "drop", "in", "replacement", "for", "a", "truck", "Cory", "Dodt"};

                char input_text[] = "Pythons + drop-in replacement for BASIC in the sense that Optimus Prime is a drop-in replacement for a truck. - Cory Dodt";

                input_text[8] = 94;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 22; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 22) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 74: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 226 bajtów
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 226 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(226);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"To", "ive", "is", "the", "rarest", "thing", "in", "the", "world", "Most", "people", "exist", "that", "is", "all", "Oscar", "Wilde"};

                char input_text[] = "To +ive is the rarest thing in the world. Most people exist, that is all. - Oscar Wilde";

                input_text[3] = 95;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 17; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 17) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 75: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 191 bajtów
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 191 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(191);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"We", "may", "encounter", "many", "de", "eats", "but", "we", "must", "not", "be", "defeated", "Maya", "Angelou"};

                char input_text[] = "We may encounter many de+eats but we must not be defeated.- Maya Angelou";

                input_text[24] = 96;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 14; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 14) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 76: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 246 bajtów
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 246 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(246);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Technology", "presumes", "theres", "ju", "t", "one", "right", "way", "to", "do", "things", "and", "there", "never", "is", "Robert", "M", "Pirsig"};

                char input_text[] = "Technology presumes theres ju+t one right way to do things and there never is.  - Robert M. Pirsig";

                input_text[29] = 123;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 18; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 18) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 77: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 266 bajtów
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 266 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(266);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Walking", "on", "water", "and", "developing", "softw", "re", "from", "a", "specification", "are", "easy", "if", "both", "are", "frozen", "Edward", "V", "Berard"};

                char input_text[] = "Walking on water and developing softw+re from a specification are easy if both are frozen. - Edward V Berard";

                input_text[37] = 124;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 19; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 19) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 78: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 288 bajtów
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 288 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(288);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Man", "the", "living", "creature", "the", "creating", "individual", "is", "always", "more", "important", "than", "any", "established", "style", "or", "sy", "tem", "Bruce", "Lee"};

                char input_text[] = "Man, the living creature, the creating individual, is always more important than any established style or sy+tem. - Bruce Lee";

                input_text[108] = 125;

                char **words = split_words(input_text);

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 20; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 20) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 79: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 0 bajtów
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 80: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 232 bajtów
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 232 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(232);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 81: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 237 bajtów
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 237 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(237);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 82: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 245 bajtów
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 245 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(245);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 83: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 248 bajtów
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 248 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(248);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 84: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 250 bajtów
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 250 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(250);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 85: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 256 bajtów
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 256 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(256);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 86: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 261 bajtów
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 261 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(261);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 87: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 265 bajtów
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 265 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(265);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 88: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 270 bajtów
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 270 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(270);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 89: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 276 bajtów
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 276 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(276);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 90: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 282 bajtów
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 282 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(282);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 91: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 286 bajtów
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 286 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(286);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 92: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 293 bajtów
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 293 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(293);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 93: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 297 bajtów
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 297 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(297);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 94: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 302 bajtów
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 302 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(302);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 95: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 305 bajtów
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 305 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(305);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 96: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 312 bajtów
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 312 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(312);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 97: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 320 bajtów
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 320 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(320);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 98: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 325 bajtów
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 325 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(325);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 99: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 327 bajtów
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 327 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(327);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 100: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 337 bajtów
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 337 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(337);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 101: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 344 bajtów
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 344 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(344);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 102: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 347 bajtów
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 347 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(347);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 103: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 351 bajtów
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 351 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(351);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 104: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 353 bajtów
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 353 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(353);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 105: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 361 bajtów
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 361 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(361);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 106: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 365 bajtów
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 365 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(365);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 107: Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 372 bajtów
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 372 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(372);
    
    //
    // -----------
    //
    

                char **words = split_words("Keep looking up! I learn from the past, dream about the future and look up. Theres nothing like a beautiful sunset to end a healthy day. - Rachel Boston");

                test_error(words == NULL, "Funkcja split_words() powinna zwrócić NULL");        

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
//  Test 108: Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 27 bajtów
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 27 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(27);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Technology"};
                const char *expected_sorted_array[] = {"Technology"};

                char **words = split_words("Technology");

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 1; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 1) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int res = sort_words(words);

                test_error(res == 0, "Funkcja sort_words() powinna zwrócić 0, a zwróciła %d", res);        
                
                for (int i = 0; i < 1; ++i)
                    test_error(strcmp(expected_sorted_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_sorted_array[i], words[i]);        

                test_error(*(words + 1) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 109: Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 36 bajtów
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 36 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(36);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"Be", "yourself"};
                const char *expected_sorted_array[] = {"Be", "yourself"};

                char **words = split_words("Be yourself");

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 2; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 2) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int res = sort_words(words);

                test_error(res == 0, "Funkcja sort_words() powinna zwrócić 0, a zwróciła %d", res);        
                
                for (int i = 0; i < 2; ++i)
                    test_error(strcmp(expected_sorted_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_sorted_array[i], words[i]);        

                test_error(*(words + 2) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 110: Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 299 bajtów
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 299 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(299);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"I", "absolutely", "don", "t", "think", "a", "sentient", "artificial", "intelligence", "is", "going", "to", "wage", "war", "against", "the", "human", "species", "Daniel", "H", "Wilson"};
                const char *expected_sorted_array[] = {"Daniel", "H", "I", "Wilson", "a", "absolutely", "against", "artificial", "don", "going", "human", "intelligence", "is", "sentient", "species", "t", "the", "think", "to", "wage", "war"};

                char **words = split_words("I absolutely don\'t think a sentient artificial intelligence is going to wage war against the human species. - Daniel H. Wilson");

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 21; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 21) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int res = sort_words(words);

                test_error(res == 0, "Funkcja sort_words() powinna zwrócić 0, a zwróciła %d", res);        
                
                for (int i = 0; i < 21; ++i)
                    test_error(strcmp(expected_sorted_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_sorted_array[i], words[i]);        

                test_error(*(words + 21) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 111: Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 2688 bajtów
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 2688 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2688);
    
    //
    // -----------
    //
    

                const char *expected_array[] = {"You", "can", "t", "connect", "the", "dots", "looking", "forward", "you", "can", "only", "connect", "them", "looking", "backwards", "So", "you", "have", "to", "trust", "that", "the", "dots", "will", "somehow", "connect", "in", "your", "future", "You", "have", "to", "trust", "in", "something", "your", "gut", "destiny", "life", "karma", "whatever", "This", "approach", "has", "never", "let", "me", "down", "and", "it", "has", "made", "all", "the", "difference", "in", "my", "life", "Steve", "Jobs", "Change", "is", "the", "law", "of", "life", "And", "those", "who", "look", "only", "to", "the", "past", "or", "present", "are", "certain", "to", "miss", "the", "future", "John", "F", "Kennedy", "Debugging", "is", "twice", "as", "hard", "as", "writing", "the", "code", "in", "the", "first", "place", "Therefore", "if", "you", "write", "the", "code", "as", "cleverly", "as", "possible", "you", "are", "by", "definition", "not", "smart", "enough", "to", "debug", "it", "Brian", "W", "Kernighan", "Keep", "looking", "up", "I", "learn", "from", "the", "past", "dream", "about", "the", "future", "and", "look", "up", "There", "s", "nothing", "like", "a", "beautiful", "sunset", "to", "end", "a", "healthy", "day", "Rachel", "Boston", "You", "need", "to", "learn", "how", "to", "select", "your", "thoughts", "just", "the", "same", "way", "you", "select", "your", "clothes", "every", "day", "This", "is", "a", "power", "you", "can", "cultivate", "If", "you", "want", "to", "control", "things", "in", "your", "life", "so", "bad", "work", "on", "the", "mind", "That", "s", "the", "only", "thing", "you", "should", "be", "trying", "to", "control", "Elizabeth", "Gilbert"};
                const char *expected_sorted_array[] = {"And", "Boston", "Brian", "Change", "Debugging", "Elizabeth", "F", "Gilbert", "I", "If", "Jobs", "John", "Keep", "Kennedy", "Kernighan", "Rachel", "So", "Steve", "That", "There", "Therefore", "This", "This", "W", "You", "You", "You", "a", "a", "a", "about", "all", "and", "and", "approach", "are", "are", "as", "as", "as", "as", "backwards", "bad", "be", "beautiful", "by", "can", "can", "can", "certain", "cleverly", "clothes", "code", "code", "connect", "connect", "connect", "control", "control", "cultivate", "day", "day", "debug", "definition", "destiny", "difference", "dots", "dots", "down", "dream", "end", "enough", "every", "first", "forward", "from", "future", "future", "future", "gut", "hard", "has", "has", "have", "have", "healthy", "how", "if", "in", "in", "in", "in", "in", "is", "is", "is", "it", "it", "just", "karma", "law", "learn", "learn", "let", "life", "life", "life", "life", "like", "look", "look", "looking", "looking", "looking", "made", "me", "mind", "miss", "my", "need", "never", "not", "nothing", "of", "on", "only", "only", "only", "or", "past", "past", "place", "possible", "power", "present", "s", "s", "same", "select", "select", "should", "smart", "so", "somehow", "something", "sunset", "t", "that", "the", "the", "the", "the", "the", "the", "the", "the", "the", "the", "the", "the", "the", "the", "them", "thing", "things", "those", "thoughts", "to", "to", "to", "to", "to", "to", "to", "to", "to", "to", "trust", "trust", "trying", "twice", "up", "up", "want", "way", "whatever", "who", "will", "work", "write", "writing", "you", "you", "you", "you", "you", "you", "you", "you", "your", "your", "your", "your", "your"};

                char **words = split_words("You can\'t connect the dots looking forward; you can only connect them looking backwards. So you have to trust that the dots will somehow connect in your future. You have to trust in something - your gut, destiny, life, karma, whatever. This approach has never let me down, and it has made all the difference in my life. - Steve Jobs\nChange is the law of life. And those who look only to the past or present are certain to miss the future. - John F. Kennedy\n\"Debugging is twice as hard as writing the code in the first place. Therefore, if you write the code as cleverly as possible, you are, by definition, not smart enough to debug it.\" - Brian W. Kernighan.\nKeep looking up! I learn from the past, dream about the future and look up. There\'s nothing like a beautiful sunset to end a healthy day. - Rachel Boston\nYou need to learn how to select your thoughts just the same way you select your clothes every day. This is a power you can cultivate. If you want to control things in your life so bad, work on the mind. That\'s the only thing you should be trying to control. - Elizabeth Gilbert");

                test_error(words != NULL, "Funkcja split_words() powinna zwrócić adres przydzielonej pamięci, a zwróciła NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                for (int i = 0; i < 204; ++i)
                    test_error(strcmp(expected_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_array[i], words[i]);        

                test_error(*(words + 204) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                onerror_terminate(); // przerwanie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                int res = sort_words(words);

                test_error(res == 0, "Funkcja sort_words() powinna zwrócić 0, a zwróciła %d", res);        
                
                for (int i = 0; i < 204; ++i)
                    test_error(strcmp(expected_sorted_array[i], words[i]) == 0, "Funkcja split_words() niepoprawnie podzieliła wyrazy, pod indeksem %d powinno być %s, a jest %s", i, expected_sorted_array[i], words[i]);        

                test_error(*(words + 204) == NULL, "Funkcja split_words() powinna przypisać na końcu tablicy wartość NULL");        

                destroy(words);

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
//  Test 112: Sprawdzanie poprawności działania funkcji sort_words
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji sort_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int res = sort_words(NULL);

            test_error(res == 1, "Funkcja sort_words() powinna zwrócić 1, a zwróciła %d", res);        

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 113: Sprawdzanie poprawności działania funkcji sort_words
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji sort_words", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char **words = NULL;

            int res = sort_words(words);

            test_error(res == 1, "Funkcja sort_words() powinna zwrócić 1, a zwróciła %d", res);        

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci; limit ustawiono na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci; limit ustawiono na 0 bajtów", __LINE__);

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
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Reakcja na brak pamięci; limit ustawiono na 1000 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci; limit ustawiono na 1000 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1000);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Reakcja na brak pamięci; limit ustawiono na 2120 bajtów
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci; limit ustawiono na 2120 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2120);
    
    //
    // -----------
    //
    
                printf("***START***\n");
                int ret_code = rdebug_call_main(tested_main, argc, argv, envp);
                printf("\n***END***\n");
                test_error(ret_code == 8, "Funkcja main zakończyła się kodem %d a powinna 8", ret_code);
                test_no_heap_leakage();
            
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
            UTEST1, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 8 bajtów
            UTEST2, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 8 bajtów
            UTEST3, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 349 bajtów
            UTEST4, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 22 bajtów
            UTEST5, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 704 bajtów
            UTEST6, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 337 bajtów
            UTEST7, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 312 bajtów
            UTEST8, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów
            UTEST9, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 269 bajtów
            UTEST10, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 218 bajtów
            UTEST11, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 161 bajtów
            UTEST12, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 257 bajtów
            UTEST13, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 297 bajtów
            UTEST14, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 833 bajtów
            UTEST15, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 892 bajtów
            UTEST16, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 514 bajtów
            UTEST17, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 238 bajtów
            UTEST18, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 283 bajtów
            UTEST19, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 290 bajtów
            UTEST20, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 882 bajtów
            UTEST21, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 545 bajtów
            UTEST22, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 368 bajtów
            UTEST23, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 343 bajtów
            UTEST24, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów
            UTEST25, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 256 bajtów
            UTEST26, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 129 bajtów
            UTEST27, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 274 bajtów
            UTEST28, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 130 bajtów
            UTEST29, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 451 bajtów
            UTEST30, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 710 bajtów
            UTEST31, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 232 bajtów
            UTEST32, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 155 bajtów
            UTEST33, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 126 bajtów
            UTEST34, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 229 bajtów
            UTEST35, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 669 bajtów
            UTEST36, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 282 bajtów
            UTEST37, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 117 bajtów
            UTEST38, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 194 bajtów
            UTEST39, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 205 bajtów
            UTEST40, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 465 bajtów
            UTEST41, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 332 bajtów
            UTEST42, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 187 bajtów
            UTEST43, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 242 bajtów
            UTEST44, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 257 bajtów
            UTEST45, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 483 bajtów
            UTEST46, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 224 bajtów
            UTEST47, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 126 bajtów
            UTEST48, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 248 bajtów
            UTEST49, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 251 bajtów
            UTEST50, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 309 bajtów
            UTEST51, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 273 bajtów
            UTEST52, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 163 bajtów
            UTEST53, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 126 bajtów
            UTEST54, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 164 bajtów
            UTEST55, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 120 bajtów
            UTEST56, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 369 bajtów
            UTEST57, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 237 bajtów
            UTEST58, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 196 bajtów
            UTEST59, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 566 bajtów
            UTEST60, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 197 bajtów
            UTEST61, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 257 bajtów
            UTEST62, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 340 bajtów
            UTEST63, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 560 bajtów
            UTEST64, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 306 bajtów
            UTEST65, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 323 bajtów
            UTEST66, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 161 bajtów
            UTEST67, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów
            UTEST68, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 241 bajtów
            UTEST69, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 182 bajtów
            UTEST70, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 127 bajtów
            UTEST71, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 338 bajtów
            UTEST72, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 312 bajtów
            UTEST73, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 301 bajtów
            UTEST74, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 226 bajtów
            UTEST75, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 191 bajtów
            UTEST76, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 246 bajtów
            UTEST77, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 266 bajtów
            UTEST78, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 288 bajtów
            UTEST79, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 0 bajtów
            UTEST80, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 232 bajtów
            UTEST81, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 237 bajtów
            UTEST82, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 245 bajtów
            UTEST83, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 248 bajtów
            UTEST84, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 250 bajtów
            UTEST85, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 256 bajtów
            UTEST86, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 261 bajtów
            UTEST87, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 265 bajtów
            UTEST88, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 270 bajtów
            UTEST89, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 276 bajtów
            UTEST90, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 282 bajtów
            UTEST91, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 286 bajtów
            UTEST92, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 293 bajtów
            UTEST93, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 297 bajtów
            UTEST94, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 302 bajtów
            UTEST95, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 305 bajtów
            UTEST96, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 312 bajtów
            UTEST97, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 320 bajtów
            UTEST98, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 325 bajtów
            UTEST99, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 327 bajtów
            UTEST100, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 337 bajtów
            UTEST101, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 344 bajtów
            UTEST102, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 347 bajtów
            UTEST103, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 351 bajtów
            UTEST104, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 353 bajtów
            UTEST105, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 361 bajtów
            UTEST106, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 365 bajtów
            UTEST107, // Sprawdzanie poprawności działania funkcji split_words - limit pamięci ustawiony na 372 bajtów
            UTEST108, // Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 27 bajtów
            UTEST109, // Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 36 bajtów
            UTEST110, // Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 299 bajtów
            UTEST111, // Sprawdzanie poprawności działania funkcji sort_words - limit pamięci ustawiony na 2688 bajtów
            UTEST112, // Sprawdzanie poprawności działania funkcji sort_words
            UTEST113, // Sprawdzanie poprawności działania funkcji sort_words
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
            test_summary(113); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci; limit ustawiono na 0 bajtów
            MTEST2, // Reakcja na brak pamięci; limit ustawiono na 1000 bajtów
            MTEST3, // Reakcja na brak pamięci; limit ustawiono na 2120 bajtów
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
            test_summary(3); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}