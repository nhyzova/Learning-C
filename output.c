#include <stdio.h>

int main() {

    printf("Hello World!\n\n");     // \n\n -> znamená že vytlačí další text až do tretieho riadku
    printf("I am learning C\n");    // \n -> znamená že vytlačí další text do druhého riadku

    printf("Hello World!\t");       // \t -> spraví akokeby tab medzi textom
    printf("I am learning C\n");

    printf("Hello World!\\");       // \\ -> vloží znak za lomkou 
    printf("I am learning C\n");

    printf("They call him \"Johnny\".");    // \" -> vloží text v uvodzovkách

    return 0;
}