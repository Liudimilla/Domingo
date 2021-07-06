#include <stdio.h>
#include <stdlib.h>
main()
{
      int quantidade;
      float criterioA, criterioB;
      
      printf ("digite a quantidade de livros:");
      scanf ("%d", & quantidade);
      
      criterioA = (quantidade *0.25)+7.50;
      criterioB = (quantidade *0.50)+2.50;
      
      if  (criterioA < criterioB){
      
      printf ("sua melhor opcao e o criterioA e o melhor preco sera %.2f R$\n", criterioA);
      }
      
      else if (criterioB < criterioA){
      
      printf ("sua melhor opcao e o criterioB e o melhor preco sera  %.2f R$\n", criterioB);
      }
      
      system ("pause"); 
       
}
