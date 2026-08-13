#include <stdio.h>

typedef struct {
    char name[30];
    Car featuredCar;
} Dealership;

typedef struct {
    char firstName[20];
    char lastName[20];
} Owner;

typedef struct {
    char brand[30];
    char model[30];
    int year;
} sportCar;

// Bez typedef
struct Car {
    char brand[30];
    int year;
};

// S typedef
typedef struct {
    char brand[30];
    int year;
} Car;

typedef float Temperature;

int main() {

    // TYPEDEF

    // Kľúčové slovo typedef umožňuje vytvoriť nový názov (alias) pre existujúci typ
    // Vďaka tomu môžu byť zložité deklarácie čitateľnejšie a môj kód lahšie udržiavateľný
    // Napríklad namiesto toho, aby som vždy písala float, môžem vytvoriť nový typ s názvom Temperature, čím sa kód stane čitateľnejším
    Temperature today = 25.5;
    Temperature tomorrow = 18.6;

    printf("Today: %.1f C\n", today);
    printf("Tomorrow: %.1f C\n", tomorrow);
    printf("\n");


    // TYPEDEF WITH STRUCT

    // typedef môže byť užitočný v spojení so štruktúrou, pretože mi umožňuje vyhnúť sa tomu, aby som musela štruktúru písať zakaždým
    struct Car car1 = {"BMW", 1999};    // Potrebuje slovo "struct"
    Car car2 = {"Ford", 1969};          // Kratšie s typedef
    
    printf("%s %d\n", car1.brand, car1.year);
    printf("%s %d\n", car2.brand, car2.year);

    // Tento príklad ukazuje, ako typedef uľahčuje prácu s viacerými premennými typu struct, napr. s rôznymi modelmi áut
    sportCar sport1 = {"Porshe", "911 GT3 RS", 2023};
    sportCar sport2 = {"Lamborghini", "Revuelto", 2024};
    sportCar sport3 = {"Ferrari", "SF90 Stradale", 2023};

    printf("%s %s %d\n", sport1.brand, sport1.model, sport1.year);
    printf("%s %s %d\n", sport2.brand, sport2.model, sport2.year);
    printf("%s %s %d\n", sport3.brand, sport3.model, sport3.year);


    // TYPEDEF NESTED STRUCT
    Owner person = {"John", "Doe"};
    Car car1 = {"Toyota", 2010, person};
    Dealership d = {"City Motors", car1};

    printf("Dealership: %s\n", d.name);
    printf("Featured Car: %s (%d), owned by %s %s\n",
        d.featuredCar.brand,
        d.featuredCar.year,
        d.featuredCar.owner.firstName,
        d.featuredCar.owner.lastName);
    
    return 0;
}