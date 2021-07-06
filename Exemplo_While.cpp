#include <stdio.h>
#include <stdlib.h>

main()
{
  int n1, n2, r, op=1;
  
  while(op==1)     
  {
     system("cls");
     printf("Entre com o primeiro numero: ");
     scanf("%d",&n1);                 
     printf("Entre com o segundo numero: ");
     scanf("%d",&n2);
     r=n1*n2;
     printf("Resultado %d\n",r);
     
     printf("Deseja continuar? (1) - Sim / (2) - Nao ");
     scanf("%d",&op);      
     
     while(op!=1 && op!=2)
     {
       printf("Opcao invalida \n");
       system("pause");
       
       printf("Deseja continuar? (1) - Sim / (2) - Nao ");
       scanf("%d",&op); 
     }                
  }    
}
