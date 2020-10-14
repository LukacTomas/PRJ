/**
 * Subor:   Variables.c
 *
 * Autor1:  Tomas Lukac (lukac@fajnorka.sk)
 * Datum:   03. oktobra 2020
 * Partner: Pracoval som sám
 * Predmet: PRJ 2020
 * Trieda:  Učiteľ
 *
 * Opis suboru:
 *
 *  Vysvetlenie premenny typu integer,
 *  vypisovanie premenny typu integer pomocou printf
 *
 */
#include <stdio.h>

int main(void)
{
    // Premenna numOfLives je ako suflik, kde som si nechal cislo 10
    // numOfLives moze byt len cele cislo, preto integer (int)
    int numOfLives = 10;

    // Vypisanie premennej numOfLives na obrazovku
    // na vypisanie integeru pouzivame "placeholde" %i alebo %d.
    printf("Pocet zivotov je %i\n", numOfLives);

    numOfLives = numOfLives + 5;
    printf("Pocet zivotov je %i\n", numOfLives);

    // V printf mozeme mat viac vypisov na obrazovku
    // premenne musia byt oddelene ciarkou
    int numOfAmmo = 1000;
    printf("Pocet zivotov je %i a municia je %d\n", numOfLives, numOfAmmo);
}
