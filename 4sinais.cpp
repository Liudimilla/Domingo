# include <stdio.h>
# include <stdlib.h>
main ( )
{
 int opc, num1, num2, res;
 
  while( opc != 5)
 
{
  printf("Digite o primeiro numero:1-soma,2subtrair,3-multlipicar,4-dividir,5-sair");
 scanf("%d",&opc);
 printf ("Digite o primeiro numero:");
 scanf("%d",&num1);
 printf ("Digite o segundo numero:");
 scanf("%d",&num2);

 if (opc == 1  )
 {
 res = num1+num2;
  printf ("\nDigite o segundo numero:%d\n",res);
}
if (opc == 2  )
 {
 res = num1-num2;
  printf ("\nDigite o segundo numero:%d\n",res);
}
if (opc == 2  )
 {
 res = num1*num2;
  printf ("\nDigite o segundo numero:%d\n",res);
}
if (opc == 3  )
 {
 res = num1/num2;
  printf ("\nDigite o segundo numero:%d\n",res);
}

}
      
}

 
