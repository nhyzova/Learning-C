#include <stdio.h>

void myFunction() {
    printf("I just got executed!\n");
}

void calculateSum() {
    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("The sum is of x + y is: %d\n", sum);
}

int main() {

    //* FUNCTIONS

    // Funkcia je blok kódu, ktorý sa spustí len vtedy, keď je vyvolaná
    // Do funkcie môžem vložiť údaje, nazývané parametre
    // Funkcie slúžia na vykonávanie určitých akcií a sú dôležité pre opätovné použitie kódu:
    // kód definujem raz a môžem ho použiť mnohokrát
    
    
    //* PREDEFINED FUNCTION
    // Napríklad main() je funkcia, ktorá slúži na spustenie kódu, a printf() je funkcia, ktorá
    // slúži na výstup textu na obrazovku
    printf("Hello World!\n");


    //* CREATE A FUNCTION
    // Ak chcem vytvoriť (deklarovať) vlastnú funkciu, zadám názov funkcie za ktorým následujú zátvorky() a zložené zátvorky{}
    //! Musí byť deklarovaná mimo funkcie main()
    // Void znamená, že funkcia nemám navratovú hodnotu 
    // Do tela funkcie vložim kód, ktorý definuje čo má funkcia robiť


    //* CALL A FUNCTION
    // Deklarované funkcie sa nevykonajú hneď, sú uložené na neskôršie pužitie a vykonajú sa až vtedy, keď budú volané
    // Na volanie funkcie napíšem názov funkcie, za ktorým nasledujú dve zátvorky() a bodkočiarka;
    // V príklade sa funkcia myFunction() používa na vypísanie textu v momente, keď je volaná
    myFunction();
    myFunction();
    myFunction();
    calculateSum(); 

    return 0;
}