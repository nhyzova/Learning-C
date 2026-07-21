#include <stdio.h>

int main() {

    // NESTED FOR LOOP

    // Vnorený for cyklus je umiestnený vo vnútri iného for cyklu
    // Vnútorný cyklus sa vykoná vždy ked sa vykoná vonkajší 

    int i, j;
    
        // Vonkajší cyklus
        for (i = 1; i <= 2; ++i) {
            printf("Vonkajší: %d\n", i);    // 2krát sa vykoná
        

        // Vnútorný cyklus
        for (j = 1; j <= 3; ++j) {
            printf("Vnútorný: %d\n", j);    // Vykoná sa 6 (2 * 3)
        }
    }

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}