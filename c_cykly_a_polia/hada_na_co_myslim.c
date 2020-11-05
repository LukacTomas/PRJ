/*
*   Program, hadaj na co myslim
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    // Vymyselel nahodu 0 - 128 (co uzivatel zada)

    // Opakuj dokym si neuhadol
    //      Zadam cislo - kontrolovat ci je medzi 0 - 128
    //      Ak je cislo vacsie ako nahoda
    //              Nahoda je mensia
    //      Ak je cislo mensie ako nahoda
    //              Nahoda je vacis
    //      Inak uhadol si

    // Vzber cislo do ktoreho budes hadat
    unsigned int maxCislo;
    printf("Zadaj maximalne cislo ktore budes hadat: ");
    scanf("%i", &maxCislo);

    // Nahodne cislo medzi 0 - maxCislo
    srand(time(0));
    int nahoda = rand() % (maxCislo + 1);

    int cislo;
    int pocetPokusov =  0;
    // printf("Nahoda je %i\n", nahoda);

    do
    {
        do
        {
           printf("Zadaj cislo medzi 0 - %i: ", maxCislo);
           scanf("%i",&cislo);
        }
        while(cislo > maxCislo || cislo < 0);


        if (cislo > nahoda)
        {
            printf("Moje cislo je mensie\n\n");
        }
        else if (cislo < nahoda)
        {
            printf("Moje cislo je vasie\n\n");
        }
        pocetPokusov++;

    }
    while(cislo != nahoda);

    printf("Uhadol si na %i pokusov", pocetPokusov);
}
