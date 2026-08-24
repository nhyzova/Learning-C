#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
    int *data;      // Ukazuje na miesto v pamäti, kde sú uložené položky zoznamu
    int numItems;   // Uvádza, koľko položiek sa momentálne nachádza v zozname
    int size;       // Uvádza, koľko položiek sa zmestí do alokovanej pamäte
};

void addToList(struct list *myList, int item);

int main() {

    // REAL-LIFE MEMORY MANAGEMENT EXAMPLE

    // Aby som ukázala praktický príklad dynamickej pamäte, vytvorila som program, ktorý dokáže vytvoriť zoznam ľubovoľnej dĺžky 
    // Bežné polia v jazyku C majú pevnú dĺžku a nedajú sa zmeniť, ale vďaka dynamickej pamäti môžem vytvoriť zoznam taký dlhý, aký len chcem
    struct list myList;
    int amount;
    int i, j;

    // Vytvorím zoznam a začnem s dostatočným priestorom pre 10 položiek
    myList.numItems = 0;
    myList.size = 10;
    myList.data = malloc(myList.size * sizeof(int));

    // Zistím, či bolo pridelenie pamäte úspešné 
    if (myList.data == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Pridám ľubovoľný počet položiek do zoznamu určeného premennou "amount"
    amount = 44;
    for (i = 0; i < amount; i++) {
        addToList(&myList, i + 1);
    }

    // Zobraziť obsah zoznamu
    for (j = 0; j < myList.numItems; j++) {
        printf("%d ", myList.data[j]);
    }

    // Uvolním pamäť 
    free(myList.data);
    myList.data = NULL;

    return 0;
}

// Táto funkcia pridá položku do zoznamu
void addToList(struct list *myList, int item) {

    // Ak je zoznam plný, zmením veľkosť pamäte tak, aby sa do nej zmestilo ďalších 10 položiek
    if (myList->numItems == myList->size) {
        int newSize = myList->size + 10;
    

    // Použijem dočasný ukazovateľ, aby som v prípade zlyhania neprišla o pôvodný ukazovateľ
    int *tmp = realloc(myList->data, newSize * sizeof(int));

    if (tmp == NULL) {
        printf("Memory resize failed.\n");
        return;     // Zoznam ponechám bez zmien
    }

    // Pole aktualizujem až po úspešnom prerozdelení
    myList->data = tmp;
    myList->size = newSize;
    }

// Pridám položku na koniec zoznamu
myList->data[myList->numItems] = item;
myList->numItems++;
}