#include <stdio.h>

int main() {

    // STRINGS - SPECIAL CHARACTERS

    // Kedže reťazce sa musia zapisovať v uvodzovkách, jazyk C tento reťazec nesprávne interpretuje a vygeneruje chybu
    // Riešením, ako sa tomuto problému vyhnúť, je použitie únikového znaku spätného lomítka

    // Únikový znak spätnej lomky (\) premení špeciálne znaky na bežné znaky reťazca

    //  \'   ->  '   -> single quote
    //  \"   ->  "   -> double quote
    //  \\   ->  \   -> backslash


    // \"   ->  double quote
    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf("%s\n", txt);
    printf("\n");

    //  \'  ->  single quote
    char txt2[] = "It\'s alright.";
    printf("%s\n", txt2);
    printf("\n");

    //  \\  ->  backslash
    char txt3[] = "The character \\ is called backslash.";
    printf("%s\n", txt3);
    printf("\n");   

    
    // OTHER POPULAR ESCAPE CHARACTERS IN C 
    //  \n  ->  new line
    //  \t  ->  tab
    //  \0  ->  null


    return 0;
}