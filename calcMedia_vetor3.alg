algoritmo "semnome"
// Função :
// Autor :
// Data : 03/04/2014
// Seção de Declarações
var
cont : inteiro
aluno : vetor [1..5] de caractere
nota1 : vetor [1..5] de real
nota2 : vetor [1..5] de real
nota3 : vetor [1..5] de real
media : vetor [1..5] de real
inicio
// Seção de Comandos
escreval(">>>  Média dos alunos   <<<")
para cont de 1 ate 5 faca
   escreval("Digite o nome do aluno: ")
   leia(aluno[cont])
   escreval("Digite as notas referente a AV1, AV2 e AV3")
   leia(nota1[cont])
   leia(nota2[cont])
   leia(nota3[cont])
   media[cont] <- (nota1[cont]+nota2[cont]+nota3[cont])/3
   leia(media[cont])
limpatela
fimpara

escreval(">>> Situação dos alunos <<<")
escreval("")
escreval("")
para cont de 1 ate 5 faca
   escreval("Nome do Aluno: ", aluno[cont])
   escreval("Média final: ", media[cont])
   escreva("Situação do aluno: ")
   se media[cont] < 5 entao
      escreva("Reprovado")
   senao
      se media[cont] > 7 entao
         escreva("Aprovado")
      senao
         escreva("Recuperação")
      fimse
   fimse
escreval("")
escreval("+------------------------------------+")
 fimpara

fimalgoritmo
