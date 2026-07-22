#include <stdio.h>

int main() {

    // PODMIENKY A PRÍKAZY IF

    // Porovnávacie príkazy

    // a < b -> menšie ako
    // a <= b -> menšie alebo rovné
    // a > b -> väčšie ako
    // a >= b -> väčšie alebo rovné
    // a == b -> rovné
    // a != b -> nerovné


    // Podmienené príkazy

    // If -> blok sa vykoná ak podmienka je pravdiá
    // Else -> blok sa vykoná ak je ta istá podmienka nepravdivá
    // Else if -> na určenie novej podmienky, ktorú treba otestovať, ak je prvá podmienka nepravdivá
    // Switch -> na určenie viacerých alternatívnych blokov kódu, ktoré sa majú vykonať 

    // If
    int x = 20;
    int y = 18;

    if (x > y) {
        printf("x is greater than y\n");
    }

    // Else
    int time = 20;

    if (time < 18) {
        printf("Good day\n");
    } else {
        printf("Good evening\n");
    }

    // Else if
    int time = 16;

    if (time < 12) {
        printf("Good morning\n");
    } else if (time < 18) {
        printf("Good day\n");
    } else {
        printf("Good evening\n");
    }


    // Namiesto písania mnohých príkazov if...else môžete použiť príkaz switch
    // Príkaz switch vyberie jeden z viacerých blokov kódu, ktorý sa má vykonať
    // Takto to funguje:
    // Výraz switch sa vyhodnotí raz 
    // Hodnota výrazu sa porovná s hodnotami každého prípadu
    // Ak sa nájde zhoda, vykoná sa príslušný blok kódu 
    // Príkaz break ukončí blok switch a zastaví vykonávanie
    // Príkaz default je voliteľný a určuje kód, ktorý sa má spustiť, ak sa nenájde žiadna zhoda

    int day = 4;

    switch (day) {
        case 1:
        printf("Today is Monday");
        break;
        case 2:
        printf("Today is Tuesday");
        break;
        case 3: 
        printf("Today is Wednesday");
        break;
        case 4:
        printf("Today is Thursday");
        break;
        case 5:
        printf("Today is Friday");
        break;
        case 6:
        printf("Today is Saturday");
        break;
        case 7:
        printf("Today is Sunday");
        break;
        default:
        printf("Zle zadaný deň, skús od 1 - 7\n");
    }


    return 0;
}