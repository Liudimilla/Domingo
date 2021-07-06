#include <stdio.h>
#include <stdlib.h>
main()
{
   float nota1, nota2, nota3, media; 
        
   printf("Digite a primeira nota........ ");
   scanf("%f",&nota1);
   printf("Digite a seconda nota......... ");
   scanf("%f",&nota2);
   printf("Digite a terceira nota........ ");
   scanf("%f",&nota3);
   media=(nota1+nota2+nota3)/3;
   printf("\nMedia do aluno................ %.1f\n\n",media); 
   system("pause");      
}
