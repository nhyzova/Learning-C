#include <stdio.h>

int main() {

    // READ A FILE

    // V predchadzajúcej kapitole som zapisovala do súboru pomocou režimov "w" a "a" vo vnútri funkcie fopen()
    // Na čítanie zo súboru môžem použiť režim "r"
    FILE *fptr;

    fptr = fopen("filename.txt", "r");
    // Týmto sa súbor otvorí na čítanie

    // Čítanie súboru v jazyku C si vyžaduje trochu úsilia
    // Ďalej musím vytvoriť reťazec, ktorý by mal byt dostatočne veľký na uloženie obsahu súboru
    // Napríklad vytvorím reťazec, ktorý pojme až 100 znakov
    char myString[100];

    // Na prečítanie obsahu súboru môžem použiť funkciu fgets() prijíma 3 parametre
    fgets(myString, 100, fptr);
    // 1. Prvý parameter určuje, kam sa má uložiť obsah súboru, a to do poľa myString, ktoré sme práve vytvorili
    // 2. Druhý parameter určuje maximálnu veľkosť údajov, ktoré sa majú načítať, a tá by sa mala zhodovať s veľkosťou poľa 
    // 3. Tretí parameter vyžaduje ukazovateľ súboru, ktorý sa používa na čítanie súboru (v mojom príklade fptr)

    // Teraz môžem tento reťazec vytlačiť, čím sa zobrazí obsah súboru 
    printf("%s", myString);

    // POZNÁMKA : Funkcia fgets() načíta iba prvý riadok súboru 
    // Na načítanie všetkých riadkov súboru môžem použiť cyklus while
    while (fgets(myString, 100, fptr)) {
        printf("%s", myString);
    }

    fclose(fptr);
    printf("\n");   


    // GOOD PRACTICE
    
    // Ak sa pokúsim otvoriť súbor na čítanie, ktorý neexistuje, funkcia fopen() vráti hodnotu NULL
    // TIP : Môžem použiť podmienku if na kontrolu hodnoty NULL a namiesto toho vypísať nejaký text (ak súbor neexistuje)
    FILE *fptr2;

    fptr2 = fopen("loremipsum.txt", "r");

    if (fptr2 == NULL) {
        printf("Not able to open the file.\n");
    }

    fclose(fptr2);
    printf("\n");


    // EXAMPLE

    // Ak súbor existuje, prečítaj jeho obsah a vypíš ho. Ak súbor neexistuje, vypíš správu:
    FILE *fptr3;

    fptr3 = fopen("filename.txt", "r");

    char myString2[100];

    if (fptr3 != NULL) {

        while (fgets(myString2, 100, fptr3)) {
            printf("%s", myString2);
        }
    } else {
        printf("Not able to open the file.\n");
    }

    return 0;
}