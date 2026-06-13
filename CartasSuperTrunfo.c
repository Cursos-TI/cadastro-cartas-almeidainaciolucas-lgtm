#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //* variaveis para carta 1 
  int Carta1; //número da carta
  char estado; //* letra que representa o estado, (EX: A a H.)
  char codigo[5]; //* Código da carta (A01)
  char nomedacidade[20]; //* nome da cidade.
  int populacao; //* numero da população
  float areakm; //* area em Km²
  float pib; //* PIB
  int pontosturisticos; //*número de pontos turisticos das cidades

  //* variaveis para a carta 2
  int Carta2; //número da carta
  char estado2; //* letra que representa o estado, (EX: A a H.)
  char codigo2[5]; //* Código da carta (A01)
  char nomedacidade2[20]; //* nome da cidade.
  int populacao2; //* numero da população
  float areakm2; //* area em Km²
  float pib2; //* PIB
  int pontosturisticos2; //*numero de pontos turisticos.

  // Área para entrada de dados
  
 //* entrada de dados para a carta1 
  printf("Insira os dados da carta 1 \n");
  printf("insira o estado: ");
  scanf("%c", &estado);
    
  printf("Insira o código: ");
  scanf("%3s", codigo);

  printf("Insira o nome cidade: ");
  scanf("%s", nomedacidade);

  printf("Insira população: ");
  scanf("%d", &populacao);

  printf("insira a área em Km²: ");
  scanf("%f", &areakm);

  printf("insira PIB: ");
  scanf("%f", &pib);

  printf("Número de pontos turisticos: ");
  scanf("%d", &pontosturisticos);
  
  //entrada dos dados da carta 2
  printf("\nInsira os dados da carta 2 \n");
  printf("insira o estado: ");
  scanf(" %c", &estado2);
    
  printf("Insira o código: ");
  scanf("%s", codigo2);

  printf("Insira o nome cidade: ");
  scanf("%s", nomedacidade2);

  printf("Insira população: ");
  scanf("%d", &populacao2);

  printf("insira a área em Km²: ");
  scanf("%f", &areakm2);

  printf("insira PIB: ");
  scanf("%f", &pib2);

  printf("Número de pontos turisticos: ");
  scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade
  
  // resutado da carta 1
 
  printf("\nEstado: %c\n", estado);
  printf("Codigo da carta: %s\n", codigo);
  printf("Nome da cidade: %s\n", nomedacidade);
  printf("População: %d\n", populacao);
  printf("Área em Km²: %f\n", areakm);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %d\n", pontosturisticos);

  // resultado da carta 2
  
  printf("\nEstado: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nomedacidade2);
  printf("População: %d\n", populacao2);
  printf("Área em Km²: %f\n", areakm2);
  printf("PIB: %f\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontosturisticos2);

return 0;
} 
