# Domingo
Mill
/*Desenvolver um programa para ler 5 notas e armazena-las em um vetor.
Calcular e apresentar a média aritmética e o somatório das notas e também
apresentar os dados do vetor na saída padrão.
*/
#include <stdio.h>
#define TAM 3// constante simbolica
int main(void) {
 //Exercicio 1.

 float notas [5],soma=0, media;
 int i;
 printf("digite %d notas\n", TAM);
 for(i = 0; i < TAM; i++)
 {
   scanf("%f", &notas[i]);
   soma +=notas[i];
 }
   media = soma/5;
   printf("media = %f", media);

     for(i = 0; i < TAM; i++)
     {
       printf("%f\n", notas[i]);
     }
 return 0;
}
