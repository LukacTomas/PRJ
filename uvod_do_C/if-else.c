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
 *  Vetvenie programu
 *
 */

#include <stdio.h>

int main(void)
{
    int vek;

    printf("Zadaj svoj vek: ");
    scanf("%i", &vek);

    if (vek >= 18)
    {
        printf("Si plnolety\n");
    }
    else
    {
        printf("Si neplnolety\n");
    }


}
