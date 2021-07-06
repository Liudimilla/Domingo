#include <stdio.h>
#include <stdlib.h>

main()
{
      float velocidade,tempo,distancia;
      printf ("digite a velocidade:");
      scanf ("%f", &velocidade);
      printf  ("digite o tempo:");
      scanf ("%f", &tempo);
      distancia = velocidade * tempo;
      printf ("\n a distancia percorrida e de= %.1f\n", distancia);
      system ("pause");
}      
