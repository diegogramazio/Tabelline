#include <stdio.h>

/* programma che stampa le tabelline dei numeri da 1 a 9 */
int main() {
      int i, j;            // due variabili contatori

      /* fai variare la variabile fra 1 e 9: la tabellina di quel numero */
      for(i=1;i<=9;i++) {
      /* con la j rappresento i multipli di quel numero */
            for(j=1;j<=10;j++)
                  printf("%2d", i * j);
            printf("\n");
      }
      system("PAUSE");
}
