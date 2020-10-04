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
 *  Napisme program, ktory z periody 
 *  spocita frekvenciu a uhlovu rychlost.
 *
 */

#include <stdio.h>

int main(void)
{

    float period = 1.5e-3;
    float frequency = 1 / period;
    float angleFrequency = 2 * 3.1415926535 * frequency;
    printf("Perioda je %.5f s a frekvencia je %.2f Hz a uhlova rychlost je %.2f rad/s\n", period, frequency, angleFrequency);
}