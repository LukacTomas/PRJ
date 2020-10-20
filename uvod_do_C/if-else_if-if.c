
/**
 * Subor:   if-else.c
 *
 * Autor:  Tomas Lukac (lukac@fajnorka.sk)
 * Datum:   16. 10. 2020
 * Partner: Pracoval som sám
 * Predmet: PRJ 2020
 * Trieda:  ucitel
 *
 * Opis suboru:
 *
 *  Vetvenie programu 3
 *
 */

#include <stdio.h>

int main(void)
{
    int pocetPercent;

    printf("Zadaj pocet percent: ");
    scanf("%i", &pocetPercent);

    if(pocetPercent < 0 || pocetPercent > 100)
    {
        printf("Zadaj cislo medzi 0 a 100");
        return 1;
    }

    if (pocetPercent >= 90)
    {
        printf("Mas 1\n");
    }
    else if (pocetPercent >= 70 && pocetPercent < 90)
    {
        printf("Mas 2\n");
    }
    else if (pocetPercent >= 50 && pocetPercent < 70)
    {
        printf("Mas 3\n");
    }
    else if (pocetPercent >= 33 && pocetPercent < 50)
    {
        printf("Mas 4\n");
    }
    else
    {
        printf("Mas 5\n");
    }

}
