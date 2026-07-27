#include <stdio.h>

int main() {

    // MEMORY ADDRESS

    // Keď sa v jazyku C vytvorí premenná, priradí sa jej adresa v pamäti
    // Adresa v pamäti je miesto, kde je premenná uložená v počítači 
    // Keď premennej priradíme hodnotu, táto hodnota sa uloží na túto adresu v pamäti 
    // Na prístup k nej použijem referenčný operátor & a výsledok udáva, kde je premenná uložená 

    int myAge = 20;
    printf("%p", &myAge); 

    // POZNÁMKA: Adresa pamäte je uvedená v hexadecimálnom tvare, &myAge sa nazýva ukazovateľ v podstate ukladá adresu pamäte 
    // premennej ako svoju hodnotu
    // Na vytlačenie hodnôt ukazovateľov používame formátovací špecifikátor %p

    return 0;
}