#include <stdio.h>

union myUnion {
    int myNum;
    char myLetter;
    char myString[36];
};

int main() {

    // UNIONS

    // Únia je podobná štruktúre v tom, že môže ukladať členy rôznych dátových typov
    // Existujú však určité rozdiely:
    
    // V štruktúre má každý člen vlastnú pamäť 
    // V únií všetky členy zdieľajú tú istú pamäť, čo znamená, že naraz môžem použiť len jednu z hodnôt

    // Uniony sú však užitočné vtedy, keď potrebujem naraz uložiť len jeden z viacerých možných typov a chcem ušetriť 
    

    // DEKLARÁCIA UNION

    // Na vytvorenie zjednotenia použijem kľúčové slovo union a následne z neho vytvorím premennú (rovnako ako v prípade štruktúr)
    union myUnion u1;


    // ACCESS UNION MEMBERS 

    // Rovnako ako v prípade štruktúr, na prístup k členom zjednotenia použijem syntax s bodkou (.)
    // Dôležité - Keďže vštci členovia zdieľajú rovnakú pamäť, zmena jedného z nich ovplyvní aj ostatných 
    // Platnú hodnotu má iba posledný priradený člen 
    u1.myNum = 1000;

    // Keďže ide o poslednú hodnotu zapísanú do zjednotenia, premenná myNum už neobsahuje hodnotu 1000 - jej hodnota je neplatná
    u1.myLetter = 'N';

    printf("myNum: %d\n", u1.myNum);
    printf("myLetter: %c\n", u1.myLetter);


    // SIZE OF A UNION

    // Veľkosť zjednotenia sa vždy rovná veľkosti jeho najväčšieho prvku 
    printf("Size of union: %zu bytes\n", sizeof(u1));


    // WHEN TO USE UNIONS
    
    // - potrebujem ukladať rôzne typy na jednom mieste
    // - používam vždy len jeden typ
    // - úspora pamäte je veľmi dôležitá

    return 0;
}