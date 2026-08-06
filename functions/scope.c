#include <stdio.h>

// GLOBAL VARIABLE
int x = 10;                 // GP -> tu je deklarovaná

// GLOBAL SCOPE
void myFunction2() {
    printf("%d\n", x);      // GP -> tu ju môžem použť 
}


// LOCAL SCOPE
void myFunction() {
    int x = 5;              // LP -> tu je deklarovaná
    printf("%d\n", x);      // LP -> tu ju môžem použť 
}

int main() {

    //* VARIABLE SCOPE (rozsah pôsobnosti)
    // Teraz, keď už chápem ako fungujú funkcie, je dôležité naučiť sa, ako sa premenné správajú vo vnútri a mimo funkcií 
    // V jazyku C sú premenné prístupne iba v rámci oblasti, v ktorej boli deklarované - tomu sa hovorí rozsah pôsobnosti


    //* LOCAL SCOPE
    // Premenná bola vytvorená vo vnútri funkcie patrí do lokálneho rozsahu tejto funkcie a je možné ju použiť iba v tejto funkcie
    myFunction();


    //* GLOBAL SCOPE
    // Premenná vytvorená mimo funckie sa nazýva globálna premenná a patrí do globálneho rozsahu
    // Globálne premenné sú dostupné z akéhokoľvek rozsahu, či už globálneho alebo lokálneho
    myFunction2();          
    printf("%d\n", x);      // GP -> tu ju tiež môžem použiť 


    //* NAMING VARIABLES
    // Ak použijem rovnký názov premennej vo vnútri aj mimo funkcie, jazyk C ich bude považovať za dve samostatné premenné
    // jednu dostupnú v globálnom rozsahu(mimo funkcie) a druhú dostupnú v lokálnom rozsahu(vo vnútri funkcie)
    //! Mala by som sa vyhnúť používaniu rovnakého názvu pre globálne aj lokálne premenné 

    return 0;
}