#include <stdio.h>
#include <string.h>     // Funkcia -> strcpy()

struct Car {
    char brand[30];
    char model[30];
    int year;
};

struct myStructure2 {
    int myNum2;
    char myLetter2;
    char myString2[30];
};

struct myStructure {    // Deklarácia
    int myNum;          // Člen (int premenná)
    char myLetter;      // Člen (char premenná)
    char myString[30];  // Člen (reťazec)
};                      // Štruktúru ukončím bodkočiarkou

int main() {

    // STRUCTURES

    // Štruktúry (tiež nazývané "struct") slúžia na zoskupenie viacerých súvisiacich premenných na jednom mieste
    // Každá premenná v štruktúre sa nazýva členom štruktúry
    // Na rozdiel od poľa môže štruktúra obsahovať mnoho rôznych dátových typov (int, float, char ...)


    // CREATE A STRUCTURE
    // Štruktúru môžem vytvoriť pomocou kľúčového slova "struct" a jednotlivých členov štruktúry deklarovať v zátvorkách

    // Aby som mohla pracovať so štruktúrov, musím vytvoriť premennú tejto štruktúry
    // Vo funkcií main() použijem kľúčové slovo "struct", za ktorým nasleduje názov štruktúry a potom názov premennej štruktúry


    // ACCESS STRUCTURE MEMBERS
    // Na prístup k členom štruktúry použijem syntax s bodkou (.)

    // Vytvorím premennú štruktúry myStructure s názvom s1
    struct myStructure s1;

    // Priradím hodnoty členom s1
    s1.myNum = 10;
    s1.myLetter = 'N';

    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter); 
    printf("\n");

    // Teraz môžem pomocou jedinej štruktúry ľahko vytvoriť viacero premenných typu štruktúra s rôznymi hodnotami
    struct myStructure s2;

    s2.myNum = 21;
    s2.myLetter = 'D';

    printf("My number: %d\n", s2.myNum);
    printf("My letter: %c\n", s2.myLetter);
    printf("\n");


    // WHAT ABOUT STRINGS IN STRUCTURE

    // Nemôžem zabudnúť na to, že reťazce v jazyku C sú v skutočnosti poľom znakov a, žiaľ poľu nemožno priradiť hodnotu takto:
    // s3.myString = "Some text";
    // Existuje však riešenie, môžem použiť funkciu strcpy() a priradiť hodnotu premennej s3.myString takto:
    struct myStructure s3;

    strcpy(s3.myString, "Some text");

    printf("My string: %s\n", s3.myString);
    printf("\n");


    // SIMPLER SYNTAX

    // Hodnoty členom štruktúrnej premennej môžem priradiť aj pri deklarácií, a to v jednom riadku
    // Stačí vložiť hodnoty do zoznamu oddeleného čiarkami vnútri zložených zátvoriek {}
    // Pri tejto technike nemusím pre reťazové hodnoty používať funkciu strcpy()
    struct myStructure2 s4 = { 20, 'A', "Some text"};

    printf("%d | %c | %s\n", s4.myNum2, s4.myLetter2, s4.myString2);


    // COPY STRUCTURES

    // Jednu štruktúru môžem tiež priradiť inej
    // V nasledujúcom príklade sa hodnoty s5 skopírujú do s6:
    struct myStructure2 s5 = { 13, 'B', "Some text"};
    struct myStructure2 s6;

    s6 = s5;

    printf("%d | %c | %s\n", s6.myNum2, s6.myLetter2, s6.myString2);


    // MODIFY VALUES

    // Ak chcem zmeniť alebo upraviť hodnotu, môžem použiť syntax s bodkou (.)
    // A na úpravu reťazcovej hodnoty sa opäť hodí funkcia strcpy()
    s5.myNum2 = 23;
    s5.myLetter2 = 'C';
    strcpy(s5.myString2, "Something else");

    printf("%d | %c | %s\n", s5.myNum2, s5.myLetter2, s5.myString2);
    printf("\n");
    
    // Úprava hodnôt je obzvlášť užitočná pri kopírovaní hodnôt štruktúry

    struct myStructure2 s7 = { 50, 'W', "Some text"};
    struct myStructure2 s8;

    s8 = s7;

    s8.myNum2 = 100;
    s8.myLetter2 = 'X';
    strcpy(s8.myString2, "Something else");

    printf("%d | %c | %s\n", s7.myNum2, s7.myLetter2, s7.myString2);
    printf("%d | %c | %s\n", s8.myNum2, s8.myLetter2, s8.myString2);
    printf("\n");


    // REAL-LIFE EXAMPLE

    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Ford", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Yaris", 2021};

    printf("%s | %s | %d\n", car1.brand, car1.model, car1.year);
    printf("%s | %s | %d\n", car2.brand, car2.model, car2.year);
    printf("%s | %s | %d\n", car3.brand, car3.model, car3.year);

    return 0;
}