
//2. Desenvolva um programa que solicite 10 números inteiros positivos e
//mostre o maior deles.


#include<stdio.h>
#include<stdlib.h>
main( )
{
int n,s,cont;
float m;
s = 0;
cont=1;
do
{
printf("Digite um numero:");
    scanf("%d",&n);
   s=s+n;
   cont++;
}while(cont<=15);
m=s/15;
printf("Media =%.f\n",m);
system("pause");
}
    
