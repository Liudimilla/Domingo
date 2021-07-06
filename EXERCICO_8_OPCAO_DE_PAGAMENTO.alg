algoritmo "OPÇOES_DE_PAGAMENTO"
// Função : Construa um programa para uma loja onde o cliente terá quatro opçôes de pagamento, para compra de um produto.
// 1 À vista em dinheiro ou cheque, recebe 10% de desconto
// 2 À vista no cartão de crédito, recebe 5% de desconto
// 3 Em duas vezes, preço normal de etiqueta sem juros
// 4 Em três vezes, preço normal de etiqueta mais juros de 10%
// Autor :
// Data : 1/12/2010
// Seção de Declarações 
// Funçao: Condicional
var
pn, pt, pp : real  //pn=preço normal    pt=preço total   pp=preço parcelado
codigo:literal
inicio
//entrada
escreva ("Digite o preço normal do produto.:R$")
leia(pn)
escreval
escreval
escreval ("Código | Condição de pagamento (1,2,3 ou 4)")
escreval
escreval ("  1    | À vista em dinheiro ou cheque, recebe 10% de desconto")
escreval ("  2    | À vista no cartão de crédito, recebe 5% de desconto")
escreval ("  3    | Em duas vezes, preço normal de etiqueta sem juros")
escreval ("  4    | Em três vezes, preço normal de etiqueta mais juros de 10%")
escreval
escreva  ("Digite o código .:")
leia(codigo)
se codigo = "1" entao
   pt <- pn *0.90
senao
   se codigo = "2" entao
      pt <- pn*0.95
   fimse
fimse
escreval ("O preço total à vista é ",pt)
se codigo = "3" entao
   pp <- pn
senao
   se codigo = "4" entao
      pp <- pn*1.10
   fimse
fimse
escreval ("O preço total parcelado é ",pp)
fimalgoritmo
