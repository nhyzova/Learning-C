#include <stdio.h>

int main() {

    // MULTIDIMENSIONAL ARRAYS
    // Viacrozmerné polia budem používať ak budem chcieť ukladať údaje v tabuľkovej forme, ako tabuľku s riadkami a stĺpcami


    // DVOJROZMERNÉ POLIA
    // 2D - pole sa tiež nazýva matica 

    // VYTVORENIE 2D
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    // PRÍSTUP K PRVKOM 2D POĽA
    // Na prístup k prvku 2D poľa je potrebné určiť indexový číselný údaj pre riadok a stĺpec
    printf("%d\n", matrix[0][0]);
    printf("%d\n", matrix[0][1]);
    printf("%d\n", matrix[0][2]);

    printf("%d\n", matrix[1][0]);
    printf("%d\n", matrix[1][1]);
    printf("%d\n", matrix[1][2]);


    // ZMENA PRVKOV V 2D POLI
    // AK chcem zmeniť hodnotu prvku, použijem indexové číslo prvku v každom z rozmerov   
    matrix[0][0] = 9;
    printf("%d\n", matrix[0][0]);

    printf("\n");


    // CYKLY CEZ 2D POLE
    // Na prechádzanie viacrozmerného poľa je potrebný jeden cyklus pre každý rozmer poľa
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }


    // TROJROZMERNÉ POLIA
    // takto sa vytvorí trojrozmerné pole
    int example[2][4][3];

    // First index -> 2 bloky
    // Second index -> 4 riadkami na blok
    // Third index -> 3 stĺpcami na riadok 

    return 0;
}