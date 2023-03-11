/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Dynamiczne łączenie tekstów
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-08 20:15:36.097359
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
//  Test 1: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 442 bajtów)
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 442 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(442);
    
    //
    // -----------
    //
    

                char *expected_result = "Programming is the art of algorithm design and the craft of debugging errant code. - Ellen Ullman Education is the foundation upon which we build our future. - Christine Gregoire Never let your sense of morals prevent you from doing what is right. - Isaac Asimov Today, billions of mobile devices with extraordinary power are uniting with advancements in robotics artificial intelligence, nanotechnology, and so much more. - Steve Mollenkopf";

                char *res = concatenate(4, "Programming is the art of algorithm design and the craft of debugging errant code. - Ellen Ullman", "Education is the foundation upon which we build our future. - Christine Gregoire", "Never let your sense of morals prevent you from doing what is right. - Isaac Asimov", "Today, billions of mobile devices with extraordinary power are uniting with advancements in robotics artificial intelligence, nanotechnology, and so much more. - Steve Mollenkopf");

                test_error(res != NULL, "Funkcja concatenate() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     
                             
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(strcmp(expected_result, res) == 0, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa, powinno być 'Programming is the art of algorithm design and the craft of debugging errant code. - Ellen Ullman Education is the foundation upon which we build our future. - Christine Gregoire Never let your sense of morals prevent you from doing what is right. - Isaac Asimov Today, billions of mobile devices with extraordinary power are uniting with advancements in robotics artificial intelligence, nanotechnology, and so much more. - Steve Mollenkopf', a jest '%s'", res);

                free(res);
                
                test_no_heap_leakage();
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
//  Test 2: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 282 bajtów)
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 282 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(282);
    
    //
    // -----------
    //
    

                char *expected_result = "I absolutely dont think a sentient artificial intelligence is going to wage war against the human species. - Daniel H. Wilson\nPain is temporary. Quitting lasts forever. - Lance Armstrong Books are mirrors: you only see in them what you already have inside you. - Carlos Ruiz Zafon";

                char *res = concatenate(2, "I absolutely dont think a sentient artificial intelligence is going to wage war against the human species. - Daniel H. Wilson\nPain is temporary. Quitting lasts forever. - Lance Armstrong", "Books are mirrors: you only see in them what you already have inside you. - Carlos Ruiz Zafon");

                test_error(res != NULL, "Funkcja concatenate() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     
                             
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(strcmp(expected_result, res) == 0, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa, powinno być 'I absolutely dont think a sentient artificial intelligence is going to wage war against the human species. - Daniel H. Wilson\nPain is temporary. Quitting lasts forever. - Lance Armstrong Books are mirrors: you only see in them what you already have inside you. - Carlos Ruiz Zafon', a jest '%s'", res);

                free(res);
                
                test_no_heap_leakage();
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
//  Test 3: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 352 bajtów)
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 352 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(352);
    
    //
    // -----------
    //
    

                char *expected_result = "The future belongs to the competent. Get good, get better, be the best!- Success Quote by Brian Tracy  Our intuition about the future is linear. But the reality of information technology is exponential, and that makes a profound difference. If I take 30 steps linearly, I get to 30. If I take 30 steps exponentially, I get to a billion. - Ray Kurzweil";

                char *res = concatenate(3, "The future belongs to the competent. Get good, get better, be the best!- Success Quote by Brian Tracy", "", "Our intuition about the future is linear. But the reality of information technology is exponential, and that makes a profound difference. If I take 30 steps linearly, I get to 30. If I take 30 steps exponentially, I get to a billion. - Ray Kurzweil");

                test_error(res != NULL, "Funkcja concatenate() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     
                             
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(strcmp(expected_result, res) == 0, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa, powinno być 'The future belongs to the competent. Get good, get better, be the best!- Success Quote by Brian Tracy  Our intuition about the future is linear. But the reality of information technology is exponential, and that makes a profound difference. If I take 30 steps linearly, I get to 30. If I take 30 steps exponentially, I get to a billion. - Ray Kurzweil', a jest '%s'", res);

                free(res);
                
                test_no_heap_leakage();
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
//  Test 4: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 256 bajtów)
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 256 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(256);
    
    //
    // -----------
    //
    

                char *expected_result = "       Our intuition about the future is linear. But the reality of information technology is exponential, and that makes a profound difference. If I take 30 steps linearly, I get to 30. If I take 30 steps exponentially, I get to a billion. - Ray Kurzweil";

                char *res = concatenate(8, "", "", "", "", "", "", "", "Our intuition about the future is linear. But the reality of information technology is exponential, and that makes a profound difference. If I take 30 steps linearly, I get to 30. If I take 30 steps exponentially, I get to a billion. - Ray Kurzweil");

                test_error(res != NULL, "Funkcja concatenate() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     
                             
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(strcmp(expected_result, res) == 0, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa, powinno być '       Our intuition about the future is linear. But the reality of information technology is exponential, and that makes a profound difference. If I take 30 steps linearly, I get to 30. If I take 30 steps exponentially, I get to a billion. - Ray Kurzweil', a jest '%s'", res);

                free(res);
                
                test_no_heap_leakage();
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
//  Test 5: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 852 bajtów)
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 852 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(852);
    
    //
    // -----------
    //
    

                char *expected_result = "Walking on water and developing software from a specification are easy if both are frozen. - Edward Berard It does not do to dwell on dreams and forget to live. - J.K. Rowling How wonderful it is that nobody need wait a single moment before starting to improve the world. - Anne Frank One of the biggest challenges to medicine is the incorporation of information technology in our practices. - Samuel Wilson When someone loves you, the way they talk about you is different. You feel safe and comfortable. - Jess C. Scott Programming today is a race between software engineers striving to build bigger and better idiot-proof programs, and the universe trying to build bigger and better idiots. So far, the universe is winning. - Rick Cook Once a new technology rolls over you, if youre not part of the steamroller, youre part of the road.-Stewart Brand";

                char *res = concatenate(7, "Walking on water and developing software from a specification are easy if both are frozen. - Edward Berard", "It does not do to dwell on dreams and forget to live. - J.K. Rowling", "How wonderful it is that nobody need wait a single moment before starting to improve the world. - Anne Frank", "One of the biggest challenges to medicine is the incorporation of information technology in our practices. - Samuel Wilson", "When someone loves you, the way they talk about you is different. You feel safe and comfortable. - Jess C. Scott", "Programming today is a race between software engineers striving to build bigger and better idiot-proof programs, and the universe trying to build bigger and better idiots. So far, the universe is winning. - Rick Cook", "Once a new technology rolls over you, if youre not part of the steamroller, youre part of the road.-Stewart Brand");

                test_error(res != NULL, "Funkcja concatenate() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     
                             
                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                test_error(strcmp(expected_result, res) == 0, "Wartość zwrócona przez funkcję concatenate() jest nieprawidłowa, powinno być 'Walking on water and developing software from a specification are easy if both are frozen. - Edward Berard It does not do to dwell on dreams and forget to live. - J.K. Rowling How wonderful it is that nobody need wait a single moment before starting to improve the world. - Anne Frank One of the biggest challenges to medicine is the incorporation of information technology in our practices. - Samuel Wilson When someone loves you, the way they talk about you is different. You feel safe and comfortable. - Jess C. Scott Programming today is a race between software engineers striving to build bigger and better idiot-proof programs, and the universe trying to build bigger and better idiots. So far, the universe is winning. - Rick Cook Once a new technology rolls over you, if youre not part of the steamroller, youre part of the road.-Stewart Brand', a jest '%s'", res);

                free(res);
                
                test_no_heap_leakage();
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
//  Test 6: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 0 bajtów)
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                char *res = concatenate(4, "You learn more from failure than from success. Dont let it stop you. Failure builds character.- Unknown", "A computer lets you make more mistakes faster than any invention in human history - with the possible exceptions of handguns and tequila. - Author Unknown", "Technology... is a queer thing.  It brings you great gifts with one hand, and it stabs you in the back with the other.  - C.P. Snow", "Technology is nothing. Whats important is that you have a faith in people, that theyre basically good and smart, and if you give them tools, theyll do wonderful things with them.-Steve Jobs");

                test_error(res == NULL, "Funkcja concatenate() powinna zwrócić NULL");     

                test_no_heap_leakage();
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
//  Test 7: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 104 bajtów)
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 104 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(104);
    
    //
    // -----------
    //
    

                char *res = concatenate(4, "You learn more from failure than from success. Dont let it stop you. Failure builds character.- Unknown", "A computer lets you make more mistakes faster than any invention in human history - with the possible exceptions of handguns and tequila. - Author Unknown", "Technology... is a queer thing.  It brings you great gifts with one hand, and it stabs you in the back with the other.  - C.P. Snow", "Technology is nothing. Whats important is that you have a faith in people, that theyre basically good and smart, and if you give them tools, theyll do wonderful things with them.-Steve Jobs");

                test_error(res == NULL, "Funkcja concatenate() powinna zwrócić NULL");     

                test_no_heap_leakage();
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
//  Test 8: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 259 bajtów)
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 259 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(259);
    
    //
    // -----------
    //
    

                char *res = concatenate(4, "You learn more from failure than from success. Dont let it stop you. Failure builds character.- Unknown", "A computer lets you make more mistakes faster than any invention in human history - with the possible exceptions of handguns and tequila. - Author Unknown", "Technology... is a queer thing.  It brings you great gifts with one hand, and it stabs you in the back with the other.  - C.P. Snow", "Technology is nothing. Whats important is that you have a faith in people, that theyre basically good and smart, and if you give them tools, theyll do wonderful things with them.-Steve Jobs");

                test_error(res == NULL, "Funkcja concatenate() powinna zwrócić NULL");     

                test_no_heap_leakage();
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
//  Test 9: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 391 bajtów)
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 391 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(391);
    
    //
    // -----------
    //
    

                char *res = concatenate(4, "You learn more from failure than from success. Dont let it stop you. Failure builds character.- Unknown", "A computer lets you make more mistakes faster than any invention in human history - with the possible exceptions of handguns and tequila. - Author Unknown", "Technology... is a queer thing.  It brings you great gifts with one hand, and it stabs you in the back with the other.  - C.P. Snow", "Technology is nothing. Whats important is that you have a faith in people, that theyre basically good and smart, and if you give them tools, theyll do wonderful things with them.-Steve Jobs");

                test_error(res == NULL, "Funkcja concatenate() powinna zwrócić NULL");     

                test_no_heap_leakage();
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
//  Test 10: Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 580 bajtów)
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 580 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(580);
    
    //
    // -----------
    //
    

                char *res = concatenate(4, "You learn more from failure than from success. Dont let it stop you. Failure builds character.- Unknown", "A computer lets you make more mistakes faster than any invention in human history - with the possible exceptions of handguns and tequila. - Author Unknown", "Technology... is a queer thing.  It brings you great gifts with one hand, and it stabs you in the back with the other.  - C.P. Snow", "Technology is nothing. Whats important is that you have a faith in people, that theyre basically good and smart, and if you give them tools, theyll do wonderful things with them.-Steve Jobs");

                test_error(res == NULL, "Funkcja concatenate() powinna zwrócić NULL");     

                test_no_heap_leakage();
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
    


                char *res = concatenate(-5, "A woman has to live her life, or live to repent not having lived it. - D.H. Lawrence", "The truth is rarely pure and never simple. - Oscar Wilde", "The trouble with having an open mind, of course, is that people will insist on coming along and trying to put things in it. - Terry Pratchett, Diggers", "It does not do to dwell on dreams and forget to live. - J.K. Rowling", "Big Brother fills us all with the same crap. My guess is he was clever the same way everybody thinks theyre clever. I tell her to type in password - Chuck Palahniuk");
                test_error(res == NULL, "Funkcja concatenate() powinna zwrócić NULL");     

                test_no_heap_leakage();
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
    

                char *res = concatenate(0, "A woman has to live her life, or live to repent not having lived it. - D.H. Lawrence", "The truth is rarely pure and never simple. - Oscar Wilde", "The trouble with having an open mind, of course, is that people will insist on coming along and trying to put things in it. - Terry Pratchett, Diggers", "It does not do to dwell on dreams and forget to live. - J.K. Rowling", "Big Brother fills us all with the same crap. My guess is he was clever the same way everybody thinks theyre clever. I tell her to type in password - Chuck Palahniuk");
                test_error(res == NULL, "Funkcja concatenate() powinna zwrócić NULL");     

                test_no_heap_leakage();
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
//  Test 3: Reakcja na brak pamięci - limit pamięci ustawiony na 1033
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit pamięci ustawiony na 1033", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1033);
    
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
//  Test 4: Reakcja na brak pamięci - limit pamięci ustawiony na 2034
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit pamięci ustawiony na 2034", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2034);
    
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
//  Test 5: Reakcja na brak pamięci - limit pamięci ustawiony na 3035
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit pamięci ustawiony na 3035", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3035);
    
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
//  Test 6: Reakcja na brak pamięci - limit pamięci ustawiony na 4036
//
void MTEST6(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(6, "Reakcja na brak pamięci - limit pamięci ustawiony na 4036", __LINE__);

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
//  Test 7: Reakcja programu na ograniczoną pamięć, wystarczającą na wykonanie wszystkich operacji - limit pamięci ustawiony na 4461
//
void MTEST7(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(7, "Reakcja programu na ograniczoną pamięć, wystarczającą na wykonanie wszystkich operacji - limit pamięci ustawiony na 4461", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4461);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 442 bajtów)
            UTEST2, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 282 bajtów)
            UTEST3, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 352 bajtów)
            UTEST4, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 256 bajtów)
            UTEST5, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 852 bajtów)
            UTEST6, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 0 bajtów)
            UTEST7, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 104 bajtów)
            UTEST8, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 259 bajtów)
            UTEST9, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 391 bajtów)
            UTEST10, // Sprawdzanie poprawności działania funkcji concatenate - (limit sterty ustawiono na 580 bajtów)
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
            MTEST3, // Reakcja na brak pamięci - limit pamięci ustawiony na 1033
            MTEST4, // Reakcja na brak pamięci - limit pamięci ustawiony na 2034
            MTEST5, // Reakcja na brak pamięci - limit pamięci ustawiony na 3035
            MTEST6, // Reakcja na brak pamięci - limit pamięci ustawiony na 4036
            MTEST7, // Reakcja programu na ograniczoną pamięć, wystarczającą na wykonanie wszystkich operacji - limit pamięci ustawiony na 4461
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
            test_summary(7); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem

        return EXIT_SUCCESS;
    }

    printf("*** Nieznana wartość RunMode: %d", (int)run_mode);
    abort();
}