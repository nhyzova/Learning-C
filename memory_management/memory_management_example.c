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

// Ukazovateľ na štruktúru: v tomto príklade sa nachádza ukazovateľ na štruktúru myList 
// Kedže namiesto samotnej štruktúry používam ukazovateľ na ňu, na prístup k členom štruktúry používam syntax so šípkou ->


// EXAMPLE EXPLAINED

// Tento príklad sa skladá z 3 častí 
// - štruktúra myList, ktorá obsahuje údaje zoznamu
// - funkcia main() s programom v nej 
// - funkcia addToList(), ktorá pridáva položku do zoznamu 


// ŠTRUKTÚRA myList

// Štruktúra myList obsahuje všetky informácie o zozname, vrátane jeho obsahu 
// Má tri členy:
// 1. data - ukazovateľ na dynamickú pamäť, ktorá obsahuje obsah zoznamu 
// 2. numItems - udáva počet položiek, ktoré zoznam obsahuje 
// 3. size - udáva, koľko položiek sa zmestí do alokovanej pamäte 

// Používam štruktúru, aby som mohla všetky tieto informácie ľahko odovzdať do funkcie


// FUNKCIA main()

// Funkcia main() začína inicializáciou zoznamu s priestorom pre 10 položiek
// Premenná myList.numItems je nastavená na hodnotu 0, pretože zoznam je zo začiatku prázdny 
// Premenná myList.size sleduje, koľko pamäte je vyhradenej 
// Nastavila som ju na hodnotu 10, pretože vyhradím dostatok pamäte pre 10 položiek 
// Následne alokujem pamäť a ukazovateľ na ňu uložím do premennej myList.data 
// Potom pridám kontrolu chýb, aby som zistila, či bola alokácia pamäte úspešná 

// Ak je všetko v poriadku, cyklus pridá do zoznamu 44 položiek pomocou funkcie addToList()

// V uvedenom kóde je &myList ukazovateľom na zozname a i + 1 je číslo, ktoré chcem do zoznamu pridať 
// Zvolila som i + 1, aby zoznam začínal od 1 namiesto 0 
// Môžem vybrať ľubovoľné číslo, ktoré chcem do zoznamu pridať 

// Po pridaní všetkých položiek do zoznamu následujúca slučka vypíše obsah zoznamu 

// Keď dokončím výpis zoznamu, uvoľním pamäť, aby som zabránila únikom pamäte


// FUNKCIA addToList()

// Funkcia addToList() pridáva položku do zoznamu 

// Má dve parametre:
// 1. Ukazovateľ na zoznam
// 2. Hodnota, ktorá sa má pridať do zoznamu

// Funkcia najprv skontroluje, či je zoznam plný, a to porovnaním počtu položiek v zozname s veľkosťou (kapacitou). Ak je zoznam plný, pokúsi sa zväčšiť pamäť tak, aby pojala 
// ďalších 10 položiek
// Pri použití funkcie `realloc` používame dočasný ukazovateľ, aby sme v prípade zlyhania zmeny veľkosti neprišli o pôvodný blok.    
// Údaje a veľkosť aktualizujeme až po úspešnej zmene veľkosti

// Na koniec táto funkcia pridá prvok na koniec zoznamu 
// Index v premennej `myList->numItems` sa vždy nachádza na konci zoznamu, pretože sa pri každom pridaní nového prvku zvýši o 1