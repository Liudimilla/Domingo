

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
#include<string.h>
#define tam 300


struct pessoa {
       char nome [100];
       int cpf;
       int jogo [6];
       };

int main(){
    printf("\n\n*** 1.Exercicio; Simulado do jogo da mega ;\n");
    struct pessoa umapessoa;
    int j,n,x,num;
    int meg [3000][6];
    srand( (unsigned)time(NULL));
    for(j=0;j<tam;j++){
          for(n=0;n<6;n++){
          meg [j][n] =1 + (rand()% 60);
 

          }
    }
    for(j=0; j<tam; j++){
    printf("\n");
          for(n=0;n<6;n++){
                
                printf(" %d ",meg [j][n]);
                }
                
          }
          
          printf("\n\n   *** 3.Exercicio; Simulado do jogo da mega ;\n\n\n");
           
    for(j=1;j<=tam;j++){
                        printf("\nDigite seu nome:\n\n");
                        gets(umapessoa.nome);
                        printf("Digite seu cpf\n");
                        scanf("%d", &umapessoa.cpf);
                        
                        printf("Digite os numeros desejados\n");
                        scanf("%d", &umapessoa.jogo[6]);
                        fflush(stdin);
                        }       
           
           
          
                
    system ("pause>>null");
    }
