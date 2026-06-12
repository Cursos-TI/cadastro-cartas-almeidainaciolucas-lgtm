#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //* variaveis para carta 1 
  int Carta1; //número da carta
  char estado = A; //* letra que representa o estado, (EX: A a H.)
  char codigo[5] = A01; //* Código da carta (A01)
  char nomeCidade[20] Saopaulo; //* nome da cidade.
  int populacao = 11897987; //* numero da população
  float areakm = 654987987; //* area em Km²
  float pib = 987987987; //* PIB
  int pontosturisticos = 30; //*número de pontos turisticos das cidades

  //* variaveis para a carta 2
  int Carta2; //número da carta
  char estado2 = B; //* letra que representa o estado, (EX: A a H.)
  char codigo2[5] = B01; //* Código da carta (A01)
  char nomeCidade2[20] Saopaulo; //* nome da cidade.
  int populacao2 = 11897987; //* numero da população
  float areakm2 = 654987987; //* area em Km²
  float pib2 = 987987987; //* PIB
  int pontosturisticos2 = 30; //*numero de pontos turisticos.

  // Área para entrada de dados
  
 //* entrada de dados para a carta1 
  printf("Insira os dados da carta 1")
  printf("insira o estado: ");
  scanf("%d", &estado);
    
  printf("Insira o código: ");
  scanf("%s", &codigo);

  printf("Insira o nome cidade: ");
  scanf("%s", nomeCidade);

  printf("Insira população: ");
  scanf("%d", &populacao);

  printf("insira a área em Km²: ");
  scanf("%f", &areakm);

  printf("insira PIB: ");
  scanf("%f", &pib);

  printf("Número de pontos turisticos: ");
  scanf("%d", &pontosturisticos);
  
  //entrada dos dados da carta 2
  printf("Insira os dados da carta 2")
  printf("insira o estado: ");
  scanf("%d", &estado2);
    
  printf("Insira o código: ");
  scanf("%s", &codigo2);

  printf("Insira o nome cidade: ");
  scanf("%s", nomeCidade2);

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
  printf("Estado: %d\n", estado);
  printf("Codigo da carta: %3s", codigo);
  printf("Nome da cidade: %s", nomedacidade);
  printf("População: %d" populacao);
  printf("PIB: %d" pib);
  printf("Número de pontos turísticos: %d", pontosturisticos)

  // resultado da carta 2
  printf("Estado: %d\n", estado2);
  printf("Codigo da carta: %3s", codigo2);
  printf("Nome da cidade: %s", nomedacidade2);
  printf("População: %d" populacao2);
  printf("PIB: %d" pib2);
  printf("Número de pontos turísticos: %d", pontosturisticos2);

return 0;
} 
