#include <stdio.h>

int main() {

    // BREAK

    // Break slúži na vyskočenie zo slučky 
    int i;

    for (i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }
    printf("\n");

    // CONTINUE

    // Inštrukcia continue preruší jednu iterakciu (v cykle), ak nastane zadaná podmienka,
    // a pokračuje dalšou iterakciou v cykle
    for (i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        printf("%d\n", i);
    }
    printf("\n");

    // COMBINING BREAK AND CONTINUE
    for (i = 0; i < 6; i++) {
        if (i == 2) {
            continue;
        }
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }
    printf("\n");

    // BREAK AND CONTINUE IN WHILE LOOP

    while (i < 10) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
        i++;
    }
    printf("\n");

    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}