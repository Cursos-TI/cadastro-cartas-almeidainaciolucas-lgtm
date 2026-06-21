#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //* variaveis para carta 1 
  
  char estado, estado2; //* letra que representa o estado, (EX: A a H.)
  char codigo[5], codigo2[5]; //* Código da carta (A01)
  char nomedacidade[20], nomedacidade2[20]; //* nome da cidade.
  unsigned long int populacao, populacao2; //* numero da população
  float areakm, areakm2; //* area em Km²
  float pib, pib2; //* PIB
  int pontosturisticos, pontosturisticos2; //*número de pontos turisticos das cidades
  int carta1, carta2;

  float densidade, densidade2; // é a população dividido por area Km²
  float percapita, percapita2; // é  o PIB dividido por população
  float superpoder, superpoder2; // a soma de todos atributos


  // Área para entrada de dados
  
 //Dados da Carta 1 
  printf("Insira os dados da carta 1 \n");
  printf("insira o estado: ");
  scanf("%c", &estado);
    
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
  
  //Dados da Carta 2 
  printf("\nInsira os dados da carta 2 \n");
  printf("insira o estado: ");
  scanf(" %c", &estado2);
    
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
  
  densidade =(float) populacao / areakm; 
  percapita =(float) (pib * 1000000000) /populacao;
  
  densidade2 =(float) populacao2 / areakm2; 
  percapita2 =(float) (pib2 * 1000000000) / populacao2;

  superpoder = (float)(populacao + areakm + pib + pontosturisticos + percapita + (1.0f / densidade) );
  superpoder = (float)(populacao2 + areakm2 + pib2 + pontosturisticos2 + percapita2 + (1.0f / densidade2) );
  
  // Área para exibição dos dados da cidade
  
  // resultado da carta 1
 
  printf("\nEstado: %c\n", estado);
  printf("Codigo da carta: %s\n", codigo);
  printf("Nome da cidade: %s\n", nomedacidade);
  printf("População: %d\n", populacao);
  printf("Área em Km²: %.2f\n", areakm);
  printf("PIB: %.2f\n", pib);
  printf("Número de pontos turísticos: %d\n", pontosturisticos);
  printf("Densidade populacional: %.2f\n", densidade);
  printf("PIB per capita: %.2f\n", percapita);
  printf("Super poder : %f", superpoder);
 
  // resultado da carta 2
  
  printf("\nEstado: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nomedacidade2);
  printf("População: %d\n", populacao2);
  printf("Área em Km²: %.2f\n", areakm2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de pontos turísticos: %d\n", pontosturisticos2);
  printf("Densidade populacional: %.2f\n", densidade2);
  printf("PIB per capita: %.2f\n", percapita2);
  printf("Super poder : %f", superpoder2);

  // resultado da comparação entre as cartas 

  print("população: carta 1 venceu (%d)", populacao > populacao2); // a omparação na população e outras varieaveis é para ver qual é maior
  print("area Km²: carta 1 venceu (%d)", areakm > areakm2);
  print("PIB: carta 1 venceu (%d)", pib > pib2);
  print("Pontos Turisticos:  carta 1 venceu (%d)", pontosturisticos > pontosturisticos2);
  print("Densidade Populacional carta 2 venceu (%d)", densidade < densidade2); //na densidade da comparação é para menor quantidade
  print("PIB per capita: carta 1 venceu (%d)", percapita > percapita2);
  print("Super poder:  carta 1 venceu (%d)", superpoder > superpoder2);

  return 0;
} 
