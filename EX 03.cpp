//


#include <stdio.h>
#include <stdlib.h>
main()
{
  int n;
  printf("Entre com um numero inteiro: ");
  scanf("%d",&n);
  if(n== 100)
    printf("Numero igual a 100\n");    
  else
    if (n>100)
      printf("Numero maior que 100\n");
    else
      printf("Numero menor que 100\n");         
  system("pause");      
}
