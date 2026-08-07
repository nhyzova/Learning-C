#include <stdio.h>

// 5. Deklarujem dve funkcie
void myFunction5();
void myOtherFunction();

// 4. Osvedčený postup - Deklarácia funkcie
int myFunction4(int x, int y);

// 3. Parametre
int myFunction3(int x, int y) {
    return x + y;
}

// 2. Deklarácia funkcie
void myFunction2();

// 1. Vytvorenie funkcie
void myFunction() {
    printf("I just got executed!\n");
}

int main() {

    // FUNCTION DECLARATION AND DEFINITION


    // 1. EXAMPLE
    // Z predchádzajúcich kapitol som sa už dozvedela, že funkciu môžem vytvoriť a vyvolať nasledujúcim spôsobom
    myFunction();   // volanie funkcie


    // Funkcia sa skladá z 2 častí:
    // Deklarácia: názov funkcie, typ vrátnej hodnoty a parametre (ak existujú)
    // Definícia: telo funkcie (kód, ktorý sa má vykonať)


    // 2. EXAMPLE
    // Z hľadiska optimalizácie kódu sa odporúča oddeliť deklaráciu funkcie od jej definície
    // Často sa stretnem s programmi v jazyku C, v ktorých je deklarácia funkcie umiestnená nad funkciou main()
    // a definícia funkcie pod ňou 
    myFunction2();  // volanie funkcie


    // 3. A ČO PARAMETRE ?
    // Ak použijem príklad z kapitoly o parametroch funkcií, ktorý sa týka parametrov a návratových hodnôt
    int result = myFunction3(5, 3);
    printf("Result is = %d\n", result); 


    // 4. EXAMPLE PARAMETRE
    // Za osvedčený postup sa považuje napísať to namiesto toho takto:
    int result2 = myFunction4(5, 5);
    printf("Result is = %d\n", result2); 


    // 5. FUNKCIE VOLAJÚCE INÉ FUNKCIE
    // Ak najprv deklarujem funkciu, je možné pomocou funkcií volať aj iné funkcie
    myFunction5();

    return 0;
}

// 2. Definícia funkcie
void myFunction2() {
    printf("I just got executed!\n");
}

// 4. Osvedčený postup - Definícia funkcie
int myFunction4(int x, int y) {
    return x + y;
}

// 5. Definícia myFunction5 and myOtherFunction
void myFunction5() {
    printf("Some text in myFunction\n");
    myOtherFunction();
}

void myOtherFunction() {
    printf("Hey! Some text in myOtherFunction\n");
}