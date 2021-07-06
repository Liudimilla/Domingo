#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
int main(){
    int j,n,num;
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
          printf("\n **** Parte 2.\n"); 
          printf("   *** 2.a Lista de estatica da quantidade de cada numero em ordem crescente;");
           
          
                
    system ("pause>>null");
    }
