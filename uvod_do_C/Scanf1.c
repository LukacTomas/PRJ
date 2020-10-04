/**
 * Subor:   Scanf1.c
 *
 * Autor1:  Tomas Lukac (lukac@fajnorka.sk)
 * Datum:   04. oktobra 2020
 * Partner: Pracoval som sám
 * Predmet: PRJ 2020
 * Trieda:  Učiteľ
 *
 * Opis suboru:
 *
 *  Jednoduchy program, ktory ukaze pracu so scanf
 *  ako nacitanie vstupu typu integer od uzivatela
 *  
 *
 */
#include <stdio.h>

int main(void)
{
    int plat1, plat2, plat3;

    printf("Zadaj prvy plat: ");
    scanf("%i", &plat1);

    printf("Zadaj druhy plat: ");
    scanf("%i", &plat2);

    printf("Zadaj treti plat: ");
    scanf("%i", &plat3);

    int suma = plat1 + plat2 + plat3;
    float priemer = (float)suma / 3;

    printf("Priemer platov je %.2f\n", priemer);
}