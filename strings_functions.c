#include <stdio.h>
#include <string.h> // súbor na prácu s reťazcami

int main() {

    // STRINGS - FUNCTIONS

    // Jazyk C má množtvo užitočných funkcií na prácu s reťazcami 
    // Ak ich chcem použiť, musím do mojho programu zahrnúť súbor <string.h>



    // STRING LENGHT
    // Ak chcem zistiť dĺžku reťazca môžem použiť funkciu strlen()
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));      // %zu sa používa najčastejšie pri strlen()
    printf("%zu\n", sizeof(alphabet));      // %zu sa používa najčastejšie pri sizeof()

    // Treba si uvedomiť že operátory "sizeof()" a "strlen()" sa správajú odlišne kedže "sizeof()" pri počítaní zahŕňa aj znak \0
    // Tiež dôležité vedieť že funkcia "sizeof()" vždy vráti veľkosť pamäte v bajtoch nie skutočnú dĺžku reťazca
    char alphabet2[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", sizeof(alphabet2));



    // CONCATENATE STRINGS
    // Na zlčovanie dvoch reťazcov môžem použiť funkciu strcat()
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // zlúčiť reťazec str2 s reťazcom str1 (výsledok sa ukáže v str1)
    strcat(str1, str2);

    // ukáž str1
    printf("%s\n", str1);

    // !! Nezabudnúť na veľkosť premennej str1 aby bola dostatočne veľká na to aby pojala výsledok



    // COPY STRINGS
    // Na skopírovanie hodnoty jedného reťazca do druhého reťazca môžem použiť funkciu strcpy()
    char str3[20] = "Dobry den";
    char str4[20];

    // Skopíruje str3 do str4
    strcpy(str4, str3);

    // Ukáž str4
    printf("%s\n", str4);

    // !! Nezabudnúť na veľkosť premennej kam chcem kopírovať



    // COMPARE STRINGS
    // Na porovnanie dvoch reťazcov môžem použiť funkciu strcmp()
    // Vráti hodnotu 0, ak sú oba reťazce rovnaké, inak vráti hodnotu odlišnú od 0
    char str5[] = "Hello";
    char str6[] = "Hello";
    char str7[] = "Hi";

    // Porovnám str5 a str6 a vytlačím výsledok
    printf("%d\n", strcmp(str5, str6));     // Vráti 0 (stringy sú rovnaké)

    // Porovnám str5 a str7 a vytlačím výsledok
    printf("%d\n", strcmp(str5, str7));     // Vráti -4 (stringy niesu rovnaké)

    return 0;
}