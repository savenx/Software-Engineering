Algoritmo "ControleAeronaves"

Var
   combustivelMax : real
   trechoPrincipal : real
   trechoTotal : real
   trechoAlternativo : real
   combustivelExistente : real
   mediaKm : real
   combustivelNecessario : real
   combustivelAbastecimento : real
   aprovado : inteiro

Procedimento TrechoKM
Inicio

   mediaKm <- 3.6
   trechoAlternativo <- trechoPrincipal * 1.30
   trechoTotal <- (trechoPrincipal + trechoAlternativo) * 1.30

FimProcedimento

Procedimento Combustivel
Inicio

   combustivelMax <- 200000
   combustivelNecessario <- trechoTotal * mediaKm
   combustivelAbastecimento <- combustivelNecessario - combustivelExistente

   se (combustivelNecessario > combustivelMax) ou (combustivelExistente > combustivelMax) entao
      aprovado <- 0
   senao
      aprovado <- 1
   fimse

FimProcedimento

Procedimento DadosVoo
Inicio

   se (aprovado = 1) entao
      limpatela
      escreval("Voo Aprovado, bom voo!")
      escreval("")
      escreval("======= Veja os dados do seu planejamento: =======")
      escreval("")
      escreval("Trecho Principal: ", trechoPrincipal, " KM")
      escreval("Trecho Alternativo: ", trechoAlternativo, " KM")
      escreval("Total: ", trechoTotal, " KM")
      escreval("Combustivel necessário: ", combustivelNecessario, " litros")
      escreval("Necessário abastecer: ", combustivelAbastecimento, " litros")
      escreval("")
      escreval("==================================================")
   senao
      limpatela
      escreval("Voo Reprovado, reveja seu planejamento.")
   FimSe

FimProcedimento

Inicio

   escreva("Quantidade de KM do trecho principal: ")
   leia(trechoPrincipal)
   escreva("Combustível existente na aeronave: ")
   leia(combustivelExistente)
   TrechoKm()
   Combustivel()
   DadosVoo()

Fimalgoritmo