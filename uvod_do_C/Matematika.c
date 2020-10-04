/**
 * Subor:   Matematika.c
 *
 * Autor1:  Tomas Lukac (lukac@fajnorka.sk)
 * Datum:   03. oktobra 2020
 * Partner: Pracoval som sám
 * Predmet: PRJ 2020
 * Trieda:  Učiteľ
 *
 * Opis suboru:
 *
 *  Vysvetlenie matematiky + - * / %
 *
 */

 int main(void)
 {
     // Scitanie a odcitanie
     int health = 67;
     printf("Tvoj zivot je %i \n", health);

     health = health + 12;
     printf("Tvoj zivot je %i \n", health);
     health = health - 36;
     printf("Tvoj zivot je %i \n\n", health);

     // nasobenie a delenie
      health = health * 2;
      printf("Tvoj zivot je %i \n\n", health);

      health = health / 3;
      printf("Tvoj zivot je %i \n\n", health); // health = 28; ale 86 / 3 = 28.6666

      float chargeOfElectron = -1.602e-19;
      float chargeOfProton =  - chargeOfElectron;
      float CoulombConstance = 9e9;
      float distance = 5.3e-11;

      float force = CoulombConstance * chargeOfElectron * chargeOfProton / (distance*distance);
      printf("Nanoj elektronu je %e a naboj protonu je %e\n", chargeOfElectron, chargeOfProton);
      printf("Ich vzdialenost v atome vodika je %e\n", distance);
      printf("Proton a elektron v atome vodika sa teda pritahuju silou %e Newtona\n", force);



 }
