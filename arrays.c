#include <stdio.h>

int main() {

    // ARRAYS

    // Pole sa použivajú na ukladanie viacerých hodnôt do jednej premennej, namiesto toho, aby sa pre každú hodnotu
    // deklarovali samostatné premenné


    // VYTVORENIE POĽA

    // Na vytvorenie poľa definujem dátový typ (napr. int) a zadám názov poľa, za ktorým nasledujú hranaté zátvorky []

    // Na vloženie hodnôt do poľa použijem zoznam oddelený čiarkami vnútri zložených zátvoriek a uistím sa, že všetky 
    // hodnoty majú rovnaký dátový typ 
    int myNumbers[] = {25, 50, 75, 100};    // Toto je jedna premenná ktorá obsahuje 4 čísla

    // Na prístup k prvku poľa použijem jeho indexové číslo 
    // Indexy poľa začínajú číslom 0, [0] je prvý prvok [1] je druhý prvok 
    printf("%d\n", myNumbers[0]);   // Tento príkaz vyvolá hodnotu prvého prvku v poli


    // ZMENA PRVKU POĽA

    // Ak chcem zmeniť hodnotu konkrétneho prvku, použijem jeho indexové číslo
    myNumbers[0] = 33;
    printf("%d\n", myNumbers[0]);
    printf("\n");


    // NASTAVENIE VEĽKOSTI POĽA

    // Dalším bežným spôsobom vytvárania polí je najprv určiť ich veľkosť a prvky pridať až neskôr
    // Najprv deklarujem veľkosť poľa
    int numbers[4]; 

    // Pridám prvky
    numbers[0] = 25;
    numbers[1] = 50;
    numbers[2] = 75;
    numbers[3] = 100;

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);

    // Pri použití tejto metódy by som mala vedieť dopredu počet prvkov poľa, aby program mohol vyčleniť dostatok pamäte



    return 0;
}