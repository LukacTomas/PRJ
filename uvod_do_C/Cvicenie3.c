/**
 * Subor:   Cvicenie.c
 *
 * Autor1:  Tomas Lukac (lukac@fajnorka.sk)
 * Datum:   04. oktobra 2020
 * Partner: Pracoval som sám
 * Predmet: PRJ 2020
 * Trieda:  Učiteľ
 *
 * Opis suboru:
 *
 *  Napisme program, ktory spocita vek
 *  troch ludi a ich priemer 
 *  
 *
 */
#include <stdio.h>
int main(void)
{
    int vek1 = 1500;
    int vek2 = 666;
    int vek3 = 666;
    printf("Prvy ma %i rokov, druhy ma %i rokov, treti ma %i rokov\n", vek1, vek2, vek3);

    int suma = vek1 + vek2 + vek3;
    float priemer = (float)suma / 3;
    printf("Priemer vekov je %.2f\n", priemer);
}