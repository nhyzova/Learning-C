#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main() {

    // ERROR HANDLING

    // Spracovanie chýb mi umožňuje detekovať problémy v mojom programe a reagovať na ne, napr. v prípade, že sa nedá otvoriť súbor alebo alokovať pamäť, čím sa zabráni
    // zlyhaniu programu alebo jeho neočakávanému správaniu
    
    // Na rozdiel od niektorých jazykov nemá C zabudované spracovanie výnimiek (napr try/catch) 
    // Namiesto toho C využíva návratové hodnoty, globálne kódy chýb a pomocné funkcie, ako sú perror() a strerror()
    
    
    // USING RETURN VALUES

    // Funkcie ako fopen() vracajú hodnotu NULL, ak dôjde k chybe 
    // Pomocou príkazu if môžem skontrolovať, či je hodnota NULL, a tak zistiť a vyriešiť chyby skôr, ako dôjde k zrúteniu programu 
    // V nasledujúcom príklade sa pokúsim otvoriť súbor, ktorý neexistuje. Keďže funkcia fopen() zlyhá, vráti hodnotu NULL a my vypíšeme chybovú správu
    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fclose(fptr);


    // GET MORE DETAILS

    // Ak chcem zistiť viac o tom, čo sa pokazilo, môžem použiť funkciu perror()
    // Tá vypíše vlastnú chybovú správu, po ktorej nasleduje popis poslednej chyby, ktorá nastala
    FILE *f = fopen("nothing.txt", "r");

    if (f == NULL) {
        perror("Error opening file");
        return 1;
    }

    fclose(f);


    // USING STRERROR() AND ERRNO

    // Errno je globálna premenná, ktorá uchováva kód chyby z poslednej neúspešnej operácie 
    // Pre prístup k nej môžem zahrnúť hlavičkový súbor <errno.h> a funkcia strerror(errno) premení kód chyby na zrozumiteľnú správu 
    FILE *f = fopen("nothing.txt", "r");

    if (f == NULL) {
        printf("Error: %s\n", strerror(errno));
        return 1;
    }

    fclose(f); 


    // COMMON ERROR CODES
    
    // Konštanty chýb sú definované v súbore <errno.h>
    // Porovnaním hodnoty errno s týmito konštantami môžem zistiť konkrétne problémy

    // KÓD CHYBY    /   VÝZNAM
    // ENOENT       |   Takýto súbor alebo adresár neexistuje
    // EACCES       |   Prístup zamietnutý
    // ENOMEM       |   Nedostatok pamäte
    // EINVAL       |   Neplatný argument


    // EXAMPLE
    FILE *f = fopen("nothing.txt", "r");

    if (f == NULL) {
        if (errno == ENOENT) {
            printf("The file was not found.\n");
        } else {
            printf("Some other file error occurred.\n");
        }
        return 1;
    }

    fclose(f); 


    // USING EXIT() TO STOP THE PROGRAM

    // Ak chcem program okamžite ukončiť v prípade výskytu chyby, môžem použiť funkciu exit() 
    // Tá mi umožňuje vrátiť operačnému systému stavový kód

    // Stavové kódy slúžia na signalizáciu, či sa program dokončil úspešne alebo s chybou, napríklad:
    // - 0 znamená úspech
    // - hodnoty odlišné od nuly (napríklad 1 alebo EXIT_FAILURE) označujú chyby
    FILE *f = fopen("nothing.txt", "r");

    if (f == NULL) {
        printf("Failed to open file.\n");
        exit(1);
    }

    fclose(f);


    // COMMON EXIT STATUS CODES
    
    //   KÓD        /   VÝZNAM
    //   0          |   Úspech – program sa normálne dokončil
    //   1          |   Chyba – došlo k chybe
    // EXIT_SUCCESS |   To isté ako 0 (definované v <stdlib.h>)
    // EXIT_FAILURE |   To isté ako nenulový kód chyby (tiež v <stdlib.h>)


    // EXAMPLE
    FILE *f = fopen("nothing.txt", "r");

    if (f == NULL) {
        perror("Could not open nothing.txt");
        exit(EXIT_FAILURE);
    }

    fclose(f);
    return EXIT_SUCCESS;

    return 0;
}