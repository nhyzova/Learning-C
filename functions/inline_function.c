#include <stdio.h>

static inline int add(int a, int b) {   // static -> zabezpečí, že funkcia bude dostupná iba v tomto súbore,
    return a + b;                       // takže linker ju nebude hľadať v iných súboroch
}

int main() {

    // INLINE FUNCTION

    // Občas sa môžem stretnúť s kľúčovým slovom "inline" v funkciach iných autorov
    // Ako začiatočník ho síce nebudem používať často, ale je dobré vedieť, čo znamená

    // Inline funkcia je malá funkcia, ktorá požiadá kompilátor, aby jej kód vložil priamo na miesto, kde je volaná, namiesto toho,
    // aby na ňu preskočil
    // Vďaka tomu môžu byť krátke, často používané funkcie o niečo rýchlejšie, pretože sa tým odstráni malé oneskorenie pri bežnom
    // volaní funkcie 

    // INLINE FUNCTION EXAMPLE
    printf("%d\n", add(5, 3));

    // KEDY NEPOUŽÍVAŤ FUNKCIE TYPU INLINE
    // Funckie typu inline sú najvhodnejšie pre malé a jednoduché funkcie -> vyhnem sa ich použivaniu v nasledujúcich prípadoch:

    // - Veľké funkcie (zväčšujú veľkosť programu)
    // - Rekurzívne funkcie
    // - Funkcie, ktoré sa volajú len zriedka
    
    // Príliš veľa funkcií typu inline môže spomaliť a zväčšiť môj program, čo je próblem známy ako "code bloat" (nafuknutý kód)

    return 0;
}