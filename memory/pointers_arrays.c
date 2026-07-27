#include <stdio.h>

int main() {

    // POINTERS AND ARRAYS

    // Na prístup k poliam môžem použiť aj ukazovatele.
    int myNumbers[4] = {25, 50, 75, 100};

    // Prvky poľa môžem prejsť cyklom for
    int i;

    for(i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }
    printf("\n");

    // Namiesto toho, aby som vypísala hodnotu každého prvku poľa, vypíšem pamäťovú adresu každého prvku poľa
    for(i = 0; i < 4; i++) {
        printf("%p\n", &myNumbers[i]);
    }
    printf("\n");

    // ZAUJÍMAVOSŤ! posledná číslica v adresy pamäti každého prvku je odlišná, pričom sa k nej pripočítava 4
    // Je to preto, že veľkosť typu int je zvyčajne 4 bajty
    int myInt;

    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myNumbers));
    printf("\n");


    // HOW ARE POINTERS RELATED TO ARRAYS
    // V jazyku C je názov poľa v skutočnosti ukazovateľom na prvý prvok poľa 
    // Adresa prvého prvku je rovnaká ako názov poľa
    int myNumbers2[4] = {25, 50, 75, 100};

    printf("%p\n", myNumbers2);
    printf("%p\n", &myNumbers2[0]);
    printf("\n");

    // Kedže myNumbers je ukazovateľ na prvý prvok v poľu myNumbers, na prístup k nemu môžem použiť operátor *
    printf("%d\n", *myNumbers2);

    // Ak chcem získať prístup k ostatným prvkom v myNumbers, môžem posúvať ukazovateľ/pole o jednotku dopredu (+1, +2 ... atd)
    printf("%d\n", *(myNumbers2 + 1));  // k druhému prvku
    printf("%d\n", *(myNumbers2 + 2));  // k tretiemu prvku
    printf("\n");

    // Alebo to prejdem cyklom
    int *ptr = myNumbers2;
    
    for(i = 0; i < 4; i++) {
        printf("%d\n", *(ptr + i));
    }
    printf("\n");

    // Hodnotu prvku je možné zmeniť pomocou ukazovateľov
    // Zmením hodnotu prvého prvku
    *myNumbers2 = 13;
    printf("%d\n", *myNumbers2);

    // Zmením hodnotu druhého prvku
    *(myNumbers2 + 1) = 17;
    printf("%d\n", *(myNumbers2 + 1));

    return 0;
}