#include <stdio.h>
#include <stdlib.h>

int main() {

    // ALLOCATE MEMORY

    // Proces rezervovania pamäte sa nazýva alokácia 
    // Spôsob alokácie pamäte závisí od typu pamäte 

    // V jazyku C existujú dva typy pamäte: 
    // - statická pamäť
    // - dynamická pamäť 


    // STATIC MEMORY

    // Statická pamäť je pamäť, ktorá je pre premenné vyhradená ešte pred spustením programu
    // Alokácia statickej pamäte sa tiež nazýva alokácia pamäte v čase kompilácie 
    // Jazyk C automaticky alokuje pamäť pre každú premennú pri kompilácií programu
    // Napríklad ak vytvorím pole celých čísiel obsahujúce 20 študentov (pre letný semester), jazyk C vyhradí miesto pre 20 prvkov 
    // (20 * 4) = 80
    int students[20];
    printf("%zu\n", sizeof(students));

    // Keď však začne, ukáže sa, že ho navštevuje len 12 študentov
    // V tom prípade som premrhala priestor 8 nevyužitých prvkov
    // Kedže veľkosť poľa nemožem zmeniť, zostane mi zbytočne rezervovaná pamäť 
    

    // DYNAMIC MEMORY

    // Dynamická pamäť je pamäť, ktorá sa alokuje až po spustení programu 
    // Alokáciu dynamickej pamäte možno tiež označiť ako alokáciu pamäte za behu programu
    // Na rozdiel od statickej pamäte mám v každom okamihu plnú kontrolu nad tým, koľko pamäte sa práve využíva 
    // Môžem napísať kód, ktorý určí, koľko pamäte potrebujem, a túto pamäť alokovať
    // Dynamická pamäť nepatrí žiadnej premennej, prístup k nej je možný iba prostredníctvom ukazovateľov

    // Na alokáciu dynamickej pamäte môžem použiť funkcie malloc() a calloc() 
    // Na ich použitie je potrebné zahrnúť hlavičkový súbor <stdlib.h>
    // Funkcie malloc() a calloc() alokujú určitú pamäť a vracajú ukazovateľ na jej adresu
    // int *ptr1 = malloc(size);
    // int *ptr2 = calloc(amount, size);

    // malloc() -> má jeden parameter size, ktorý určuje, koľko pamäte sa má alokovať, merané v bajtoch
    // calloc() -> má dve parametre
    //          - amount -> určuje počet položiek, ktoré sa majú alokovať 
    //          - size   -> určuje veľkosť každej položky, meranú v bajtoch 


    // Najlepší spôsob, ako prideliť správne množstvo pamäte pre určitý dátový typ, je použiť operátor `sizeof`
    int *ptr3, *ptr4;

    ptr3 = malloc(sizeof(*ptr3));
    ptr4 = calloc(1, sizeof(*ptr4));

    // Použijem dynamickú pamäť na vylepšenie vyššie uvedeného príkladu so študentmi 
    // Nemôžem použiť operátor `sizeof` na zistenie, koľko pamäte bolo alokované, musím to vypočítať vynásobením počtu položiek 
    // veľkosťou dátového typu
    int *students2;
     
    int numStudents = 12;
    students2 = calloc(numStudents, sizeof(*students2));
    
    printf("%zu\n", numStudents * sizeof(*students2));


    // STACK MEMORY

    // Pre úplnosť stojí za zmienku aj pamäť zásobníka 
    // Pamäť zásobníka je typ dynamickej pamäte, ktorá je vyhradená pre premenné deklarované vo vnútri funkcií
    // Premenné deklarované vo vnútri funkcie využívajú pamäť zásobníka namiesto statickej pamäte

    // Pri volané funkcie sa pre premenné vo funkcií alokuje pamäť zásobníka 
    // Keď funkcia vráti výsledok, pamäť zásobbníka sa uvolní

    return 0;
}