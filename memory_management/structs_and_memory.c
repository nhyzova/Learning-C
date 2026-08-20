#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car3 {
    char brand[50];
    int year;
};

struct Car2 {
    char brand[50];
    int year;
};

struct Car {
    char brand[50];
    int year;
};

int main() {

    // STRUCTURES AND DYNAMIC MEMORY

    // Dynamickú pamäť môžem používať aj so štruktúrami 
    // To je užitočné v prípadoch, keď vopred neviem, koľko štruktúr budem potrebovať, alebo ak chcem ušetriť pamäť tým, že alokujem len to, čo je potrebné 


    // ALLOCATING MEMORY FOR A STRUCT

    // Na alokáciu pamäte pre ukazovateľ na štruktúru môžem použiť funkciu malloc()
    
    // Alokujem pamäť pre jednu štruktúru Car
    struct Car *ptr = (struct Car*) malloc(sizeof(struct Car));

    // Skontrolujem či alokácia bola úspešná
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Nastavím hodnoty
    strcpy(ptr->brand, "Honda");
    ptr->year = 2022;

    // Vypíšem hodnoty
    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);

    // Uvolním pamäť 
    free(ptr);

    printf("\n");

    // POZNÁMKA: Funkcia malloc() alokuje neinicializovanú pamäť 
    // Obsah tejto pamäte bude mať neurčitú hodnotu, kým do nej nepriradím hodnoty 
    // Ak chcem aby bolo pamäť inicializovaná na nulu, môžem použiť funkciu calloc()


    // USING ARRAYS OF STRUCTS

    // Pamäť pre viacero štruktúr môžem alokovať aj naraz, podobne ako v prípade poľa
    struct Car2 *cars = (struct Car2*) malloc(3 * sizeof(struct Car2));
    
    if (cars == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Vyplním údaje
    strcpy(cars[0].brand, "Ford");
    cars[0].year = 2015;

    strcpy(cars[1].brand, "BMW");
    cars[1].year = 2018;

    strcpy(cars[2].brand, "Volvo");
    cars[2].year = 2023;

    // Vypíšem údaje
    for (int i = 0; i < 3; i++) {
        printf("%s - %d\n", cars[i].brand, cars[i].year);
    }

    free(cars);

    printf("\n");

    // GROWING ARRAYS LATER WITH REALLOC()

    // Ak neskôr budem potrebovať viac prvkov, môžem zmeniť veľkosť dynamického poľa pomocou funkcie realloc() 
    // Tým sa blok môže presunúť na nové miesto a vráti sa nový ukazovateľ 
    // Výsledok vždy najprv uložím do dočasného ukazovateľa, aby som v prípade zlyhania prerozdelenia pamäte neprišla o pôvodnú pamäť 
    int count = 2;
    struct Car3 *cars2 = (struct Car3*) malloc(count * sizeof(struct Car3));
    
    if (cars2 == NULL) {
        printf("Initial allocation failed.\n");
        return 1;
    }

    // Inicializujem prvé 2 autá
    strcpy(cars2[0].brand, "Toyota"); cars2[0].year = 2010;
    strcpy(cars2[1].brand, "Audi");   cars2[1].year = 2019;

    // Potrebujem ešte jedno auto -> počet sa zvýši na 3
    int newCount = 3;
    struct Car3 *tmp = (struct Car3*) realloc(cars2, newCount * sizeof(struct Car3));

    if (tmp == NULL) {
        printf("Reallocation failed.\n");
        return 1;
    }
    cars2 = tmp;    // Použiť prerozdelený blok

    // Inicializujem nový prvok na indexe 2
    strcpy(cars2[2].brand, "Kia"); 
    cars2[2].year = 2022;

    // Ukáže všetky autá
    for (int i = 0; i < newCount; i++) {
        printf("%s - %d\n", cars2[i].brand, cars2[i].year);
    }

    free(cars2);

    return 0;
}