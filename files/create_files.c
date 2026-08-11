#include <stdio.h>

int main() {

    // FILE HANDLING
    // V jazyku C môžem vytvárať, otvárať a čítať a zapisovať do súborov tak, že deklarujem ukazovateľ typu FILE
    // a použijem funkciu fopen()

    // Syntax   -> FILE *fptr;
    // FILE je v podstate dátovy typ a na prácu s ním musím vytvoriť premennú typu ukazovateľa fptr

    // Syntax   -> fptr = fopen(filename, mode)
    // Na skutočné otvorenie súboru použijem fopen(), ktorá prijíma dva parametre:
    // 1. filename   -> názov súboru, ktorý chcem otvoriť (alebo vytvoriť), napr. filename.txt
    // 2. mode       -> jeden znak, ktorý určuje, čo chcem so súborom urobiť 
    //                  w - zapisuje do súboru
    //                  a - dopĺňa nové údaje do súboru
    //                  r - číta zo súboru 


    // CREATE A FILE
    // Na vytvorenie súboru môžem použiť režim w vo funkcií fopen()
    // Režim w slúži na zápis do súboru, ak však súbor neexistuje funkcia ho za mňa vytvorí
    FILE *fptr;

    fptr = fopen("filename.txt", "w");

    fclose(fptr);

    // Ak nie je uvedené inak, súbor sa vytvorí v tom istom priečinku ako moje ostatné súbory v jazyku C
    // Tip ak chcem súbor vytvoriť v konkrétnom priečinku, stačí zadať absolutnú cestu 
    // fptr = fopen("C:\\directoryname\\filename.txt", "w");


    // CLOSING THE FILE
    // fclose(fptr); táto funkcia súbor uzavrie, keď s ním skončím
    // Považuje sa to za osvedčený postup, pretože tým sa zabezpečí, že:
    // 
    // - Zmeny sa správne uložia
    // - Iné programy môžu súbor použivať (ak chcem)
    // - Uvoľní sa nepotrebný priestor v pamäti 

    return 0;
}