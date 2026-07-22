#include <stdio.h>

int main() {

    // DATA TYPES
    // Každá premnenná v jazyku C musí mať špecifikovaný dátový typ 
    // Na jej zobrazenie potrebujeme pužiť špecifikátor formátu vo vnútri funkcie printf()

    int myNum = 5;
    float myFloatNum = 9.99;
    char myLetter = 'N';

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    // Dátový typ určuje veľkosť a typ informácií ktoré bude uchovávať 
    // int -> 2 až 4 bajty 
    // float -> 4 bajty
    // double -> 8 bajtov
    // char -> 1 bajt 

    // Format specifiers
    // %d alebo %i -> int
    // %f alebo %F -> float
    // %lf -> double
    // %c -> char
    // %s -> string 

    // Veľkosť premennej viem tiež zistiť aj takto
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));

    // REAL-LIFE EXAMPLE
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);

    return 0;
}