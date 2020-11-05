/*
*
* Program co vypise cisla od 20 - 30 a nasledne od 30 - 20
*/
#include <stdio.h>

int main(void)
{
    /*
        for (inicializacia, podmienka; update)
        {
            // TOTO OPAKUJEM
        }
    */
    for (int i = 20; i <= 30; i++)
    {
        printf("%i ", i);
    }

    for (int i = 30; i >= 20; i--)
    {
        printf("%i ", i);
    }
}