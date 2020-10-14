/**
 * Subor:   Scanf3.c
 *
 * Autor1:  Tomas Lukac (lukac@fajnorka.sk)
 * Datum:   14. oktobra 2020
 * Partner: Pracoval som sám
 * Predmet: PRJ 2020
 * Trieda:  Učiteľ
 *
 * Opis suboru:
 *
 *  Program na demonosnstraciu scanf
 *
 */
#include <stdio.h>

int main(void)
{

    char znak;
    printf("Zadaj char: ");
    scanf("%c", &znak);
    printf("Tvoj znak je %c\n", znak);

    int cislo;
    printf("Zadaj integer: ");
    scanf("%i", &cislo);
    printf("Tvoj integer je %i\n", cislo);

    long velkeCislo;
    printf("Zadaj velky integer: ");
    scanf("%li", &velkeCislo);
    printf("Tvoj integer je %li\n", velkeCislo);

    long long obrovskeCislo;
    printf("Zadaj obrovsky integer: ");
    scanf("%lli", &obrovskeCislo);
    printf("Tvoj integer je %lli\n", obrovskeCislo);

    float desatinne1;
    printf("Zadaj float: ");
    scanf("%f", &desatinne1);
    printf("Tvoj float je %f\n", desatinne1);

    double desatinne2;
    printf("Zadaj double: ");
    scanf("%lf", &desatinne2);
    printf("Tvoj double je %lf\n", desatinne2);
}