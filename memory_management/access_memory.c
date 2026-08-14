#include <stdio.h>
#include <stdlib.h>

int main() {

    // ACCESS MEMORY


    // ACCESS DYNAMIC MEMORY

    // Dynamická pamäť sa správa ako pole, pričom jej dátový typ je určený typom ukazovateľa 
    // Rovnako ako v prípade polí, prístup k prvku v dynamickej pamäti sa vykonáva pomocou jeho indexového čísla
    // ptr[0] = 12;

    // Prístup k prvému prvku môžem získať aj pomocou dereferencie ukazovateľa 
    // *ptr = 12;

    // EXAMPLE
    // Čítanie z dynamickej pamäte a zapisovanie do nej

    // Alokovanie pamäte
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));

    // Zapíše do pamäte
    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;

    // Prečíta z pamäte
    printf("%d\n", *ptr);
    printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);


    // POZNÁMKA DÁTOVÝ TYPOM
    // Dynamická pamät nemá vlastný dátový typ, ide len o postupnosť bajtov
    // Dáta v pamäti možno interpretovať ako určitý typ na základe dátového typu ukazovateľa

    // V tomto príklade možno ukazovateľ na štyri bajty interpretovať ako jednu hodnotu typu int (4 bajty) alebo ako pole 4 hodnôt typu char (každá po 1 bajte)
    int *poi1 = malloc(4);
    char *poi2 = (char*) poi1;

    poi1[0] = 1684234849;

    printf("%d is %c %c %c %c\n", *poi1, poi2[0], poi2[1], poi2[2], poi2[3]);

    return 0;
}