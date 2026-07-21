#include <stdio.h>

int main() {

    // VARIABLES
    // Premenné sú kontajnery na ukladanie hodnôt údajov, ako sú čísla a znaky.
    // V jazyku C musia mať premenné konkrétny typ, ktorý programu udáva, aký druh údajov môže premenná ukladať

    // int -> ukladá celé čísla (123, -123)
    // float -> ukladá čísla s desatinými miestami (19,99, -19,99)
    // char -> ukladá jeden znak ('a', 'A')

    // Na vytvorenie premennej je potrebné určiť jej typ a priradiť jej názov a zároveň môžeme aj hodnotu 
    int myNum = 20;
    float myFloatNum = 10.99;
    char myLetter = 'N';

    // FORMAT SPECIFIERS 
    // Sa používajú spolu s funkciou printf() na výpis premenných 
    // %d -> int
    // %f -> float =
    // %c -> char = jeden znak 
    // %s -> char = string

    printf("My favourite number is: %d\n", myNum);
    printf("My favourite float number is: %f\n", myFloatNum);
    printf("My favourite letter is: %c\n", myLetter);

    // Takto zmením hodnotu premennej 
    myNum = 10;

    return 0;
}