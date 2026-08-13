#include <stdio.h>

int main() {

    // MEMORY MANAGEMENT

    // Správa pamäte je proces, ktorým sa prostredníctvom rôznych operácií riadi množstvo pamäte, ktorú program využíva 


    // MEMORY IN C
    
    // Je dôležité pochopiť, ako funguje pamäť v jazyku C
    // Keď vytvorím základnú premnennú, jazyk C pre ňu automaticky vyhradí miesto 
    // Premenná typu int napríklad zvyčajne zaberá 4 bajty pamäte, zatiaľ čo premenná typu double 8 bajtov pamäte
    // Na zistenie veľkosti rôznych typov môžem použiť operátor sizeof()
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    
    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myFloat));
    printf("%zu\n", sizeof(myDouble));
    printf("%zu\n", sizeof(myChar));


    // WHY IS IT IMPORTANT TO KNOW ?

    // Ak vytvorím program, ktorý zaberá príliľ veľa alebo zbytočnú pamäť, môže to viesť k spomaleniu a zhoršeniu výkon
    // V jazyku C si musím pamäť spravovať sama 
    // Je to zložitá úloha, ale pri správnom použití je aj pomerne výkonná 
    // Správne spravovanie pamäte počítača optimalizuje výkon programu, preto je užitočné vedieť, ako uvoľniť pamäť, keď už nie je potrebná, a používať len toľko, koľko je
    // nevyhnutné na danú úlohu

    return 0;
}