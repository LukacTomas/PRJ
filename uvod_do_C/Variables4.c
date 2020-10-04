/**
 * Subor:   Variables4.c
 *
 * Autor1:  Tomas Lukac (lukac@fajnorka.sk)
 * Datum:   03. oktobra 2020
 * Partner: Pracoval som sám
 * Predmet: PRJ 2020
 * Trieda:  Učiteľ
 *
 * Opis suboru:
 *
 *  Vysvetlenie premenny typu float a double,
 *  vypisovanie premenny typu float a double pomocou printf
 *
 */

 int main(void)
 {
     float PI = 3.1415;
     printf("Vypisujem cislo pi ako %f\n", PI);

     // Placeholder %.25f povie vypis na 25 desatinnych miest
     double chargeOfElectron = 1.602e-19;
     printf("Naboj elektronu je %.25f\n", chargeOfElectron);

     // Pre vypisanie vo vedeckej notacii pouzijeme %e
     printf("Naboj elektronu je %e\n", chargeOfElectron);

 }
