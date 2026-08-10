#include <stdio.h>
#include <stdlib.h>

// 4. REAL-LIFE EXAMPLE
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// 3. MULTIPLE CALLBACKS
void greetMorning() {
    printf("Good Morning!\n");
}

void greetEvening() {
    printf("Good Evening!\n");
}

void greet(void (*callback3)()) {
    callback3();
}

// 2. CALLBACK WITH PARAMETERS
void addNumbers(int a, int b) {
    printf("The sum is: %d\n", a + b);
}

void calculate(void (*callback2)(int, int), int x, int y) {
    callback2(x, y);
}

// 1. SIMPLE CALLBACK EXAMPLE
void sayHello() {
    printf("Hello from the callback!\n");
}

void runCallback(void (*callback)()) {
    printf("Before calling the callback...\n");
    callback();
    printf("After calling the callback.\n");
}

int main() {

    // CALLBACK FUNCTION

    // Spätná volacia funkcia je funkcia, ktorá sa odovzdáva ako argument inej funkcií
    // Prijímajúca funkcia ju potom môže kedykoľvek podľa potreby vyvolať (spustiť)
    // Ide o účinný spôsob, ako zabezpečiť flexibilitu a opätovnú použiteľnosť kódu – môžete sa rozhodnúť, ktorá funkcia sa má     
    // spustiť, bez toho, aby ste museli meniť hlavnú logiku

    
    // 1. SIMPLE CALLBACK EXAMPLE
    // Tu je základný príklad, ktorý ukazuje, ako jedna funkcia môže „spätne zavolať“ inú:
    runCallback(sayHello);
    printf("\n");


    // 2. CALLBACK WITH PARAMETERS
    calculate(addNumbers, 5, 3);
    printf("\n");


    // 3. MULTIPLE CALLBACKS
    // Spätné volania môžete využiť na to, aby sa funkcia správala odlišne v závislosti od toho, ktorú funkciu do nej odovzdáte
    // Toto je bežné v kóde zameranom na triedenie, filtrovanie a spracovanie udalostí
    greet(greetMorning);
    greet(greetEvening);
    printf("\n");


    // 4. REAL-LIFE EXAMPLE
    // Mnohé funkcie štandardnej knižnice jazyka C využívajú spätné volania. Napríklad funkcia qsort() v súbore <stdlib.h> používa
    // spätné volanie na porovnávanie prvkov počas triedenia
    int numbers[] = { 5, 2, 9, 1, 7 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    qsort(numbers, size, sizeof(int), compare);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    // V tomto prípade je compare() spätnou volacou funkciou, ktorú funkcia qsort() používa na určenie poradia čísel

    return 0;
}