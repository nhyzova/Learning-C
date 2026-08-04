#include <stdio.h>

// REAL-LIFE EXAMPLE - funkcia na prevod stupňov Fahrenheit na Celsius
float toCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}


// 8. Viac premenných výsledkov uložených do poľa
int calculateSum3(int x, int y) {
    return x + y;
}


// 7. CALCULATE THE SUM OF NUMBERS cez return
int calculateSum2(int x, int y) {
    return x + y;
}

// 6. Tento príklad vráti súčet funkcie s dvoma parametrami
int myFunction5(int x, int y) {
    return x + y;
}

// 5. RETURN VALUES
int myFunction4(int x) {
    return 5 + x;
}

// 4. ODOVZDANIE POLÍ AKO PARAMETROV FUNKCIÍ 
void myFunction3(int myNumbers[5]) {
    for(int i = 0; i < 5; i++) {
        printf("%d\n", myNumbers[i]);
    }
}

// 3. CALCULATE THE SUM OF NUMBERS
void calculateSum(int x, int y) {
    int sum = x + y;
    printf("The sum of %d + %d is: %d\n", x, y, sum);
}

// 2. MULTIPLE PARAMETERS
void myFunction2(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}

// 1. PARAMETERS AND ARGUMENTS
void myFunction(char name[]) {
    printf("Hello: %s\n", name);
}

int main() {

    //* FUNCTION PARAMETERS
    
    //* PARAMETERS AND ARGUMENTS
    // Informácie funkciám je možné odovzdať ako parametre 
    // Parametre fungujú vo vnútri funkcie ako premenné

    // Parametre sa uvádzajú za názvom funkcie, v zátvorkách 
    // Môžem pridať ľubovoľný počet parametrov, stačí ich oddeľovať čiarkami
    // 1.
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    printf("\n");

    //* MULTIPLE PARAMETERS
    // Vo vnútri funkcie môžem pridať ľubovoľný počet parametrov
    // 2.
    myFunction2("Liam", 3);
    myFunction2("Jenny", 14);
    myFunction2("Anja", 30);
    printf("\n");

    //* CALCULATE THE SUM OF NUMBERS
    // Môžem vytvoriť udržateľnejší program pomocou parametrov funkcií
    // 3.
    calculateSum(5, 3);
    calculateSum(8, 2);
    calculateSum(15, 15);
    printf("\n");

    // Pri práci s viacerými parametrami musí volanie funkcie obsahovať rovnaký počet argumentov, ako je počet parametrov
    // a argumenty musia byť odovzdané v rovnakom poradí 

    //* ODOVZDANIE POLÍ AKO PARAMETROV FUNKCIÍ 
    // Do funkcie môžem odovzdať aj polia 
    // 4.
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction3(myNumbers);
    printf("\n");

    //* RETURN VALUES
    // Kľúčové slovo void, použité v predchádzajúcich príkladoch, označujem, že funkcia nemá vrátiť žiadnu hodnotu,
    // Ak chcem aby funkcia vrátila hodnotu, môžem namiesto void použiť dátový typ a vo vnútir funkcie použiť kľúčové slovo return 
    // 5.
    printf("Result is: %d", myFunction4(3));
    printf("\n");
     
    // 6.
    printf("Result is: %d", myFunction5(5, 3));
    printf("\n");

    // 7. CALCULATE THE SUM OF NUMBERS - môžem namiesto toho použiť príkaz return a výsledky uložiť do rôznych premenných bude 
    // program ešte flexibilnejší a ľahšie ovládateľný 
    int result1 = calculateSum2(5, 3);
    int result2 = calculateSum2(8, 2);
    int result3 = calculateSum2(15, 15);

    printf("Result1 is: %d\n", result1);
    printf("Result2 is: %d\n", result2);
    printf("Result3 is: %d\n", result3);
    printf("\n");

    // 8. Keď mám veľa "premenných výsledkov" je lepšie výsledky uložť do poľa
    int resultArr[6];

    resultArr[0] = calculateSum3(5, 3);
    resultArr[1] = calculateSum3(8, 2);
    resultArr[2] = calculateSum3(15, 15);
    resultArr[3] = calculateSum3(9, 1);
    resultArr[4] = calculateSum3(7, 7);
    resultArr[5] = calculateSum3(1, 1);

    for(int i = 0; i < 6; i++) {
        printf("Result%d is: %d\n", i + 1, resultArr[i]);
    }
    printf("\n");


    // REAL-LIFE EXAMPLE
    // Vytvorím program, ktorý prevádza hodnotu stupňov Fahrenheita na stupne Celsius

    // Nastavím fahrenheit hodnotu
    float f_value = 98.8;

    // Vyvolám funkciu s hodnotou v stupňoch fahrenheit
    float result = toCelsius(f_value);

    // Vytlačím hodnotu fahrenheita
    printf("Fahrenheit: %.2f\n", f_value);

    // Vytlačím výsledok
    printf("Convert Fahrenheit to Celsius: %.2f\n", result);

    return 0;
}