#include <stdio.h>
#include <stdlib.h>

int main() {

    // REALLOCATE MEMORY

    // Ak mi vyhradená pamät nestačí, môzem ju prealokovať a zväčiť 
    // Prealokáciou sa vyhradí iná (zvyčajne väčšia) veľkosť pamäte, pričom sa zachovajú údaje, ktoré v nej boli uložené
    // Veľkosť alokovanej pamäte môžem zmeniť pomocou funkcie realloc()

    // Funkcia realloc() prijíma dva parametre 
    // int *ptr2 = realloc(ptr1, size);
    // Prvý parameter   ->  je ukazovateľ na pamäť, ktorej veľkosť sa mení
    // Druhý parameter  ->  určuje novú veľkosť alokovanej pamäte, meranú v bajtoch

    // Funkcia realloc() sa pokúsi zmeniť veľkosť pamäte na adrese ptr1 a vráti tú istú pamäťovú adresu 
    // Ak sa jej nepodarí zmeniť veľkosť pamäte na aktuálnej adrese, alokuje pamäť na inej adrese a namiesto toho vráti novú adresu

    // POZNÁMKA: Keď funkcia realloc() vráti inú adresu pamäte, pamäť na pôvodnej adrese už nie je rezervovaná a jej používanie nie je bezpečné 
    // Po dokončení prerozdelenia je vhodné priradiť nový ukazovateľ k pôvodnej premennej, aby sa starý ukazovateľ nemohol omylom použiť 


    // EXAMPLE
    int *ptr1, *ptr2, size;
    
    // Alokuje pamäť pre štyri celé čísla
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);

    printf("%d bytes allocated at address %p \n", size, ptr1);

    // Zmení veľkosť pamäte, tak aby pojala šesť celých čísel
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);

    printf("%d bytes reallocated at address %p \n", size, ptr2);


    // NULL POINTER & ERROR CHECKING 

    // Funkcia realloc() vráti ukazovateľ NULL, ak nie je schopná alokovať viac pamäte 
    // Je to síce veľmi nepravdepodobné, ale stojí za to mať to na pamäti, ak potrebujem, aby bol môj kód odolný voči zlyhaniam

    // Následujúci príklad kontorluje, či je funkcia realloc() schopná zmeniť veľkosť pamäte, a to prostredníctvom kontroly, či je ukazovateľ NULL
    int *ptr3, *ptr4;

    ptr3 = malloc(4);
    ptr4 = realloc(ptr1, 8);

    // Skontroluje, či funkcia realloc() dokáže zmeniť veľkosť pamäte, alebo nie
    if (ptr2 == NULL) {
        printf("Failed. Unable to resize memory");
    } else {
        printf("Success. 8 bytes reallocated at address %p \n", ptr2);
        ptr1 = ptr2;    // Aktualizuje ptr1 tak, aby ukazoval na novo alokovanú pamäť
    }

    // POZNÁMKA: Pri alokácii pamäte by som mala vždy zahrnúť kontrolu chýb (či je ukazovateľ == NULL)

    // POZNÁMKA: Alokovanú pamäť by som mala vždy uvolniť, keď ju už nepotrebujem 
    // Je to dôležité nielen preto, aby sa môj program správal podľa očakávaní, ale aj preto, že vďaka tomu bude program ľahšie udržiavateľný a efektívnejší
    
    // Na uvoľnenie pamäte stačí použiť funkciu free()
    free(ptr1);


    return 0;
}