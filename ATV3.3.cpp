#include<iostream>
#include<stdlib.h>
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
    system ("pause>>null");
    }
