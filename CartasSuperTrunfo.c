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
  printf("A carta A:\n Estado: %c \n Codigo: %c%s \n Nome: %s \n população: %d \n área: %f \n PIB: %f \n pontos turisticos: %d \n densidade populacional: %.2f \n Pib capital: %f \n Super Poder: %f \n",EstadoA, EstadoA, CodigoA, NomeA, PopulacaoA, AreaA, PibA, PontosTuristicosA, densidadeA, PibCapitalA,superA);
  //carta B
  printf("A carta B:\n Estado: %c \n Codigo: %c%s \n Nome: %s \n população: %d \n área: %f \n PIB: %f \n pontos turisticos: %d \n densidade populacional: %.2f \n Pib capital: %.2f \n Super Poder: %f \n",EstadoB, EstadoB, CodigoB, NomeB, PopulacaoB, AreaB, PibB, PontosTuristicosB, densidadeB, PibCapitalB, superB);
  //resultado

int resultadoPopulacao = PopulacaoA > PopulacaoB;

int resultadoArea = AreaA > AreaB;

int resultadoPib = PibA > PibB;

int resultadoPonto = PontosTuristicosA > PontosTuristicosB;

int resultadodensidade = densidadeA < densidadeB;

int resultadoPibCapital = PibCapitalA > PibCapitalB;

int resultadosuper = superA > superB;
int Resultado1;
int Resultado2;
int escolha1;
int escolha2;
int final;

printf("escolha qual quer comparar: \n");
printf("1. População\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Pontos turisticos\n");
printf("5. Densidade\n");
printf("6. PIb capital\n");
printf("7. Super Poder\n");
scanf("%d", &escolha1);

switch (escolha1)
{
case 1:
  Resultado1 = PopulacaoA > PopulacaoB ? 1 : 0 ;

  break;
case 2:
    Resultado1 = AreaA > AreaB ? 1 : 0;
  break;
  case 3:
  Resultado1 = PibA > PibB ? 1 : 0 ;

  break;
  case 4:
  Resultado1 = PontosTuristicosA > PontosTuristicosB ? 1 : 0 ;

  break;
  case 5:
  Resultado1 = densidadeA < densidadeB ? 1 : 0 ;

  break;
  case 6:
  Resultado1 = PibCapitalA > PibCapitalB ? 1 : 0 ;

  break;
  case 7:
  Resultado1 = superA > superB ? 1 : 0 ;

  break;

default:
printf("opção incorreta.\n");
  break;
}
printf("escolha qual quer comparar: \n");
printf("1. População\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Pontos turisticos\n");
printf("5. Densidade\n");
printf("6. PIb capital\n");
printf("7. Super Poder\n");
scanf("%d", &escolha2);
if (escolha2 != escolha1){
  switch (escolha2)
{
case 1:
  Resultado2 = PopulacaoA > PopulacaoB ? 1 : 0 ;

  break;
case 2:
    Resultado2 = AreaA > AreaB ? 1 : 0;
  break;
  case 3:
  Resultado2 = PibA > PibB ? 1 : 0 ;

  break;
  case 4:
  Resultado2 = PontosTuristicosA > PontosTuristicosB ? 1 : 0 ;

  break;
  case 5:
  Resultado2 = densidadeA < densidadeB ? 1 : 0 ;

  break;
  case 6:
  Resultado2 = PibCapitalA > PibCapitalB ? 1 : 0 ;

  break;
  case 7:
  Resultado2 = superA > superB ? 1 : 0 ;

  break;

default:
printf("opção incorreta.\n");
  break;
}}


if (Resultado1>Resultado2){
printf("Carta 1 vençeu\n");


}else if (Resultado1 == Resultado2){
  
printf("carta 2 vençeu\n");
}else{

printf("empate\n");
  
}
printf("%d", Resultado1);
printf("%d", Resultado2);

}
