#include <stdio.h>

int main() {

    // WRITE TO A FILE

    // Na zápis do súboru znova využijeme režim "w" z predchadzajúcej kapitoly a zapíšeme niečo do súboru, ktorý sme práve vytvorili
    // Režim "w" znamená, že súbor je otvorený na zápis 
    // Ak do neho chcem vložiť obsah, môžem použiť funkciu fprintf() a pridať premennú ukazovateľa (fptr) a nejaký text 
    FILE *fptr;

    fptr = fopen("filename.txt", "w");

    fprintf(fptr, "Some text\n");
    fprintf(fptr, "Hello World!\n");

    fclose(fptr);

    // POZNÁMKA : Ak zapisujem do súboru, ktorý už existuje, pôvodný obsah sa vymaže a nahradí sa novým obsahom 
    // Je dôležité si to uvedomiť, pretože by som mohla omylom vymazať existujúci obsah


    // APPEND CONTENT TO A FILE
    
    // Ak chcem do súboru pridať obsah bez vymazania pôvodného obsahu, môžem použiť režim "a"
    // Režim "a" pridáva obsah na koniec súboru 
    // Rovnako ako v režime "w" ak súbor neexistuje, režim "a" vytvorí nový súbor s obsahom "pridaným na koniec" 
    FILE *fptr2;

    fptr2 = fopen("filename.txt", "a");

    fprintf(fptr2, "Hi everybody!\n");

    fclose(fptr2);

    return 0;
}