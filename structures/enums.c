#include <stdio.h>

typedef enum {
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN 
} Day;

enum Level2 {
    LOW2 = 1,
    MEDIUM2,
    HIGH2
};

enum Level {
    LOW = 5,
    MEDIUM,
    HIGH
};

int main() {

    // ENUMS

    // Enum je špeciálny typ, ktorý reprezentuje skupinu konštánt (nemenných konštánt)
    // Na vytvorenie enumu použijem kľúčové slovo enum, za ktorým nasleduje názov enumu, a jednotlivé položky enumu oddelím čiarkou

    // Aby som mohla pracovať s enumom, musím vytvoriť premennú toho typu 
    // V funkcií main() zadám kľúčové slovo enum, za ním názov enumu(Level) a následne názov premennej enumu(v tomto príklade myVar)
    enum Level myVar;

    // Teraz, keď som vytvorila premennú typu enum(myVar), môžem jej priradiť hodnotu 
    // Priradená hodnota musí byť jednou z položiek v rámci enum(LOW, MEDIUM alebo HARD)
    myVar = MEDIUM;

    // V predvolenom nastavení má prvá položka (LOW) hodnotu 0, druhá (MEDIUM) hodnotu 1 ...
    // Ak sa teraz pokúsim vypísať premennú myVar, na výstupe sa zobrazí hodnota 1, ktorá predstavuje MEDIUM
    printf("%d\n", myVar);
    printf("\n");


    // CHANGE VALUES

    // Ako viem, prvý prvok výčtu má hodnotu 0, druhý má hodnotu 1 a tak ďalej 
    // Aby boli hodnoty zrozumiteľnejšie, môžem ich ľahko zmeni
    printf("%d\n", myVar);

    myVar = LOW;
    printf("%d\n", myVar);

    myVar = HIGH;
    printf("%d\n", myVar);
    printf("\n");


    // ENUM IN A SWITCH STATEMENT
    enum Level2 myVar2 = LOW2;

    switch (myVar2) {
        case 1:
        printf("Low Level\n");
        break;
        case 2:
        printf("Medium Level\n");
        break;
        case 3:
        printf("High Level\n");
        break;
    }


    // TYPEDEF WITH ENUM

    // Typedef môžem použiť aj s enum 
    // Vďaka tomu je jednoduchšie deklarovať premenné typu enum bez toho, aby som musela zakaždým písať enum
    Day today = THU;

    if (today == THU) {
        printf("It is Thursday!\n");
    }


    // WHAT AND WHEN TO USE ENUM

    // Enumy sa používajú na pomenovanie konštánt, čím sa kód stáva čitateľnejším a ľahšie sa udržiava
    // Enumy používam v prípadoch, keď mám hodnoty, o ktorých viem, že sa nebudú meniť, ako napr. dni v mesiaci, farby ... 


    return 0;
}