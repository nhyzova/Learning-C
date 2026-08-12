#include <stdio.h>

struct Owner {
    char firstName[30];
    char lastName[30];
};

struct Car {
    char brand[30];
    int year;
    struct Owner owner;     // Vnorená štruktúra
} 

int main() {

    // NESTED STRUCTS

    // Štruktúra môže ako prvok obsahovať aj inú štruktúru
    // Takáto štruktúra sa nazýva vnorená štruktúra a je užitočná v prípadoch, keď chcem zoskupiť súvisiace údaje do vrstiev
    struct Owner person = {"John", "Doe"};
    struct Car car1 = {"Toyota", 2021, person};

    printf("Car: %s (%d)\n", car1.brand, car1.year);
    printf("Owner: %s %s\n", car1.owner.firstName, car1.owner.lastName);

    // V tomto prípade štruktúra "Car" obsahuje vo svojom vnútri ďalšiu štruktúru "Owner" 
    // To uľahčuje organizáciu zložitých údajov, napríklad údajov o aute a jeho majiteľovi

    return 0;
}