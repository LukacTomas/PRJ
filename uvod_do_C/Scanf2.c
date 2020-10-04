/**
 * Subor:   Scanf2.c
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
 *  ako nacitanie vstupu typu float od uzivatela
 *  
 *
 */
#include <stdio.h>

int main(void)
{
    float polomerPodstavy, vyska;

    printf("Zadaj polomer podstavy valca: ");
    scanf("%f", &polomerPodstavy);

    printf("Zadaj vysku valca: ");
    scanf("%f", &vyska);

    float obsahPodstavy = 3.1415 * polomerPodstavy * polomerPodstavy;
    float objemValca = obsahPodstavy * vyska;
    printf("Objem valca je %.2f\n", objemValca);
}