#include <stdio.h>

int main() {

    //* POINTER ARITHMETIC

    // Aritmetika ukazovateľov znamená zmenu hodnoty ukazovateľa tak, aby ukazoval na iný prvok v pamäti 
    // Prvky v pamäti sú uložené vedľa seba ak teda ukazovateľ ukazuje na jeden prvok, pripočítam +1 a presunie sa na další
    int myNumbers[4] = {25, 50, 75, 100};
    int *ptr = myNumbers;     // ukazuje na myNumbers[0]

    printf("%d\n", *ptr);         // 25
    printf("%d\n", *(ptr + 1));   // 50
    printf("%d\n", *(ptr + 2));   // 75
    printf("%d\n", *(ptr + 3));   // 100
    printf("\n");


    //* INCREMENT AND DECREMENT
    // Ukazovateľ môžem posunúť pomocou operátorov ++ a -- a tiež += / -=
    // ++ posunie ukazovateľ na další prvok
    // -- posunie ukazovateľ na predchádzajúci prvok
    int myNumbers2[3] = {10, 20, 30};
    int *p = myNumbers2;

    printf("%d\n", *p);     // 10
    p++;                    // posunie sa na myNumbers2[1]
    printf("%d\n", *p);     // 20
    p--;                    // posunie sa na myNumbers2[0]
    printf("%d\n", *p);     // 10
    p += 2;                 // preskočí až na myNumbers2[2]
    printf("%d\n", *p);     // 30
    printf("\n");


    //* POINTER SUBTRACTION (DISTANCE)
    // Môžem odčítať dva ukazovatele, ktoré ukazujú na prvky v tom istom poli, a zistí tak, koľko prvkov sa medzi nimi nachádza
    int myNumbers3[5] = {10, 20, 30, 40, 50};
    int *start = &myNumbers3[1];    // 20
    int *end = &myNumbers3[4];      // 50

    printf("%ld\n", end - start);   // 3 prvky od seba
    printf("\n");


    //* POINTER ARITHMETIC DEPENDS ON TYPE
    // Nie všetky ukazovatele sa posúvajú rovnakým spôsobom 

    // Ked k ukazovateľu pripočítam 1, posunie sa dopredu o veľkosť položky, na ktorú ukazuje - nie len o 1 bajt
    // Ukazovateľ typu int* sa posúva o veľkosť celého čísla čiže 4 bajty
    // Ukazovateľ typu char* sa posíva o veľkosť znaku 1 bajt

    // Ak teda oba ukazovatele začínajú na pamäťovej adrese 1000
    // int* -> p + 1 by sa posunul na adresu 1004
    // char* -> p + 1 by sa posunul na adresu 1001
    //! Posun ukazovateľa závisí od dátového typu, na ktorý ukazuje - nie od čísla, ktoré k nemu pripočítam
    int myNumbers4[2] = {1, 2};
    char letters[] = "Hi";          // 'H', 'i', '\0'

    int *pi = myNumbers4;           // int pointer
    char *pc = letters;              // char pointer

    printf("%p\n", (void*)pi);
    printf("%p\n", (void*)(pi + 1));    // posunie sa o veľkosť int* (4 bajty)
    printf("%p\n", (void*)(pi + 2));    // posunie sa o veľkosť int* (4 bajty)

    printf("%p\n", (void*)pc);
    printf("%p\n", (void*)(pc + 1));    // posunie sa o 1 bajt
    printf("\n");


    //* LOOPING WITH POINTERS
    // V predchádzajúcej kapitole som sa naučila, ako prechádzať pole pomocou výrazu *(ptr + i)
    // Presúvaním samotného ukazovateľa vnútri cyklu, zakaždým ked sa ukazovateľ zvýši (p++), presunie sa na další prvok v pamäti
    int myNumbers5[3] = {30, 60, 90};
    int *p2 = myNumbers5;

    for(int i = 0; i < 3; i++) {
        printf("%d\n", *p2);
        p2++;                       // posunie sa na daľší prvok
    }
    
    // udáva *p hodnotu aktuálneho prvku
    // p++ posúva ukazovateľ na další prvok v poli
    // index poľa (i) nie je potrebný - ukazovateľ sleduje polohu

    return 0;
}