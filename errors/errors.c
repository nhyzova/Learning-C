#include <stdio.h>

int main() {

    // ERRORS

    // Aj skúsení vývojári v jazyku C robia chyby
    // Kľúčom je naučiť sa ich rozpoznať a opraviť
    // V tomto súbore nájdem bežné chyby a užitočné tipy na odstraňovanie chýb, ktoré mi pomôžu pochopiť, čo sa deje, a ako to napraviť 


    // COMMON COMPILE-TIME ERRORS

    // Chyby pri kompilácií sú chyby, ktoré bránia kompilácií mojho programu 

    // 1) Missing semicolon:
    int x = 5
    printf("%d\n", x);
    // Result:
    // error: expected ';' at end of declaration

    // 2) Using undeclared variables:
    printf("%d\n", myVar);
    // Result:
    // error: use of undeclared identifier 'myVar'

    // 3) NEZLUČITEĽNÉ TYPY (napr. priradenie reťazca k typu int):
    int y = "Hello";
    // Result:
    // error: incompatible pointer to integer conversion initializing 'int' with an expression of type 'char[6]'


    // COMMON RUNTIME ERRORS

    // Chyby pri spúštaní nastávajú vtedy, keď sa program síce skompiluje, ale potom sa zrúti alebo sa správa neočakávane

    // 1) DELENIE NULOU:
    int a = 10;
    int b = 0;
    int result = a / b;
    printf("%d\\n", result);    // Nieje možné
    
    // 2) PRÍSTUP K PRVKOM POĽA MIMO POVOLENÉHO ROZSAHU:
    int numbers[3] = {1, 2, 3,};
    printf("%d\\n", numbers[8]);    // Prvok neexistuje

    // 3) VYUŽITIE UVOĽNENIE PAMÄTE: 
    int *ptr = malloc(sizeof(int));
    *ptr = 10;
    free(ptr);
    printf("%d\\n", *ptr);  // Nedefinované správanie - prístup k uvoľnenej pamäti


    // GOOD HABITS TO AVOID ERRORS
    // - vždy inicializovať premenné
    // - používať výstižné názvy premenných
    // - udržiavať kód prehľadný a používať odsadenie, aby bol usporiadaný
    // - funkcie by mali byť krátke a zamerané na konkrétny účel 
    // - skontrolovať, či sa cykly alebo podmienky vykonávajú podľa očakávania 
    // - pozorne čítať chybové hlásenia - často presne ukážu, kde je problém


    return 0;
}