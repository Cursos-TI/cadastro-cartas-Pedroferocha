#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Estado de A a H.
  char EstadoA;
  char EstadoB;
  // Código da carta de 01 a 04.
  char CodigoA[4];
  char CodigoB[4];
  // Nome da cidade
  char NomeA[20];
  char NomeB[20];
  // População.
  int PopulacaoA;
  int PopulacaoB;
  // Área(Em km²).
  float AreaA;
  float AreaB;
  //PIB da cidade.
  float PibA;
  float PibB;
  //Número de Pontos Turísticos na cidade
  int PontosTuristicosA;
  int PontosTuristicosB;
  //densidade populacional
  float densidadeA;
  float densidadeB;
  //Pib Capital
  float PibCapitalA;
  float PibCapitalB;
  //super poder
  float superA;
  float superB;
  // Área para entrada de dados
  //carta A
  printf("Qual a letra do estado da carta A de A a H: ");
  scanf(" %c", &EstadoA);

  printf("Qual a codigo da carta A de 01 a 04: %c", EstadoA);
  scanf("%s", CodigoA);
  //não bote cidade com espaço
  printf("Qual o nome da cidade da carta A: ");
  scanf("%s", NomeA);

  printf("Qual a população da carta A: ");
  scanf("%d", &PopulacaoA);

  printf("Qual a área da carta A: ");
  scanf("%f", &AreaA);

  printf("Qual o PIB da carta A: ");
  scanf("%f", &PibA);

  printf("Quantos pontos turisticos tem a carta A: ");
  scanf("%d", &PontosTuristicosA);
  //carta B
  printf("Qual a letra do estado da carta B de A a H: ");
  scanf(" %c", &EstadoB);

  printf("Qual a codigo da carta B de 01 a 04: %c", EstadoB);
  scanf("%s", CodigoB);
  //não bote cidade com espaço
  printf("Qual o nome da cidade da carta B: ");
  scanf("%s", NomeB);

  printf("Qual a população da carta B: ");
  scanf("%d", &PopulacaoB);

  printf("Qual a área da carta B: ");
  scanf("%f", &AreaB);

  printf("Qual o PIB da carta B: ");
  scanf("%f", &PibB);

  printf("Quantos pontos turisticos tem a carta B: ");
  scanf("%d", &PontosTuristicosB);
  //calculo A
  densidadeA = (float) PopulacaoA/AreaA;
  PibCapitalA = (float) PibA/PopulacaoA; 

  superA = PopulacaoA + AreaA + PontosTuristicosA + PibCapitalA + (densidadeA * -1);

  //calculo B
  densidadeB = (float) PopulacaoB/AreaB;
  PibCapitalB  = (float) PibB/PopulacaoB; 

  superB = PopulacaoB + AreaB + PontosTuristicosB + PibCapitalB + (densidadeB * -1);

  // Área para exibição dos dados da cidade
  //carta A
  printf("A carta A:\n Estado: %c \n Codigo: %c%s \n Nome: %s \n população: %d \n área: %f \n PIB: %f \n pontos turisticos: %d \n densidade populacional: %f \n Pib capital: %f \n Super Poder: %f \n",EstadoA, EstadoA, CodigoA, NomeA, PopulacaoA, AreaA, PibA, PontosTuristicosA, densidadeA, PibCapitalA,superA);
  //carta B
  printf("A carta B:\n Estado: %c \n Codigo: %c%s \n Nome: %s \n população: %d \n área: %f \n PIB: %f \n pontos turisticos: %d \n densidade populacional: %.2Bf \n Pib capital: %.2f \n Super Poder: %f \n",EstadoB, EstadoB, CodigoB, NomeB, PopulacaoB, AreaB, PibB, PontosTuristicosB, densidadeB, PibCapitalB, superB);
  //resultado

int resultadoPopulacao = PopulacaoA > PontosTuristicosB;

int resultadoArea = AreaA > AreaB;

int resultadoPib = PibA > PibB;

int resultadoPonto = PontosTuristicosA > PontosTuristicosB;

int resultadodensidade = densidadeA < densidadeB;

int resultadoPibCapital = PibCapitalA > PibCapitalB;

int resultadosuper = superA > superB;


if (resultadoPopulacao){
  printf("carta A vençeu \n");
}else{
  printf("carta B venceu \n");
}
if (resultadoArea){
  printf("carta A vençeu \n");
}else{
  printf("carta B venceu \n");
}
if (resultadoPib){
  printf("carta A vençeu \n");
}else{
  printf("carta B venceu \n");
}
if (resultadoPonto){
  printf("carta A vençeu \n");
}else{
  printf("carta B venceu \n");
}
if (resultadodensidade){
  printf("carta A vençeu \n");
}else{
  printf("carta B venceu \n");
}
if (resultadoPibCapital){
  printf("carta A vençeu \n");
}else{
  printf("carta B venceu \n");
}
if (resultadosuper){
  printf("carta A vençeu \n");
}else{
  printf("carta B venceu \n");
}







  return 0;
} 
