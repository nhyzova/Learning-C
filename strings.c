#include <stdio.h>

int main() {

    // STRINGS

    // Reťazce slúžia na ukladanie textu a znakov
    // V C jazyku musim použiť typ char a vytvoriť pole znakov, aby som vytvorila reťazec
    char greetings[] = "Hello World";

    // Nezabudnúť použivať dvojité uvodzovky " ";
    // Na výpis reťazca možem použit funkciu printf() spolu s formatovacím znakom %s to znamená že pracujeme z reťazcami
    printf("%s\n", greetings);


    // ACCESS STRINGS
    // Kedže reťazce v C sú v skutočnosti polia, k reťazcu sa dostanem pomocou jeho indexu v hranatých zátvorkách []
    printf("%c\n", greetings[0]);

    
    // MODIFY STRINGS
    // Ak chcem zmeniť hodnotu konkrétneho znaku v stringu, odkazuje sa na indexové číslo a použitie jednoduché úvodzovky
    greetings[0] = 'J';
    printf("%s\n", greetings);


    // LOOP THROUGH A STRING (cyklus cez reťazec)
    // Pomocou cyklu FOR môžem prechádzať aj znaky reťazca
    char carName[] = "Toyota";
    int i;

    for(i = 0; i < 6; i++) {
        printf("%c\n", carName[i]);
    }

    printf("\n");

    // A ako som mala v kapitole o cykloch s poľami, mala by som použiť vzorec "sizeof" (namiesto aby som veľkosť poľa zapisovala ručne v podmienke cyklu) aby bol cyklus udržateľnejší
    int lenght = sizeof(carName) / sizeof(carName[0]);
    
    for(i = 0; i < lenght; i++) {
        printf("%c\n", carName[i]);
    }


    // ANOTHER WAY TO CREATING STRINGS
    // V uvedených príkladoch som na vytvorenie reťazcovej premennej použila "reťazcový literal". 
    // Ide o najjednoduchší spôsob vytvorenia reťazca v C
    
    // Reťazec vieme vytvoriť aj pomocou súboru znakov 
    char pozdrav[] = {'D', 'O', 'B', 'R', 'Y', ' ', 'D', 'E', 'N', '\0'};
    printf("%s\n", pozdrav);


    // REAL - LIFE EXAMPLE
    // Pomocou reťazcov vytvorím jednoduchý uvítací text 
    char message[] = "Good to see you,";
    char fname[] = "John";

    printf("%s %s!", message, fname);

    return 0;
}