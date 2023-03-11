/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Wejście / wyjście
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-15 13:39:12.891518
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
            
                int x, y;
            };
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 3;
                    
                    printf("----START----");
                    int res = my_printf("%d", 870);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 3, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 4;
                    
                    printf("----START----");
                    int res = my_printf("%d", -131);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 4, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 1;
                    
                    printf("----START----");
                    int res = my_printf("%d", 0);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 1, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 10;
                    
                    printf("----START----");
                    int res = my_printf("%d", 1460296396);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 10, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 9;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ 910, 886 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 9, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 11;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ -786, -447 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 11, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 8;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ 0, -590 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 8, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 8;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ -927, 0 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 8, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 24;
                    
                    printf("----START----");
                    int res = my_printf("%p", (struct point_t){ -1485426883, -725170198 });
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 24, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 9;
                    
                    printf("----START----");
                    int res = my_printf("%f", 660.9209741996549);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 9, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 10;
                    
                    printf("----START----");
                    int res = my_printf("%f", -116.1374532183228);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 10, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 7;
                    
                    printf("----START----");
                    int res = my_printf("%f", 0);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 7, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 15;
                    
                    printf("----START----");
                    int res = my_printf("%f", 322123194.9885721);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 15, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 9;
                    
                    printf("----START----");
                    int res = my_printf("%f", -76.0009);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 9, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 218;
                    
                    printf("----START----");
                    int res = my_printf("%s", "Programming today is a race between software engineers striving to build bigger and better idiot-proof programs, and the Universe trying to produce bigger and better idiots. So far, the Universe is winning. - Rick Cook");
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 218, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 620;
                    
                    printf("----START----");
                    int res = my_printf("%s", "Things work out best for those who make the best of how things work out. - Positive Quote by John Wooden\nYouve baked a really lovely cake, but then youve used dog shit for frosting. - Steve Jobs\nMan is a slow, sloppy and brilliant thinker; the machine is fast, accurate and stupid.  - William M. Kelly\nIt is our choices, Harry, that show what we truly are, far more than our abilities. - J.K. Rowling\nIt has become appallingly obvious that our technology has exceeded our humanity.-Albert Einstein\nObject-oriented programming is an exceptionally bad idea which could only have originated in California. - Edsger Dijkstra");
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 620, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 244;
                    
                    printf("----START----");
                    int res = my_printf("%s %d %s", "It is not a lack of love, but a lack of friendship that makes unhappy marriages. - Friedrich Nietzsche", -285, "Forget artificial intelligence - in the brave new world of big data, its artificial idiocy we should be looking out for. - Tom Chatfield");
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 244, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 296;
                    
                    printf("----START----");
                    int res = my_printf("%s %d %s %d %p %p %d %s %d %d ", "You talk when you cease to be at peace with your thoughts. - Kahlil Gibran", -58, "I am not pretty. I am not beautiful. I am as radiant as the sun. - Suzanne Collins", -73, (struct point_t){ -79, 55 }, (struct point_t){ 81, -27 }, 41, "What you lack in talent can be made up with desire, hustle and giving 110% all the time.- Don Zimmer", -47, -13);
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 296, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji my_printf
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji my_printf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
            
                    int expected_result = 4827;
                    
                    printf("----START----");
                    int res = my_printf("%d %d %d %d %p %s %p %p %s %p %s %s %d %s %p %p %p %s %d %p %s %p %s %d %d %s %s %s %p %p %d %p %d %s %s %p %p %s %d %p %p %d %p %p %p %s %s %s %p %p %d %p %s %p %s %d %p %s %d %s %p %d %d %s %s %d %s %d %d %d %s %s %p %s %p %p %p %s %p %d %p %s %s %s %p %d %p %s %s %s %d %p %d %s %p %d %s %d %d %s ", 52, 7, 41, -43, (struct point_t){ 24, -78 }, "Forget artificial intelligence - in the brave new world of big data, its artificial idiocy we should be looking out for. - Tom Chatfield", (struct point_t){ 7, -15 }, (struct point_t){ 62, -61 }, "Do you want to know who you are? Dont ask. Act! Action will delineate and define you. - Thomas Jefferson", (struct point_t){ 38, -40 }, "Talk is cheap. Show me the code. - Linus Torvalds", "Reading is to the mind, as exercise is to the body.- Brian Tracy", -37, "A friend is someone who knows all about you and still loves you. - Elbert Hubbard", (struct point_t){ 85, 73 }, (struct point_t){ -16, -4 }, (struct point_t){ -22, -31 }, "If computers get too powerful, we can organize them into committees.  Thatll do them in.  - Author Unknown", 86, (struct point_t){ -99, -23 }, "Technology is a useful servant but a dangerous master.-Christian Lous Lange", (struct point_t){ 15, -89 }, "If youre reading this...Congratulations, youre alive.If thats not something to smile about,then I dont know what is. - Chad Sugg", 3, 71, "Darkness cannot drive out darkness: only light can do that. Hate cannot drive out hate: only love can do that. - Martin Luther King Jr.", "Outside of a dog, a book is mans best friend. Inside of a dog its too dark to read. - Groucho Marx", "A C program is like a fast dance on a newly waxed dance floor by people carrying razors. - Waldi Ravens.", (struct point_t){ -94, 55 }, (struct point_t){ 12, 37 }, -92, (struct point_t){ 44, 75 }, -40, "Be who you are and say what you feel, because those who mind dont matter, and those who matter dont mind. - Bernard M. Baruch", "Do one thing every day that scares you. - Eleanor Roosevelt", (struct point_t){ 58, 47 }, (struct point_t){ -92, -18 }, "I like nonsense, it wakes up the brain cells. Fantasy is a necessary ingredient in living. - Dr. Seuss", 8, (struct point_t){ 10, -32 }, (struct point_t){ 42, 98 }, -55, (struct point_t){ -49, 21 }, (struct point_t){ 11, -62 }, (struct point_t){ -44, 57 }, "Successful weight loss takes programming, not willpower. - Phil McGraw", "Dont walk in front of me... I may not follow. Dont walk behind me... I may not lead. Walk beside me... just be my friend - Albert Camus", "Dont let yesterday take up too much of today. -Will Rogers", (struct point_t){ -81, -37 }, (struct point_t){ 76, -31 }, -56, (struct point_t){ -60, -32 }, "Artificial intelligence is one of 50 things that Watson does. There is also machine learning, text-to-speech, speech-to-text, and different analytical engines - theyre like little Lego bricks. You can put intelligence in any product or any process you have. - Ginni Rometty", (struct point_t){ 51, -70 }, "Security is mostly a superstition. Life is either a daring adventure or nothing.- Helen Keller", -100, (struct point_t){ -33, 43 }, "For instance, on the planet Earth, man had always assumed that he was more intelligent than dolphins because he had achieved so much - the wheel, New York, wars and so on - whilst all the dolphins had ever done was muck about in the water having a good time. But conversely, the dolphins had always believed that they were far more intelligent than man-for precisely the same reasons. - Douglas Adams, The Hitchhikers Guide to the Galaxy", 11, "The person, be it gentleman or lady, who has not pleasure in a good novel, must be intolerably stupid. - Jane Austen", (struct point_t){ -81, -6 }, -87, -53, "Everyone is born a genius, but the process of living de-geniuses them. - Richard Buckminster Fuller", "Technology has to be invented or adopted.-Jared Diamond", 68, "Science and technology revolutionize our lives, but memory, tradition and myth frame our response.-Arthur M. Schlesinger", 49, 4, 5, "The most technologically efficient machine that man has ever invented is the book.-Northrop Frye", "I like nonsense, it wakes up the brain cells. Fantasy is a necessary ingredient in living. - Dr. Seuss", (struct point_t){ 93, -50 }, "If we continue to develop our technology without wisdom or prudence, our servant may prove to be our executioner.-Omar N. Bradley", (struct point_t){ 0, 77 }, (struct point_t){ 55, -78 }, (struct point_t){ -25, -42 }, "Always code as if the guy who ends up maintaining your code will be a violent psychopath who knows where you live - John Woods", (struct point_t){ -79, -26 }, 5, (struct point_t){ 66, -73 }, "I was never really insane except upon occasions when my heart was touched. - Edgar Allan Poe", "Is the system going to flatten you out and deny you your humanity, or are you going to be able to make use of the system to the attainment of human purposes? - Joseph Campbell", "All hope abandon, ye who enter here. - Dante Alighieri, The Divine ComedyInformation technology and business are becoming inextricably interwoven. I dont think anybody can talk meaningfully about one without the talking about the other. - Bill Gates", (struct point_t){ -56, -60 }, -27, (struct point_t){ 67, 99 }, "We accept the love we think we deserve. - Stephen Chbosky", "If computers get too powerful, we can organize them into committees.  Thatll do them in.  - Author Unknown", "No dream is too big. No challenge is too great. Nothing we want for our future is beyond our reach. - Donald Trump", -16, (struct point_t){ -16, -43 }, 96, "This is the whole point of technology. It creates an appetite for immortality on the one hand. It threatens universal extinction on the other. Technology is lust removed from nature.-Don DeLillo", (struct point_t){ -2, -94 }, -67, "So many books, so little time. - Frank Zappa", -63, -28, "No one can make you feel inferior without your consent. - Eleanor Roosevelt");
                    printf("----END----");
            
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_printf() jest nieprawidłowa; powinno być 4827, a jest %d", res);
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == 75, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 75, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == -97, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -97, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == 0, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == 479184617, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 479184617, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == 60, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 60, a jest %d", a.x);
                test_error(a.y == 62, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 62, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == -28, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -28, a jest %d", a.x);
                test_error(a.y == -35, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -35, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == 0, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", a.x);
                test_error(a.y == -77, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -77, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == 47, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 47, a jest %d", a.x);
                test_error(a.y == 0, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == -22727644, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -22727644, a jest %d", a.x);
                test_error(a.y == 264368211, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 264368211, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > 92.85728307646443 && a < 92.85748307646443, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 92.85738307646443, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > -63.36835938770263 && a < -63.368159387702626, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -63.36825938770263, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > -0.0001 && a < 0.0001, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 69;
                    int a;
    double b;
    double c;
    int d;
    struct point_t e;
    struct point_t f;
    struct point_t g;
    struct point_t h;
    struct point_t i;
    double j;
    int k;
    double l;
    double m;
    struct point_t n;
    int o;
    struct point_t p;
    double q;
    double r;
    int s;
    int t;
    struct point_t u;
    double v;
    int w;
    double x;
    struct point_t y;
    double z;
    int A;
    int B;
    double C;
    struct point_t D;
    int E;
    struct point_t F;
    int G;
    double H;
    struct point_t I;
    struct point_t J;
    int K;
    struct point_t L;
    int M;
    struct point_t N;
    double O;
    double P;
    int Q;
    struct point_t R;
    double S;
    double T;
    double U;
    double V;
    struct point_t W;
    double X;
    double Y;
    double Z;

                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d %f %f %d %p %p %p %p %p %f %d %f %f %p %d %p %f %f %d %d %p %f %d %f %p %f %d %d %f %p %d %p %d %f %p %p %d %p %d %p %f %f %d %p %f %f %f %f %p %f %f %f ", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p, &q, &r, &s, &t, &u, &v, &w, &x, &y, &z, &A, &B, &C, &D, &E, &F, &G, &H, &I, &J, &K, &L, &M, &N, &O, &P, &Q, &R, &S, &T, &U, &V, &W, &X, &Y, &Z);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 69, a jest %d", res);
                    
                        test_error(a == -83, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -83, a jest %d", a);
                
                        test_error(b > -976.9282660787676 && b < -976.9280660787676, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -976.9281660787676, a jest %lf", b);
                
                        test_error(c > -273.79746090098945 && c < -273.7972609009895, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -273.7973609009895, a jest %lf", c);
                
                        test_error(d == -98, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -98, a jest %d", d);
                
                            test_error(e.x == -2, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -2, a jest %d", e.x);
                            test_error(e.y == 50, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 50, a jest %d", e.y);            
                    
                            test_error(f.x == 64, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 64, a jest %d", f.x);
                            test_error(f.y == -10, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -10, a jest %d", f.y);            
                    
                            test_error(g.x == -95, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -95, a jest %d", g.x);
                            test_error(g.y == -40, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -40, a jest %d", g.y);            
                    
                            test_error(h.x == -19, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -19, a jest %d", h.x);
                            test_error(h.y == -4, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -4, a jest %d", h.y);            
                    
                            test_error(i.x == -32, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -32, a jest %d", i.x);
                            test_error(i.y == 100, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 100, a jest %d", i.y);            
                    
                        test_error(j > -258.88438242657 && j < -258.8841824265701, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -258.88428242657005, a jest %lf", j);
                
                        test_error(k == 57, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 57, a jest %d", k);
                
                        test_error(l > -326.6906400676239 && l < -326.69044006762397, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -326.69054006762394, a jest %lf", l);
                
                        test_error(m > -283.10365272827255 && m < -283.1034527282726, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -283.1035527282726, a jest %lf", m);
                
                            test_error(n.x == 47, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 47, a jest %d", n.x);
                            test_error(n.y == -33, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -33, a jest %d", n.y);            
                    
                        test_error(o == 61, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 61, a jest %d", o);
                
                            test_error(p.x == -55, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -55, a jest %d", p.x);
                            test_error(p.y == -1, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -1, a jest %d", p.y);            
                    
                        test_error(q > -206.37743166038675 && q < -206.37723166038674, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -206.37733166038674, a jest %lf", q);
                
                        test_error(r > 85.88795595077633 && r < 85.88815595077634, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 85.88805595077633, a jest %lf", r);
                
                        test_error(s == 20, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 20, a jest %d", s);
                
                        test_error(t == -60, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -60, a jest %d", t);
                
                            test_error(u.x == -15, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -15, a jest %d", u.x);
                            test_error(u.y == 90, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 90, a jest %d", u.y);            
                    
                        test_error(v > -33.90194588013972 && v < -33.901745880139714, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -33.90184588013972, a jest %lf", v);
                
                        test_error(w == -92, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -92, a jest %d", w);
                
                        test_error(x > -965.8830725242165 && x < -965.8828725242165, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -965.8829725242165, a jest %lf", x);
                
                            test_error(y.x == 35, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 35, a jest %d", y.x);
                            test_error(y.y == -32, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -32, a jest %d", y.y);            
                    
                        test_error(z > -230.99977706283462 && z < -230.99957706283462, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -230.99967706283462, a jest %lf", z);
                
                        test_error(A == -41, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -41, a jest %d", A);
                
                        test_error(B == 42, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 42, a jest %d", B);
                
                        test_error(C > -194.6815131341465 && C < -194.6813131341465, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -194.6814131341465, a jest %lf", C);
                
                            test_error(D.x == -48, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -48, a jest %d", D.x);
                            test_error(D.y == 94, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 94, a jest %d", D.y);            
                    
                        test_error(E == 24, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 24, a jest %d", E);
                
                            test_error(F.x == 34, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 34, a jest %d", F.x);
                            test_error(F.y == 25, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 25, a jest %d", F.y);            
                    
                        test_error(G == 34, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 34, a jest %d", G);
                
                        test_error(H > 67.98043450387851 && H < 67.98063450387852, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 67.98053450387852, a jest %lf", H);
                
                            test_error(I.x == 42, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 42, a jest %d", I.x);
                            test_error(I.y == 66, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 66, a jest %d", I.y);            
                    
                            test_error(J.x == 50, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 50, a jest %d", J.x);
                            test_error(J.y == -60, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -60, a jest %d", J.y);            
                    
                        test_error(K == -56, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -56, a jest %d", K);
                
                            test_error(L.x == 30, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 30, a jest %d", L.x);
                            test_error(L.y == -29, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -29, a jest %d", L.y);            
                    
                        test_error(M == 49, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 49, a jest %d", M);
                
                            test_error(N.x == 48, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 48, a jest %d", N.x);
                            test_error(N.y == 91, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 91, a jest %d", N.y);            
                    
                        test_error(O > -15.372013929506831 && O < -15.371813929506832, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -15.371913929506832, a jest %lf", O);
                
                        test_error(P > 4.048885527605055 && P < 4.049085527605055, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 4.048985527605055, a jest %lf", P);
                
                        test_error(Q == -15, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -15, a jest %d", Q);
                
                            test_error(R.x == -64, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -64, a jest %d", R.x);
                            test_error(R.y == 57, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 57, a jest %d", R.y);            
                    
                        test_error(S > -89.71119024376665 && S < -89.71099024376664, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -89.71109024376665, a jest %lf", S);
                
                        test_error(T > -397.70341542867163 && T < -397.7032154286717, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -397.70331542867166, a jest %lf", T);
                
                        test_error(U > -991.6402297824069 && U < -991.6400297824069, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -991.6401297824069, a jest %lf", U);
                
                        test_error(V > -46.22272646756326 && V < -46.222526467563256, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -46.22262646756326, a jest %lf", V);
                
                            test_error(W.x == -96, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -96, a jest %d", W.x);
                            test_error(W.y == 35, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 35, a jest %d", W.y);            
                    
                        test_error(X > -912.899446291769 && X < -912.899246291769, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -912.899346291769, a jest %lf", X);
                
                        test_error(Y > -151.2147289007552 && Y < -151.2145289007552, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -151.2146289007552, a jest %lf", Y);
                
                        test_error(Z > -71.5604071754631 && Z < -71.56020717546309, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -71.5603071754631, a jest %lf", Z);
                
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a == -50, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -50, a jest %d", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 0;
                    int a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%d", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", res);
                    
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > -13.0001 && a < -12.9999, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być -13, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 0;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", res);
                    
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 1;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 1, a jest %d", res);
                    
                test_error(a > 38.226460867988465 && a < 38.22666086798847, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 38.22656086798847, a jest %lf", a);
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 0;
                    double a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%f", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", res);
                    
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 2;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 2, a jest %d", res);
                    
                test_error(a.x == 29, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 29, a jest %d", a.x);
                test_error(a.y == 16, "Wartość zapisana do zmiennej przez funkcję my_scanf() jest nieprawidłowa; powinno być 16, a jest %d", a.y);            
        
          
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 40: Sprawdzanie poprawności działania funkcji my_scanf
//
void UTEST40(void)
{
    // informacje o teście
    test_start(40, "Sprawdzanie poprawności działania funkcji my_scanf", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                    int expected_result = 0;
                    struct point_t a;
                    
                    my_printf("Tekst zachety: ");

                    printf("----START----");
                    int res = my_scanf("%p", &a);
                    printf("----END----");
                    
                    test_error(res == expected_result, "Wartość zwrócona przez funkcję my_scanf() jest nieprawidłowa; powinno być 0, a jest %d", res);
                    
          
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
            UTEST1, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST2, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST3, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST4, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST5, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST6, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST7, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST8, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST9, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST10, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST11, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST12, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST13, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST14, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST15, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST16, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST17, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST18, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST19, // Sprawdzanie poprawności działania funkcji my_printf
            UTEST20, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST21, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST22, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST23, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST24, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST25, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST26, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST27, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST28, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST29, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST30, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST31, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST32, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST33, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST34, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST35, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST36, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST37, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST38, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST39, // Sprawdzanie poprawności działania funkcji my_scanf
            UTEST40, // Sprawdzanie poprawności działania funkcji my_scanf
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
            test_summary(40); // wszystkie testy muszą zakończyć się sukcesem
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