/*
*   Program, ktory vypise cifry zadaného cisla na novy riadok.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    // kod pred 
    int pocet = 10; 
    
    while (pocet > 0)
    {
       printf("Ahoj, pocet je %i\n", pocet);
       pocet = pocet - 1;
    }

    printf("Premenna pocet mimo while je %i\n", pocet);
    // kod za
}