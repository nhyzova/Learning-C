#include <stdio.h>

int main() {

    // POINTERS

    // CREATING POINTERS
    // V memory address som sa naučila, že adresu premennej v pamäti môžem získať pomocou referenčného operátora &.

    int myAge = 20;     // premenná typu int

    printf("%d\n", myAge);      // vypíše hodnotu premennej myAge (20)
    printf("%p\n", &myAge);     // vypíše pamäťovú adresu premennej myAge (0x7ffe5367e044)

    // Ukazovateľ je premenná, ktorá ako svoju hodnotu uchovavá pamäťovú adresu inej premennej. 
    // Premenná typu ukazovateľ ukazuje na premennú rovnakého typu (napríklad int) a vytvára sa pomocou operátora *.
    // Ukazovateľu sa priradí adresa premennej, s ktorou práve pracuje.

    int* ptr = &myAge;      // premenná typu ukazovateľ s názvom ptr, ktorá uchováva adresu premennej myAge
    printf("%p\n", ptr);    // vypíše adresu v pamäti pre premennú myAge pomocou ukazovateľa


    // DEREFERENCE
    // Hodnotu premennej, na ktorú ukazovateľ ukazuje, moôžem získať aj pomocou operátora *.
    printf("%d\n", *ptr);

    return 0;
}