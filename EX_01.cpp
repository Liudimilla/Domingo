#include <stdio.h>
#include <stdlib.h>

main()
{
   float n1, n2, n3, m=0;
   int i;
   
   for(i=1; i<=10; i++)
   {
     system("cls");
     printf("\n***********************");     
     printf("\n* Dados do aluno %d    *",i);
     printf("\n***********************");                 
     printf("\n\nEntre com a nota 1: ");
     scanf("%f",&n1);
     printf("Entre com a nota 2: ");     
     scanf("%f",&n2);     
     printf("Entre com a nota 3: ");          
     scanf("%f",&n3);     
     m=m+((n1+n2+n3)/3);
   }         
   
   system("cls");   
   m=m/10;
   printf("\n***************************");     
   printf("\n*** Media da sala: %.1f ****",m);
   printf("\n***************************\n\n");                 
   system("pause");      
}
