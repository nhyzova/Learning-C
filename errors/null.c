#include <stdio.h>
#include <stdlib.h>

int main() {

    // NULL

    // NULL je špeciálna hodnota, ktorá predstavuje "nulový uakazovateľ" - ukazovateľ, ktorý neukazuje na nič
    // Pomáha sa vyhnúť používaniu prázdnych alebo neplatných ukazovateľov
    // Porovnaním ukazovateľ s hodnotou NULL môžem skontorlovať, či je jeho použitie bezpečné 

    // Mnohé funkcie v jazyku C vracajú hodnotu NULL, keď sa niečo pokazí napr funkcia fopen() vráti hodnotu NULL, ak sa súbor nedá otvoriť, a funkcia malloc() vráti hodnotu NULL,
    // ak zlyhá alokácia pamäte
    // Môžem to skontrolovať pomocou príkazu if a v prípade chyby vypísať chybovú správu
    
    // V tomto príklade sa pokúsim otvoriť súbor, ktorý neexistuje 
    // Keďže funkcia fopen() zlyhá, vráti hodnotu NULL a ja vypíšem chybovú správu
    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    fclose(fptr);


    // Ak sa pokúsim alokovať príliš veľa pamäte, funkcia malloc() môže zlyhať a vráti hodnotu NULL:
    int *numbers = (int*) malloc(100000000000000 * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Memory allocation successful!\n");

    free(numbers);
    numbers = NULL;

    return 0;
}