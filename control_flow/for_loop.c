#include <stdio.h>

int main() {

    // FOR LOOP

    // Cyklus for sa používa vtedy ked presne viem koľkokrát chcem prejsť blok kódu 

    /* Cyklus for sa skláda z troch výrazov
        
        for (vyráz1; výraz2; výraz3) {
            blok kódu;
        } */

    //  Výraz 1 -> sa vykoná jednorazovo pred spustením bloku kódu
    // Výraz 2 -> definuje podmienku na spustenie bloku kódu
    // Výraz 3 -> sa vykoná vždy po spustení bloku kódu
    
    // PRINT NUMBER 0 - 4
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    printf("\n");

    // i = 0 -> príkaz nastaví premennú pred začiatkom cyklu 
    // i < 5 -> definuje podmienku ak je podmienka pravdivá cyklus začne od znova ak nieje pravdivá cyklus sa ukončí
    // i++ -> príkaz zvyšuje hodnotu pri každom vykonaní bloku v cykle

    // PRINT EVEN NUMBERS 0 - 10
    for (int i = 0; i <= 10; i = i + 2) {
        printf("%d\n", i);
    }

    printf("\n");

    // SUM OF NUMBERS 1 - 5
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
    }

    printf("Sum is: %d\n", sum);

    // COUNTDOWN 5 - 1
    for (int i = 5; i > 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}