#include<stdio.h>
#include<stdlib.h>
main ( )
{
     int num1, num2,num3, n, res,opc;
      while(opc!=6) {   
                         
printf(" Entre com o numero da opcao\n\n\n\t 1-soma,\t2-subtrair,\t3-mutiplica,\t4-dividir,\t5-raiz quadrada,\t6-sair; ");
scanf("%d",&opc);
if(opc>=1 && opc<=4)
{
printf("Digite o primeiro numero; ");
scanf("%d",&num1);
printf("Digite o segundo numero; ");
scanf("%d",&num2);

{
           switch(opc)
case 1:res=num1+num2;
printf("O resultado da sua conta %.1d\n",res);break;
case 2:res=num1-num2;
printf("O resultado da sua conta %.1d\n",res);break;
case 3:res=num1*num2;
printf("O resultado da sua conta %.1d\n",res);break;
case 4:res=num1/num2;
printf("O resultado da sua conta %.1d\n",res);break;
case 5:res=num1*num1;
printf("O resultado da sua conta %.1d\n",res);break;
{
if(opc=5)
{
         
printf("Digite o primeiro numero");
scanf("%d",&num3);
}
else
if(opc!=6)
}
system("pause");
}
}
}
}


