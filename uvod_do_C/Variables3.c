/**
 * Subor:   Variables3.c
 *
 * Autor1:  Tomas Lukac (lukac@fajnorka.sk)
 * Datum:   03. oktobra 2020
 * Partner: Pracoval som sám
 * Predmet: PRJ 2020
 * Trieda:  Učiteľ
 *
 * Opis suboru:
 *
 *  Vysvetlenie premenny typu char,
 *  vypisovanie premenny typu char pomocou printf
 *
 */

 int main(void)
 {
     // Premennu typu char vypiseme pomocou %c
     char pismeno = 'A';
     printf("Vypisujem prve pismeno abecedy %c \n", pismeno);

     // pripocitajme k pismenu 'A' cislo 1 dostaneme 'B'
     pismeno = pismeno + 1;
     printf("Premenna pismeno po pripocitani jednotky je %c \n", pismeno);

     // co ak sa pomylim a namiesto %c napisme %i
     printf("Premenna typu char vypisana ako integer: %i\n", pismeno);
     printf("Pismeno %c je v skutocnosti cislo %i \n", pismeno, pismeno);

     // z velkeho na male (+32)
     char malePismeno = pismeno + 32;
     printf("Velke pismeno %c po pripocitani 32 je male pismeno %c\n", pismeno, malePismeno);

     // Co ak chcem z int na char
     int cislo = 75;
     printf("Integer: %i ako char: %c", cislo);


 }
