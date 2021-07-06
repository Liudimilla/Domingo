algoritmo "semnome"
// Função :
// Autor :
// Data : 13/03/2014
// Seção de Declarações 
var
num, hora,programa,sal_nivel1,sal_nivel2,sal_nivel3:real
nivel, nivel1:literal
opc:caractere
inicio
// Seção de Comandos 
programa <-1
enquanto programa = 1 faca
limpatela
escreval ("digite quantas horas o professor trabalhou")
leia (hora)
escreval ("digite o Professor Nível")
leia (nivel)
escolha nivel
caso "nivel 1"
sal_nivel1 <- hora* 12
escreval ("o salario desse professor sera:",sal_nivel1)
caso "nivel 2"
sal_nivel2<-hora * 17
escreval ("o salario desse professor sera:",sal_nivel2)
caso "nivel 3"
sal_nivel3<-hora * 25
escreval ("o salario desse professor sera:",sal_nivel3)
fimescolha
escreva ("deseja sair ou nao? (s/n)")
leia (opc)
se opc = "s" entao
programa <- 0
fimescolha
fimse
fimenquanto
fimalgoritmo
