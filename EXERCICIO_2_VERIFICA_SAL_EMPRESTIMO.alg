algoritmo "VERIFICA_SAL_EMPRESTIMO"
// Função :Estruturado
// Autor : Professor Fábio de 0. Borges
// Data : XX / XX / XXXX
// Apresente o seguinte algoritmo
// Faça um algoritmo que verifique se:
// 1) O Salário de uma pessoa seja maior ou igual a 30% da sua renda  para aprovação de Emprestimo
// 2) Se maior que  30% Emprestimo Reprovado
// 3  Se menor que  30% Emprestimo Aprovado
var
SB, VP: real
//SB - SALARIO BRUTO
//VP - VALOR DA PRESTAÇÃO
inicio
escreval ("Qual o salário Bruto?")
leia (SB)
escreval ("Qual o valor da prestação?")
leia (VP)
     se (VP) <=(SB*0.3) entao
        escreval ("Empréstimo Permitido")
     senao
        escreval ("Empréstimo Não Permitido")
     fimse
fimalgoritmo
