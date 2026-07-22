#include <stdio.h>

int main() {

    // ARRAY LOOP

    // Cyklus cez pole
    // Na prechádzanie prvkov poľa môžeme použiť cyklus for tak, že do podmienky cyklu zapíšem veľkosť poľa 
    int myNumbers[] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }
    printf("\n");

    // Tento prístup je flexibilnejší a udržateľnejší
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    for (i = 0; i < length; i++) {
        printf("%d\n", myNumbers[i]);
    }

    return 0;
}