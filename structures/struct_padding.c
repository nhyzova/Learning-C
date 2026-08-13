#include <stdio.h>

struct S {
    char a;
    int b;
    char c;
};

struct U {
    char a;
    int b;
    char c;
};

struct Example2 {
    int b;       // 4 byte  
    char a;      // 1 byte   
    char c;      // 1 byte
};

struct Example {
    char a;     // 1 byte
    int b;      // 4 byte
    char c;     // 1 byte
};

int main() {

    // STRUCT ALIGNMENT AND PADDING

    // Keď v jazyku C vytvorím štruktúru, kompilátor môže medzi jej členmi pridať niekoľko dodatočných bajtov na vyplnenie
    // Cieľom je zrýchliť beh programu na počítači, pretože väčšina procesorov číta data efektívnejšie, ak sú v pamäti správne zarovnané
    // Týmto sa zvyčajne nemusím zaoberať, pokiaľ nepracujem s nízkoúrovňovou pamäťou alebo súborovými formátmi

    printf("Size of struct: %zu bytes\n", sizeof(struct Example));
    // Dalo by sa očakávať, že veľkosť bude 1 + 4 + 1 = 6 bajtov - ale zvyčajne vypíše 12 bajtov


    // WHY ?

    // Kompilátor pridáva vypĺňacie bajty, aby člen typu int(b) začínal na pamäťovej adrese, ktorá je násobkom čísla 4
    // To pomáha procesoru čítať ho rýchlejšie

    // Takto je pamäť skutočne usporiadaná:
    //  a        |   1    |  najskôr uložené
    //  padding  |   3    |  pridané tak, aby b začínalo násobkom čísla 4
    //  b        |   4    |  zarovnané na hranicu 4 bajtov
    //  c        |   1    |  uložené vedľa
    //  padding  |   3    |  pridané tak, aby celková veľkosť bola násobkom čísla 4


    // HOW TO REDUCE PADDING

    // Veľkosť vyplňovania závisí od poradia členov v štruktúre 
    // Ak najskôr zoskupím väčšie typy, môžem zmeniť veľkosť štruktúry
    printf("Size of struct: %zu bytes\n", sizeof(struct Example2));     // Zvyčajne 8 bajtov


    // STRUCTS VS UNIONS

    // Zjednotenia ukladajú všetky členy na rovnaké miesto v pamäti, takže medzi členmi nie je žiadne vypĺňanie
    // Avšak tak štruktúry, ako aj zjednotenia sa naďalej riadia pravidlami zarovnania - údaje musia začínať na pamäťových adresách, ktoré zodpovedajú veľkosti ich typu
    printf("Struct size: %zu bytes\n", sizeof(struct S));
    printf("Union size: %zu bytes\n", sizeof(struct U));

    // STRUCT - členy sú uložené za sebou, takže medzi nimi je pridaná výplň
    // UNION - všetky členy zdieľajú rovnakú pamäť, takže o jej celkovej veľkosti rozhoduje len najväčší člen


    return 0;
}