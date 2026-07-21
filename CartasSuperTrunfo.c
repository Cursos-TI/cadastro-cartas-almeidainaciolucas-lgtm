#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //* variaveis para carta 1 e carta 2
  
  char estado, estado2; //* letra que representa o estado, (EX: A a H.)
  char codigo[5], codigo2[5]; //* Código da carta (A01)
  char nomedacidade[20], nomedacidade2[20]; //* nome da cidade.
  unsigned long int populacao, populacao2; //* numero da população
  float areakm, areakm2; //* area em Km²
  float pib, pib2; //* PIB
  int pontosturisticos, pontosturisticos2; //*número de pontos turisticos das cidades

  float densidade, densidade2; // é a população dividido por area Km²
  float percapita, percapita2; // é  o PIB dividido por população
  float superpoder, superpoder2; // a soma de todos atributos
  int opcao; // variavel para escolha do menu

  // Área para entrada de dados
  
 //Dados da Carta 1 
  printf("Insira os dados da carta 1 \n"); // mensagem a ser exibida
  printf("insira o estado: "); // mensagem com os dados das informaçoes a serem coletadas
  scanf("%c", &estado); // area da coleta da variavel
    
  printf("Insira o código: ");
  scanf("%3s", codigo);

  printf("Insira o nome cidade: ");
  scanf("%s", nomedacidade);

  printf("Insira população: ");
  scanf("%lu", &populacao);

  printf("insira a área em Km²: ");
  scanf("%f", &areakm);

  printf("insira PIB: ");
  scanf("%f", &pib);

  printf("Número de pontos turisticos: ");
  scanf("%d", &pontosturisticos);
  
  //Dados da Carta 2 //
  
  printf("\nInsira os dados da carta 2 \n"); // mensagem a ser exibida
  printf("insira o estado: "); // mensagem com os dados das informaçoes a serem coletadas
  scanf(" %c", &estado2); // area da coleta da variavel
    
  printf("Insira o código: ");
  scanf("%s", codigo2);

  printf("Insira o nome cidade: ");
  scanf("%s", nomedacidade2);

  printf("Insira população: ");
  scanf("%lu", &populacao2);

  printf("insira a área em Km²: ");
  scanf("%f", &areakm2);

  printf("insira PIB: ");
  scanf("%f", &pib2);

  printf("Número de pontos turisticos: ");
  scanf("%d", &pontosturisticos2);

  //Area do calculo das funções
  
  densidade = (float) populacao / areakm; // calculo para densidade populacional carta 1
  percapita = (float) (pib * 1000000000) /populacao; // calculo para transformar o PIB em bilhoes carta 1
  
  densidade2 = (float) populacao2 / areakm2; // calculo para densidade populacional carta2
  percapita2 = (float) (pib2 * 1000000000) / populacao2; // calculo para transformar o PIB em bilhoes carta 2

  superpoder = (float)(populacao + areakm + pib + pontosturisticos + percapita + (1.0f / densidade) ); // exemplo de soma total dos atributos ** (com densidade populacional  invertida)
  superpoder = (float)(populacao2 + areakm2 + pib2 + pontosturisticos2 + percapita2 + (1.0f / densidade2) );// exemplo de soma total dos atributos ** (com densidade populacional invertida)
  
  // Área para exibição dos dados das cartas
  
  // resultado da carta 1
 
  printf("\nEstado: %c\n", estado); // area que vai ser exibida com informações da carta 1 
  printf("Codigo da carta: %s\n", codigo);
  printf("Nome da cidade: %s\n", nomedacidade);
  printf("População: %lu\n", populacao);
  printf("Área em Km²: %.2f\n", areakm);
  printf("PIB: %.2f\n", pib);
  printf("Número de pontos turísticos: %d\n", pontosturisticos);
  printf("Densidade populacional: %.2f\n", densidade);
  printf("PIB per capita: %.2f\n", percapita);
  printf("Super poder : %.2f", superpoder);
 
  // resultado da carta 2
  
  printf("\nEstado: %c\n", estado2); //area que vai ser exibida com as informações da carta 2
  printf("Codigo da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nomedacidade2);
  printf("População: %lu\n", populacao2);
  printf("Área em Km²: %.2f\n", areakm2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontosturisticos2);
  printf("Densidade populacional: %.2f\n", densidade2);
  printf("PIB per capita: %.2f\n", percapita2);
  printf("Super poder : %.2f", superpoder2);

 
  return 0;

}