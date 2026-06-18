#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //* variaveis para carta 1 
  char estado, estado2; //* letra que representa o estado, (EX: A a H.)
  char codigo, codigo2[5]; //* Código da carta (A01)
  char nomedacidade, nomedacidade2[20]; //* nome da cidade.
  int populacao, populacao2; //* numero da população
  float areakm, areakm2; //* area em Km²
  float pib, pib2; //* PIB
  int pontosturisticos, pontosturisticos2; //*número de pontos turisticos das cidades
  float densidade, densidade2;
  float percapita, percapita2;

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

  //Area do calculo a densidade e PIB per capita
  
  densidade = populacao / areakm; 
  percapita = pib / populacao;
  
  densidade2 = populacao2 / areakm2; 
  percapita2 = pib2 / percapita2;


  // Área para exibição dos dados da cidade
  
  // resultado da carta 1
 
  printf("\nEstado: %c\n", estado);
  printf("Codigo da carta: %s\n", codigo);
  printf("Nome da cidade: %s\n", nomedacidade);
  printf("População: %d\n", populacao);
  printf("Área em Km²: %f\n", areakm);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %d\n", pontosturisticos);
  printf("Densidade populacional: %.2f", densidade);
  printf("PIB per capita: %.2f", percapita);

  // resultado da carta 2
  
  printf("\nEstado: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nomedacidade2);
  printf("População: %d\n", populacao2);
  printf("Área em Km²: %f\n", areakm2);
  printf("PIB: %f\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontosturisticos2);
  printf("Densidade populacional: %.2f", densidade);
  printf("PIB per capita: %.2f", percapita);

  return 0;
} 
