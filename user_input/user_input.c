#include <stdio.h>

int main() {

    // USER INPUT

    // Už viem že na výpis hodnôt v jazyku C sa používa funkcia printf()
    // Na získanie vstupu od použivateľa môžem použiť funkciu scanf()

    // EXAMPLE
    // Vypíše číslo zadané použivateľom
    // Vytvorím integer premennú, v ktorej bude uložené číslo zadané použivateľom 
    int myNum;
    
    // Vyzvem použivateľa aby zadal číslo
    printf("Type a number: \n");

    // Získať a uložiť číslo, ktoré zadá používateľ
    scanf("%d", &myNum);

    // Vypíše číslo, ktoré zadal používateľ
    printf("Your number is: %d", myNum);
    printf("\n");

    // Funkcia scanf() príjma dve argumenty formátovací špecifikátor premennej %d a referenčný operátor &myNum, ktorý ukladá pamäťovú adresu premennej

    // MULTIPLE INPUTS 
    // Funkcia scanf() umožňuje aj viacnásobné vstupy
    int myNum2;
    char myCar;

    printf("Type a number AND a character and press enter: \n");

    scanf("%d %c", &myNum2, &myCar);

    printf("Your number is: %d\n", myNum2);
    printf("Your character is: %c\n", myCar);
    printf("\n");


    // TAKE STRING INPUT
    // Vytvoríme reťazec
    char firstName[30];

    // Požiadam od použivateľa, aby zadal nejaký text 
    printf("Enter your first name: \n");

    // Uložím text
    scanf("%s", firstName);

    // Zobraz text
    printf("Hello %s\n", firstName);
    printf("\n");

    // POZNÁMKA : pri práci s reťazcami v funkcií scanf() je potrebné určiť veľkosť reťazca a nieje potrebné používať referenčný
    // operátor 
    // Funkcia scanf() má však určité obmedzenia medzery, biele znaky, tabulatúry ... atd považuje za ukončovací znak čo znamená
    // že dokáže zobraziť len jedno slovo aj ked napíšem viacero slov
    
    // Preto pri práci s reťazcami často používame funkciu fgets() na načítanie riadku textu
    // Nezabudni, že musím uviesť následujúce argumenty 
    char fullName[30];

    printf("Type a full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    // Na získanie jedného slova ako vstupu použijem funkciu scanf()
    // Na získanie viacerých slov použijem funkciu fgets()

    return 0;
}