#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int estado; //* letra que representa o estado, (EX: A a H.)
    char codigo[5]; //* Código da carta (A01)
    char nomeCidade[20]; //* nome da cidade.
    int populacao; //* numero da população
    float areakm; //* area em Km²
    float pib; //* PIB
    int pontosturisticos; //*número de pontos turisticos das cidades

  // Área para entrada de dados
    printf("insira o estado: ");
    scanf("%d", &estado);
    printf("Insira o código: ");
    scanf("%s", &codigo);
    prinf("Insira o nome cidade: ");
    scanf("%s", &nomeCidade);
    printf("Insira população: ");
    scanf("%d", &populacao);
    printf("insira a áreaem Km²: ");
    scanf("%f", &areakm);
    prinf("insira PIB: ");
    scanf("%f", &pib);
    prinf("Número de pontos turisticos: ");
    scanf("%d", &pontosturisticos);

  // Área para exibição dos dados da cidade
    printf("Estado: %d\n", estado);



return 0;
} 
