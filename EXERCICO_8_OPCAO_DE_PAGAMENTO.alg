algoritmo "OP�OES_DE_PAGAMENTO"
// Fun��o : Construa um programa para uma loja onde o cliente ter� quatro op��es de pagamento, para compra de um produto.
// 1 � vista em dinheiro ou cheque, recebe 10% de desconto
// 2 � vista no cart�o de cr�dito, recebe 5% de desconto
// 3 Em duas vezes, pre�o normal de etiqueta sem juros
// 4 Em tr�s vezes, pre�o normal de etiqueta mais juros de 10%
// Autor :
// Data : 1/12/2010
// Se��o de Declara��es 
// Fun�ao: Condicional
var
pn, pt, pp : real  //pn=pre�o normal    pt=pre�o total   pp=pre�o parcelado
codigo:literal
inicio
//entrada
escreva ("Digite o pre�o normal do produto.:R$")
leia(pn)
escreval
escreval
escreval ("C�digo | Condi��o de pagamento (1,2,3 ou 4)")
escreval
escreval ("  1    | � vista em dinheiro ou cheque, recebe 10% de desconto")
escreval ("  2    | � vista no cart�o de cr�dito, recebe 5% de desconto")
escreval ("  3    | Em duas vezes, pre�o normal de etiqueta sem juros")
escreval ("  4    | Em tr�s vezes, pre�o normal de etiqueta mais juros de 10%")
escreval
escreva  ("Digite o c�digo .:")
leia(codigo)
se codigo = "1" entao
   pt <- pn *0.90
senao
   se codigo = "2" entao
      pt <- pn*0.95
   fimse
fimse
escreval ("O pre�o total � vista � ",pt)
se codigo = "3" entao
   pp <- pn
senao
   se codigo = "4" entao
      pp <- pn*1.10
   fimse
fimse
escreval ("O pre�o total parcelado � ",pp)
fimalgoritmo
