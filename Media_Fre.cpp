#include <stdio.h>
#include <stdlib.h>

main()
{
   float nota1, nota2, nota3, media,freq; 
        
   printf("Digite a primeira nota........ ");
   scanf("%f",&nota1);
   printf("Digite a seconda nota......... ");
   scanf("%f",&nota2);
   printf("Digite a terceira nota........ ");
   scanf("%f",&nota3);
   printf("Digite a frequencia........ ");
   scanf("%f",&freq);   
   media=(nota1+nota2+nota3)/3;
   
   if(media>=6 && freq>=75)
   {
      printf("\nMedia do aluno................ %.1f\n\n",media); 
      printf("******Aprovado******\n\n");
   }
   else
   {
      printf("******Reprovado******\n\n");      
      printf("******Estude +++++++ ******\n\n");
   }         
   
   system("pause");      
}
