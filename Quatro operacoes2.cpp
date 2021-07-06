#include<stdio.h>
#include<stdlib.h>

main ( )
{
     float num1, num2, tot;
     int opc;
         printf("Digite o primeiro numero");
         scanf("%f",&num1);
         printf ("Digite o segundo numero");
         scanf("%f",&num2);
         printf("Escola a opçao  (1_soma/ 2_subtrair/ 3_dividir/ 4_multiplicacao)");
         scanf("%d",&opc);
         switch(opc)
         {
                   case 1: tot =num1 + num2;
                        printf("O resultado da sua conta %.1f\n",tot);break;
                   case 2: tot =num1 - num2;
                        printf("O resultado da sua conta %.1f\n",tot);break;
                      case 3: tot =num1 / num2;
                        printf("O resultado da sua conta %.1f\n",tot);break;  
                        case 4: tot =num1 - num2;
                        printf("O resultado da sua conta %.1f\n",tot);break;
                        Default:
                                
                        printf("opcao invalida");
                        }
                        
                        system("pause");
                        }
