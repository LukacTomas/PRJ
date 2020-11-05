/*
*   Program, ktory vypise cifry zadaného cisla na novy riadok.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
   // inicializacia 
   int cislo; 
   printf("Zadaj cislo: ");
   scanf("%i", &cislo);

    // podmienka
    while (cislo != 0)
    {
        int cifra = cislo % 10; // 1
        printf("Cifra je %i\n", cifra);
        // update
        cislo = cislo / 10;
    }
}