#include <stdio.h>

int main() {

    // ARRAY SIZE

    // Na zistenie veľkosti poľa možem použiť operátor sizeof
    int myNumbers[] = {10, 25, 50, 75, 100};
    printf("%zu", sizeof(myNumbers));   
    printf("\n");

    // Prečo je výsledok 20 namiesto 5, ked pole obsahuje 5 prvkov ?
    // Pretože operátor sizeof vráti veľkosť v bajtoch 
    // Kedže int ma veľkosť 4 bajty a mám 5 prvkov tak 4 * 5 = 20

    // Poznať veľkosť pamäte poľa je veľmi užitočné ak pracujem s väčšími programami, ktoré vyžadujú dobré riadenie pamäte 


    // ZISTENIE POČTU PRVKOV

    // Ak chcem zistiť koľko prvkov obsahuje pole, možem použiť tento vzorec, ktorý delí celkovú veľkosť poľa veľkosťou jedného prvku
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d\n", length); 

    // Vzorec sizeof funguje pre polia akéhokoľvek typu akejkoľvek veľkosti
    double myValues[] = {1.1, 2.2, 3.3};
    int lengthh = sizeof(myValues) / sizeof(myValues[0]);
    printf("%d\n", lengthh);

    return 0;
}