/*5 – Desenvolva um programa usando o comando WHILE que mostre o seguinte menu de
opções para o usuário:1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
5 – Sair
Se o usuario escolher as opcoes 1, 2, 3 ou 4, o programa deve solicitar ao usuario
que digite dois numeros realize o calculo e mostre o resultado;
*/

#include<stdio.h>
#include<stdlib.h>

main ( )
{
     int n1, n2, op,r;
      while(op!=5) 
   {        
printf(" Entre com o numero da opcao\n\n\n\t 1-soma,\n\t2-subtrair,\n\t3-mutiplica,\n\t4-dividir,\n\t5-raiz quadrada,\n\t6-sair; ");
scanf("%d",&op);


if(op>=1 && op<=4)

{
printf("Digite o primeiro numero; ");
scanf("%d",&n1);
printf("Digite o segundo numero; ");
scanf("%d",&n2);
switch(op)

{               
case 1:r=n1+n2;break;
case 2:r=n1-n2;break;
case 3:r=n1*n2;break;
case 4:r=n1/n2;break;
printf("Resultado %d",r);


}

if(op!=5)
{
printf("Opcao invalida",r);
system("pause");
}
}
}



