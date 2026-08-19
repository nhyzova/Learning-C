#include <stdio.h>
#include <stdlib.h>

void myFunction() {
    int *ptr3;
    ptr3 = malloc(sizeof(*ptr3));
}

int main() {

    // DEALLOCATE (free) MEMORY

    // Keď už blok pamäte nepotrebujem, mala by som ju uvolniť 
    // Uvolnenie pamäte sa tiež označuje ako "freeing" pamäte

    // Dynamická pamäť zostáva rezervovaná, kým nieje uvolnená alebo kým program neskončí
    // Po uvolnení pamäte ju môžu využiť iné programy alebo môže byť dokonca pridelená inej časti môjho programu
    
    
    // FREE MEMORY

    // Na uvolnenie pamäte použijem funkciu free()
    // free(pointer);

    // Parameter typu ukazovateľa je ukazovateľ na adresu pamäte, ktorá sa má uvolniť 
    // int *ptr;
    // ptr = malloc(sizeof(*ptr));

    // free(ptr);
    // ptr = NULL;
    // Nastavím ukazovateľ na hodnotu NULL po uvolnení pamäte, aby sa zabránilo jej náhodnému ďalšiemu používaniu 


    // EXAMPLE

    int *ptr;
    ptr = malloc(sizeof(*ptr)); // Alokujem pamäť pre jeden integer

    // Ak nie je možné alokovať pamäť, vypíše správu a ukončí funkciu main()
    if (ptr == NULL) {
        printf("Unable to allocate memory");
        return 1;   // Ukončí program s chybovým kódom 
    }

    // Nastavím hodnotu integera 
    *ptr = 20;

    // Ukáže hodnotu integera
    printf("Integer value: %d\n", *ptr);

    // Uvolní alokovanú pamäť
    free(ptr);

    // Nastaví ukazovateľ na hodnotu NULL, aby sa zabránilo jeho náhodnému použitiu
    ptr = NULL;


    // MEMORY LEAKS

    // K úniku pamäte dochádza vtedy, keď je dynamická pamäť alokovaná, ale nikdy nie je uvoľnená
    // AK k úniku pamäte dôjde v cykle alebo vo funkcii, ktorá sa volá často, môže to zaberať príliš veľa pamäte a spôsobiť spomalenie počítača
    
    // Riziko úniku pamäte hrozí v prípade, že sa ukazovateľ na dynamickú pamäť stratí skôr, ako sa pamäť stihne uvolniť 
    // K tomu môže dôjsť náhodne, preto je dôležité byť opatrný a sledovať ukazovatele na dynamickú pamäť

    // Tu je niekoľko príkladov toho, ako môže dôjsť k strate ukazovateľa na dynamickú pamäť

    // EXAMPLE 1
    // Ukazovateľ je prepísaný
    int x = 5;
    int *ptr2;

    ptr2 = calloc(2, sizeof(*ptr2));
    ptr2 = &x;
    // V tomto príklade už nie je možné pristupovať k pamäti alokovanej funkciou calloc(), keď sa ukazovateľ zmení tak, aby ukazoval na x 


    // EXAMPLE 2
    // Ukazovateľ existuje iba v rámci funkcie
    myFunction();

    printf("The function has ended\n");
    // V tomto príklade pamäť, ktorá bola alokovaná v rámci funkcie, zostáva alokovaná aj po ukončení funkcie, avšak už nie je možné k nej pristupovať
    // Jedným so spôsobov, ako tomuto problému predísť, je uvolniť pamäť ešte pred ukončením funkcie 


    // EXAMPLE 3
    // Ak zlyhá prerozdelenie pamäte, ukazovateľ sa stratí 
    int* ptr4;

    ptr4 = malloc(sizeof(*ptr4));
    ptr4 = realloc(ptr4, 2*sizeof(*ptr4));
    // Ak funkcia realloc() nedokáže prerozdeliť pamäť, vráti ukazovateľ na NULL a pôvodná pamäť zostane rezervovaná 
    // V tomto príklade, ak funkcia realloc() zlyhá, premennej ptr sa priradí ukazovateľ NULL, čím sa prepíše pôvodná adresa pamäte, takže k nej už nebude možné pristupovať 

    return 0;
}