#include <stdio.h>

// 7. EXAMPLE
void add3(int a, int b) {
    printf("Result is: %d\n", a + b);
}

void subtract2(int a, int b) {
    printf("Result is: %d\n", a - b);
}

void multiply2(int a, int b) {
    printf("Result is: %d\n", a * b);
}

// 6. FUNCTION POINTER ARRAY
void add2() {
    printf("Add\n");
}

void subtract() {
    printf("Subtract\n");
}

void multiply() {
    printf("Multiply\n");
}

// 5. PASSING A FUNCTION AS AN ARGUMENT
// Funkcia vypíš pozdrav "Good Morning!"
void greetMorning() { 
    printf("Good Morning!\n"); 
}

// Funkcia vypíše pozdrav "Good Evening!"
void greetEvening() { 
    printf("Good Evening!\n");
}

// Funkcia greet() prijíma ako parameter ukazovateľ na inú funkciu 
// void           -> greet() nič nevracia
// func           -> názov parametra
// (*func)        -> func je ukazovateľ (pointer)
// ()             -> ukazuje na funkciu bez parametrov
// Funkcia, na ktorú func ukazuje, musí mať rovnaký podpis: void nejakaFunkcia(void)
void greet(void (*func)()) {

    // Zavolá funkciu, na ktorú momentálne ukazuje func.
    // Ak func ukazuje na greetMorning(), vykoná sa greetMorning().
    // Ak func ukazuje na greetEvening(), vykoná sa greetEvening().
    func();
}

// 4. FUNCTION POINTER EXAMPLE
int add(int a, int b) {
    return a + b;
}

int main() {

    // FUNCTION POINTER

    // Ukazovateľ na funkciu je podobný bežnému ukazovateľu, avšak namiesto toho, aby ukazoval na premennú ukazuje na funkciu 
    // To znamená, že uchovavá adresu funkcie, čo mi umožňuje túto funkciu vyvolať pomocou ukazovateľa
    // Ukazovatele na funkcie mi umožňujú rozhodnúť sa, ktorú funkciu spustiť počas behu programu, alebo keď chcem odovzdať
    // funkciu ako argument inej funkcií 
    // Predstavím si to ako uloženie telefónneho čísla - ukazovateľ vie, kde sa funckia nachádza v pamäti, takže ju neskôr môžem 
    // zavolať
    

    // 1. DECLARING FUNCTION POINTER
    // Všeobecná syntax deklarácie ukazovateľa na funkciu 
    // returnType (*pointerName)(parameterType1, parameterType2 ...);
    // int (*ptr)(int, int);
    // To znamená, že ptr je ukazovateľ na funkciu, ktorá prijíma dve hodnoty typu int a vráti hodnotu typu int


    // 2. ASSIGNING A FUNCTION TO A POINTER
    // Funkciu môžem priradiť ku ukazovateľu dvoma spôsobmi:
    // ptr = add;
    // ptr = &add;
    // Obidve spôsoby sú rovnaké, pretože názvo funkcie už predstavuje jej adresu v pamäti


    // 3. CALLING A FUNCTION THROUGH A POINTER
    // Po priradení ukazovateľa môžem funkciu vyvolať dvoma spôsobmi:
    // ptr(5, 3);
    // (*ptr)(5, 3);
    // Obidve spôosoby sú platné a majú rovnaký výsledok


    // 4. FUNCTION POINTER EXAMPLE
    printf("\n");

    // Deklarujem ukazovateľ ptr na funkciu add()
    int (*ptr)(int, int) = add;

    // Zavolám funkciu pomocou ukazovateľa ptr(5, 3) je to to isté ako add(5, 3) a návratová hodnota sa uloží do premennej result
    int result = ptr(5, 3);

    // Vypíše hodnotu uloženú v premmenej result
    printf("Result is: %d\n", result);
    printf("\n");


    // 5. PASSING A FUNCTION AS AN ARGUMENT
    // Ukazovatele na funkcie je možné odovzdať iným funkciám - tento postup sa nazýva spätné volanie   
    // Umožňuje to jednej funkcií zavolať inú funkciu, ktorú zadám ako vstup
    greet(greetMorning);
    greet(greetEvening);
    printf("\n");


    // 6. FUNCTION POINTER ARRAY
    // V poli môžem uložiť aj viacero ukazovateľov na funkcie, vďaka čomu si počas behu programu môžem vybrať, ktorú
    // funkciu chcem spustiť
    void (*operations[3])() = { add2, subtract, multiply };

    for (int i = 0; i < 3; i++) {
        operations[i]();
    }
    printf("\n");
    // Toto sa často používa v jednoduchých ponukách, zoznamoch príkazov alebo kalkulačkách - všade tam kde chcem na základe
    // užívateľského zadania vyvolať rôzne funkcie


    // 7. EXAMPLE
    // Jednoduchá kalkulačka využívajúca pole ukazovateľov na funkcie:
    int choice, x = 10, y = 5;

    void (*operations2[3])(int, int) = { add3, subtract2, multiply2 };

    printf("x = %d, y = %d\n\n", x, y);
    printf("Choose an operation: \n");
    printf("0: Add\n1: Subtract\n2: Multiply\n");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 3) {
        operations2[choice](x, y);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}