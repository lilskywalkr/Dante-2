/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Modyfikacja tekstów
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-09 18:43:58.292055
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


        
        
        
            char *additional_function_l(const char *text)
            {
                char *out = (char *)calloc(sizeof(char), 2);
                *out = 'l';
                return out;
            }
            
        
        
            char *additional_function_m(const char *text)
            {
                char *out = (char *)calloc(sizeof(char), 2);
                *out = 'm';
                return out;
            }
            
        
        
            char *additional_function_B(const char *text)
            {
                char *out = (char *)calloc(sizeof(char), 2);
                *out = 'B';
                return out;
            }
            
        
        
            char *additional_function_q(const char *text)
            {
                char *out = (char *)calloc(sizeof(char), 2);
                *out = 'q';
                return out;
            }
            
        
        
            char *additional_function_W(const char *text)
            {
                char *out = (char *)calloc(sizeof(char), 2);
                *out = 'W';
                return out;
            }
            
        
        
            char *additional_function_N(const char *text)
            {
                char *out = (char *)calloc(sizeof(char), 2);
                *out = 'N';
                return out;
            }
            
        
       
        
    


//
//  Test 1: Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 2 bajtów
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 2 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2);
    
    //
    // -----------
    //
    

                   char* res = lower_to_upper("m");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "M") == 0, "Wartość %s zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być M", res);

                   free(res);

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
//  Test 2: Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 53 bajtów
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 53 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(53);
    
    //
    // -----------
    //
    

                   char* res = lower_to_upper("ulBtJjnCRTrcyNZiFfMXoakqLAIvsGbEexzKDVPWwSOdYpHmUQhg");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "ULBTJJNCRTRCYNZIFFMXOAKQLAIVSGBEEXZKDVPWWSODYPHMUQHG") == 0, "Wartość %s zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być ULBTJJNCRTRCYNZIFFMXOAKQLAIVSGBEEXZKDVPWWSODYPHMUQHG", res);

                   free(res);

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
//  Test 3: Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 15 bajtów
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 15 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(15);
    
    //
    // -----------
    //
    

                   char* res = lower_to_upper("misrepresented");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "MISREPRESENTED") == 0, "Wartość %s zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być MISREPRESENTED", res);

                   free(res);

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
//  Test 4: Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 116 bajtów
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 116 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(116);
    
    //
    // -----------
    //
    

                   char* res = lower_to_upper("Technology made large populations possible; large populations now make technology indispensable.-Joseph Wood Krutch");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "TECHNOLOGY MADE LARGE POPULATIONS POSSIBLE; LARGE POPULATIONS NOW MAKE TECHNOLOGY INDISPENSABLE.-JOSEPH WOOD KRUTCH") == 0, "Wartość %s zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być TECHNOLOGY MADE LARGE POPULATIONS POSSIBLE; LARGE POPULATIONS NOW MAKE TECHNOLOGY INDISPENSABLE.-JOSEPH WOOD KRUTCH", res);

                   free(res);

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
//  Test 5: Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 2104 bajtów
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 2104 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2104);
    
    //
    // -----------
    //
    

                   char* res = lower_to_upper("Technology made large populations possible; large populations now make technology indispensable.-Joseph Wood Krutch\nPrograms must be written for people to read, and only incidentally for machines to execute.-Harold Abelson\nWe are not here to curse the darkness, but to light the candle that can guide us thru that darkness to a safe and sane future. - John F. Kennedy\nI was never really insane except upon occasions when my heart was touched. - Edgar Allan Poe\nCommunications tools don t get socially interesting until they get technologically boring.-Clay Shirky\nWe are stuck with technology when what we really want is just stuff that works.-Douglas Adams\n We may encounter many defeats but we must not be defeated. - Maya Angelou\nBe the change that you wish to see in the world. - Mahatma Gandhi\n Knowing is not enough; we must apply. Wishing is not enough; we must do. - Johann Wolfgang Von Goethe\nProgramming today is a race between software engineers striving to build bigger and better idiot-proof programs, and the Universe trying to produce bigger and better idiots. So far, the Universe is winning. - Rick Cook\nTechnology is a useful servant but a dangerous master.-Christian Lous Lange\nInsanity is doing the same thing, over and over again, but expecting different results. - Narcotics Anonymous\nGetting information off the Internet is like taking a drink from a fire hydrant.-Mitchell Kapor\n If it keeps up, man will atrophy all his limbs but the push-button finger.   - Frank Lloyd Wright\n Technology is like a fish. The longer it stays on the shelf, the less desirable it becomes.  - Andrew Heller\n We may encounter many defeats but we must not be defeated. - Maya Angelou\nExploration is in our nature. We began as wanderers, and we are wanderers still. We have lingered long enough on the shores of the cosmic ocean. We are ready at last to set sail for the stars. - Carl Sagan, Cosmos\nA friend is someone who knows all about you and still loves you. - Elbert Hubbard\n The trouble with programmers is that you can never tell what a programmer is doing until it s too late.  - Seymour Cray");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "TECHNOLOGY MADE LARGE POPULATIONS POSSIBLE; LARGE POPULATIONS NOW MAKE TECHNOLOGY INDISPENSABLE.-JOSEPH WOOD KRUTCH\nPROGRAMS MUST BE WRITTEN FOR PEOPLE TO READ, AND ONLY INCIDENTALLY FOR MACHINES TO EXECUTE.-HAROLD ABELSON\nWE ARE NOT HERE TO CURSE THE DARKNESS, BUT TO LIGHT THE CANDLE THAT CAN GUIDE US THRU THAT DARKNESS TO A SAFE AND SANE FUTURE. - JOHN F. KENNEDY\nI WAS NEVER REALLY INSANE EXCEPT UPON OCCASIONS WHEN MY HEART WAS TOUCHED. - EDGAR ALLAN POE\nCOMMUNICATIONS TOOLS DON T GET SOCIALLY INTERESTING UNTIL THEY GET TECHNOLOGICALLY BORING.-CLAY SHIRKY\nWE ARE STUCK WITH TECHNOLOGY WHEN WHAT WE REALLY WANT IS JUST STUFF THAT WORKS.-DOUGLAS ADAMS\n WE MAY ENCOUNTER MANY DEFEATS BUT WE MUST NOT BE DEFEATED. - MAYA ANGELOU\nBE THE CHANGE THAT YOU WISH TO SEE IN THE WORLD. - MAHATMA GANDHI\n KNOWING IS NOT ENOUGH; WE MUST APPLY. WISHING IS NOT ENOUGH; WE MUST DO. - JOHANN WOLFGANG VON GOETHE\nPROGRAMMING TODAY IS A RACE BETWEEN SOFTWARE ENGINEERS STRIVING TO BUILD BIGGER AND BETTER IDIOT-PROOF PROGRAMS, AND THE UNIVERSE TRYING TO PRODUCE BIGGER AND BETTER IDIOTS. SO FAR, THE UNIVERSE IS WINNING. - RICK COOK\nTECHNOLOGY IS A USEFUL SERVANT BUT A DANGEROUS MASTER.-CHRISTIAN LOUS LANGE\nINSANITY IS DOING THE SAME THING, OVER AND OVER AGAIN, BUT EXPECTING DIFFERENT RESULTS. - NARCOTICS ANONYMOUS\nGETTING INFORMATION OFF THE INTERNET IS LIKE TAKING A DRINK FROM A FIRE HYDRANT.-MITCHELL KAPOR\n IF IT KEEPS UP, MAN WILL ATROPHY ALL HIS LIMBS BUT THE PUSH-BUTTON FINGER.   - FRANK LLOYD WRIGHT\n TECHNOLOGY IS LIKE A FISH. THE LONGER IT STAYS ON THE SHELF, THE LESS DESIRABLE IT BECOMES.  - ANDREW HELLER\n WE MAY ENCOUNTER MANY DEFEATS BUT WE MUST NOT BE DEFEATED. - MAYA ANGELOU\nEXPLORATION IS IN OUR NATURE. WE BEGAN AS WANDERERS, AND WE ARE WANDERERS STILL. WE HAVE LINGERED LONG ENOUGH ON THE SHORES OF THE COSMIC OCEAN. WE ARE READY AT LAST TO SET SAIL FOR THE STARS. - CARL SAGAN, COSMOS\nA FRIEND IS SOMEONE WHO KNOWS ALL ABOUT YOU AND STILL LOVES YOU. - ELBERT HUBBARD\n THE TROUBLE WITH PROGRAMMERS IS THAT YOU CAN NEVER TELL WHAT A PROGRAMMER IS DOING UNTIL IT S TOO LATE.  - SEYMOUR CRAY") == 0, "Wartość %s zwrócona przez funkcję lower_to_upper() jest niewłaściwa, powinno być TECHNOLOGY MADE LARGE POPULATIONS POSSIBLE; LARGE POPULATIONS NOW MAKE TECHNOLOGY INDISPENSABLE.-JOSEPH WOOD KRUTCH\nPROGRAMS MUST BE WRITTEN FOR PEOPLE TO READ, AND ONLY INCIDENTALLY FOR MACHINES TO EXECUTE.-HAROLD ABELSON\nWE ARE NOT HERE TO CURSE THE DARKNESS, BUT TO LIGHT THE CANDLE THAT CAN GUIDE US THRU THAT DARKNESS TO A SAFE AND SANE FUTURE. - JOHN F. KENNEDY\nI WAS NEVER REALLY INSANE EXCEPT UPON OCCASIONS WHEN MY HEART WAS TOUCHED. - EDGAR ALLAN POE\nCOMMUNICATIONS TOOLS DON T GET SOCIALLY INTERESTING UNTIL THEY GET TECHNOLOGICALLY BORING.-CLAY SHIRKY\nWE ARE STUCK WITH TECHNOLOGY WHEN WHAT WE REALLY WANT IS JUST STUFF THAT WORKS.-DOUGLAS ADAMS\n WE MAY ENCOUNTER MANY DEFEATS BUT WE MUST NOT BE DEFEATED. - MAYA ANGELOU\nBE THE CHANGE THAT YOU WISH TO SEE IN THE WORLD. - MAHATMA GANDHI\n KNOWING IS NOT ENOUGH; WE MUST APPLY. WISHING IS NOT ENOUGH; WE MUST DO. - JOHANN WOLFGANG VON GOETHE\nPROGRAMMING TODAY IS A RACE BETWEEN SOFTWARE ENGINEERS STRIVING TO BUILD BIGGER AND BETTER IDIOT-PROOF PROGRAMS, AND THE UNIVERSE TRYING TO PRODUCE BIGGER AND BETTER IDIOTS. SO FAR, THE UNIVERSE IS WINNING. - RICK COOK\nTECHNOLOGY IS A USEFUL SERVANT BUT A DANGEROUS MASTER.-CHRISTIAN LOUS LANGE\nINSANITY IS DOING THE SAME THING, OVER AND OVER AGAIN, BUT EXPECTING DIFFERENT RESULTS. - NARCOTICS ANONYMOUS\nGETTING INFORMATION OFF THE INTERNET IS LIKE TAKING A DRINK FROM A FIRE HYDRANT.-MITCHELL KAPOR\n IF IT KEEPS UP, MAN WILL ATROPHY ALL HIS LIMBS BUT THE PUSH-BUTTON FINGER.   - FRANK LLOYD WRIGHT\n TECHNOLOGY IS LIKE A FISH. THE LONGER IT STAYS ON THE SHELF, THE LESS DESIRABLE IT BECOMES.  - ANDREW HELLER\n WE MAY ENCOUNTER MANY DEFEATS BUT WE MUST NOT BE DEFEATED. - MAYA ANGELOU\nEXPLORATION IS IN OUR NATURE. WE BEGAN AS WANDERERS, AND WE ARE WANDERERS STILL. WE HAVE LINGERED LONG ENOUGH ON THE SHORES OF THE COSMIC OCEAN. WE ARE READY AT LAST TO SET SAIL FOR THE STARS. - CARL SAGAN, COSMOS\nA FRIEND IS SOMEONE WHO KNOWS ALL ABOUT YOU AND STILL LOVES YOU. - ELBERT HUBBARD\n THE TROUBLE WITH PROGRAMMERS IS THAT YOU CAN NEVER TELL WHAT A PROGRAMMER IS DOING UNTIL IT S TOO LATE.  - SEYMOUR CRAY", res);

                   free(res);

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
//  Test 6: Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 43 bajtów
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 43 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(43);
    
    //
    // -----------
    //
    

               char* res = lower_to_upper(" You don t have to be great to start, but you have to start to be great.  - Zig Ziglar");

               test_error(res == NULL, "Funkcja powinna zwrócić NULL");

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
//  Test 7: Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 2 bajtów
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 2 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2);
    
    //
    // -----------
    //
    

                   char* res = upper_to_lower("C");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "c") == 0, "Wartość %s zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być c", res);

                   free(res);

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
//  Test 8: Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 53 bajtów
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 53 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(53);
    
    //
    // -----------
    //
    

                   char* res = upper_to_lower("dycLMviNEtZfWRoAOxYpqGzgKDaBVjHQleXnUuhJrkITCPFswSmb");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "dyclmvinetzfwroaoxypqgzgkdabvjhqlexnuuhjrkitcpfswsmb") == 0, "Wartość %s zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być dyclmvinetzfwroaoxypqgzgkdabvjhqlexnuuhjrkitcpfswsmb", res);

                   free(res);

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
//  Test 9: Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 15 bajtów
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 15 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(15);
    
    //
    // -----------
    //
    

                   char* res = upper_to_lower("works.-Douglas");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "works.-douglas") == 0, "Wartość %s zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być works.-douglas", res);

                   free(res);

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
//  Test 10: Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 106 bajtów
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 106 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(106);
    
    //
    // -----------
    //
    

                   char* res = upper_to_lower("Sometimes you wake up. Sometimes the fall kills you. And sometimes, when you fall, you fly. - Neil Gaiman");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "sometimes you wake up. sometimes the fall kills you. and sometimes, when you fall, you fly. - neil gaiman") == 0, "Wartość %s zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być sometimes you wake up. sometimes the fall kills you. and sometimes, when you fall, you fly. - neil gaiman", res);

                   free(res);

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
//  Test 11: Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 2075 bajtów
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 2075 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2075);
    
    //
    // -----------
    //
    

                   char* res = upper_to_lower("Sometimes you wake up. Sometimes the fall kills you. And sometimes, when you fall, you fly. - Neil Gaiman\nScience and technology revolutionize our lives, but memory, tradition and myth frame our response.-Arthur M. Schlesinger\n You can t have great software without a great team, and most software teams behave like dysfunctional families.  - Jim McCarthy\nTell the truth, or someone will tell it for you. - Stephanie Klein\nDevelopments in information technology and globalised media mean that the most powerful military in the history of the world can lose a war, not on the battlefield of dust and blood, but on the battlefield of world opinion. - Timothy Garton Ash\n Today s accomplishments were yesterday s impossibilities.  - Robert H. Schuller\n Everyone is born a genius, but the process of living de-geniuses them.  - Richard Buckminster Fuller\nIt is good to love many things, for therein lies the true strength, and whosoever loves much performs much, and can accomplish much, and what is done in love is well done. - Vincent van Gogh\nI am not pretty. I am not beautiful. I am as radiant as the sun. - Suzanne Collins\nIt is better to remain silent at the risk of being thought a fool, than to talk and remove all doubt of it. - Maurice Switzer\nIf you treat an individual as he is, he will remain how he is. But if you treat him as if he were what he ought to be and could be, he will become what he ought to be and could be. - Johann Wolfgang von Goethe\n To see what is right and not do it is a lack of courage. - Confucious\n All hope abandon, ye who enter here.  - Dante Alighieri, The Divine ComedyInformation technology and business are becoming inextricably interwoven. I don t think anybody can talk meaningfully about one without the talking about the other. - Bill Gates\nThe truth.  Dumbledore sighed.  It is a beautiful and terrible thing, and should therefore be treated with great caution. - J.K. Rowling\nI ve learned that people will forget what you said, people will forget what you did, but people will never forget how you made them feel. - Maya Angelou");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "sometimes you wake up. sometimes the fall kills you. and sometimes, when you fall, you fly. - neil gaiman\nscience and technology revolutionize our lives, but memory, tradition and myth frame our response.-arthur m. schlesinger\n you can t have great software without a great team, and most software teams behave like dysfunctional families.  - jim mccarthy\ntell the truth, or someone will tell it for you. - stephanie klein\ndevelopments in information technology and globalised media mean that the most powerful military in the history of the world can lose a war, not on the battlefield of dust and blood, but on the battlefield of world opinion. - timothy garton ash\n today s accomplishments were yesterday s impossibilities.  - robert h. schuller\n everyone is born a genius, but the process of living de-geniuses them.  - richard buckminster fuller\nit is good to love many things, for therein lies the true strength, and whosoever loves much performs much, and can accomplish much, and what is done in love is well done. - vincent van gogh\ni am not pretty. i am not beautiful. i am as radiant as the sun. - suzanne collins\nit is better to remain silent at the risk of being thought a fool, than to talk and remove all doubt of it. - maurice switzer\nif you treat an individual as he is, he will remain how he is. but if you treat him as if he were what he ought to be and could be, he will become what he ought to be and could be. - johann wolfgang von goethe\n to see what is right and not do it is a lack of courage. - confucious\n all hope abandon, ye who enter here.  - dante alighieri, the divine comedyinformation technology and business are becoming inextricably interwoven. i don t think anybody can talk meaningfully about one without the talking about the other. - bill gates\nthe truth.  dumbledore sighed.  it is a beautiful and terrible thing, and should therefore be treated with great caution. - j.k. rowling\ni ve learned that people will forget what you said, people will forget what you did, but people will never forget how you made them feel. - maya angelou") == 0, "Wartość %s zwrócona przez funkcję upper_to_lower() jest niewłaściwa, powinno być sometimes you wake up. sometimes the fall kills you. and sometimes, when you fall, you fly. - neil gaiman\nscience and technology revolutionize our lives, but memory, tradition and myth frame our response.-arthur m. schlesinger\n you can t have great software without a great team, and most software teams behave like dysfunctional families.  - jim mccarthy\ntell the truth, or someone will tell it for you. - stephanie klein\ndevelopments in information technology and globalised media mean that the most powerful military in the history of the world can lose a war, not on the battlefield of dust and blood, but on the battlefield of world opinion. - timothy garton ash\n today s accomplishments were yesterday s impossibilities.  - robert h. schuller\n everyone is born a genius, but the process of living de-geniuses them.  - richard buckminster fuller\nit is good to love many things, for therein lies the true strength, and whosoever loves much performs much, and can accomplish much, and what is done in love is well done. - vincent van gogh\ni am not pretty. i am not beautiful. i am as radiant as the sun. - suzanne collins\nit is better to remain silent at the risk of being thought a fool, than to talk and remove all doubt of it. - maurice switzer\nif you treat an individual as he is, he will remain how he is. but if you treat him as if he were what he ought to be and could be, he will become what he ought to be and could be. - johann wolfgang von goethe\n to see what is right and not do it is a lack of courage. - confucious\n all hope abandon, ye who enter here.  - dante alighieri, the divine comedyinformation technology and business are becoming inextricably interwoven. i don t think anybody can talk meaningfully about one without the talking about the other. - bill gates\nthe truth.  dumbledore sighed.  it is a beautiful and terrible thing, and should therefore be treated with great caution. - j.k. rowling\ni ve learned that people will forget what you said, people will forget what you did, but people will never forget how you made them feel. - maya angelou", res);

                   free(res);

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
//  Test 12: Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 19 bajtów
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 19 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(19);
    
    //
    // -----------
    //
    

               char* res = upper_to_lower(" There are no limits to what you can accomplish, except the limits you place on your own thinking.  - Brian Tracy");

               test_error(res == NULL, "Funkcja powinna zwrócić NULL");

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
//  Test 13: Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 2 bajtów
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 2 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2);
    
    //
    // -----------
    //
    

                   char* res = space_to_dash("B");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "B") == 0, "Wartość %s zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być B", res);

                   free(res);

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
//  Test 14: Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 53 bajtów
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 53 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(53);
    
    //
    // -----------
    //
    

                   char* res = space_to_dash("RipqsbnVYJoWCXTyFxUNzkwremQEgajOLvBhZdtfcHPSGIuKMlAD");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "RipqsbnVYJoWCXTyFxUNzkwremQEgajOLvBhZdtfcHPSGIuKMlAD") == 0, "Wartość %s zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być RipqsbnVYJoWCXTyFxUNzkwremQEgajOLvBhZdtfcHPSGIuKMlAD", res);

                   free(res);

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
//  Test 15: Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 15 bajtów
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 15 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(15);
    
    //
    // -----------
    //
    

                   char* res = space_to_dash("answers.-Pablo");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "answers.-Pablo") == 0, "Wartość %s zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być answers.-Pablo", res);

                   free(res);

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
//  Test 16: Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 309 bajtów
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 309 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(309);
    
    //
    // -----------
    //
    

                   char* res = space_to_dash("If you thought the advent of the Internet, the spread of cheap and efficient information technology, and the growing fragmentation of the consumer market were all going to help smaller companies thrive at the expense of the slow-moving giants of the Fortune 500, apparently you were wrong. - James Surowiecki");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "If_you_thought_the_advent_of_the_Internet,_the_spread_of_cheap_and_efficient_information_technology,_and_the_growing_fragmentation_of_the_consumer_market_were_all_going_to_help_smaller_companies_thrive_at_the_expense_of_the_slow-moving_giants_of_the_Fortune_500,_apparently_you_were_wrong._-_James_Surowiecki") == 0, "Wartość %s zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być If_you_thought_the_advent_of_the_Internet,_the_spread_of_cheap_and_efficient_information_technology,_and_the_growing_fragmentation_of_the_consumer_market_were_all_going_to_help_smaller_companies_thrive_at_the_expense_of_the_slow-moving_giants_of_the_Fortune_500,_apparently_you_were_wrong._-_James_Surowiecki", res);

                   free(res);

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
//  Test 17: Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 2137 bajtów
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 2137 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2137);
    
    //
    // -----------
    //
    

                   char* res = space_to_dash("If you thought the advent of the Internet, the spread of cheap and efficient information technology, and the growing fragmentation of the consumer market were all going to help smaller companies thrive at the expense of the slow-moving giants of the Fortune 500, apparently you were wrong. - James Surowiecki\nYou cannot escape the responsibility of tomorrow by evading it today. - Abraham Lincoln\nIn college, before video games, we would amuse ourselves by posing programming exercises. - Ken Thompson\nThe new information technology... Internet and e-mail... have practically eliminated the physical costs of communications. - Peter Drucker\nWise men speak because they have something to say; fools because they have to say something. - Plato\n The attention span of a computer is only as long as its power cord.   - Author Unknown\nWhenever you find yourself on the side of the majority, it is time to reform (or pause and reflect). - Mark Twain\nHave you ever noticed how  What the hell  is always the right decision to make? - Terry Johnson\nHealthcare is becoming part of information technology. - Bill Maris\nHealthcare is becoming part of information technology. - Bill Maris\nWe delight in the beauty of the butterfly, but rarely admit the changes it has gone through to achieve that beauty. - Maya Angelou\n Once a new technology rolls over you, if you re not part of the steamroller, you re part of the road.  - Stewart Brand\n Computer science education cannot make anybody an expert programmer any more than studying brushes and pigment can make somebody an expert painter.  - Eric S. Raymond\nAlways code as if the guy who ends up maintaining your code will be a violent psychopath who knows where you live - John Woods\nLive as if you were to die tomorrow. Learn as if you were to live forever. - Mahatma Gandhi\nLife is what happens to us while we are making other plans. - Allen Saunders\nPeople don t want to believe that technology is broken. Pharmaceuticals, robotics, artificial intelligence, nanotechnology - all these areas where the progress has been a lot more limited than people think. And the question is why. - Peter Thiel");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "If_you_thought_the_advent_of_the_Internet,_the_spread_of_cheap_and_efficient_information_technology,_and_the_growing_fragmentation_of_the_consumer_market_were_all_going_to_help_smaller_companies_thrive_at_the_expense_of_the_slow-moving_giants_of_the_Fortune_500,_apparently_you_were_wrong._-_James_Surowiecki\nYou_cannot_escape_the_responsibility_of_tomorrow_by_evading_it_today._-_Abraham_Lincoln\nIn_college,_before_video_games,_we_would_amuse_ourselves_by_posing_programming_exercises._-_Ken_Thompson\nThe_new_information_technology..._Internet_and_e-mail..._have_practically_eliminated_the_physical_costs_of_communications._-_Peter_Drucker\nWise_men_speak_because_they_have_something_to_say;_fools_because_they_have_to_say_something._-_Plato\n_The_attention_span_of_a_computer_is_only_as_long_as_its_power_cord.___-_Author_Unknown\nWhenever_you_find_yourself_on_the_side_of_the_majority,_it_is_time_to_reform_(or_pause_and_reflect)._-_Mark_Twain\nHave_you_ever_noticed_how__What_the_hell__is_always_the_right_decision_to_make?_-_Terry_Johnson\nHealthcare_is_becoming_part_of_information_technology._-_Bill_Maris\nHealthcare_is_becoming_part_of_information_technology._-_Bill_Maris\nWe_delight_in_the_beauty_of_the_butterfly,_but_rarely_admit_the_changes_it_has_gone_through_to_achieve_that_beauty._-_Maya_Angelou\n_Once_a_new_technology_rolls_over_you,_if_you_re_not_part_of_the_steamroller,_you_re_part_of_the_road.__-_Stewart_Brand\n_Computer_science_education_cannot_make_anybody_an_expert_programmer_any_more_than_studying_brushes_and_pigment_can_make_somebody_an_expert_painter.__-_Eric_S._Raymond\nAlways_code_as_if_the_guy_who_ends_up_maintaining_your_code_will_be_a_violent_psychopath_who_knows_where_you_live_-_John_Woods\nLive_as_if_you_were_to_die_tomorrow._Learn_as_if_you_were_to_live_forever._-_Mahatma_Gandhi\nLife_is_what_happens_to_us_while_we_are_making_other_plans._-_Allen_Saunders\nPeople_don_t_want_to_believe_that_technology_is_broken._Pharmaceuticals,_robotics,_artificial_intelligence,_nanotechnology_-_all_these_areas_where_the_progress_has_been_a_lot_more_limited_than_people_think._And_the_question_is_why._-_Peter_Thiel") == 0, "Wartość %s zwrócona przez funkcję space_to_dash() jest niewłaściwa, powinno być If_you_thought_the_advent_of_the_Internet,_the_spread_of_cheap_and_efficient_information_technology,_and_the_growing_fragmentation_of_the_consumer_market_were_all_going_to_help_smaller_companies_thrive_at_the_expense_of_the_slow-moving_giants_of_the_Fortune_500,_apparently_you_were_wrong._-_James_Surowiecki\nYou_cannot_escape_the_responsibility_of_tomorrow_by_evading_it_today._-_Abraham_Lincoln\nIn_college,_before_video_games,_we_would_amuse_ourselves_by_posing_programming_exercises._-_Ken_Thompson\nThe_new_information_technology..._Internet_and_e-mail..._have_practically_eliminated_the_physical_costs_of_communications._-_Peter_Drucker\nWise_men_speak_because_they_have_something_to_say;_fools_because_they_have_to_say_something._-_Plato\n_The_attention_span_of_a_computer_is_only_as_long_as_its_power_cord.___-_Author_Unknown\nWhenever_you_find_yourself_on_the_side_of_the_majority,_it_is_time_to_reform_(or_pause_and_reflect)._-_Mark_Twain\nHave_you_ever_noticed_how__What_the_hell__is_always_the_right_decision_to_make?_-_Terry_Johnson\nHealthcare_is_becoming_part_of_information_technology._-_Bill_Maris\nHealthcare_is_becoming_part_of_information_technology._-_Bill_Maris\nWe_delight_in_the_beauty_of_the_butterfly,_but_rarely_admit_the_changes_it_has_gone_through_to_achieve_that_beauty._-_Maya_Angelou\n_Once_a_new_technology_rolls_over_you,_if_you_re_not_part_of_the_steamroller,_you_re_part_of_the_road.__-_Stewart_Brand\n_Computer_science_education_cannot_make_anybody_an_expert_programmer_any_more_than_studying_brushes_and_pigment_can_make_somebody_an_expert_painter.__-_Eric_S._Raymond\nAlways_code_as_if_the_guy_who_ends_up_maintaining_your_code_will_be_a_violent_psychopath_who_knows_where_you_live_-_John_Woods\nLive_as_if_you_were_to_die_tomorrow._Learn_as_if_you_were_to_live_forever._-_Mahatma_Gandhi\nLife_is_what_happens_to_us_while_we_are_making_other_plans._-_Allen_Saunders\nPeople_don_t_want_to_believe_that_technology_is_broken._Pharmaceuticals,_robotics,_artificial_intelligence,_nanotechnology_-_all_these_areas_where_the_progress_has_been_a_lot_more_limited_than_people_think._And_the_question_is_why._-_Peter_Thiel", res);

                   free(res);

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
//  Test 18: Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 196 bajtów
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 196 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(196);
    
    //
    // -----------
    //
    

               char* res = space_to_dash("There was a time when idealistic folksingers such as myself believed that Reality TV was a programming vogue that would peak and recede, leaving only its hardiest show-offs. Instead, it has metastasized like toxic mold, filling every nook and opening new crannies. - James Wolcott");

               test_error(res == NULL, "Funkcja powinna zwrócić NULL");

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
//  Test 19: Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 2 bajtów
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 2 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2);
    
    //
    // -----------
    //
    

                   char* res = reverse_letter("Y");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "B") == 0, "Wartość %s zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być B", res);

                   free(res);

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
//  Test 20: Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 53 bajtów
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 53 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(53);
    
    //
    // -----------
    //
    

                   char* res = reverse_letter("bDAIzYKrCGhiPTlBsqjJVMvugXRWQFnEckoedpHmNUOtLZySafwx");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "yWZRaBPiXTsrKGoYhjqQENeftCIDJUmVxplvwkSnMFLgOAbHzudc") == 0, "Wartość %s zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być yWZRaBPiXTsrKGoYhjqQENeftCIDJUmVxplvwkSnMFLgOAbHzudc", res);

                   free(res);

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
//  Test 21: Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 14 bajtów
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 14 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(14);
    
    //
    // -----------
    //
    

                   char* res = reverse_letter("intelligence.");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, "rmgvoortvmxv.") == 0, "Wartość %s zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być rmgvoortvmxv.", res);

                   free(res);

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
//  Test 22: Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 152 bajtów
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 152 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(152);
    
    //
    // -----------
    //
    

                   char* res = reverse_letter(" The system of nature, of which man is a part, tends to be self-balancing, self-adjusting, self-cleansing.  Not so with technology.   - E.F. Schumacher");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, " Gsv hbhgvn lu mzgfiv, lu dsrxs nzm rh z kzig, gvmwh gl yv hvou-yzozmxrmt, hvou-zwqfhgrmt, hvou-xovzmhrmt.  Mlg hl drgs gvxsmloltb.   - V.U. Hxsfnzxsvi") == 0, "Wartość %s zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być  Gsv hbhgvn lu mzgfiv, lu dsrxs nzm rh z kzig, gvmwh gl yv hvou-yzozmxrmt, hvou-zwqfhgrmt, hvou-xovzmhrmt.  Mlg hl drgs gvxsmloltb.   - V.U. Hxsfnzxsvi", res);

                   free(res);

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
//  Test 23: Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 2035 bajtów
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 2035 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2035);
    
    //
    // -----------
    //
    

                   char* res = reverse_letter(" The system of nature, of which man is a part, tends to be self-balancing, self-adjusting, self-cleansing.  Not so with technology.   - E.F. Schumacher\n For a list of all the ways technology has failed to improve the quality of life, please press three.  - Alice Kahn\nTechnology just means information technology. - Peter Thiel\nYou cannot escape the responsibility of tomorrow by evading it today. - Abraham Lincoln\n Perl - The only language that looks the same before and after RSA encryption.  - Keith Bostic\nTeaching is a very noble profession that shapes the character, caliber, and future of an individual. If the people remember me as a good teacher, that will be the biggest honour for me. - A. P. J. Abdul Kalam\nProgramming is one of the most difficult branches of applied mathematics; the poorer mathematicians had better remain pure mathematicians. - Edsger Dijkstra\nWe accept the love we think we deserve. - Stephen Chbosky\nI ll make him an offer he can t refuse. - Mario Puzo, The Godfather\nI am so clever that sometimes I don t understand a single word of what I am saying. - Oscar Wilde\nSome people worry that artificial intelligence will make us feel inferior, but then, anybody in his right mind should have an inferiority complex every time he looks at a flower. - Alan Kay\nComputers are like bikinis. They save people a lot of guesswork.-Sam Ewing\n Sometimes it pays to stay in bed on Monday, rather than spending the rest of the week debugging Monday s code.  - Christopher Thompson\nA friend is someone who knows all about you and still loves you. - Elbert Hubbard\n You can t have great software without a great team, and most software teams behave like dysfunctional families.  - Jim McCarthy\nAlways code as if the guy who ends up maintaining your code will be a violent psychopath who knows where you live - John Woods\nThis is the whole point of technology. It creates an appetite for immortality on the one hand. It threatens universal extinction on the other. Technology is lust removed from nature.-Don DeLillo");

                   test_error(res != NULL, "Wartość zwrócona przez funkcję jest niewłaściwa (NULL)");

                   onerror_terminate();

                   test_error(strcmp(res, " Gsv hbhgvn lu mzgfiv, lu dsrxs nzm rh z kzig, gvmwh gl yv hvou-yzozmxrmt, hvou-zwqfhgrmt, hvou-xovzmhrmt.  Mlg hl drgs gvxsmloltb.   - V.U. Hxsfnzxsvi\n Uli z orhg lu zoo gsv dzbh gvxsmloltb szh uzrovw gl rnkilev gsv jfzorgb lu oruv, kovzhv kivhh gsivv.  - Zorxv Pzsm\nGvxsmloltb qfhg nvzmh rmulinzgrlm gvxsmloltb. - Kvgvi Gsrvo\nBlf xzmmlg vhxzkv gsv ivhklmhryrorgb lu glnliild yb vezwrmt rg glwzb. - Zyizszn Ormxlom\n Kvio - Gsv lmob ozmtfztv gszg ollph gsv hznv yvuliv zmw zugvi IHZ vmxibkgrlm.  - Pvrgs Ylhgrx\nGvzxsrmt rh z evib mlyov kiluvhhrlm gszg hszkvh gsv xszizxgvi, xzoryvi, zmw ufgfiv lu zm rmwrerwfzo. Ru gsv kvlkov ivnvnyvi nv zh z tllw gvzxsvi, gszg droo yv gsv yrttvhg slmlfi uli nv. - Z. K. Q. Zywfo Pzozn\nKiltiznnrmt rh lmv lu gsv nlhg wruurxfog yizmxsvh lu zkkorvw nzgsvnzgrxh; gsv kllivi nzgsvnzgrxrzmh szw yvggvi ivnzrm kfiv nzgsvnzgrxrzmh. - Vwhtvi Wrqphgiz\nDv zxxvkg gsv olev dv gsrmp dv wvhviev. - Hgvksvm Xsylhpb\nR oo nzpv srn zm luuvi sv xzm g ivufhv. - Nzirl Kfal, Gsv Tlwuzgsvi\nR zn hl xovevi gszg hlnvgrnvh R wlm g fmwvihgzmw z hrmtov dliw lu dszg R zn hzbrmt. - Lhxzi Drowv\nHlnv kvlkov dliib gszg zigrurxrzo rmgvoortvmxv droo nzpv fh uvvo rmuvirli, yfg gsvm, zmbylwb rm srh irtsg nrmw hslfow szev zm rmuvirlirgb xlnkovc vevib grnv sv ollph zg z uoldvi. - Zozm Pzb\nXlnkfgvih ziv orpv yrprmrh. Gsvb hzev kvlkov z olg lu tfvhhdlip.-Hzn Vdrmt\n Hlnvgrnvh rg kzbh gl hgzb rm yvw lm Nlmwzb, izgsvi gszm hkvmwrmt gsv ivhg lu gsv dvvp wvyfttrmt Nlmwzb h xlwv.  - Xsirhglksvi Gslnkhlm\nZ uirvmw rh hlnvlmv dsl pmldh zoo zylfg blf zmw hgroo olevh blf. - Voyvig Sfyyziw\n Blf xzm g szev tivzg hlugdziv drgslfg z tivzg gvzn, zmw nlhg hlugdziv gvznh yvszev orpv wbhufmxgrlmzo uznrorvh.  - Qrn NxXzigsb\nZodzbh xlwv zh ru gsv tfb dsl vmwh fk nzrmgzrmrmt blfi xlwv droo yv z erlovmg khbxslkzgs dsl pmldh dsviv blf orev - Qlsm Dllwh\nGsrh rh gsv dslov klrmg lu gvxsmloltb. Rg xivzgvh zm zkkvgrgv uli rnnligzorgb lm gsv lmv szmw. Rg gsivzgvmh fmrevihzo vcgrmxgrlm lm gsv lgsvi. Gvxsmloltb rh ofhg ivnlevw uiln mzgfiv.-Wlm WvOrool") == 0, "Wartość %s zwrócona przez funkcję reverse_letter() jest niewłaściwa, powinno być  Gsv hbhgvn lu mzgfiv, lu dsrxs nzm rh z kzig, gvmwh gl yv hvou-yzozmxrmt, hvou-zwqfhgrmt, hvou-xovzmhrmt.  Mlg hl drgs gvxsmloltb.   - V.U. Hxsfnzxsvi\n Uli z orhg lu zoo gsv dzbh gvxsmloltb szh uzrovw gl rnkilev gsv jfzorgb lu oruv, kovzhv kivhh gsivv.  - Zorxv Pzsm\nGvxsmloltb qfhg nvzmh rmulinzgrlm gvxsmloltb. - Kvgvi Gsrvo\nBlf xzmmlg vhxzkv gsv ivhklmhryrorgb lu glnliild yb vezwrmt rg glwzb. - Zyizszn Ormxlom\n Kvio - Gsv lmob ozmtfztv gszg ollph gsv hznv yvuliv zmw zugvi IHZ vmxibkgrlm.  - Pvrgs Ylhgrx\nGvzxsrmt rh z evib mlyov kiluvhhrlm gszg hszkvh gsv xszizxgvi, xzoryvi, zmw ufgfiv lu zm rmwrerwfzo. Ru gsv kvlkov ivnvnyvi nv zh z tllw gvzxsvi, gszg droo yv gsv yrttvhg slmlfi uli nv. - Z. K. Q. Zywfo Pzozn\nKiltiznnrmt rh lmv lu gsv nlhg wruurxfog yizmxsvh lu zkkorvw nzgsvnzgrxh; gsv kllivi nzgsvnzgrxrzmh szw yvggvi ivnzrm kfiv nzgsvnzgrxrzmh. - Vwhtvi Wrqphgiz\nDv zxxvkg gsv olev dv gsrmp dv wvhviev. - Hgvksvm Xsylhpb\nR oo nzpv srn zm luuvi sv xzm g ivufhv. - Nzirl Kfal, Gsv Tlwuzgsvi\nR zn hl xovevi gszg hlnvgrnvh R wlm g fmwvihgzmw z hrmtov dliw lu dszg R zn hzbrmt. - Lhxzi Drowv\nHlnv kvlkov dliib gszg zigrurxrzo rmgvoortvmxv droo nzpv fh uvvo rmuvirli, yfg gsvm, zmbylwb rm srh irtsg nrmw hslfow szev zm rmuvirlirgb xlnkovc vevib grnv sv ollph zg z uoldvi. - Zozm Pzb\nXlnkfgvih ziv orpv yrprmrh. Gsvb hzev kvlkov z olg lu tfvhhdlip.-Hzn Vdrmt\n Hlnvgrnvh rg kzbh gl hgzb rm yvw lm Nlmwzb, izgsvi gszm hkvmwrmt gsv ivhg lu gsv dvvp wvyfttrmt Nlmwzb h xlwv.  - Xsirhglksvi Gslnkhlm\nZ uirvmw rh hlnvlmv dsl pmldh zoo zylfg blf zmw hgroo olevh blf. - Voyvig Sfyyziw\n Blf xzm g szev tivzg hlugdziv drgslfg z tivzg gvzn, zmw nlhg hlugdziv gvznh yvszev orpv wbhufmxgrlmzo uznrorvh.  - Qrn NxXzigsb\nZodzbh xlwv zh ru gsv tfb dsl vmwh fk nzrmgzrmrmt blfi xlwv droo yv z erlovmg khbxslkzgs dsl pmldh dsviv blf orev - Qlsm Dllwh\nGsrh rh gsv dslov klrmg lu gvxsmloltb. Rg xivzgvh zm zkkvgrgv uli rnnligzorgb lm gsv lmv szmw. Rg gsivzgvmh fmrevihzo vcgrmxgrlm lm gsv lgsvi. Gvxsmloltb rh ofhg ivnlevw uiln mzgfiv.-Wlm WvOrool", res);

                   free(res);

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
//  Test 24: Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 59 bajtów
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 59 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(59);
    
    //
    // -----------
    //
    

               char* res = reverse_letter(" Things work out best for those who make the best of how things work out.  - Positive Quote by John Wooden");

               test_error(res == NULL, "Funkcja powinna zwrócić NULL");

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
//  Test 25: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 108 bajtów)
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 108 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(108);
    
    //
    // -----------
    //
    

                        char *expected_results[] = { "W", "B", "l", "W", "l", "B", "B", "W", "B", "B" };

                        char **res = text_modifier("We choose to go to the moon in this decade and do the other things, not because they are easy, but because they are hard, because that goal will serve to organize and measure the best of our energies and skills, because that challenge is one that we are willing to accept, one we are unwilling to postpone, and one which we intend to win. - John F. Kennedy", 10, additional_function_W, additional_function_B, additional_function_l, additional_function_W, additional_function_l, additional_function_B, additional_function_B, additional_function_W, additional_function_B, additional_function_B);

                        test_error(res != NULL, "Funkcja text_modifier() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     

                        onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        int i;

                        for (i = 0; i < 10; ++i)
                            test_error(strcmp(expected_results[i], res[i]) == 0, "Tekst zapisany pod indeksem %d jest nieprawidłowy, powinno być '%s', a jest '%s'", i, expected_results[i], res[i]);

                        test_error(res[i] == NULL, "Pod indeksem %d powinna zostać zapisana wartość NULL");


                        free_texts(res);

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
//  Test 26: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 464 bajtów)
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 464 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(464);
    
    //
    // -----------
    //
    

                        char *expected_results[] = { "Z ozmtfztv gszg wlvhm g zuuvxg gsv dzb blf gsrmp zylfg kiltiznnrmt rh mlg dligs pmldrmt. - Zozm Q. Kviorh", "A_language_that_doesn_t_affect_the_way_you_think_about_programming_is_not_worth_knowing._-_Alan_J._Perlis", "A LANGUAGE THAT DOESN T AFFECT THE WAY YOU THINK ABOUT PROGRAMMING IS NOT WORTH KNOWING. - ALAN J. PERLIS", "a language that doesn t affect the way you think about programming is not worth knowing. - alan j. perlis" };

                        char **res = text_modifier("A language that doesn t affect the way you think about programming is not worth knowing. - Alan J. Perlis", 4, reverse_letter, space_to_dash, lower_to_upper, upper_to_lower);

                        test_error(res != NULL, "Funkcja text_modifier() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     

                        onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        int i;

                        for (i = 0; i < 4; ++i)
                            test_error(strcmp(expected_results[i], res[i]) == 0, "Tekst zapisany pod indeksem %d jest nieprawidłowy, powinno być '%s', a jest '%s'", i, expected_results[i], res[i]);

                        test_error(res[i] == NULL, "Pod indeksem %d powinna zostać zapisana wartość NULL");


                        free_texts(res);

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
//  Test 27: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 107 bajtów)
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 107 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(107);
    
    //
    // -----------
    //
    

                        char *expected_results[] = { "in three words i can sum up everything i ve learned about life: it goes on. - robert frost" };

                        char **res = text_modifier("In three words I can sum up everything I ve learned about life: it goes on. - Robert Frost", 1, upper_to_lower);

                        test_error(res != NULL, "Funkcja text_modifier() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     

                        onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        int i;

                        for (i = 0; i < 1; ++i)
                            test_error(strcmp(expected_results[i], res[i]) == 0, "Tekst zapisany pod indeksem %d jest nieprawidłowy, powinno być '%s', a jest '%s'", i, expected_results[i], res[i]);

                        test_error(res[i] == NULL, "Pod indeksem %d powinna zostać zapisana wartość NULL");


                        free_texts(res);

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
//  Test 28: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 312 bajtów)
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 312 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(312);
    
    //
    // -----------
    //
    

                        char *expected_results[] = { "FAIRY TALES ARE MORE THAN TRUE: NOT BECAUSE THEY TELL US THAT DRAGONS EXIST, BUT BECAUSE THEY TELL US THAT DRAGONS CAN BE BEATEN. - NEIL GAIMAN", "FAIRY TALES ARE MORE THAN TRUE: NOT BECAUSE THEY TELL US THAT DRAGONS EXIST, BUT BECAUSE THEY TELL US THAT DRAGONS CAN BE BEATEN. - NEIL GAIMAN" };

                        char **res = text_modifier("Fairy tales are more than true: not because they tell us that dragons exist, but because they tell us that dragons can be beaten. - Neil Gaiman", 2, lower_to_upper, lower_to_upper);

                        test_error(res != NULL, "Funkcja text_modifier() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     

                        onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        int i;

                        for (i = 0; i < 2; ++i)
                            test_error(strcmp(expected_results[i], res[i]) == 0, "Tekst zapisany pod indeksem %d jest nieprawidłowy, powinno być '%s', a jest '%s'", i, expected_results[i], res[i]);

                        test_error(res[i] == NULL, "Pod indeksem %d powinna zostać zapisana wartość NULL");


                        free_texts(res);

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
//  Test 29: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 266 bajtów)
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 266 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(266);
    
    //
    // -----------
    //
    

                        char *expected_results[] = { "_A_room_without_books_is_like_a_body_without_a_soul.__-_Marcus_Tullius_Cicero", " A ROOM WITHOUT BOOKS IS LIKE A BODY WITHOUT A SOUL.  - MARCUS TULLIUS CICERO", "_A_room_without_books_is_like_a_body_without_a_soul.__-_Marcus_Tullius_Cicero" };

                        char **res = text_modifier(" A room without books is like a body without a soul.  - Marcus Tullius Cicero", 3, space_to_dash, lower_to_upper, space_to_dash);

                        test_error(res != NULL, "Funkcja text_modifier() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     

                        onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        int i;

                        for (i = 0; i < 3; ++i)
                            test_error(strcmp(expected_results[i], res[i]) == 0, "Tekst zapisany pod indeksem %d jest nieprawidłowy, powinno być '%s', a jest '%s'", i, expected_results[i], res[i]);

                        test_error(res[i] == NULL, "Pod indeksem %d powinna zostać zapisana wartość NULL");


                        free_texts(res);

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
//  Test 30: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 364 bajtów)
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 364 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(364);
    
    //
    // -----------
    //
    

                        char *expected_results[] = { "WE ARE ALL IN THE GUTTER, BUT SOME OF US ARE LOOKING AT THE STARS. - OSCAR WILDE", "Dv ziv zoo rm gsv tfggvi, yfg hlnv lu fh ziv ollprmt zg gsv hgzih. - Lhxzi Drowv", "Dv ziv zoo rm gsv tfggvi, yfg hlnv lu fh ziv ollprmt zg gsv hgzih. - Lhxzi Drowv", "WE ARE ALL IN THE GUTTER, BUT SOME OF US ARE LOOKING AT THE STARS. - OSCAR WILDE" };

                        char **res = text_modifier("We are all in the gutter, but some of us are looking at the stars. - Oscar Wilde", 4, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);

                        test_error(res != NULL, "Funkcja text_modifier() powinna zwrócić adres zaalokowanej pamięci, a zwróciła NULL");     

                        onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                        int i;

                        for (i = 0; i < 4; ++i)
                            test_error(strcmp(expected_results[i], res[i]) == 0, "Tekst zapisany pod indeksem %d jest nieprawidłowy, powinno być '%s', a jest '%s'", i, expected_results[i], res[i]);

                        test_error(res[i] == NULL, "Pod indeksem %d powinna zostać zapisana wartość NULL");


                        free_texts(res);

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
//  Test 31: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 0 bajtów)
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 0 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                        char **res = text_modifier("We are all in the gutter, but some of us are looking at the stars. - Oscar Wilde", 4, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);
        
                        test_error(res == NULL, "Funkcja text_modifier() powinna zwrócić NULL");     
        
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
//  Test 32: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 40 bajtów)
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 40 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(40);
    
    //
    // -----------
    //
    
        
                        char **res = text_modifier("We are all in the gutter, but some of us are looking at the stars. - Oscar Wilde", 4, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);
        
                        test_error(res == NULL, "Funkcja text_modifier() powinna zwrócić NULL");     
        
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
//  Test 33: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 120 bajtów)
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 120 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(120);
    
    //
    // -----------
    //
    
        
                        char **res = text_modifier("We are all in the gutter, but some of us are looking at the stars. - Oscar Wilde", 4, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);
        
                        test_error(res == NULL, "Funkcja text_modifier() powinna zwrócić NULL");     
        
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
//  Test 34: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 200 bajtów)
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 200 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(200);
    
    //
    // -----------
    //
    
        
                        char **res = text_modifier("We are all in the gutter, but some of us are looking at the stars. - Oscar Wilde", 4, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);
        
                        test_error(res == NULL, "Funkcja text_modifier() powinna zwrócić NULL");     
        
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
//  Test 35: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 280 bajtów)
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 280 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(280);
    
    //
    // -----------
    //
    
        
                        char **res = text_modifier("We are all in the gutter, but some of us are looking at the stars. - Oscar Wilde", 4, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);
        
                        test_error(res == NULL, "Funkcja text_modifier() powinna zwrócić NULL");     
        
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
//  Test 36: Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 360 bajtów)
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 360 bajtów)", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(360);
    
    //
    // -----------
    //
    
        
                        char **res = text_modifier("We are all in the gutter, but some of us are looking at the stars. - Oscar Wilde", 4, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);
        
                        test_error(res == NULL, "Funkcja text_modifier() powinna zwrócić NULL");     
        
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
//  Test 37: Sprawdzanie poprawności działania funkcji text_modifier
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji text_modifier", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **res = text_modifier("We are all in the gutter, but some of us are looking at the stars. - Oscar Wilde", -4, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);

                    test_error(res == NULL, "Funkcja text_modifier() powinna zwrócić NULL");     

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
//  Test 38: Sprawdzanie poprawności działania funkcji text_modifier
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji text_modifier", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **res = text_modifier("We are all in the gutter, but some of us are looking at the stars. - Oscar Wilde", 0, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);

                    test_error(res == NULL, "Funkcja text_modifier() powinna zwrócić NULL");     

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
//  Test 39: Sprawdzanie poprawności działania funkcji text_modifier
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji text_modifier", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                    char **res = text_modifier(NULL, 4, lower_to_upper, reverse_letter, reverse_letter, lower_to_upper);

                    test_error(res == NULL, "Funkcja text_modifier() powinna zwrócić NULL");     

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
//  Test 3: Reakcja na brak pamięci - limit pamięci ustawiony na 532
//
void MTEST3(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(3, "Reakcja na brak pamięci - limit pamięci ustawiony na 532", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(532);
    
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
//  Test 4: Reakcja na brak pamięci - limit pamięci ustawiony na 1049
//
void MTEST4(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(4, "Reakcja na brak pamięci - limit pamięci ustawiony na 1049", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1049);
    
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
//  Test 5: Reakcja na brak pamięci - limit pamięci ustawiony na 1081
//
void MTEST5(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(5, "Reakcja na brak pamięci - limit pamięci ustawiony na 1081", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1081);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 2 bajtów
            UTEST2, // Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 53 bajtów
            UTEST3, // Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 15 bajtów
            UTEST4, // Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 116 bajtów
            UTEST5, // Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 2104 bajtów
            UTEST6, // Sprawdzanie poprawności działania funkcji lower_to_upper - limit pamięci ustawiony na 43 bajtów
            UTEST7, // Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 2 bajtów
            UTEST8, // Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 53 bajtów
            UTEST9, // Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 15 bajtów
            UTEST10, // Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 106 bajtów
            UTEST11, // Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 2075 bajtów
            UTEST12, // Sprawdzanie poprawności działania funkcji upper_to_lower - limit pamięci ustawiony na 19 bajtów
            UTEST13, // Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 2 bajtów
            UTEST14, // Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 53 bajtów
            UTEST15, // Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 15 bajtów
            UTEST16, // Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 309 bajtów
            UTEST17, // Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 2137 bajtów
            UTEST18, // Sprawdzanie poprawności działania funkcji space_to_dash - limit pamięci ustawiony na 196 bajtów
            UTEST19, // Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 2 bajtów
            UTEST20, // Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 53 bajtów
            UTEST21, // Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 14 bajtów
            UTEST22, // Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 152 bajtów
            UTEST23, // Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 2035 bajtów
            UTEST24, // Sprawdzanie poprawności działania funkcji reverse_letter - limit pamięci ustawiony na 59 bajtów
            UTEST25, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 108 bajtów)
            UTEST26, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 464 bajtów)
            UTEST27, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 107 bajtów)
            UTEST28, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 312 bajtów)
            UTEST29, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 266 bajtów)
            UTEST30, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 364 bajtów)
            UTEST31, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 0 bajtów)
            UTEST32, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 40 bajtów)
            UTEST33, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 120 bajtów)
            UTEST34, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 200 bajtów)
            UTEST35, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 280 bajtów)
            UTEST36, // Sprawdzanie poprawności działania funkcji text_modifier - (limit sterty ustawiono na 360 bajtów)
            UTEST37, // Sprawdzanie poprawności działania funkcji text_modifier
            UTEST38, // Sprawdzanie poprawności działania funkcji text_modifier
            UTEST39, // Sprawdzanie poprawności działania funkcji text_modifier
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
            test_summary(39); // wszystkie testy muszą zakończyć się sukcesem
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
            MTEST3, // Reakcja na brak pamięci - limit pamięci ustawiony na 532
            MTEST4, // Reakcja na brak pamięci - limit pamięci ustawiony na 1049
            MTEST5, // Reakcja na brak pamięci - limit pamięci ustawiony na 1081
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