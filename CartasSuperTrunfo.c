#include <stdio.h>

// Desafio Super Trunfo - Países

int main()
{

  // Variaveis Globais

  char estado1, estado2;                    // Uma letra para representar o estado
  char codigo1[4], codigo2[4];              // Código da cidade 1 e cidade 2 (ex: A01, A02)
  char nome1[50], nome2[50];                // Nome da cidade 1 e cidade 2
  int populacao1, populacao2;               // População da cidade 1 e cidade 2
  int pontosTuristicos1, pontosTuristicos2; // Total de pontos turisticos cidade 1 e cidade 2
  float area1, area2;                       // Área em km² da cidade 1 e cidade 2
  float pib1, pib2;                         // PIB total da cidade

  // Entrada de dados
  //  Carta 01

  printf("Cartas do Super Trunfo\n");
  printf("Carta 1:\n");
  printf("Estado: ");
  scanf(" %c", &estado1);
  printf("Código: ");
  scanf("%s", codigo1);
  printf("Nome da Cidade: ");
  scanf("%s", nome1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área: ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Carta 2

  printf("Carta 2:\n");
  printf("Estado: ");
  scanf(" %c", &estado2);
  printf("Código: ");
  scanf("%s", codigo2);
  printf("Nome da Cidade: ");
  scanf("%s", nome2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área: ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Exibição dos dados
  // Carta 01

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

  // Carta 02

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

  return 0;
}
