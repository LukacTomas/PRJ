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
 *  Napisme program, ktory spocita obsah a obvod kruhu.
 *
 */
#include <stdio.h>

int main(void)
{
    float radius = 10;
    float PI = 3.1415926535;
    float circumference = 2 * PI * radius;
    float area = PI * radius * radius;

    printf("Kruh ma polomer: %f\n", radius);
    printf("Jeho obsah je:\t %f\n", area);
    printf("Jeho obvod je:\t %f\n", circumference);
}