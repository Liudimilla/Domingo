

#include<stdio.h>
#include<stdlib.h>

main ( )
{
     int num1, num2, res,opc;
     while (opc!=6)
   {        
printf(" entre com o numero da opcao /1.soma,2.subtrair,3.mutiplica,4.dividir,5.raiz quadrada,6.sair;");
scanf("%d",&opc);


if(opc>=1 && opc<=4)
{
    
printf("Digite o primeiro numero");
scanf("%d",&num1);
printf("Digite o segundo numero");
scanf("%d",&num2);
}
switch(opc) 
{               
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

}
printf("Resultado.%d",res);
}
system("pause");
}
