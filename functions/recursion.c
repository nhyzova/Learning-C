#include <stdio.h>

int factorial(int a);

void countdown(int n);

int sum(int k); 

int main() {

    // RECURSION

    // Rekurzia je technika, pri ktorej funkcia volá samu seba
    // Táto technika umožňuje rozložť zložité problémy na jednoduchšie, ktoré sa dajú ľahšie vyriešiť

    // Rekurzia môže byť trochu ťažko pochopiteľná najlepší spôsob, ako zistiť, ako funguje, je vyskúšať si ju

    // RECURSION EXAMPLE
    // V príklade sa rekurzia používa na sčítanie rozsahu čísel tak, že sa tento rozsah rozloží na jednoduchú úlohu
    // sčítania dvoch čísel
    int result = sum(10);
    printf("%d\n", result);

    // Vysvetlenie príkladu - pri volaní funkcie sum() sa k súčtu všetkých čísel menších ako k pripočíta parameter
    // k a vráti sa výsledok
    // Keď je rovné 0, funkcia vráti len 0
    // Pri spustení program postupuje podľa týchto krokov:
    // 10 + sum(9)
    // 10 + (9 + sum(8))
    // 10 + (9 + (8 + sum(7)))
    // ...
    // 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
    // Keďže funkcia sa nevyvolá sama, ak je k rovné 0, program sa na tomto mieste zastaví a vráti výsledok

    /* Programátor by mal pri rekurzii postupovať veľmi opatrne, pretože sa môže ľahko stať, že napíše funkciu, ktorá sa nikdy neukončí, alebo takú, ktorá spotrebuje nadmerné množstvo pamäte či výpočtového výkonu. Ak je však rekurzia napísaná správne, môže predstavovať veľmi efektívny a matematicky elegantný prístup k programovaniu. */

    // EXAMPLE
    // Pomocou rekurzie spočítam od 5 nadol
    countdown(5);
    // Funkcia sa volá sama s hodnotou n - 1, až kým n nesklesne na 0

    printf("\n");

    // CALCULATE FACTORIAL WITH RECURSION
    // V tomto príklade sa na výpočet faktoriálu čísla 5 používa rekurzívna funkcia
    printf("Factorial of 5 is %d\n", factorial(5));

    // Faktoriál znamená vynásobenie čísla všetkými číslami menšími ako ono, až po 1
    // Faktoriál čísla 5 je 5 x 4 x 3 x 2 x 1 = 120 


    return 0;
}

int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);  
    } else {
        return 0;
    }
}

void countdown(int n) {
    if (n > 0) {
        printf("%d ", n);
        countdown(n - 1);
    }
}

int factorial(int a) {
    if (a > 1) {
        return a * factorial(a - 1);
    } else {
        return 1;
    }
}