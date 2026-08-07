#include <stdio.h>
#include <math.h>

int main() {

    // MATH FUNCTIONS

    // K dispozícii je tiež zoznam matematických funkcií, ktoré mi umožňujú vykonávať matematické operácie s číslami
    // Ak ich chcem používať, musím do mojho programu zahrnúť hlavičkový súbor <math.h>

    // SQUARE ROOT
    // Na výpočet koreňa druhého stupňa z čísla použijem funkciu sqrt();
    printf("%f\n", sqrt(16));

    // ROUND A NUMBER
    // Funkcia ceil(); zaokrúhľuje číslo nahor na najbližšie celé číslo 
    // Funkcia floor(); zaokrúhľuje číslo nadol na najbližšie celé číslo a vráti výsledok
    printf("%f\n", ceil(1.4));
    printf("%f\n", floor(1.4));

    // POWER
    // Funkcia pow(); vráti hodnotu x umocnenú na y
    printf("%f\n", pow(4, 3));

    return 0;
}