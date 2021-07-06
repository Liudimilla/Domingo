#include <stdio.h>
#include <stdlib.h>

main()
{
   int i,j,fat,n,nf;
   
   printf("Informe a quantidade numeros que deseja calcular o fatorial: ");
   scanf("%d", &n);

   printf("\n\n");   
   for(i=1; i<=n; i++)
   {
     printf("--------------------------------------------");
     printf("\n\n%d - informe o numero: ",i);
     scanf("%d", &nf);
     printf("O fatorial de %d e:  ",nf);     
     
     if(nf==0)
       printf("1");
            
     fat=1;
     for(j=nf;j>=1;j--)
     {
        fat=fat*j;
        printf("%d ", j);
        if(j==1)
          printf("= %d",fat);                
        else
          printf("X ");        
     }     
     printf("\n\n--------------------------------------------\n\n");     
   }        

   system("pause");      
}
