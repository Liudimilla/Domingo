#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
    int j,n,num, quant,l,est[60];
    int meg[30][6];
    for(j=0;j<3;j++){
          for(n=0;n<6;n++){
          meg[j][n] = (rand()% 60);
          }
    }
    for(j=0; j<3; j++){
    printf("\n");
          for(n=0;n<6;n++){
                
                printf(" %d ",meg[j][n]);
                }
                
          }
          {
          est[60]=0;
        est[meg[j][n]]++;
        }
          printf("\n\n **** Parte 2.\n"); 
            printf("* 2.a Lista de estatica da quantidade de cada numero em ordem crescente;");
                  printf("\nNumero %d: %d vez(es)\n\n", j,n,est[60]);
        
    
    system ("pause>>null");
    }

