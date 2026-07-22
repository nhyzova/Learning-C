#include <stdio.h>

int main() {

    // WHILE LOOP

    // Cykly dokážu vykonávať blok kódu dovtedy, kým je splnená stanovená podmienka
    // Cykly sú užitočné, pretože šetria čas, znižujú počet chýb a zvyšujú čitateľnosť kódu 

    // Cyklus while opakuje blok kódu dovtedy, kým je splnená zadaná podmienka 
    int i = 0;

    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    // Nikdy nezabudnúť zvýšit hodnotu premennej i++ inak sa cyklus nikdy neskončí
    // Názov premennej je písmeno "i" ide o počítaciu premennú používa sa v cykloch pretože je jednoduchá, krátka, známa

    int countdown = 10;

    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy New Year!!!\n");

    return 0;
}