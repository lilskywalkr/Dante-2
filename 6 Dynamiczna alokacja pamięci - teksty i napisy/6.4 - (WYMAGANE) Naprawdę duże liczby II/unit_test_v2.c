/*
 * Unit Test Bootstrap
 * Autor: Tomasz Jaworski, 2018-2020
 *
 * Test dla zadania Naprawdę duże liczby II
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-04-18 18:48:35.457085
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
//  Test 1: Sprawdzanie poprawności działania funkcji validate
//
void UTEST1(void)
{
    // informacje o teście
    test_start(1, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 2: Sprawdzanie poprawności działania funkcji validate
//
void UTEST2(void)
{
    // informacje o teście
    test_start(2, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("\n");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 3: Sprawdzanie poprawności działania funkcji validate
//
void UTEST3(void)
{
    // informacje o teście
    test_start(3, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("0");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 4: Sprawdzanie poprawności działania funkcji validate
//
void UTEST4(void)
{
    // informacje o teście
    test_start(4, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("4");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 5: Sprawdzanie poprawności działania funkcji validate
//
void UTEST5(void)
{
    // informacje o teście
    test_start(5, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("-2");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 6: Sprawdzanie poprawności działania funkcji validate
//
void UTEST6(void)
{
    // informacje o teście
    test_start(6, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("3521");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 7: Sprawdzanie poprawności działania funkcji validate
//
void UTEST7(void)
{
    // informacje o teście
    test_start(7, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("-4489");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 8: Sprawdzanie poprawności działania funkcji validate
//
void UTEST8(void)
{
    // informacje o teście
    test_start(8, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("6146815");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 9: Sprawdzanie poprawności działania funkcji validate
//
void UTEST9(void)
{
    // informacje o teście
    test_start(9, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("8602645");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 10: Sprawdzanie poprawności działania funkcji validate
//
void UTEST10(void)
{
    // informacje o teście
    test_start(10, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("26189494643101191701038406046752339245289079239845085493988223932674748538078859325843684315418745074543598129939014725044160664973079924852690812515880701464906373503449635305505225336651634994369452783398291315855137747463052780125798441278579334433122859488078302486982913423653451595376359968120713638732221606745937060828316482974738471785970509979854803605218016333891777913749833880970289525114330893408619419621188412527172552105894498725554736484819683338260344446653847827091764566652125747022545296082862726876930942516430681444753969901367179128131584301260621872565737276564144517793817999324252103653476767771006151737266079823908153393239308475012111626278700457464708051609771671408028344477567900952500843877076648668559306957951674015445785890452581400442127211276035128210147736586518532400786754711430950206286769617340804942574028968820610109030463092830138714170143398867648546471539886326164128602030539497210599977086764076880071316415766801790791156291115895336115726656665285234058809925517065171562917841260795379094535722627007913123540206222171099000987039411679328298776045311819506550791230134163403763537138181965383652638067473695425519052290728868018963319364327725230264576111042526686161274798532856466135014145024259948586058161560255797552006880931763807851347360905309652244856226084492110673662660501664798606757");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 11: Sprawdzanie poprawności działania funkcji validate
//
void UTEST11(void)
{
    // informacje o teście
    test_start(11, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("396951981221335686826979990338103096717424439233106108816602933387984927155623558544934520303271751205918041123409462310960656859453598173530265472528735600257611675237253504189172538595753897326199115255003045765401584311469657222580991901987065617130394808215115599958933649605090658003898372224882436650723314654257151317669074031139779164694969650983741721616894894957342209221274467874549416692725662192775105064497126983064657170469955960506591173709650462994657301871472590444667022852463646858702461269227069271551876547184844286899838635823872395299137542941967767542522356619686824734978579720827777647183947856817135506748735086193682689976100047976978106388135362313708108156620487643588468260257537476421081112748554552506491418893291194301188213964788891325604014733954153686552800548971219821387937032354431251836622705919744289623943987832920786447431864859316205416884308761199084411616664625352243394796965572823094857373322793470150048443434873833315400200232783704075709125696487059856704630591947617617870144596497992411527454807616635364\n");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 12: Sprawdzanie poprawności działania funkcji validate
//
void UTEST12(void)
{
    // informacje o teście
    test_start(12, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("879011105652698638538042935490637376580777766466897905941168669570212129630072286533394652663680027167156600266672656869872985087217023336318591196411849901937262297851282196564203972692358064409481703417565115759621999293592522939163578674147993184131891720365673114450397040919580168962270503182376725261536140704666006825661914035985663776760087455741344364585761501358931518499167221175253337451968499921822747211677745216486779404368166339881738353670620652420065140131550414568434550684080263017742654632185946214833803820424717073682523799744277994990768649800772699173147258178640330024829751513811076689137675459803061128904895443745120005282461601009637952302782223843448482746479004155508797753243630816056707453439593237804378593916862262603561114486121616499241696461693128907544093621839658403707434975769504831209250820407797554208325995188667778641552029359355502481597154962419723510239596645846163298545177201329055323953542104669390268825852886452210622026654579990763585187683123800459579892508465654185992266850541802988570895470391330592705127360114227646139706837242514175666109780068890079796397861643996730720089166169086535638949396944724971514131480521739258472163686071262363548159842002762627866432381907597132392727460180674102630942049885914847846942184363311432078587210078478198529547721355997769773961415118421042127226463511977747181924655458203745576344487297084939034550006534436422683317780136915114401823716935849649653205880202894064597825697986385404652168724146677399568707640329962256296439817962454162158728939251492124665671755105078227503875484292040932773759854229540997421469620424197716171922473131466800773157968680409224340919315381160559858918781420408950014359916381597613651575039149481397751742164422187434267889756128653501422591190627707224388626204363954495020081073847080175641957776383283545301496459788983506154756979859718883172401569512532735481055575189708315287712985998140114765715272966502869700915469450685049068465467604845438666130882467943989790699758291194102259870832143194483675886440260722606374187622216690351534271164244748617226570287939346373796923754697467838520564947156451170709453390441649461004242670138890404499473598602500443926611949304643540842215827464943794878247696847502955319463717059833204667940543056947151672926036198393633329011844013594757545850934013028915195337207378466655028142280571508177006615396374683926958020903435347736198428016490969188340763217901557296993320");
                printf("#####END#####\n");
                test_error( len == 0, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 0, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 13: Sprawdzanie poprawności działania funkcji validate
//
void UTEST13(void)
{
    // informacje o teście
    test_start(13, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("0000000004817147460579249287282");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 14: Sprawdzanie poprawności działania funkcji validate
//
void UTEST14(void)
{
    // informacje o teście
    test_start(14, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("009");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 15: Sprawdzanie poprawności działania funkcji validate
//
void UTEST15(void)
{
    // informacje o teście
    test_start(15, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("09");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 16: Sprawdzanie poprawności działania funkcji validate
//
void UTEST16(void)
{
    // informacje o teście
    test_start(16, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("08477743711558369454883247804488");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 17: Sprawdzanie poprawności działania funkcji validate
//
void UTEST17(void)
{
    // informacje o teście
    test_start(17, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("7797041278709314262\n");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 18: Sprawdzanie poprawności działania funkcji validate
//
void UTEST18(void)
{
    // informacje o teście
    test_start(18, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("22682370648085133834308387\n60944206022887151587902");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 19: Sprawdzanie poprawności działania funkcji validate
//
void UTEST19(void)
{
    // informacje o teście
    test_start(19, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("703840104260113032016H843376133645212");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 20: Sprawdzanie poprawności działania funkcji validate
//
void UTEST20(void)
{
    // informacje o teście
    test_start(20, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("18822396588597319758080688i9884195057365708873");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 21: Sprawdzanie poprawności działania funkcji validate
//
void UTEST21(void)
{
    // informacje o teście
    test_start(21, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                printf("#####START#####");
                int len = validate("16891466051711215 2497426142391855173579829420564");
                printf("#####END#####\n");
                test_error( len == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", len);

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 22: Sprawdzanie poprawności działania funkcji validate
//
void UTEST22(void)
{
    // informacje o teście
    test_start(22, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int len = validate(NULL);
            printf("#####END#####\n");
            test_error( len == -1, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość -1, a zwróciła %d", len);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 23: Sprawdzanie poprawności działania funkcji validate
//
void UTEST23(void)
{
    // informacje o teście
    test_start(23, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 1;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 24: Sprawdzanie poprawności działania funkcji validate
//
void UTEST24(void)
{
    // informacje o teście
    test_start(24, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 2;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 25: Sprawdzanie poprawności działania funkcji validate
//
void UTEST25(void)
{
    // informacje o teście
    test_start(25, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 3;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 26: Sprawdzanie poprawności działania funkcji validate
//
void UTEST26(void)
{
    // informacje o teście
    test_start(26, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 4;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 27: Sprawdzanie poprawności działania funkcji validate
//
void UTEST27(void)
{
    // informacje o teście
    test_start(27, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 5;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 28: Sprawdzanie poprawności działania funkcji validate
//
void UTEST28(void)
{
    // informacje o teście
    test_start(28, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 6;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 29: Sprawdzanie poprawności działania funkcji validate
//
void UTEST29(void)
{
    // informacje o teście
    test_start(29, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 7;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 30: Sprawdzanie poprawności działania funkcji validate
//
void UTEST30(void)
{
    // informacje o teście
    test_start(30, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 8;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 31: Sprawdzanie poprawności działania funkcji validate
//
void UTEST31(void)
{
    // informacje o teście
    test_start(31, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 10;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 32: Sprawdzanie poprawności działania funkcji validate
//
void UTEST32(void)
{
    // informacje o teście
    test_start(32, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 11;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 33: Sprawdzanie poprawności działania funkcji validate
//
void UTEST33(void)
{
    // informacje o teście
    test_start(33, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 12;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 34: Sprawdzanie poprawności działania funkcji validate
//
void UTEST34(void)
{
    // informacje o teście
    test_start(34, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 13;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 35: Sprawdzanie poprawności działania funkcji validate
//
void UTEST35(void)
{
    // informacje o teście
    test_start(35, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 14;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 36: Sprawdzanie poprawności działania funkcji validate
//
void UTEST36(void)
{
    // informacje o teście
    test_start(36, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 15;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 37: Sprawdzanie poprawności działania funkcji validate
//
void UTEST37(void)
{
    // informacje o teście
    test_start(37, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 16;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 38: Sprawdzanie poprawności działania funkcji validate
//
void UTEST38(void)
{
    // informacje o teście
    test_start(38, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 17;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 39: Sprawdzanie poprawności działania funkcji validate
//
void UTEST39(void)
{
    // informacje o teście
    test_start(39, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 18;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
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
    

                char text[] = "+";
                text[0] = 19;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 41: Sprawdzanie poprawności działania funkcji validate
//
void UTEST41(void)
{
    // informacje o teście
    test_start(41, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 20;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 42: Sprawdzanie poprawności działania funkcji validate
//
void UTEST42(void)
{
    // informacje o teście
    test_start(42, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 21;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 43: Sprawdzanie poprawności działania funkcji validate
//
void UTEST43(void)
{
    // informacje o teście
    test_start(43, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 22;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 44: Sprawdzanie poprawności działania funkcji validate
//
void UTEST44(void)
{
    // informacje o teście
    test_start(44, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 23;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 45: Sprawdzanie poprawności działania funkcji validate
//
void UTEST45(void)
{
    // informacje o teście
    test_start(45, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 24;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 46: Sprawdzanie poprawności działania funkcji validate
//
void UTEST46(void)
{
    // informacje o teście
    test_start(46, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 25;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 47: Sprawdzanie poprawności działania funkcji validate
//
void UTEST47(void)
{
    // informacje o teście
    test_start(47, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 26;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 48: Sprawdzanie poprawności działania funkcji validate
//
void UTEST48(void)
{
    // informacje o teście
    test_start(48, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 27;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 49: Sprawdzanie poprawności działania funkcji validate
//
void UTEST49(void)
{
    // informacje o teście
    test_start(49, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 28;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 50: Sprawdzanie poprawności działania funkcji validate
//
void UTEST50(void)
{
    // informacje o teście
    test_start(50, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 29;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 51: Sprawdzanie poprawności działania funkcji validate
//
void UTEST51(void)
{
    // informacje o teście
    test_start(51, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 30;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 52: Sprawdzanie poprawności działania funkcji validate
//
void UTEST52(void)
{
    // informacje o teście
    test_start(52, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 31;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 53: Sprawdzanie poprawności działania funkcji validate
//
void UTEST53(void)
{
    // informacje o teście
    test_start(53, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 32;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 54: Sprawdzanie poprawności działania funkcji validate
//
void UTEST54(void)
{
    // informacje o teście
    test_start(54, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 33;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 55: Sprawdzanie poprawności działania funkcji validate
//
void UTEST55(void)
{
    // informacje o teście
    test_start(55, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 34;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 56: Sprawdzanie poprawności działania funkcji validate
//
void UTEST56(void)
{
    // informacje o teście
    test_start(56, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 35;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 57: Sprawdzanie poprawności działania funkcji validate
//
void UTEST57(void)
{
    // informacje o teście
    test_start(57, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 36;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 58: Sprawdzanie poprawności działania funkcji validate
//
void UTEST58(void)
{
    // informacje o teście
    test_start(58, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 37;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 59: Sprawdzanie poprawności działania funkcji validate
//
void UTEST59(void)
{
    // informacje o teście
    test_start(59, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 38;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 60: Sprawdzanie poprawności działania funkcji validate
//
void UTEST60(void)
{
    // informacje o teście
    test_start(60, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 39;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 61: Sprawdzanie poprawności działania funkcji validate
//
void UTEST61(void)
{
    // informacje o teście
    test_start(61, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 40;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 62: Sprawdzanie poprawności działania funkcji validate
//
void UTEST62(void)
{
    // informacje o teście
    test_start(62, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 41;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 63: Sprawdzanie poprawności działania funkcji validate
//
void UTEST63(void)
{
    // informacje o teście
    test_start(63, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 42;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 64: Sprawdzanie poprawności działania funkcji validate
//
void UTEST64(void)
{
    // informacje o teście
    test_start(64, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 43;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 65: Sprawdzanie poprawności działania funkcji validate
//
void UTEST65(void)
{
    // informacje o teście
    test_start(65, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 44;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 66: Sprawdzanie poprawności działania funkcji validate
//
void UTEST66(void)
{
    // informacje o teście
    test_start(66, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 45;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 67: Sprawdzanie poprawności działania funkcji validate
//
void UTEST67(void)
{
    // informacje o teście
    test_start(67, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 46;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 68: Sprawdzanie poprawności działania funkcji validate
//
void UTEST68(void)
{
    // informacje o teście
    test_start(68, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 47;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 69: Sprawdzanie poprawności działania funkcji validate
//
void UTEST69(void)
{
    // informacje o teście
    test_start(69, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 58;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 70: Sprawdzanie poprawności działania funkcji validate
//
void UTEST70(void)
{
    // informacje o teście
    test_start(70, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 59;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 71: Sprawdzanie poprawności działania funkcji validate
//
void UTEST71(void)
{
    // informacje o teście
    test_start(71, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 60;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 72: Sprawdzanie poprawności działania funkcji validate
//
void UTEST72(void)
{
    // informacje o teście
    test_start(72, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 61;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 73: Sprawdzanie poprawności działania funkcji validate
//
void UTEST73(void)
{
    // informacje o teście
    test_start(73, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 62;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 74: Sprawdzanie poprawności działania funkcji validate
//
void UTEST74(void)
{
    // informacje o teście
    test_start(74, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 63;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 75: Sprawdzanie poprawności działania funkcji validate
//
void UTEST75(void)
{
    // informacje o teście
    test_start(75, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 64;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 76: Sprawdzanie poprawności działania funkcji validate
//
void UTEST76(void)
{
    // informacje o teście
    test_start(76, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 65;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 77: Sprawdzanie poprawności działania funkcji validate
//
void UTEST77(void)
{
    // informacje o teście
    test_start(77, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 66;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 78: Sprawdzanie poprawności działania funkcji validate
//
void UTEST78(void)
{
    // informacje o teście
    test_start(78, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 67;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 79: Sprawdzanie poprawności działania funkcji validate
//
void UTEST79(void)
{
    // informacje o teście
    test_start(79, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 68;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 80: Sprawdzanie poprawności działania funkcji validate
//
void UTEST80(void)
{
    // informacje o teście
    test_start(80, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 69;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 81: Sprawdzanie poprawności działania funkcji validate
//
void UTEST81(void)
{
    // informacje o teście
    test_start(81, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 70;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 82: Sprawdzanie poprawności działania funkcji validate
//
void UTEST82(void)
{
    // informacje o teście
    test_start(82, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 71;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 83: Sprawdzanie poprawności działania funkcji validate
//
void UTEST83(void)
{
    // informacje o teście
    test_start(83, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 72;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 84: Sprawdzanie poprawności działania funkcji validate
//
void UTEST84(void)
{
    // informacje o teście
    test_start(84, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 73;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 85: Sprawdzanie poprawności działania funkcji validate
//
void UTEST85(void)
{
    // informacje o teście
    test_start(85, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 74;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 86: Sprawdzanie poprawności działania funkcji validate
//
void UTEST86(void)
{
    // informacje o teście
    test_start(86, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 75;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 87: Sprawdzanie poprawności działania funkcji validate
//
void UTEST87(void)
{
    // informacje o teście
    test_start(87, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 76;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 88: Sprawdzanie poprawności działania funkcji validate
//
void UTEST88(void)
{
    // informacje o teście
    test_start(88, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 77;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 89: Sprawdzanie poprawności działania funkcji validate
//
void UTEST89(void)
{
    // informacje o teście
    test_start(89, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 78;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 90: Sprawdzanie poprawności działania funkcji validate
//
void UTEST90(void)
{
    // informacje o teście
    test_start(90, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 79;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 91: Sprawdzanie poprawności działania funkcji validate
//
void UTEST91(void)
{
    // informacje o teście
    test_start(91, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 80;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 92: Sprawdzanie poprawności działania funkcji validate
//
void UTEST92(void)
{
    // informacje o teście
    test_start(92, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 81;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 93: Sprawdzanie poprawności działania funkcji validate
//
void UTEST93(void)
{
    // informacje o teście
    test_start(93, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 82;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 94: Sprawdzanie poprawności działania funkcji validate
//
void UTEST94(void)
{
    // informacje o teście
    test_start(94, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 83;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 95: Sprawdzanie poprawności działania funkcji validate
//
void UTEST95(void)
{
    // informacje o teście
    test_start(95, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 84;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 96: Sprawdzanie poprawności działania funkcji validate
//
void UTEST96(void)
{
    // informacje o teście
    test_start(96, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 85;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 97: Sprawdzanie poprawności działania funkcji validate
//
void UTEST97(void)
{
    // informacje o teście
    test_start(97, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 86;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 98: Sprawdzanie poprawności działania funkcji validate
//
void UTEST98(void)
{
    // informacje o teście
    test_start(98, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 87;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 99: Sprawdzanie poprawności działania funkcji validate
//
void UTEST99(void)
{
    // informacje o teście
    test_start(99, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 88;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 100: Sprawdzanie poprawności działania funkcji validate
//
void UTEST100(void)
{
    // informacje o teście
    test_start(100, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 89;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 101: Sprawdzanie poprawności działania funkcji validate
//
void UTEST101(void)
{
    // informacje o teście
    test_start(101, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 90;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 102: Sprawdzanie poprawności działania funkcji validate
//
void UTEST102(void)
{
    // informacje o teście
    test_start(102, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 91;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 103: Sprawdzanie poprawności działania funkcji validate
//
void UTEST103(void)
{
    // informacje o teście
    test_start(103, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 92;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 104: Sprawdzanie poprawności działania funkcji validate
//
void UTEST104(void)
{
    // informacje o teście
    test_start(104, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 93;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 105: Sprawdzanie poprawności działania funkcji validate
//
void UTEST105(void)
{
    // informacje o teście
    test_start(105, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 94;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 106: Sprawdzanie poprawności działania funkcji validate
//
void UTEST106(void)
{
    // informacje o teście
    test_start(106, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 95;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 107: Sprawdzanie poprawności działania funkcji validate
//
void UTEST107(void)
{
    // informacje o teście
    test_start(107, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 96;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 108: Sprawdzanie poprawności działania funkcji validate
//
void UTEST108(void)
{
    // informacje o teście
    test_start(108, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 97;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 109: Sprawdzanie poprawności działania funkcji validate
//
void UTEST109(void)
{
    // informacje o teście
    test_start(109, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 98;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 110: Sprawdzanie poprawności działania funkcji validate
//
void UTEST110(void)
{
    // informacje o teście
    test_start(110, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 99;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 111: Sprawdzanie poprawności działania funkcji validate
//
void UTEST111(void)
{
    // informacje o teście
    test_start(111, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 100;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 112: Sprawdzanie poprawności działania funkcji validate
//
void UTEST112(void)
{
    // informacje o teście
    test_start(112, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 101;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 113: Sprawdzanie poprawności działania funkcji validate
//
void UTEST113(void)
{
    // informacje o teście
    test_start(113, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 102;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 114: Sprawdzanie poprawności działania funkcji validate
//
void UTEST114(void)
{
    // informacje o teście
    test_start(114, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 103;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 115: Sprawdzanie poprawności działania funkcji validate
//
void UTEST115(void)
{
    // informacje o teście
    test_start(115, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 104;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 116: Sprawdzanie poprawności działania funkcji validate
//
void UTEST116(void)
{
    // informacje o teście
    test_start(116, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 105;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 117: Sprawdzanie poprawności działania funkcji validate
//
void UTEST117(void)
{
    // informacje o teście
    test_start(117, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 106;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 118: Sprawdzanie poprawności działania funkcji validate
//
void UTEST118(void)
{
    // informacje o teście
    test_start(118, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 107;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 119: Sprawdzanie poprawności działania funkcji validate
//
void UTEST119(void)
{
    // informacje o teście
    test_start(119, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 108;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 120: Sprawdzanie poprawności działania funkcji validate
//
void UTEST120(void)
{
    // informacje o teście
    test_start(120, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 109;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 121: Sprawdzanie poprawności działania funkcji validate
//
void UTEST121(void)
{
    // informacje o teście
    test_start(121, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 110;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 122: Sprawdzanie poprawności działania funkcji validate
//
void UTEST122(void)
{
    // informacje o teście
    test_start(122, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 111;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 123: Sprawdzanie poprawności działania funkcji validate
//
void UTEST123(void)
{
    // informacje o teście
    test_start(123, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 112;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 124: Sprawdzanie poprawności działania funkcji validate
//
void UTEST124(void)
{
    // informacje o teście
    test_start(124, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 113;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 125: Sprawdzanie poprawności działania funkcji validate
//
void UTEST125(void)
{
    // informacje o teście
    test_start(125, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 114;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 126: Sprawdzanie poprawności działania funkcji validate
//
void UTEST126(void)
{
    // informacje o teście
    test_start(126, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 115;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 127: Sprawdzanie poprawności działania funkcji validate
//
void UTEST127(void)
{
    // informacje o teście
    test_start(127, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 116;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 128: Sprawdzanie poprawności działania funkcji validate
//
void UTEST128(void)
{
    // informacje o teście
    test_start(128, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 117;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 129: Sprawdzanie poprawności działania funkcji validate
//
void UTEST129(void)
{
    // informacje o teście
    test_start(129, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 118;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 130: Sprawdzanie poprawności działania funkcji validate
//
void UTEST130(void)
{
    // informacje o teście
    test_start(130, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 119;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 131: Sprawdzanie poprawności działania funkcji validate
//
void UTEST131(void)
{
    // informacje o teście
    test_start(131, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 120;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 132: Sprawdzanie poprawności działania funkcji validate
//
void UTEST132(void)
{
    // informacje o teście
    test_start(132, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 121;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 133: Sprawdzanie poprawności działania funkcji validate
//
void UTEST133(void)
{
    // informacje o teście
    test_start(133, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 122;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 134: Sprawdzanie poprawności działania funkcji validate
//
void UTEST134(void)
{
    // informacje o teście
    test_start(134, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 123;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 135: Sprawdzanie poprawności działania funkcji validate
//
void UTEST135(void)
{
    // informacje o teście
    test_start(135, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 124;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 136: Sprawdzanie poprawności działania funkcji validate
//
void UTEST136(void)
{
    // informacje o teście
    test_start(136, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 125;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 137: Sprawdzanie poprawności działania funkcji validate
//
void UTEST137(void)
{
    // informacje o teście
    test_start(137, "Sprawdzanie poprawności działania funkcji validate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char text[] = "+";
                text[0] = 126;

                printf("#####START#####");
                int res = validate(text);
                printf("#####END#####\\n");
                test_error( res == 2, "Funkcja validate zwróciła nieprawidłową wartość, powinna zwrócić wartość 2, a zwróciła %d", res);
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 138: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST138(void)
{
    // informacje o teście
    test_start(138, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "281";        
                printf("#####START#####");
                int err_code = add("150", "131", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 139: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST139(void)
{
    // informacje o teście
    test_start(139, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "19";        
                printf("#####START#####");
                int err_code = add("150", "-131", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 140: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST140(void)
{
    // informacje o teście
    test_start(140, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("150", "-150", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 141: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST141(void)
{
    // informacje o teście
    test_start(141, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-19";        
                printf("#####START#####");
                int err_code = add("131", "-150", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 142: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST142(void)
{
    // informacje o teście
    test_start(142, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-281";        
                printf("#####START#####");
                int err_code = add("-150", "-131", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 143: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST143(void)
{
    // informacje o teście
    test_start(143, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-19";        
                printf("#####START#####");
                int err_code = add("-150", "131", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 144: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST144(void)
{
    // informacje o teście
    test_start(144, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1842";        
                printf("#####START#####");
                int err_code = add("867", "975", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 145: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST145(void)
{
    // informacje o teście
    test_start(145, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1842";        
                printf("#####START#####");
                int err_code = add("-867", "-975", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 146: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 488 bajtów
//
void UTEST146(void)
{
    // informacje o teście
    test_start(146, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 488 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(488);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "78653055861907979433141586600150060008504606459261747793596215469871022627722506371344060645815269186869050123262651825993148733997607709775009366494023099804323950952625705310781447599610129837175653630637227309589794870598687291699347469643318804978080423002004242630337062234467905671111220228131654560570221877824127992359115974023459562585457072244846673339714997762872513093029899423548768500011547603302380575341429575029577738083347567864649759780300141852261709374909280238424";        
                printf("#####START#####");
                int err_code = add("31441557333554747362009294079801055224501133969534784074226150900096752183525979795346738474245939087030267197695721457530971556959252782748613699398487804858374223771977646421015974064521218517336825093982909457272587455248037997666120418479538021700895355032419528701328440377618531433166573741306855352573391483185616629705292459530213689165483415270556480081936685115661813029140873247420510172730598141504969813271445161898262360460845933949827396928034801631659135698256464315271", "47211498528353232071132292520349004784003472489726963719370064569774270444196526575997322171569330099838782925566930368462177177038354927026395667095535294945949727180648058889765473535088911319838828536654317852317207415350649294033227051163780783277185067969584713929008621856849374237944646486824799207996830394638511362653823514493245873419973656974290193257778312647210700063889026176128258327280949461797410762069984413131315377622501633914822362852265340220602573676652815923153", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 147: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów
//
void UTEST147(void)
{
    // informacje o teście
    test_start(147, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(489);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("31441557333554747362009294079801055224501133969534784074226150900096752183525979795346738474245939087030267197695721457530971556959252782748613699398487804858374223771977646421015974064521218517336825093982909457272587455248037997666120418479538021700895355032419528701328440377618531433166573741306855352573391483185616629705292459530213689165483415270556480081936685115661813029140873247420510172730598141504969813271445161898262360460845933949827396928034801631659135698256464315271", "-31441557333554747362009294079801055224501133969534784074226150900096752183525979795346738474245939087030267197695721457530971556959252782748613699398487804858374223771977646421015974064521218517336825093982909457272587455248037997666120418479538021700895355032419528701328440377618531433166573741306855352573391483185616629705292459530213689165483415270556480081936685115661813029140873247420510172730598141504969813271445161898262360460845933949827396928034801631659135698256464315271", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 148: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów
//
void UTEST148(void)
{
    // informacje o teście
    test_start(148, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(489);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "15769941194798484709122998440547949559502338520192179645143913669677518260670546780650583697323391012808515727871208910931205620079102144277781967697047490087575503408670412468749499470567692802502003442671408395044619960102611296367106632684242761576289712937165185227680181479230842804778072745517943855423438911452894732948531054963032184254490241703733713175841627531548887034748152928707748154550351320292440948798539251233053017161655699964994965924230538588943437978396351607882";        
                printf("#####START#####");
                int err_code = add("-31441557333554747362009294079801055224501133969534784074226150900096752183525979795346738474245939087030267197695721457530971556959252782748613699398487804858374223771977646421015974064521218517336825093982909457272587455248037997666120418479538021700895355032419528701328440377618531433166573741306855352573391483185616629705292459530213689165483415270556480081936685115661813029140873247420510172730598141504969813271445161898262360460845933949827396928034801631659135698256464315271", "47211498528353232071132292520349004784003472489726963719370064569774270444196526575997322171569330099838782925566930368462177177038354927026395667095535294945949727180648058889765473535088911319838828536654317852317207415350649294033227051163780783277185067969584713929008621856849374237944646486824799207996830394638511362653823514493245873419973656974290193257778312647210700063889026176128258327280949461797410762069984413131315377622501633914822362852265340220602573676652815923153", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 149: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów
//
void UTEST149(void)
{
    // informacje o teście
    test_start(149, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(489);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-78653055861907979433141586600150060008504606459261747793596215469871022627722506371344060645815269186869050123262651825993148733997607709775009366494023099804323950952625705310781447599610129837175653630637227309589794870598687291699347469643318804978080423002004242630337062234467905671111220228131654560570221877824127992359115974023459562585457072244846673339714997762872513093029899423548768500011547603302380575341429575029577738083347567864649759780300141852261709374909280238424";        
                printf("#####START#####");
                int err_code = add("-31441557333554747362009294079801055224501133969534784074226150900096752183525979795346738474245939087030267197695721457530971556959252782748613699398487804858374223771977646421015974064521218517336825093982909457272587455248037997666120418479538021700895355032419528701328440377618531433166573741306855352573391483185616629705292459530213689165483415270556480081936685115661813029140873247420510172730598141504969813271445161898262360460845933949827396928034801631659135698256464315271", "-47211498528353232071132292520349004784003472489726963719370064569774270444196526575997322171569330099838782925566930368462177177038354927026395667095535294945949727180648058889765473535088911319838828536654317852317207415350649294033227051163780783277185067969584713929008621856849374237944646486824799207996830394638511362653823514493245873419973656974290193257778312647210700063889026176128258327280949461797410762069984413131315377622501633914822362852265340220602573676652815923153", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 150: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów
//
void UTEST150(void)
{
    // informacje o teście
    test_start(150, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(489);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-15769941194798484709122998440547949559502338520192179645143913669677518260670546780650583697323391012808515727871208910931205620079102144277781967697047490087575503408670412468749499470567692802502003442671408395044619960102611296367106632684242761576289712937165185227680181479230842804778072745517943855423438911452894732948531054963032184254490241703733713175841627531548887034748152928707748154550351320292440948798539251233053017161655699964994965924230538588943437978396351607882";        
                printf("#####START#####");
                int err_code = add("31441557333554747362009294079801055224501133969534784074226150900096752183525979795346738474245939087030267197695721457530971556959252782748613699398487804858374223771977646421015974064521218517336825093982909457272587455248037997666120418479538021700895355032419528701328440377618531433166573741306855352573391483185616629705292459530213689165483415270556480081936685115661813029140873247420510172730598141504969813271445161898262360460845933949827396928034801631659135698256464315271", "-47211498528353232071132292520349004784003472489726963719370064569774270444196526575997322171569330099838782925566930368462177177038354927026395667095535294945949727180648058889765473535088911319838828536654317852317207415350649294033227051163780783277185067969584713929008621856849374237944646486824799207996830394638511362653823514493245873419973656974290193257778312647210700063889026176128258327280949461797410762069984413131315377622501633914822362852265340220602573676652815923153", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 151: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 290 bajtów
//
void UTEST151(void)
{
    // informacje o teście
    test_start(151, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 290 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(290);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "149212224565524572501747724973269009500139422937702991275388278981874276055273027339192150944103105345725856509954629209518295709667893458217190422692507000112554722765797691980120010994121921733216854127342041059605892821287400656765289694163189258892819334388351661685154839656682589048";        
                printf("#####START#####");
                int err_code = add("76362959159795572761326063585055927435821975450012369727330438904625740133621039128968556879832262380571517239745482851291928630778576164334784535521197510426849728211235294716058819166550828280477015622710186680004475121386722061428677520317693311966709367548633055925712289797026799490", "72849265405728999740421661388213082064317447487690621548057840077248535921651988210223594064270842965154339270209146358226367078889317293882405887171309489685704994554562397264061191827571093452739838504631854379601417699900678595336612173845495946926109966839718605759442549859655789558", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 152: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów
//
void UTEST152(void)
{
    // informacje o teście
    test_start(152, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(291);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("76362959159795572761326063585055927435821975450012369727330438904625740133621039128968556879832262380571517239745482851291928630778576164334784535521197510426849728211235294716058819166550828280477015622710186680004475121386722061428677520317693311966709367548633055925712289797026799490", "-76362959159795572761326063585055927435821975450012369727330438904625740133621039128968556879832262380571517239745482851291928630778576164334784535521197510426849728211235294716058819166550828280477015622710186680004475121386722061428677520317693311966709367548633055925712289797026799490", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 153: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów
//
void UTEST153(void)
{
    // informacje o teście
    test_start(153, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(291);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-3513693754066573020904402196842845371504527962321748179272598827377204211969050918744962815561419415417177969536336493065561551889258870452378648349888020741144733656672897451997627338979734827737177118078332300403057421486043466092065346472197365040599400708914450166269739937371009932";        
                printf("#####START#####");
                int err_code = add("-76362959159795572761326063585055927435821975450012369727330438904625740133621039128968556879832262380571517239745482851291928630778576164334784535521197510426849728211235294716058819166550828280477015622710186680004475121386722061428677520317693311966709367548633055925712289797026799490", "72849265405728999740421661388213082064317447487690621548057840077248535921651988210223594064270842965154339270209146358226367078889317293882405887171309489685704994554562397264061191827571093452739838504631854379601417699900678595336612173845495946926109966839718605759442549859655789558", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 154: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów
//
void UTEST154(void)
{
    // informacje o teście
    test_start(154, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(291);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-149212224565524572501747724973269009500139422937702991275388278981874276055273027339192150944103105345725856509954629209518295709667893458217190422692507000112554722765797691980120010994121921733216854127342041059605892821287400656765289694163189258892819334388351661685154839656682589048";        
                printf("#####START#####");
                int err_code = add("-76362959159795572761326063585055927435821975450012369727330438904625740133621039128968556879832262380571517239745482851291928630778576164334784535521197510426849728211235294716058819166550828280477015622710186680004475121386722061428677520317693311966709367548633055925712289797026799490", "-72849265405728999740421661388213082064317447487690621548057840077248535921651988210223594064270842965154339270209146358226367078889317293882405887171309489685704994554562397264061191827571093452739838504631854379601417699900678595336612173845495946926109966839718605759442549859655789558", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 155: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów
//
void UTEST155(void)
{
    // informacje o teście
    test_start(155, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(291);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "3513693754066573020904402196842845371504527962321748179272598827377204211969050918744962815561419415417177969536336493065561551889258870452378648349888020741144733656672897451997627338979734827737177118078332300403057421486043466092065346472197365040599400708914450166269739937371009932";        
                printf("#####START#####");
                int err_code = add("76362959159795572761326063585055927435821975450012369727330438904625740133621039128968556879832262380571517239745482851291928630778576164334784535521197510426849728211235294716058819166550828280477015622710186680004475121386722061428677520317693311966709367548633055925712289797026799490", "-72849265405728999740421661388213082064317447487690621548057840077248535921651988210223594064270842965154339270209146358226367078889317293882405887171309489685704994554562397264061191827571093452739838504631854379601417699900678595336612173845495946926109966839718605759442549859655789558", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 156: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 14 bajtów
//
void UTEST156(void)
{
    // informacje o teście
    test_start(156, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 14 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(14);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "100000000000";        
                printf("#####START#####");
                int err_code = add("99999999999", "1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 157: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 15 bajtów
//
void UTEST157(void)
{
    // informacje o teście
    test_start(157, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 15 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(15);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-100000000000";        
                printf("#####START#####");
                int err_code = add("-99999999999", "-1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 158: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 14 bajtów
//
void UTEST158(void)
{
    // informacje o teście
    test_start(158, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 14 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(14);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "100000000000";        
                printf("#####START#####");
                int err_code = add("1", "99999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 159: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 15 bajtów
//
void UTEST159(void)
{
    // informacje o teście
    test_start(159, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 15 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(15);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-100000000000";        
                printf("#####START#####");
                int err_code = add("-1", "-99999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 160: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 15 bajtów
//
void UTEST160(void)
{
    // informacje o teście
    test_start(160, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 15 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(15);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-99999999998";        
                printf("#####START#####");
                int err_code = add("1", "-99999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 161: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 24 bajtów
//
void UTEST161(void)
{
    // informacje o teście
    test_start(161, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 24 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(24);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1";        
                printf("#####START#####");
                int err_code = add("100000000000000000000", "-99999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 162: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 24 bajtów
//
void UTEST162(void)
{
    // informacje o teście
    test_start(162, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 24 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(24);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1";        
                printf("#####START#####");
                int err_code = add("-99999999999999999999", "100000000000000000000", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 163: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 25 bajtów
//
void UTEST163(void)
{
    // informacje o teście
    test_start(163, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 25 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(25);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1";        
                printf("#####START#####");
                int err_code = add("99999999999999999999", "-100000000000000000000", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 164: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 25 bajtów
//
void UTEST164(void)
{
    // informacje o teście
    test_start(164, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 25 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(25);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1";        
                printf("#####START#####");
                int err_code = add("-100000000000000000000", "99999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 165: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 292 bajtów
//
void UTEST165(void)
{
    // informacje o teście
    test_start(165, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 292 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(292);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1";        
                printf("#####START#####");
                int err_code = add("686805720297413013808599204491532773782820166320101805879889627020065619114132442241107363591072036151401438753312802185934046391903247441698508967636509163809768461266833606841422875210870100439922688807115350452659140455335491704168790992922899645966685292675645203514851896797430565209", "-686805720297413013808599204491532773782820166320101805879889627020065619114132442241107363591072036151401438753312802185934046391903247441698508967636509163809768461266833606841422875210870100439922688807115350452659140455335491704168790992922899645966685292675645203514851896797430565210", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 166: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 292 bajtów
//
void UTEST166(void)
{
    // informacje o teście
    test_start(166, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 292 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(292);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1";        
                printf("#####START#####");
                int err_code = add("686805720297413013808599204491532773782820166320101805879889627020065619114132442241107363591072036151401438753312802185934046391903247441698508967636509163809768461266833606841422875210870100439922688807115350452659140455335491704168790992922899645966685292675645203514851896797430565210", "-686805720297413013808599204491532773782820166320101805879889627020065619114132442241107363591072036151401438753312802185934046391903247441698508967636509163809768461266833606841422875210870100439922688807115350452659140455335491704168790992922899645966685292675645203514851896797430565209", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 167: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów
//
void UTEST167(void)
{
    // informacje o teście
    test_start(167, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(17);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "4672Eu7j6ptRPeOLp";        
                printf("#####START#####");
                int err_code = add("467", "2Eu7j6ptRPeOLp", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 168: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów
//
void UTEST168(void)
{
    // informacje o teście
    test_start(168, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(17);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "4672Eu7j6ptRPeOLp";        
                printf("#####START#####");
                int err_code = add("2Eu7j6ptRPeOLp", "467", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 169: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST169(void)
{
    // informacje o teście
    test_start(169, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "226";        
                printf("#####START#####");
                int err_code = add("226", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 170: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST170(void)
{
    // informacje o teście
    test_start(170, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "226";        
                printf("#####START#####");
                int err_code = add("0", "226", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 171: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST171(void)
{
    // informacje o teście
    test_start(171, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "226";        
                printf("#####START#####");
                int err_code = add("226", "", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 172: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST172(void)
{
    // informacje o teście
    test_start(172, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "226";        
                printf("#####START#####");
                int err_code = add("", "226", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 173: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
//
void UTEST173(void)
{
    // informacje o teście
    test_start(173, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("-", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 174: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
//
void UTEST174(void)
{
    // informacje o teście
    test_start(174, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = add("-", "-", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja add() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 175: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
//
void UTEST175(void)
{
    // informacje o teście
    test_start(175, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "314";        
                printf("#####START#####");
                int err_code = add("409", "-95", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 176: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
//
void UTEST176(void)
{
    // informacje o teście
    test_start(176, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-314";        
                printf("#####START#####");
                int err_code = add("-409", "95", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja add() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja add() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję add() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 177: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 3 bajtów
//
void UTEST177(void)
{
    // informacje o teście
    test_start(177, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 3 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = add("275", "357", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja add() powinna zwrócić wartość 3, a zwróciła %d", err_code);

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
//  Test 178: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
//
void UTEST178(void)
{
    // informacje o teście
    test_start(178, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = add("-275", "-357", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja add() powinna zwrócić wartość 3, a zwróciła %d", err_code);

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
//  Test 179: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 3 bajtów
//
void UTEST179(void)
{
    // informacje o teście
    test_start(179, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 3 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = add("412", "-45", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja add() powinna zwrócić wartość 3, a zwróciła %d", err_code);

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
//  Test 180: Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 2 bajtów
//
void UTEST180(void)
{
    // informacje o teście
    test_start(180, "Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 2 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(2);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = add("-412", "45", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja add() powinna zwrócić wartość 3, a zwróciła %d", err_code);

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
//  Test 181: Sprawdzanie poprawności działania funkcji add
//
void UTEST181(void)
{
    // informacje o teście
    test_start(181, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        char *result;
        printf("#####START#####");
        int err_code = add(NULL, "1497", &result);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja add() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 182: Sprawdzanie poprawności działania funkcji add
//
void UTEST182(void)
{
    // informacje o teście
    test_start(182, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        char *result;
        printf("#####START#####");
        int err_code = add("1971", NULL, &result);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja add() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 183: Sprawdzanie poprawności działania funkcji add
//
void UTEST183(void)
{
    // informacje o teście
    test_start(183, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        printf("#####START#####");
        int err_code = add("904", "240", NULL);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja add() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 184: Sprawdzanie poprawności działania funkcji add
//
void UTEST184(void)
{
    // informacje o teście
    test_start(184, "Sprawdzanie poprawności działania funkcji add", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        printf("#####START#####");
        int err_code = add(NULL, NULL, NULL);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja add() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 185: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST185(void)
{
    // informacje o teście
    test_start(185, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-22";        
                printf("#####START#####");
                int err_code = subtract("323", "345", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 186: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST186(void)
{
    // informacje o teście
    test_start(186, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "668";        
                printf("#####START#####");
                int err_code = subtract("323", "-345", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 187: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST187(void)
{
    // informacje o teście
    test_start(187, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("323", "323", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 188: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST188(void)
{
    // informacje o teście
    test_start(188, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "668";        
                printf("#####START#####");
                int err_code = subtract("345", "-323", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 189: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST189(void)
{
    // informacje o teście
    test_start(189, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "22";        
                printf("#####START#####");
                int err_code = subtract("-323", "-345", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 190: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST190(void)
{
    // informacje o teście
    test_start(190, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-668";        
                printf("#####START#####");
                int err_code = subtract("-323", "345", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 191: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST191(void)
{
    // informacje o teście
    test_start(191, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-94";        
                printf("#####START#####");
                int err_code = subtract("506", "600", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 192: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST192(void)
{
    // informacje o teście
    test_start(192, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "94";        
                printf("#####START#####");
                int err_code = subtract("-506", "-600", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 193: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST193(void)
{
    // informacje o teście
    test_start(193, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-1106";        
                printf("#####START#####");
                int err_code = subtract("-506", "600", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 194: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST194(void)
{
    // informacje o teście
    test_start(194, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "1106";        
                printf("#####START#####");
                int err_code = subtract("506", "-600", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 195: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 311 bajtów
//
void UTEST195(void)
{
    // informacje o teście
    test_start(195, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 311 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(311);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-71915206513661882872739731196156255345750379226381427058292091361056579904315494595626772426070498616949885806966207339792605702460869237100545022918861192796709611202404052887293971891371985892527281401414236881517931947826615576946535964357195639300928826043764382866799134168312944552895829982638203186245";        
                printf("#####START#####");
                int err_code = subtract("17590065243455818103918291306925322819563512354176401892922573533557527289557210917421646477524635940544146370144472216944100876060739710667565167804335079094586216847186102470669453639470209173891335057507392207674276913022981042409845787477451298491564993764206461821830180793732007607574696097212886479506", "89505271757117700976658022503081578165313891580557828951214664894614107193872705513048418903595134557494032177110679556736706578521608947768110190723196271891295828049590155357963425530842195066418616458921629089192208860849596619356381751834646937792493819807970844688629314962044952160470526079851089665751", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 196: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 311 bajtów
//
void UTEST196(void)
{
    // informacje o teście
    test_start(196, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 311 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(311);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("17590065243455818103918291306925322819563512354176401892922573533557527289557210917421646477524635940544146370144472216944100876060739710667565167804335079094586216847186102470669453639470209173891335057507392207674276913022981042409845787477451298491564993764206461821830180793732007607574696097212886479506", "17590065243455818103918291306925322819563512354176401892922573533557527289557210917421646477524635940544146370144472216944100876060739710667565167804335079094586216847186102470669453639470209173891335057507392207674276913022981042409845787477451298491564993764206461821830180793732007607574696097212886479506", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 197: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 500 bajtów
//
void UTEST197(void)
{
    // informacje o teście
    test_start(197, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 500 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(500);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "47478935100117699902335284202246382589230790809647284824482156776908724870505020617377353598032784768770998501191576605258737139678392196042174319289897874282924205443051881182355804261449672636145896940807029650154590115747472770861331985471894677252173332812232951309502247969588366544481393181960440621933187190904303006861428998513073038415236371346332746673169587720482879878255076784153915943723171627967171974194284365773258158962630167572477426837847169415331903433608562496742698018357328";        
                printf("#####START#####");
                int err_code = subtract("97563669807764952107344242690601614138406907254073405750252751531348792800903007253272189289470436414257761660303467570613848741979850551438549246651476484752383020447430334111171908045545520871633437151250816443604554485895233929906283568843639450443914338377332527198596815802261383125874685582087671761431366293119005933138686840216073908384304301594931194170012450205745226748252420934695351346524739536905648266488424604644559479888905565365092204281992728799687750731731536805869339493399241", "50084734707647252205008958488355231549176116444426120925770594754440067930397986635894835691437651645486763159111890965355111602301458355396374927361578610469458815004378452928816103784095848235487540210443786793449964370147761159044951583371744773191741005565099575889094567832673016581393292400127231139498179102214702926277257841703000869969067930248598447496842862485262346869997344150541435402801567908938476292294140238871301320926275397792614777444145559384355847298122974309126641475041913", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 198: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 501 bajtów
//
void UTEST198(void)
{
    // informacje o teście
    test_start(198, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 501 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(501);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-147648404515412204312353201178956845687583023698499526676023346285788860731300993889167024980908088059744524819415358535968960344281308906834924174013055095221841835451808787039988011829641369107120977361694603237054518856042995088951235152215384223635655343942432103087691383634934399707267977982214902900929545395333708859415944681919074778353372231843529641666855312691007573618249765085236786749326307445844124558782564843515860800815180963157706981726138288184043598029854511114995980968441154";        
                printf("#####START#####");
                int err_code = subtract("-97563669807764952107344242690601614138406907254073405750252751531348792800903007253272189289470436414257761660303467570613848741979850551438549246651476484752383020447430334111171908045545520871633437151250816443604554485895233929906283568843639450443914338377332527198596815802261383125874685582087671761431366293119005933138686840216073908384304301594931194170012450205745226748252420934695351346524739536905648266488424604644559479888905565365092204281992728799687750731731536805869339493399241", "50084734707647252205008958488355231549176116444426120925770594754440067930397986635894835691437651645486763159111890965355111602301458355396374927361578610469458815004378452928816103784095848235487540210443786793449964370147761159044951583371744773191741005565099575889094567832673016581393292400127231139498179102214702926277257841703000869969067930248598447496842862485262346869997344150541435402801567908938476292294140238871301320926275397792614777444145559384355847298122974309126641475041913", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 199: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 501 bajtów
//
void UTEST199(void)
{
    // informacje o teście
    test_start(199, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 501 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(501);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-47478935100117699902335284202246382589230790809647284824482156776908724870505020617377353598032784768770998501191576605258737139678392196042174319289897874282924205443051881182355804261449672636145896940807029650154590115747472770861331985471894677252173332812232951309502247969588366544481393181960440621933187190904303006861428998513073038415236371346332746673169587720482879878255076784153915943723171627967171974194284365773258158962630167572477426837847169415331903433608562496742698018357328";        
                printf("#####START#####");
                int err_code = subtract("-97563669807764952107344242690601614138406907254073405750252751531348792800903007253272189289470436414257761660303467570613848741979850551438549246651476484752383020447430334111171908045545520871633437151250816443604554485895233929906283568843639450443914338377332527198596815802261383125874685582087671761431366293119005933138686840216073908384304301594931194170012450205745226748252420934695351346524739536905648266488424604644559479888905565365092204281992728799687750731731536805869339493399241", "-50084734707647252205008958488355231549176116444426120925770594754440067930397986635894835691437651645486763159111890965355111602301458355396374927361578610469458815004378452928816103784095848235487540210443786793449964370147761159044951583371744773191741005565099575889094567832673016581393292400127231139498179102214702926277257841703000869969067930248598447496842862485262346869997344150541435402801567908938476292294140238871301320926275397792614777444145559384355847298122974309126641475041913", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 200: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 501 bajtów
//
void UTEST200(void)
{
    // informacje o teście
    test_start(200, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 501 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(501);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "147648404515412204312353201178956845687583023698499526676023346285788860731300993889167024980908088059744524819415358535968960344281308906834924174013055095221841835451808787039988011829641369107120977361694603237054518856042995088951235152215384223635655343942432103087691383634934399707267977982214902900929545395333708859415944681919074778353372231843529641666855312691007573618249765085236786749326307445844124558782564843515860800815180963157706981726138288184043598029854511114995980968441154";        
                printf("#####START#####");
                int err_code = subtract("97563669807764952107344242690601614138406907254073405750252751531348792800903007253272189289470436414257761660303467570613848741979850551438549246651476484752383020447430334111171908045545520871633437151250816443604554485895233929906283568843639450443914338377332527198596815802261383125874685582087671761431366293119005933138686840216073908384304301594931194170012450205745226748252420934695351346524739536905648266488424604644559479888905565365092204281992728799687750731731536805869339493399241", "-50084734707647252205008958488355231549176116444426120925770594754440067930397986635894835691437651645486763159111890965355111602301458355396374927361578610469458815004378452928816103784095848235487540210443786793449964370147761159044951583371744773191741005565099575889094567832673016581393292400127231139498179102214702926277257841703000869969067930248598447496842862485262346869997344150541435402801567908938476292294140238871301320926275397792614777444145559384355847298122974309126641475041913", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 201: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 25 bajtów
//
void UTEST201(void)
{
    // informacje o teście
    test_start(201, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 25 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(25);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "999999999999999999999";        
                printf("#####START#####");
                int err_code = subtract("1000000000000000000007", "8", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 202: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 25 bajtów
//
void UTEST202(void)
{
    // informacje o teście
    test_start(202, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 25 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(25);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999999999";        
                printf("#####START#####");
                int err_code = subtract("8", "1000000000000000000007", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 203: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
//
void UTEST203(void)
{
    // informacje o teście
    test_start(203, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(17);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-10000000000000";        
                printf("#####START#####");
                int err_code = subtract("-9999999999999", "1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 204: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów
//
void UTEST204(void)
{
    // informacje o teście
    test_start(204, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "10000000000000";        
                printf("#####START#####");
                int err_code = subtract("9999999999999", "-1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 205: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
//
void UTEST205(void)
{
    // informacje o teście
    test_start(205, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(17);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9999999999998";        
                printf("#####START#####");
                int err_code = subtract("-1", "-9999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 206: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów
//
void UTEST206(void)
{
    // informacje o teście
    test_start(206, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-10000000000000";        
                printf("#####START#####");
                int err_code = subtract("-1", "9999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 207: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
//
void UTEST207(void)
{
    // informacje o teście
    test_start(207, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(17);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "10000000000000";        
                printf("#####START#####");
                int err_code = subtract("1", "-9999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 208: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
//
void UTEST208(void)
{
    // informacje o teście
    test_start(208, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(17);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-9999999999999";        
                printf("#####START#####");
                int err_code = subtract("-9999999999999", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 209: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów
//
void UTEST209(void)
{
    // informacje o teście
    test_start(209, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9999999999999";        
                printf("#####START#####");
                int err_code = subtract("9999999999999", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 210: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
//
void UTEST210(void)
{
    // informacje o teście
    test_start(210, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(17);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9999999999999";        
                printf("#####START#####");
                int err_code = subtract("0", "-9999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 211: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów
//
void UTEST211(void)
{
    // informacje o teście
    test_start(211, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(16);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-9999999999999";        
                printf("#####START#####");
                int err_code = subtract("0", "9999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 212: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
//
void UTEST212(void)
{
    // informacje o teście
    test_start(212, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("0", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 213: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST213(void)
{
    // informacje o teście
    test_start(213, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "506";        
                printf("#####START#####");
                int err_code = subtract("506", "", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja subtract() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 214: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST214(void)
{
    // informacje o teście
    test_start(214, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "506";        
                printf("#####START#####");
                int err_code = subtract("", "506", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja subtract() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 215: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
//
void UTEST215(void)
{
    // informacje o teście
    test_start(215, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("-", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja subtract() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 216: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
//
void UTEST216(void)
{
    // informacje o teście
    test_start(216, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(4);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = subtract("-", "-", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja subtract() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 217: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
//
void UTEST217(void)
{
    // informacje o teście
    test_start(217, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "352";        
                printf("#####START#####");
                int err_code = subtract("278", "-74", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 218: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
//
void UTEST218(void)
{
    // informacje o teście
    test_start(218, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-352";        
                printf("#####START#####");
                int err_code = subtract("-278", "74", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja subtract() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja subtract() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję subtract() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 219: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów
//
void UTEST219(void)
{
    // informacje o teście
    test_start(219, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = subtract("357", "-211", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja subtract() powinna zwrócić wartość 3, a zwróciła %d", err_code);

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
//  Test 220: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 1 bajtów
//
void UTEST220(void)
{
    // informacje o teście
    test_start(220, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 1 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = subtract("-357", "211", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja subtract() powinna zwrócić wartość 3, a zwróciła %d", err_code);

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
//  Test 221: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 1 bajtów
//
void UTEST221(void)
{
    // informacje o teście
    test_start(221, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 1 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(1);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = subtract("387", "80", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja subtract() powinna zwrócić wartość 3, a zwróciła %d", err_code);

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
//  Test 222: Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów
//
void UTEST222(void)
{
    // informacje o teście
    test_start(222, "Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(3);
    
    //
    // -----------
    //
    

                char *result;
                printf("#####START#####");
                int err_code = subtract("-387", "-80", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja subtract() powinna zwrócić wartość 3, a zwróciła %d", err_code);

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
//  Test 223: Sprawdzanie poprawności działania funkcji subtract
//
void UTEST223(void)
{
    // informacje o teście
    test_start(223, "Sprawdzanie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        char *result;
        printf("#####START#####");
        int err_code = subtract(NULL, "46", &result);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja subtract() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 224: Sprawdzanie poprawności działania funkcji subtract
//
void UTEST224(void)
{
    // informacje o teście
    test_start(224, "Sprawdzanie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        char *result;
        printf("#####START#####");
        int err_code = subtract("1734", NULL, &result);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja subtract() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 225: Sprawdzanie poprawności działania funkcji subtract
//
void UTEST225(void)
{
    // informacje o teście
    test_start(225, "Sprawdzanie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        printf("#####START#####");
        int err_code = subtract("1308", "1343", NULL);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja subtract() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 226: Sprawdzanie poprawności działania funkcji subtract
//
void UTEST226(void)
{
    // informacje o teście
    test_start(226, "Sprawdzanie poprawności działania funkcji subtract", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

        printf("#####START#####");
        int err_code = subtract(NULL, NULL, NULL);
        printf("#####END#####\\n");
        test_error(err_code == 1, "Funkcja subtract() powinna zwrócić wartość 1, a zwróciła %d", err_code);

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 227: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST227(void)
{
    // informacje o teście
    test_start(227, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "29904";        
                printf("#####START#####");
                int err_code = multiply("112", "267", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 228: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST228(void)
{
    // informacje o teście
    test_start(228, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-29904";        
                printf("#####START#####");
                int err_code = multiply("112", "-267", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 229: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST229(void)
{
    // informacje o teście
    test_start(229, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "12544";        
                printf("#####START#####");
                int err_code = multiply("112", "112", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 230: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST230(void)
{
    // informacje o teście
    test_start(230, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-29904";        
                printf("#####START#####");
                int err_code = multiply("267", "-112", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 231: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST231(void)
{
    // informacje o teście
    test_start(231, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "29904";        
                printf("#####START#####");
                int err_code = multiply("-112", "-267", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 232: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST232(void)
{
    // informacje o teście
    test_start(232, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-29904";        
                printf("#####START#####");
                int err_code = multiply("-112", "267", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 233: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST233(void)
{
    // informacje o teście
    test_start(233, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "574560";        
                printf("#####START#####");
                int err_code = multiply("760", "756", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 234: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST234(void)
{
    // informacje o teście
    test_start(234, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "574560";        
                printf("#####START#####");
                int err_code = multiply("-760", "-756", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 235: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST235(void)
{
    // informacje o teście
    test_start(235, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-574560";        
                printf("#####START#####");
                int err_code = multiply("-760", "756", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 236: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST236(void)
{
    // informacje o teście
    test_start(236, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-574560";        
                printf("#####START#####");
                int err_code = multiply("760", "-756", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 237: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST237(void)
{
    // informacje o teście
    test_start(237, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "101692276221129819568866566368603850115454103830235080388194048255957074166522817797273666171040702592144626240605330970416212635140060646619292833251248864782882155724633385316761633664019595809064753659454273951139210612470970003110619885186591855083592410399938615351401435907859032973827064725294693634922384276225563508696049888645954043446306720712978036170415171961227521854805605501206132745349496662485774635590810956835346789826085752308236892010712673088059033637530804025734586690085278898231285420881264337065974217531830583625083871144929758096962650567593656183543447036398099142195741655191076109454242327520";        
                printf("#####START#####");
                int err_code = multiply("131200485056383189927129991594757581799346510999356072747289734217126921109418039707665594956304288255310041008015606367046134968888485933405919874775391647556828016818530787135823594391509090128577677871807684309334876503832407569981655348590582245184352708372653822416728814483629186839034152544497539092458545", "775090703189304012406595130540487555369129933705010839940929633768396427659091336326770454632582449598065901468367240266998357900835639316894247761142917716632197621261848429708329758492522548307638930082044438946121275008286097136294141804899497341871292522716767220192228907376982955605544375254492516301132256", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 238: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST238(void)
{
    // informacje o teście
    test_start(238, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "17213567279030228731752203216915049325884147454392995951970305990867816984941656749345143658559450056094600514407811850200967331837279244175981311727785933483391949472906799772892694838923575993361807475882035305706362549646318217109479011300855990900296272352193337819958093337741965286784473304966678193878117043905327281546424925787801583194267870945540140469506833950343698899561118729472423935976795617680109723673219771479548917565871249443969987949244073886790637896009678588317572405346930486491981315343029884537812215930338288757305289189986409931719275090384872024407960672235967721919876201101432590092543517025";        
                printf("#####START#####");
                int err_code = multiply("131200485056383189927129991594757581799346510999356072747289734217126921109418039707665594956304288255310041008015606367046134968888485933405919874775391647556828016818530787135823594391509090128577677871807684309334876503832407569981655348590582245184352708372653822416728814483629186839034152544497539092458545", "131200485056383189927129991594757581799346510999356072747289734217126921109418039707665594956304288255310041008015606367046134968888485933405919874775391647556828016818530787135823594391509090128577677871807684309334876503832407569981655348590582245184352708372653822416728814483629186839034152544497539092458545", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 239: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST239(void)
{
    // informacje o teście
    test_start(239, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "48069310246669912977287380958071068291711892877598384153374171520150263384070881132063216078727310386237740577366490200689850185304571616930256020382382995479277077620314268680842190100221066311038702226066717501535088978318512566910117557835725891957882736035709216092238421450149066611746413732795220801284664901011706386644112776829969426097167880511829368699540901313215911957250295509550702917190057403255796136089057908233669571456969623151256790083781870583080519993968716816272022758431894525468004692147094859142980660599421356739983101023288836473369579977460184";        
                printf("#####START#####");
                int err_code = multiply("5514267537986530571617773919285073008834300093993253217752024735350405740231601976691375897540326048962041472419709662426059261737000445575661227325790629379621103560285699928285157335227483614022698022035806015601283714409575363969486812987154546026933001919755732424578741708630770444", "8717261162163679099713697193214066254324434074189118586460969857380092300514946840886970749341598832314662056033125799643583938049429644414583392700153378055073048221520042031852726999680536796076966437783406105458024360721583363304979348344315094710368565062100353099999524861729045586", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 240: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST240(void)
{
    // informacje o teście
    test_start(240, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-48069310246669912977287380958071068291711892877598384153374171520150263384070881132063216078727310386237740577366490200689850185304571616930256020382382995479277077620314268680842190100221066311038702226066717501535088978318512566910117557835725891957882736035709216092238421450149066611746413732795220801284664901011706386644112776829969426097167880511829368699540901313215911957250295509550702917190057403255796136089057908233669571456969623151256790083781870583080519993968716816272022758431894525468004692147094859142980660599421356739983101023288836473369579977460184";        
                printf("#####START#####");
                int err_code = multiply("-5514267537986530571617773919285073008834300093993253217752024735350405740231601976691375897540326048962041472419709662426059261737000445575661227325790629379621103560285699928285157335227483614022698022035806015601283714409575363969486812987154546026933001919755732424578741708630770444", "8717261162163679099713697193214066254324434074189118586460969857380092300514946840886970749341598832314662056033125799643583938049429644414583392700153378055073048221520042031852726999680536796076966437783406105458024360721583363304979348344315094710368565062100353099999524861729045586", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 241: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST241(void)
{
    // informacje o teście
    test_start(241, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "48069310246669912977287380958071068291711892877598384153374171520150263384070881132063216078727310386237740577366490200689850185304571616930256020382382995479277077620314268680842190100221066311038702226066717501535088978318512566910117557835725891957882736035709216092238421450149066611746413732795220801284664901011706386644112776829969426097167880511829368699540901313215911957250295509550702917190057403255796136089057908233669571456969623151256790083781870583080519993968716816272022758431894525468004692147094859142980660599421356739983101023288836473369579977460184";        
                printf("#####START#####");
                int err_code = multiply("-5514267537986530571617773919285073008834300093993253217752024735350405740231601976691375897540326048962041472419709662426059261737000445575661227325790629379621103560285699928285157335227483614022698022035806015601283714409575363969486812987154546026933001919755732424578741708630770444", "-8717261162163679099713697193214066254324434074189118586460969857380092300514946840886970749341598832314662056033125799643583938049429644414583392700153378055073048221520042031852726999680536796076966437783406105458024360721583363304979348344315094710368565062100353099999524861729045586", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 242: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST242(void)
{
    // informacje o teście
    test_start(242, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-48069310246669912977287380958071068291711892877598384153374171520150263384070881132063216078727310386237740577366490200689850185304571616930256020382382995479277077620314268680842190100221066311038702226066717501535088978318512566910117557835725891957882736035709216092238421450149066611746413732795220801284664901011706386644112776829969426097167880511829368699540901313215911957250295509550702917190057403255796136089057908233669571456969623151256790083781870583080519993968716816272022758431894525468004692147094859142980660599421356739983101023288836473369579977460184";        
                printf("#####START#####");
                int err_code = multiply("5514267537986530571617773919285073008834300093993253217752024735350405740231601976691375897540326048962041472419709662426059261737000445575661227325790629379621103560285699928285157335227483614022698022035806015601283714409575363969486812987154546026933001919755732424578741708630770444", "-8717261162163679099713697193214066254324434074189118586460969857380092300514946840886970749341598832314662056033125799643583938049429644414583392700153378055073048221520042031852726999680536796076966437783406105458024360721583363304979348344315094710368565062100353099999524861729045586", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 243: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST243(void)
{
    // informacje o teście
    test_start(243, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9000000000000000000";        
                printf("#####START#####");
                int err_code = multiply("1000000000000000000", "9", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 244: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST244(void)
{
    // informacje o teście
    test_start(244, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "9000000000000000000";        
                printf("#####START#####");
                int err_code = multiply("9", "1000000000000000000", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 245: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST245(void)
{
    // informacje o teście
    test_start(245, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "999999999999999998000000000000000001";        
                printf("#####START#####");
                int err_code = multiply("999999999999999999", "999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 246: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST246(void)
{
    // informacje o teście
    test_start(246, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "999999999999999998000000000000000001";        
                printf("#####START#####");
                int err_code = multiply("999999999999999999", "999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 247: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST247(void)
{
    // informacje o teście
    test_start(247, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "714026228028745658097257660000000000000000";        
                printf("#####START#####");
                int err_code = multiply("10000000000000000", "71402622802874565809725766", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 248: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST248(void)
{
    // informacje o teście
    test_start(248, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "714026228028745658097257660000000000000000";        
                printf("#####START#####");
                int err_code = multiply("71402622802874565809725766", "10000000000000000", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 249: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST249(void)
{
    // informacje o teście
    test_start(249, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("-999999999999999999", "1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 250: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST250(void)
{
    // informacje o teście
    test_start(250, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("999999999999999999", "-1", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 251: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST251(void)
{
    // informacje o teście
    test_start(251, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("-1", "-999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 252: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST252(void)
{
    // informacje o teście
    test_start(252, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("-1", "999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 253: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST253(void)
{
    // informacje o teście
    test_start(253, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "-999999999999999999";        
                printf("#####START#####");
                int err_code = multiply("1", "-999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 254: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST254(void)
{
    // informacje o teście
    test_start(254, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("-999999999999999999", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 255: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST255(void)
{
    // informacje o teście
    test_start(255, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("999999999999999999", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 256: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST256(void)
{
    // informacje o teście
    test_start(256, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("0", "-999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 257: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST257(void)
{
    // informacje o teście
    test_start(257, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("0", "999999999999999999", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 258: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST258(void)
{
    // informacje o teście
    test_start(258, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("0", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 0, "Funkcja multiply() powinna zwrócić wartość 0, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!0)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 259: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST259(void)
{
    // informacje o teście
    test_start(259, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "760";        
                printf("#####START#####");
                int err_code = multiply("760", "", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja multiply() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 260: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST260(void)
{
    // informacje o teście
    test_start(260, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "760";        
                printf("#####START#####");
                int err_code = multiply("", "760", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja multiply() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 261: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST261(void)
{
    // informacje o teście
    test_start(261, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("-", "0", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja multiply() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 262: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST262(void)
{
    // informacje o teście
    test_start(262, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("-", "-", &result);
                printf("#####END#####\\n");
                test_error(err_code == 2, "Funkcja multiply() powinna zwrócić wartość 2, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 263: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST263(void)
{
    // informacje o teście
    test_start(263, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *result;
            printf("#####START#####");
            int err_code = multiply("760", NULL, &result);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 264: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST264(void)
{
    // informacje o teście
    test_start(264, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *result;
            printf("#####START#####");
            int err_code = multiply(NULL, NULL, &result);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 265: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST265(void)
{
    // informacje o teście
    test_start(265, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *result;
            printf("#####START#####");
            int err_code = multiply(NULL, "760", &result);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 266: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST266(void)
{
    // informacje o teście
    test_start(266, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = multiply("760", "760", NULL);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 267: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST267(void)
{
    // informacje o teście
    test_start(267, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = multiply(NULL, "760", NULL);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 268: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST268(void)
{
    // informacje o teście
    test_start(268, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = multiply("760", NULL, NULL);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 269: Sprawdzanie poprawności działania funkcji multiply
//
void UTEST269(void)
{
    // informacje o teście
    test_start(269, "Sprawdzanie poprawności działania funkcji multiply", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            printf("#####START#####");
            int err_code = multiply(NULL, NULL, NULL);
            printf("#####END#####\\n");

            test_error(err_code == 1, "Funkcja multiply() powinna zwrócić wartość 1, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();
        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 270: Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 0 bajtów
//
void UTEST270(void)
{
    // informacje o teście
    test_start(270, "Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("760", "760", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja multiply() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 271: Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 6 bajtów
//
void UTEST271(void)
{
    // informacje o teście
    test_start(271, "Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 6 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(6);
    
    //
    // -----------
    //
    

                char *result;
                const char *expected_result = "0";        
                printf("#####START#####");
                int err_code = multiply("760", "760", &result);
                printf("#####END#####\\n");
                test_error(err_code == 3, "Funkcja multiply() powinna zwrócić wartość 3, a zwróciła %d", err_code);

                onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)

                if (!2)
                {
                    test_error(result != NULL, "Funkcja multiply() powinna przypisać pod result adres zaalokowanej pamięci, a przypisała NULL");
                    onerror_terminate(); // przerwnie wszystkich testów jednostkowych (np. coś jest mocno nie tak z kodem)
                    test_error(strcmp(result, expected_result) == 0, "Wartość obliczona przez funkcję multiply() jest nieprawidłowa; powinno być '%s', a jest '%s'", expected_result, result);
                    free(result);
                }
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
//  Test 272: Sprawdzanie poprawności działania funkcji compare
//
void UTEST272(void)
{
    // informacje o teście
    test_start(272, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("782");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 273: Sprawdzanie poprawności działania funkcji compare
//
void UTEST273(void)
{
    // informacje o teście
    test_start(273, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("0");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 274: Sprawdzanie poprawności działania funkcji compare
//
void UTEST274(void)
{
    // informacje o teście
    test_start(274, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("271+88");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 275: Sprawdzanie poprawności działania funkcji compare
//
void UTEST275(void)
{
    // informacje o teście
    test_start(275, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-271+88");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 276: Sprawdzanie poprawności działania funkcji compare
//
void UTEST276(void)
{
    // informacje o teście
    test_start(276, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-271+-88");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 277: Sprawdzanie poprawności działania funkcji compare
//
void UTEST277(void)
{
    // informacje o teście
    test_start(277, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("151-500");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 278: Sprawdzanie poprawności działania funkcji compare
//
void UTEST278(void)
{
    // informacje o teście
    test_start(278, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-151-500");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 279: Sprawdzanie poprawności działania funkcji compare
//
void UTEST279(void)
{
    // informacje o teście
    test_start(279, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-151--500");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 280: Sprawdzanie poprawności działania funkcji compare
//
void UTEST280(void)
{
    // informacje o teście
    test_start(280, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("412*121");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 281: Sprawdzanie poprawności działania funkcji compare
//
void UTEST281(void)
{
    // informacje o teście
    test_start(281, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-412*121");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 282: Sprawdzanie poprawności działania funkcji compare
//
void UTEST282(void)
{
    // informacje o teście
    test_start(282, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-412*-121");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 283: Sprawdzanie poprawności działania funkcji compare
//
void UTEST283(void)
{
    // informacje o teście
    test_start(283, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("41-7989*3570--4048+9877--9864");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 284: Sprawdzanie poprawności działania funkcji compare
//
void UTEST284(void)
{
    // informacje o teście
    test_start(284, "Sprawdzanie poprawności działania funkcji compare", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-48-3339+8600*7663+-1347*6576+2514+4132*8307--1388+3094+954-9712-63+-1411*-4280+5825--709--9595--7886*6824*8360");
                test_error(err_code == 0, "Funkcja validate_expression() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 285: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST285(void)
{
    // informacje o teście
    test_start(285, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-108/949");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 286: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST286(void)
{
    // informacje o teście
    test_start(286, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("455+76+511*+342*921");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 287: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST287(void)
{
    // informacje o teście
    test_start(287, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("455+76+511*+342*921+867*775*95+692-197+95/n");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 288: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST288(void)
{
    // informacje o teście
    test_start(288, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-877+631*+1000*437*273+449*117+357");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 289: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST289(void)
{
    // informacje o teście
    test_start(289, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("-937*771/896*69+445*693+629");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 290: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST290(void)
{
    // informacje o teście
    test_start(290, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("257-94*238-730*470*284-939-143+989-665+642-457+325+666*96+747*194*354-129-207+825+322-861*562-529*622+55+993+625*80+745+100-145-366*523-");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 291: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST291(void)
{
    // informacje o teście
    test_start(291, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("+696-398*715-184*743-836-439*926+401*762+919+965+716*355+362*86+911*804+610*985+449-353+585*708-879*852+801+748-728*72-48+228+644+527*820");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 292: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST292(void)
{
    // informacje o teście
    test_start(292, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("*759*905-51+322*913+145*782*205-870-16*459+944+956+954-452-387-747-741+198*835-797+981-57+849-955*324+833-53-130-96+614*447-615+964");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 293: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST293(void)
{
    // informacje o teście
    test_start(293, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("843+586(508-562+839+797-563*799*704-57+268-719*568-680-669*815-284");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 294: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST294(void)
{
    // informacje o teście
    test_start(294, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("810+175-992*94+247*841+898-580+817-354+837.260+673-915");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 295: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST295(void)
{
    // informacje o teście
    test_start(295, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("530+114+278-432*330+205-915D794+425*823+47-251");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 296: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST296(void)
{
    // informacje o teście
    test_start(296, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("712+876-416+479*613*993-382\n-466*705*510");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 297: Sprawdzanie poprawności działania funkcji validate_expression
//
void UTEST297(void)
{
    // informacje o teście
    test_start(297, "Sprawdzanie poprawności działania funkcji validate_expression", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                int err_code = validate_expression("");
                test_error(err_code == 1, "Funkcja validate_expression() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 298: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST298(void)
{
    // informacje o teście
    test_start(298, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("360", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "360";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 299: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST299(void)
{
    // informacje o teście
    test_start(299, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("0", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "0";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 300: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST300(void)
{
    // informacje o teście
    test_start(300, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("875+727", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "1602";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 301: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST301(void)
{
    // informacje o teście
    test_start(301, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-875+727", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-148";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 302: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST302(void)
{
    // informacje o teście
    test_start(302, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-875+-727", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-1602";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 303: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST303(void)
{
    // informacje o teście
    test_start(303, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("108-218", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-110";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 304: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST304(void)
{
    // informacje o teście
    test_start(304, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-108-218", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-326";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 305: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST305(void)
{
    // informacje o teście
    test_start(305, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-108--218", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "110";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 306: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST306(void)
{
    // informacje o teście
    test_start(306, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("916*423", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "387468";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 307: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST307(void)
{
    // informacje o teście
    test_start(307, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-916*423", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-387468";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 308: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST308(void)
{
    // informacje o teście
    test_start(308, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-916*-423", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "387468";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 309: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST309(void)
{
    // informacje o teście
    test_start(309, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("24-3102+-7569+6237", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-4410";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 310: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST310(void)
{
    // informacje o teście
    test_start(310, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("12+-919*-2315+3206*-9633-4339+4183+-7113-5814+2613+332-383+8705*1036+5500+5892+3520+6674--2472*-6800-525+4652*-7458", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "-1064323223636071657566";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 311: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST311(void)
{
    // informacje o teście
    test_start(311, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-31*-772592752201051044211557448958483449255576285054145423724889816176526500356612591352972373502556592*5546282743543315493429613288462505196754692726878124744296532135495847277572882544653958732841990667+-3752592933513577551510631302402951038721604781221164897619951044425723913773940099665994895309410372*7626075607022256968779489620480657408667450477389251246338504710211294124521492714384211350334370760*-8603440077122536211314027282153780897731270382306771506348109961625560305427055216539534101424182882*-7905262045291966239014239784381051653322135246095269578041093107085532770681550089127534009513463063-7711588896697713237318355243937205558095309178530063329609607940089401223749939558025787022479627524-2380037646276321705688897795044449119767378891197912125301747603500705682131827162656018387067586387-4948352934289838210667125499106879577040357232792393305323776540749387589898158350142135185086555151*-8124124877696543324324986317745618197604810548287049705593468545132575642058035425020290415208854397--132632771814526836056284693478845625404341664434920371659942171471725922750921615613202409226857213*-6831281359729680465812615344223928582013617304428046280219161159863381483686848496043003712262703569+-9531940365168032366934572163321817098293962084992533423736801460898879425841917271849314607625413029*-5475681188482778701238863955100028223119852753215547897455017065811611387371170870841731662466178933*-1097078146481586339637402945689959714727517829995096006318443121438469758099659424307591881360877646*-8807491069624324727347937343774676450072517708787510208280532942639173432626214465115650028216920181+3475772190112869539452686627810948563863914353316556201840607855864349835117760045252677652441374697*-7379954310228243782054701740493437641523244142463274410647871355029726115616566118230940904516400524--9298603706049430097262797866627693787518089708515373804394372847048684293144222974175359852626923996--9223040963916294892746118858906866837510539017405979788974302133603610435817480954054386927233742929*2772191539890119774117088647206969266644919211512129474847936285671152039361692633524337358538014438*8318493010983674970752432744839630912566727043664609641184863623959498515741183011710191844157257305-649857708315914676766802640530738277481862439539433866993636088968382240772153778433499743268374127+8615247446962819047641131533069867005265424099445907130257445060253431967832589175821201849130851069--3092809352477808655527286707427480001478620732477367854747166587202565728606584049371874962466872565-4564290192591830998588041449524676873970722531191017242508559789174265978140270828805331834347647070*7310819922320303612951512495848474000995399912244450091999034007715655599566111483524810107892196821+7296582776086372865346704231074854164358104175348895869925435658773865565390603500910477213066990213+-6932370195117901842296040193534820898266395972175534498772126555796750156384399513068548987211211669--1914705309719914413425889289354376269422823818175002020566473598987444620889285331068714598024575669+4189152410325237892235959198060889133005386537974891153195365630025915415391640977660572247237192832+4772528592660244395853171975366895013661995636382134065973525568981772072858212783381270625987597069+-7344626253748376671564241323492278884159407070366797946692608886814877745281818143173853274576668976+-3340173226178680702426737519382442471727771470463468881722267729075823175847937543552163813593452057+4444756240638765806121183082632731007679336504848695925421331394110167962107477750428578527612903780+-1139228116177618024797370289888401794665589055527527708815538910902630644550982869799889172998716678", &result);
                test_error(err_code == 0, "Funkcja calculate() powinna zwrócić 0 dla poprawnego wyrażenia, a zwróciła %d", err_code);

                if (err_code == 0)
                {
                    char *expected_result = "251708677260953608136621917561332721570449675850760314810387938331794851016142486073827935491848680209632433108148071579689173254575109530625145238608878029760675314401811640617585318589674269228042205260340727275322280275343244899964632653123496858368507417510569488825226627973115559173120980007105454451707477310622669236192012336259257288353930404236212998891378254738294304347222500757762656304028706725489898634763217275615281348353094810965141069474504730945320048995758662860146141096594453960296577535973784930388456680524835512251762367501319120433720819030705716002828495786338891229919498909982571904280880284807364110589753067244353164256891809249903636176673458334091592885110683319951093128137821706755702526415562797212527798452194560769985583312002115577892956485204092210703668698711995376361711000341901285214771481359030316356021134241389130290578324236623577957064196992501006804965595362994483463587789140704851728643741452652524355608269872788047243487860792101690713794343718472218075606637231068181437321029503534849543314899062617829926884865486473953289884667989104978409389937164562956771968858321719815241731744418226963283558642908518472381365937590634939871227158435860146645726106666986746010723437780996310880673277475992152989246048271702107762261425466045543809404016928681281964157820474401019855320676256530920343532674091490287622504668287222015325799097613630";        
                    test_error(strcmp(result, expected_result) == 0, "Funkcja calculate() niepoprawnie obliczyła wartość wyrażenia, powinno być %s, a jest %s", expected_result, result);                
                    free(result);
                    test_no_heap_leakage();
                    onerror_terminate();
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
//  Test 312: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST312(void)
{
    // informacje o teście
    test_start(312, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-656/26", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 313: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST313(void)
{
    // informacje o teście
    test_start(313, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("841*310-*805*970+968*501+27*892+810", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 314: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST314(void)
{
    // informacje o teście
    test_start(314, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("841*310-*805*970+968*501+27*892+810-86*438*746+888-846-843+443-430*646/n", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 315: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST315(void)
{
    // informacje o teście
    test_start(315, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-30+960*454*453*+901*674", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 316: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST316(void)
{
    // informacje o teście
    test_start(316, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("-314*172*263/62+30*538", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 317: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST317(void)
{
    // informacje o teście
    test_start(317, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("465+76-75*194-199*201-144-188*490+725+621-51+525-620-677*174+721+380*113-126*375+67+912-834*695+314*174+684*738-746*541+608+395+465*312-697-252-376+", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 318: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST318(void)
{
    // informacje o teście
    test_start(318, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("+58+227*565-421-370-41-478-98-103+74*253+254-537-870+26*977-520-381*868-556*330*114+163-744+209+565", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 319: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST319(void)
{
    // informacje o teście
    test_start(319, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("*987+933-584-986-909-160-149*103*956-883-516+512+128+332-934+173+425-617-106*472+589+225*115*459*103*548*626*902*126+586", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 320: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST320(void)
{
    // informacje o teście
    test_start(320, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("66-769+41+323*704+527*97*481*389+883*676^775+592+837*978", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 321: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST321(void)
{
    // informacje o teście
    test_start(321, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("333+140*829.25+349-811-361+422*886-149*282+549-776-493*65-221", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 322: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST322(void)
{
    // informacje o teście
    test_start(322, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("10-547*947-589-137+39+234+166*136*99L150*671+187*387*60", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 323: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST323(void)
{
    // informacje o teście
    test_start(323, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("336-843-230*860*580+912+889-857+685+350-50+513\n+870*645*680-122*222", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 324: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST324(void)
{
    // informacje o teście
    test_start(324, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 325: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST325(void)
{
    // informacje o teście
    test_start(325, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate(" ", &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                    onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 326: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST326(void)
{
    // informacje o teście
    test_start(326, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 327: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST327(void)
{
    // informacje o teście
    test_start(327, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 328: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST328(void)
{
    // informacje o teście
    test_start(328, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 329: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST329(void)
{
    // informacje o teście
    test_start(329, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 330: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST330(void)
{
    // informacje o teście
    test_start(330, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 331: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST331(void)
{
    // informacje o teście
    test_start(331, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 332: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST332(void)
{
    // informacje o teście
    test_start(332, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 333: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST333(void)
{
    // informacje o teście
    test_start(333, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 334: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST334(void)
{
    // informacje o teście
    test_start(334, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 335: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST335(void)
{
    // informacje o teście
    test_start(335, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 336: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST336(void)
{
    // informacje o teście
    test_start(336, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 337: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST337(void)
{
    // informacje o teście
    test_start(337, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 338: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST338(void)
{
    // informacje o teście
    test_start(338, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 339: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST339(void)
{
    // informacje o teście
    test_start(339, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

                char *result;
                int err_code = calculate("9*79*807*685*682*713*244*417*331*150*802*986*846*838*5" + 1, &result);
                test_error(err_code == 2, "Funkcja calculate() powinna zwrócić 2 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();

            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 340: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST340(void)
{
    // informacje o teście
    test_start(340, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            char *result;
            int err_code = calculate(NULL, &result);
            test_error(err_code == 1, "Funkcja calculate() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 341: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST341(void)
{
    // informacje o teście
    test_start(341, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = calculate(NULL, NULL);
            test_error(err_code == 1, "Funkcja calculate() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 342: Sprawdzanie poprawności działania funkcji calculate
//
void UTEST342(void)
{
    // informacje o teście
    test_start(342, "Sprawdzanie poprawności działania funkcji calculate", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    
    //
    // -----------
    //
    

            int err_code = calculate("-1139228116177618024797370289888401794665589055527527708815538910902630644550982869799889172998716678+-97179--44756", NULL);
            test_error(err_code == 1, "Funkcja calculate() powinna zwrócić 1 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
            test_no_heap_leakage();
            onerror_terminate();

        
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 343: Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 0 bajtów
//
void UTEST343(void)
{
    // informacje o teście
    test_start(343, "Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 0 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(0);
    
    //
    // -----------
    //
    
        
                char *result;
                int err_code = calculate("-44756+-2905*-2828+-260+403-4207", &result);
                test_error(err_code == 3, "Funkcja calculate() powinna zwrócić 3 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}

//
//  Test 344: Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 7 bajtów
//
void UTEST344(void)
{
    // informacje o teście
    test_start(344, "Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 7 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(7);
    
    //
    // -----------
    //
    
        
                char *result;
                int err_code = calculate("-44756+-2905*-2828+-260+403-4207", &result);
                test_error(err_code == 3, "Funkcja calculate() powinna zwrócić 3 dla niepoprawnego wyrażenia, a zwróciła %d", err_code);
                test_no_heap_leakage();
                onerror_terminate();
        
            
    //
    // -----------
    //

    // przywrócenie podstawowych parametów przydzielania zasobów (jeśli to tylko możliwe)
    rldebug_reset_limits();
    test_file_write_limit_restore();
    
    test_ok();
}



//
//  Test 1: Reakcja na brak pamięci - limit pamięci ustawiony na 0 bajtów
//
void MTEST1(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(1, "Reakcja na brak pamięci - limit pamięci ustawiony na 0 bajtów", __LINE__);

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
//  Test 2: Reakcja na brak pamięci - limit pamięci ustawiony na 510 bajtów
//
void MTEST2(int argc, char** argv, char** envp)
{
    // informacje o teście
    test_start(2, "Reakcja na brak pamięci - limit pamięci ustawiony na 510 bajtów", __LINE__);

    // uwarunkowanie zasobów - pamięci, itd...
    test_file_write_limit_setup(33554432);
    rldebug_reset_limits();
    rldebug_heap_set_global_limit(510);
    
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
            UTEST1, // Sprawdzanie poprawności działania funkcji validate
            UTEST2, // Sprawdzanie poprawności działania funkcji validate
            UTEST3, // Sprawdzanie poprawności działania funkcji validate
            UTEST4, // Sprawdzanie poprawności działania funkcji validate
            UTEST5, // Sprawdzanie poprawności działania funkcji validate
            UTEST6, // Sprawdzanie poprawności działania funkcji validate
            UTEST7, // Sprawdzanie poprawności działania funkcji validate
            UTEST8, // Sprawdzanie poprawności działania funkcji validate
            UTEST9, // Sprawdzanie poprawności działania funkcji validate
            UTEST10, // Sprawdzanie poprawności działania funkcji validate
            UTEST11, // Sprawdzanie poprawności działania funkcji validate
            UTEST12, // Sprawdzanie poprawności działania funkcji validate
            UTEST13, // Sprawdzanie poprawności działania funkcji validate
            UTEST14, // Sprawdzanie poprawności działania funkcji validate
            UTEST15, // Sprawdzanie poprawności działania funkcji validate
            UTEST16, // Sprawdzanie poprawności działania funkcji validate
            UTEST17, // Sprawdzanie poprawności działania funkcji validate
            UTEST18, // Sprawdzanie poprawności działania funkcji validate
            UTEST19, // Sprawdzanie poprawności działania funkcji validate
            UTEST20, // Sprawdzanie poprawności działania funkcji validate
            UTEST21, // Sprawdzanie poprawności działania funkcji validate
            UTEST22, // Sprawdzanie poprawności działania funkcji validate
            UTEST23, // Sprawdzanie poprawności działania funkcji validate
            UTEST24, // Sprawdzanie poprawności działania funkcji validate
            UTEST25, // Sprawdzanie poprawności działania funkcji validate
            UTEST26, // Sprawdzanie poprawności działania funkcji validate
            UTEST27, // Sprawdzanie poprawności działania funkcji validate
            UTEST28, // Sprawdzanie poprawności działania funkcji validate
            UTEST29, // Sprawdzanie poprawności działania funkcji validate
            UTEST30, // Sprawdzanie poprawności działania funkcji validate
            UTEST31, // Sprawdzanie poprawności działania funkcji validate
            UTEST32, // Sprawdzanie poprawności działania funkcji validate
            UTEST33, // Sprawdzanie poprawności działania funkcji validate
            UTEST34, // Sprawdzanie poprawności działania funkcji validate
            UTEST35, // Sprawdzanie poprawności działania funkcji validate
            UTEST36, // Sprawdzanie poprawności działania funkcji validate
            UTEST37, // Sprawdzanie poprawności działania funkcji validate
            UTEST38, // Sprawdzanie poprawności działania funkcji validate
            UTEST39, // Sprawdzanie poprawności działania funkcji validate
            UTEST40, // Sprawdzanie poprawności działania funkcji validate
            UTEST41, // Sprawdzanie poprawności działania funkcji validate
            UTEST42, // Sprawdzanie poprawności działania funkcji validate
            UTEST43, // Sprawdzanie poprawności działania funkcji validate
            UTEST44, // Sprawdzanie poprawności działania funkcji validate
            UTEST45, // Sprawdzanie poprawności działania funkcji validate
            UTEST46, // Sprawdzanie poprawności działania funkcji validate
            UTEST47, // Sprawdzanie poprawności działania funkcji validate
            UTEST48, // Sprawdzanie poprawności działania funkcji validate
            UTEST49, // Sprawdzanie poprawności działania funkcji validate
            UTEST50, // Sprawdzanie poprawności działania funkcji validate
            UTEST51, // Sprawdzanie poprawności działania funkcji validate
            UTEST52, // Sprawdzanie poprawności działania funkcji validate
            UTEST53, // Sprawdzanie poprawności działania funkcji validate
            UTEST54, // Sprawdzanie poprawności działania funkcji validate
            UTEST55, // Sprawdzanie poprawności działania funkcji validate
            UTEST56, // Sprawdzanie poprawności działania funkcji validate
            UTEST57, // Sprawdzanie poprawności działania funkcji validate
            UTEST58, // Sprawdzanie poprawności działania funkcji validate
            UTEST59, // Sprawdzanie poprawności działania funkcji validate
            UTEST60, // Sprawdzanie poprawności działania funkcji validate
            UTEST61, // Sprawdzanie poprawności działania funkcji validate
            UTEST62, // Sprawdzanie poprawności działania funkcji validate
            UTEST63, // Sprawdzanie poprawności działania funkcji validate
            UTEST64, // Sprawdzanie poprawności działania funkcji validate
            UTEST65, // Sprawdzanie poprawności działania funkcji validate
            UTEST66, // Sprawdzanie poprawności działania funkcji validate
            UTEST67, // Sprawdzanie poprawności działania funkcji validate
            UTEST68, // Sprawdzanie poprawności działania funkcji validate
            UTEST69, // Sprawdzanie poprawności działania funkcji validate
            UTEST70, // Sprawdzanie poprawności działania funkcji validate
            UTEST71, // Sprawdzanie poprawności działania funkcji validate
            UTEST72, // Sprawdzanie poprawności działania funkcji validate
            UTEST73, // Sprawdzanie poprawności działania funkcji validate
            UTEST74, // Sprawdzanie poprawności działania funkcji validate
            UTEST75, // Sprawdzanie poprawności działania funkcji validate
            UTEST76, // Sprawdzanie poprawności działania funkcji validate
            UTEST77, // Sprawdzanie poprawności działania funkcji validate
            UTEST78, // Sprawdzanie poprawności działania funkcji validate
            UTEST79, // Sprawdzanie poprawności działania funkcji validate
            UTEST80, // Sprawdzanie poprawności działania funkcji validate
            UTEST81, // Sprawdzanie poprawności działania funkcji validate
            UTEST82, // Sprawdzanie poprawności działania funkcji validate
            UTEST83, // Sprawdzanie poprawności działania funkcji validate
            UTEST84, // Sprawdzanie poprawności działania funkcji validate
            UTEST85, // Sprawdzanie poprawności działania funkcji validate
            UTEST86, // Sprawdzanie poprawności działania funkcji validate
            UTEST87, // Sprawdzanie poprawności działania funkcji validate
            UTEST88, // Sprawdzanie poprawności działania funkcji validate
            UTEST89, // Sprawdzanie poprawności działania funkcji validate
            UTEST90, // Sprawdzanie poprawności działania funkcji validate
            UTEST91, // Sprawdzanie poprawności działania funkcji validate
            UTEST92, // Sprawdzanie poprawności działania funkcji validate
            UTEST93, // Sprawdzanie poprawności działania funkcji validate
            UTEST94, // Sprawdzanie poprawności działania funkcji validate
            UTEST95, // Sprawdzanie poprawności działania funkcji validate
            UTEST96, // Sprawdzanie poprawności działania funkcji validate
            UTEST97, // Sprawdzanie poprawności działania funkcji validate
            UTEST98, // Sprawdzanie poprawności działania funkcji validate
            UTEST99, // Sprawdzanie poprawności działania funkcji validate
            UTEST100, // Sprawdzanie poprawności działania funkcji validate
            UTEST101, // Sprawdzanie poprawności działania funkcji validate
            UTEST102, // Sprawdzanie poprawności działania funkcji validate
            UTEST103, // Sprawdzanie poprawności działania funkcji validate
            UTEST104, // Sprawdzanie poprawności działania funkcji validate
            UTEST105, // Sprawdzanie poprawności działania funkcji validate
            UTEST106, // Sprawdzanie poprawności działania funkcji validate
            UTEST107, // Sprawdzanie poprawności działania funkcji validate
            UTEST108, // Sprawdzanie poprawności działania funkcji validate
            UTEST109, // Sprawdzanie poprawności działania funkcji validate
            UTEST110, // Sprawdzanie poprawności działania funkcji validate
            UTEST111, // Sprawdzanie poprawności działania funkcji validate
            UTEST112, // Sprawdzanie poprawności działania funkcji validate
            UTEST113, // Sprawdzanie poprawności działania funkcji validate
            UTEST114, // Sprawdzanie poprawności działania funkcji validate
            UTEST115, // Sprawdzanie poprawności działania funkcji validate
            UTEST116, // Sprawdzanie poprawności działania funkcji validate
            UTEST117, // Sprawdzanie poprawności działania funkcji validate
            UTEST118, // Sprawdzanie poprawności działania funkcji validate
            UTEST119, // Sprawdzanie poprawności działania funkcji validate
            UTEST120, // Sprawdzanie poprawności działania funkcji validate
            UTEST121, // Sprawdzanie poprawności działania funkcji validate
            UTEST122, // Sprawdzanie poprawności działania funkcji validate
            UTEST123, // Sprawdzanie poprawności działania funkcji validate
            UTEST124, // Sprawdzanie poprawności działania funkcji validate
            UTEST125, // Sprawdzanie poprawności działania funkcji validate
            UTEST126, // Sprawdzanie poprawności działania funkcji validate
            UTEST127, // Sprawdzanie poprawności działania funkcji validate
            UTEST128, // Sprawdzanie poprawności działania funkcji validate
            UTEST129, // Sprawdzanie poprawności działania funkcji validate
            UTEST130, // Sprawdzanie poprawności działania funkcji validate
            UTEST131, // Sprawdzanie poprawności działania funkcji validate
            UTEST132, // Sprawdzanie poprawności działania funkcji validate
            UTEST133, // Sprawdzanie poprawności działania funkcji validate
            UTEST134, // Sprawdzanie poprawności działania funkcji validate
            UTEST135, // Sprawdzanie poprawności działania funkcji validate
            UTEST136, // Sprawdzanie poprawności działania funkcji validate
            UTEST137, // Sprawdzanie poprawności działania funkcji validate
            UTEST138, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST139, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST140, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST141, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST142, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST143, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST144, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST145, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST146, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 488 bajtów
            UTEST147, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów
            UTEST148, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów
            UTEST149, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów
            UTEST150, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 489 bajtów
            UTEST151, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 290 bajtów
            UTEST152, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów
            UTEST153, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów
            UTEST154, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów
            UTEST155, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 291 bajtów
            UTEST156, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 14 bajtów
            UTEST157, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 15 bajtów
            UTEST158, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 14 bajtów
            UTEST159, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 15 bajtów
            UTEST160, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 15 bajtów
            UTEST161, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 24 bajtów
            UTEST162, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 24 bajtów
            UTEST163, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 25 bajtów
            UTEST164, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 25 bajtów
            UTEST165, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 292 bajtów
            UTEST166, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 292 bajtów
            UTEST167, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów
            UTEST168, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 17 bajtów
            UTEST169, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST170, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST171, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST172, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST173, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
            UTEST174, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
            UTEST175, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 6 bajtów
            UTEST176, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 7 bajtów
            UTEST177, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 3 bajtów
            UTEST178, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 4 bajtów
            UTEST179, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 3 bajtów
            UTEST180, // Sprawdzanie poprawności działania funkcji add - limit sterty ustawiony na 2 bajtów
            UTEST181, // Sprawdzanie poprawności działania funkcji add
            UTEST182, // Sprawdzanie poprawności działania funkcji add
            UTEST183, // Sprawdzanie poprawności działania funkcji add
            UTEST184, // Sprawdzanie poprawności działania funkcji add
            UTEST185, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST186, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST187, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST188, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST189, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST190, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST191, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST192, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST193, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST194, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST195, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 311 bajtów
            UTEST196, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 311 bajtów
            UTEST197, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 500 bajtów
            UTEST198, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 501 bajtów
            UTEST199, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 501 bajtów
            UTEST200, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 501 bajtów
            UTEST201, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 25 bajtów
            UTEST202, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 25 bajtów
            UTEST203, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
            UTEST204, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów
            UTEST205, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
            UTEST206, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów
            UTEST207, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
            UTEST208, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
            UTEST209, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów
            UTEST210, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 17 bajtów
            UTEST211, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 16 bajtów
            UTEST212, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
            UTEST213, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST214, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST215, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
            UTEST216, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 4 bajtów
            UTEST217, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 6 bajtów
            UTEST218, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 7 bajtów
            UTEST219, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów
            UTEST220, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 1 bajtów
            UTEST221, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 1 bajtów
            UTEST222, // Sprawdzanie poprawności działania funkcji subtract - limit sterty ustawiony na 3 bajtów
            UTEST223, // Sprawdzanie poprawności działania funkcji subtract
            UTEST224, // Sprawdzanie poprawności działania funkcji subtract
            UTEST225, // Sprawdzanie poprawności działania funkcji subtract
            UTEST226, // Sprawdzanie poprawności działania funkcji subtract
            UTEST227, // Sprawdzanie poprawności działania funkcji multiply
            UTEST228, // Sprawdzanie poprawności działania funkcji multiply
            UTEST229, // Sprawdzanie poprawności działania funkcji multiply
            UTEST230, // Sprawdzanie poprawności działania funkcji multiply
            UTEST231, // Sprawdzanie poprawności działania funkcji multiply
            UTEST232, // Sprawdzanie poprawności działania funkcji multiply
            UTEST233, // Sprawdzanie poprawności działania funkcji multiply
            UTEST234, // Sprawdzanie poprawności działania funkcji multiply
            UTEST235, // Sprawdzanie poprawności działania funkcji multiply
            UTEST236, // Sprawdzanie poprawności działania funkcji multiply
            UTEST237, // Sprawdzanie poprawności działania funkcji multiply
            UTEST238, // Sprawdzanie poprawności działania funkcji multiply
            UTEST239, // Sprawdzanie poprawności działania funkcji multiply
            UTEST240, // Sprawdzanie poprawności działania funkcji multiply
            UTEST241, // Sprawdzanie poprawności działania funkcji multiply
            UTEST242, // Sprawdzanie poprawności działania funkcji multiply
            UTEST243, // Sprawdzanie poprawności działania funkcji multiply
            UTEST244, // Sprawdzanie poprawności działania funkcji multiply
            UTEST245, // Sprawdzanie poprawności działania funkcji multiply
            UTEST246, // Sprawdzanie poprawności działania funkcji multiply
            UTEST247, // Sprawdzanie poprawności działania funkcji multiply
            UTEST248, // Sprawdzanie poprawności działania funkcji multiply
            UTEST249, // Sprawdzanie poprawności działania funkcji multiply
            UTEST250, // Sprawdzanie poprawności działania funkcji multiply
            UTEST251, // Sprawdzanie poprawności działania funkcji multiply
            UTEST252, // Sprawdzanie poprawności działania funkcji multiply
            UTEST253, // Sprawdzanie poprawności działania funkcji multiply
            UTEST254, // Sprawdzanie poprawności działania funkcji multiply
            UTEST255, // Sprawdzanie poprawności działania funkcji multiply
            UTEST256, // Sprawdzanie poprawności działania funkcji multiply
            UTEST257, // Sprawdzanie poprawności działania funkcji multiply
            UTEST258, // Sprawdzanie poprawności działania funkcji multiply
            UTEST259, // Sprawdzanie poprawności działania funkcji multiply
            UTEST260, // Sprawdzanie poprawności działania funkcji multiply
            UTEST261, // Sprawdzanie poprawności działania funkcji multiply
            UTEST262, // Sprawdzanie poprawności działania funkcji multiply
            UTEST263, // Sprawdzanie poprawności działania funkcji multiply
            UTEST264, // Sprawdzanie poprawności działania funkcji multiply
            UTEST265, // Sprawdzanie poprawności działania funkcji multiply
            UTEST266, // Sprawdzanie poprawności działania funkcji multiply
            UTEST267, // Sprawdzanie poprawności działania funkcji multiply
            UTEST268, // Sprawdzanie poprawności działania funkcji multiply
            UTEST269, // Sprawdzanie poprawności działania funkcji multiply
            UTEST270, // Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 0 bajtów
            UTEST271, // Sprawdzanie poprawności działania funkcji multiply - limit sterty ustawiony na 6 bajtów
            UTEST272, // Sprawdzanie poprawności działania funkcji compare
            UTEST273, // Sprawdzanie poprawności działania funkcji compare
            UTEST274, // Sprawdzanie poprawności działania funkcji compare
            UTEST275, // Sprawdzanie poprawności działania funkcji compare
            UTEST276, // Sprawdzanie poprawności działania funkcji compare
            UTEST277, // Sprawdzanie poprawności działania funkcji compare
            UTEST278, // Sprawdzanie poprawności działania funkcji compare
            UTEST279, // Sprawdzanie poprawności działania funkcji compare
            UTEST280, // Sprawdzanie poprawności działania funkcji compare
            UTEST281, // Sprawdzanie poprawności działania funkcji compare
            UTEST282, // Sprawdzanie poprawności działania funkcji compare
            UTEST283, // Sprawdzanie poprawności działania funkcji compare
            UTEST284, // Sprawdzanie poprawności działania funkcji compare
            UTEST285, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST286, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST287, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST288, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST289, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST290, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST291, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST292, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST293, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST294, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST295, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST296, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST297, // Sprawdzanie poprawności działania funkcji validate_expression
            UTEST298, // Sprawdzanie poprawności działania funkcji calculate
            UTEST299, // Sprawdzanie poprawności działania funkcji calculate
            UTEST300, // Sprawdzanie poprawności działania funkcji calculate
            UTEST301, // Sprawdzanie poprawności działania funkcji calculate
            UTEST302, // Sprawdzanie poprawności działania funkcji calculate
            UTEST303, // Sprawdzanie poprawności działania funkcji calculate
            UTEST304, // Sprawdzanie poprawności działania funkcji calculate
            UTEST305, // Sprawdzanie poprawności działania funkcji calculate
            UTEST306, // Sprawdzanie poprawności działania funkcji calculate
            UTEST307, // Sprawdzanie poprawności działania funkcji calculate
            UTEST308, // Sprawdzanie poprawności działania funkcji calculate
            UTEST309, // Sprawdzanie poprawności działania funkcji calculate
            UTEST310, // Sprawdzanie poprawności działania funkcji calculate
            UTEST311, // Sprawdzanie poprawności działania funkcji calculate
            UTEST312, // Sprawdzanie poprawności działania funkcji calculate
            UTEST313, // Sprawdzanie poprawności działania funkcji calculate
            UTEST314, // Sprawdzanie poprawności działania funkcji calculate
            UTEST315, // Sprawdzanie poprawności działania funkcji calculate
            UTEST316, // Sprawdzanie poprawności działania funkcji calculate
            UTEST317, // Sprawdzanie poprawności działania funkcji calculate
            UTEST318, // Sprawdzanie poprawności działania funkcji calculate
            UTEST319, // Sprawdzanie poprawności działania funkcji calculate
            UTEST320, // Sprawdzanie poprawności działania funkcji calculate
            UTEST321, // Sprawdzanie poprawności działania funkcji calculate
            UTEST322, // Sprawdzanie poprawności działania funkcji calculate
            UTEST323, // Sprawdzanie poprawności działania funkcji calculate
            UTEST324, // Sprawdzanie poprawności działania funkcji calculate
            UTEST325, // Sprawdzanie poprawności działania funkcji calculate
            UTEST326, // Sprawdzanie poprawności działania funkcji calculate
            UTEST327, // Sprawdzanie poprawności działania funkcji calculate
            UTEST328, // Sprawdzanie poprawności działania funkcji calculate
            UTEST329, // Sprawdzanie poprawności działania funkcji calculate
            UTEST330, // Sprawdzanie poprawności działania funkcji calculate
            UTEST331, // Sprawdzanie poprawności działania funkcji calculate
            UTEST332, // Sprawdzanie poprawności działania funkcji calculate
            UTEST333, // Sprawdzanie poprawności działania funkcji calculate
            UTEST334, // Sprawdzanie poprawności działania funkcji calculate
            UTEST335, // Sprawdzanie poprawności działania funkcji calculate
            UTEST336, // Sprawdzanie poprawności działania funkcji calculate
            UTEST337, // Sprawdzanie poprawności działania funkcji calculate
            UTEST338, // Sprawdzanie poprawności działania funkcji calculate
            UTEST339, // Sprawdzanie poprawności działania funkcji calculate
            UTEST340, // Sprawdzanie poprawności działania funkcji calculate
            UTEST341, // Sprawdzanie poprawności działania funkcji calculate
            UTEST342, // Sprawdzanie poprawności działania funkcji calculate
            UTEST343, // Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 0 bajtów
            UTEST344, // Sprawdzanie poprawności działania funkcji calculate - limit sterty ustawiony na 7 bajtów
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
            test_summary(344); // wszystkie testy muszą zakończyć się sukcesem
        else
            test_summary(1); // tylko jeden (selected_test) test musi zakończyć się  sukcesem
        return EXIT_SUCCESS;
    }
    

    if (run_mode == rm_main_test)
    {
        test_title("Testy funkcji main()");

        void (*pfcn[])(int, char**, char**) =
        { 
            MTEST1, // Reakcja na brak pamięci - limit pamięci ustawiony na 0 bajtów
            MTEST2, // Reakcja na brak pamięci - limit pamięci ustawiony na 510 bajtów
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