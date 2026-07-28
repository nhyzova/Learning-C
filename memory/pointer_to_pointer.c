#include <stdio.h>

int main() {

    //* POINTER TO POINTER 
    // Ukazovateľ, ktorý ukazuje na iný ukazovateľ alebo dvojitý ukazovateľ
    // Ukazovateľ, ktorý uchováva adresu iného ukazovateľa 

    // Predstavím si to takto: Bežný ukazovateľ je ako lístok s adresou. Ukazovateľ na ukazovateľ je ako další lístok, ktorý mi 
    // hovorí, kde sa ten prvý lístok nachádza

    int myNum = 10;     // normalná premenná
    int *ptr = &myNum;  // pointer na int
    int **pptr = &ptr;  // pointer na pointer   

    printf("myNum = %d\n", myNum);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
    printf("\n");

    // Premenná myNum obsahuje hodnotu 10
    // Premenná *ptr obsahuje adresu premennej myNum a udáva hodnotu premennej myNum
    // Premenná **pptr obsahuje adresu premennej *ptr a udáva hodnotu premennej myNum, a to prostredníctvom oboch pointerov


    //* CHANGING VALUES THROUGH A POINTER TO POINTER
    // Kedže **pptr ma prístup k pôvodnej premennej, môžem ho použiť aj na zmenu hodnoty tejto premennej
    **pptr = 20;    // zmena hodnoty myNum

    printf("myNum = %d\n", myNum);

    return 0;
}