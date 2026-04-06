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

int resultadoPopulacao = PopulacaoA > PopulacaoB;

int resultadoArea = AreaA > AreaB;

int resultadoPib = PibA > PibB;

int resultadoPonto = PontosTuristicosA > PontosTuristicosB;

int resultadodensidade = densidadeA < densidadeB;

int resultadoPibCapital = PibCapitalA > PibCapitalB;

int resultadosuper = superA > superB;
int Resultado;
int escolha;
printf("escolha qual quer comparar: \n");
printf("1. População\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Pontos turisticos\n");
printf("5. Densidade\n");
printf("6. PIb capital\n");
printf("7. Super Poder\n");
scanf("%d", &escolha);
switch (escolha)
{
case 1:
 if (resultadoPopulacao){
  Resultado = 2;
}else if(PopulacaoA > PopulacaoB){
  Resultado = 1;
}else{
  Resultado = 0;

}
  break;
  case 2:
  if (resultadoArea){
  Resultado = 2;
}else if(AreaA > AreaB){
  Resultado = 1;
}else{
  Resultado = 0;

}
  break;
  case 3:
  if (resultadoPib){
  Resultado = 2;
}else if(PibA > PibB){
  Resultado = 1;
}else{
  Resultado = 0;

}
  break;
  case 4:
   if (resultadoPonto){
  Resultado = 2;
}else if(PontosTuristicosB > PontosTuristicosB){
  Resultado = 1;
}else{
  Resultado = 0;

}
  break;
  case 5:
   if (resultadodensidade){
  Resultado = 2;
}else if(densidadeB < densidadeB){
  Resultado = 1;
}else{
  Resultado = 0;

}
  break;
  case 6:
    if (resultadoPibCapital){
  Resultado = 2;
}else if(PibCapitalA > PibCapitalB){
  Resultado = 1;
}else{
  Resultado = 0;

}
  break;
  case 7:
   if (resultadosuper){
  Resultado = 2;
}else if(superA > superB){
  Resultado = 1;
}else{
  Resultado = 0;

}
  break;
default:
  break;
}

switch (Resultado)
{
case 2:
  printf("A cidade %s ganhou da %s no atributo: %d",&NomeA, &NomeB, &escolha);
  break;
case 1:
   printf("A cidade %s perdeu para %s no atributo: %d",&NomeA, &NomeB, &escolha);
  break;
default:
  printf("A cidade %s empatou para %s no atributo: %d",&NomeA, &NomeB, &escolha);
  break;
}






  return 0;
} 
