/**
 * Subor:   Variables2.c
 *
 * Autor1:  Tomas Lukac (lukac@fajnorka.sk)
 * Datum:   03. oktobra 2020
 * Partner: Pracoval som sám
 * Predmet: PRJ 2020
 * Trieda:  Učiteľ
 *
 * Opis suboru:
 *
 *  Vysvetlenie premenny typu long a long long,
 *  vypisovanie premenny typu long a long long pomocou printf
 *
 */
#include <stdio.h>

int main(void)
{
    // Na vypis long pouzivame %li
    long numberOfPoints = 131071100;
    printf("Pocet bodov %li\n", numberOfPoints);

    // Na vypis long long pouzivame %lli
    long long starsInGalaxy = 100000000000;
    printf("Pocet hviezd v Mliecnej ceste je asi %lli\n", starsInGalaxy);
}
