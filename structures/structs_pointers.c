#include <stdio.h>

// 2.
struct Car2 {
    char brand2[30];
    int year2;
};

// Funkcia, ktorá prijíma ukazovateľ na štruktúru typu Car2 a aktualizuje rok
void updateYear(struct Car2 *c) {
    c->year2 = 2026;                 // Zmení rok
}

// 1.
struct Car {
    char brand[30];
    int year;
};

int main() {

    // 1. STRUCTS AND POINTERS

    // Ukazovatele môzem používať so štruktúrami, aby bol môj kód efektívnejší, najmä pri odovzdávaní štruktúr do funkcií 
    // alebo pri zmene ich hodnôt 
    // Ak chcem použiť ukazovateľ na štruktúru, stačí pridať symbol *, rovnako ako pri ostatných dátových typoch
    // Na prístup k jej členom musím namiesto syntaxe s bodkou (.) použiť operátor ->
    struct Car car = { "Toyota", 2021};

    // Deklarujem pointer na štruktúru
    struct Car *ptr = &car;

    // Prístup k členom
    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);
    printf("\n");


    // 2. PASSING STRUCT POINTERS TO FUNCITONS

    // Takto môžem odovzdať ukazovateľ na štruktúru do funkcie a zmeniť jej hodnoty
    struct Car2 myCar = { "Toyota", 2021};

    updateYear(&myCar);     // Odovzdám ukazovateľ, aby funkcia mohla zmeniť rok

    printf("Brand: %s\n", myCar.brand2);
    printf("Year: %d\n", myCar.year2);   


    // WHY USE STRUCT POINTERS

    // Používanie ukazovateľov na štruktúry je užitočné v nasledujúcich prípadoch:

    // 1. Chcem sa vyhnúť kopírovaniu veľkého množstva údajov
    // Namiesto kopírovania celej štruktúry môžem jednoducho odovzdať ukazovateľ 
    // Vďaka tomu bude môj program rýchlejší a spotrebuje menej pamäte

    // 2. Chcem zmeniť hodnoty vo vnútri funkcie
    // Ak do funkcie odovzdám ukazovateľ na štruktúru, funkcia môže zmeniť pôvodné hodnoty

    // 3. Chcem dynamicky vytvárať štruktúry pomocou alokácie pamäte
    // S ukazovateľmi môžem pomocou funkcie malloc() vytvárať štruktúry počas behu programu 

    return 0;
}