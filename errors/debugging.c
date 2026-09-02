#include <stdio.h>

int main() {

    // DEBUGGING

    // Ladenie je proces vyhľadávania a odstraňovanie chýb (bugov) v mojom programe 
    // Bugy sú chyby, ktoré spôsobujú pád programu, nesprávne správanie alebo nesprávny vstup 
    
    // Než začnem s ladením, uistím sa, že je moj kód prehľadný a usporiadaný:
    // - používať správne odsadenie, aby bola štruktúra jasná
    // - pomenovať premenné jasnými a výstižnými názvami, ktoré opisujú, čo obsahujú
    // - prehľadný kód sa ľahšie číta – a ľahšie sa v ňom odstraňujú chyby!


    // 1. PRINT DEBUGGING
    // Požijem funkciu printf() na vypísanie hodnôt v rôznych miestách kódu, aby som zistila, kde je problém 
    int x = 10;
    int y = 0;
    printf("Before division\n");    // Debug output
    int z = x / y;                  // Zlyhanie (delenie nulou)
    printf("After division\n");     // Nikdy sa nespustí 

    printf("\n");
    // Ak sa nezobrazí "After division" program sa zrútil pri x / y 


    // 2. CHECK VARIABLE VALUES
    // Vypíšem hodnoty premenných, aby som zistila, či sú také, ako som očakávala:
    int a = 10;
    int b = 5;
    int result = a - b;
    printf("Result: %d\n", result);
    
    printf("\n");

    // 3. USE A DEBUGGER TOOL
    // Integrálne vývojárske prostredia (IDE) ako Visual Studio, Code::Blocks majú vstavané ladiace nástroje, ktoré podporujú jazyk C

    // Tieto nástroje mi umožňujú:
    // - pozastaviť program pomocou bodov prerušenia
    // - prechádzať kód riadok po riadku
    // - sledovať premenné a pozorovať neočakávané hodnoty v priebehu ich zmien

    
    // 4. LEAN FROM ERROR MESSAGE
    // C kompilátor a chyby pri spúštaní mi často prezradia, čo sa pokazilo a kde 


    // DEBUGGING WITH SAFE CHECKS
    // Niektoré chyby, ako napríklad delenie nulou sú známe tým, že spôsobujú zlyhania programu
    // Ak viem, že určitá operácia môže zlyhať, môžem to vopred skontrolovať a zabrániť tak zlyhaniu programu
    int c = 10;
    int d = 0;

    printf("Before division\n");

    if (d != 0) {
        int e = c / d;
        printf("Result: %d\n", e);
    } else {
        printf("Error: Division by zero!\n");
    }

    printf("After division\n");
    // Teraz sa program namiesto toho, aby sa zrútil, zobrazí chybovú správu a pokračuje v behu
    printf("\n");
    

    // ANOTHER-EXAMPLE PRÍSTUP K PRVKOM MIMO POĽA
    // Prístup k prvkom mimo poľa je ďaľšou bežnou chybou
    // V nasledujúcom príklade použijem funkciu printf(), aby som skontrolovala hodnotu indexu pred jej použitím:
    int numbers[3] = {10, 20, 30};
    int index = 5;

    printf("Index = %d\n", index);

    if (index >= 0 && index < 3) {
        printf("Value = %d\n", numbers[index]);
    } else {
        printf("Error: Index out of bounds!\n");
    }

    return 0;
}