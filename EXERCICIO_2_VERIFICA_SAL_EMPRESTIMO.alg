algoritmo "VERIFICA_SAL_EMPRESTIMO"
// Fun��o :Estruturado
// Autor : Professor F�bio de 0. Borges
// Data : XX / XX / XXXX
// Apresente o seguinte algoritmo
// Fa�a um algoritmo que verifique se:
// 1) O Sal�rio de uma pessoa seja maior ou igual a 30% da sua renda  para aprova��o de Emprestimo
// 2) Se maior que  30% Emprestimo Reprovado
// 3  Se menor que  30% Emprestimo Aprovado
var
SB, VP: real
//SB - SALARIO BRUTO
//VP - VALOR DA PRESTA��O
inicio
escreval ("Qual o sal�rio Bruto?")
leia (SB)
escreval ("Qual o valor da presta��o?")
leia (VP)
     se (VP) <=(SB*0.3) entao
        escreval ("Empr�stimo Permitido")
     senao
        escreval ("Empr�stimo N�o Permitido")
     fimse
fimalgoritmo
