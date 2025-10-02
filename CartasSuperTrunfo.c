#include <stdio.h>

// Desafio Super Trunfo - Países

int main()
{

  // Variaveis Globais

  char estado1, estado2;                        // Uma letra para representar o estado
  char codigo1[4], codigo2[4];                  // Código da cidade 1 e cidade 2 (ex: A01, A02)
  char nome1[50], nome2[50];                    // Nome da cidade 1 e cidade 2
  unsigned long int populacao1, populacao2;     // População da cidade 1 e cidade 2
  int pontosTuristicos1, pontosTuristicos2;     // Total de pontos turisticos cidade 1 e cidade 2
  float area1, area2;                           // Área em km² da cidade 1 e cidade 2
  float pib1, pib2;                             // PIB total da cidade
  float densPopulacional_1, densPopulacional_2; // Calcular a Densidade populaciona
  float PibPerCapita1, PibPerCapita2;           // Calcular o PIB per capita
  float SuperPoder1, SuperPoder2;
  int resultadoPopulacao;
  int resultadoArea;
  int resultadoPib;
  int resultadoPontosTuristicos;
  int resultadoDensPopulacional;
  int resultadoPibPerCapita;
  int resultadoSuperPoder;

  // Entrada de dados
  //  Carta 01

  printf("\n    Cartas do Super Trunfo\n");
  printf("\n==============================\n");
  printf("          Carta 1:\n");
  printf("==============================\n\n");
  printf("Estado: ");
  scanf(" %c", &estado1);
  printf("Código: ");
  scanf("%s", codigo1);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nome1);                      // %[^\n] Utilizado para ler uma linha ate a quebra de linha
  printf("População: ");
  scanf("%lu", &populacao1);
  printf("Área: ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Carta 2

  printf("\n==============================\n");
  printf("          Carta 2:\n");
  printf("==============================\n\n");
  printf("Estado: ");
  scanf(" %c", &estado2);
  printf("Código: ");
  scanf("%s", codigo2);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", nome2);                     // %[^\n] Utilizado para ler uma linha ate a quebra de linha
  printf("População: ");
  scanf("%lu", &populacao2);
  printf("Área: ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  densPopulacional_1 = populacao1 / area1;     // Calculo da densidade popilacional

  densPopulacional_2 = populacao2 / area2;

  PibPerCapita1 = (pib1 * 1000000000.0) / populacao1;   // Calculo do PIB per capita

  PibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

  // calculando Super Poder
  SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + PibPerCapita1 + (1.0 / densPopulacional_1);

  SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + PibPerCapita2 + 
  (1.0 / densPopulacional_2); // calcular o inverso da densidade populacional

  // Comparando as Cartas
  resultadoPopulacao = populacao1 > populacao2;

  resultadoArea = area1 > area2;

  resultadoPib = pib1 > pib2;

  resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
  
  resultadoDensPopulacional = densPopulacional_1 < densPopulacional_2; // Menor vence

  resultadoPibPerCapita = PibPerCapita1 > PibPerCapita2;

  resultadoSuperPoder = SuperPoder1 > SuperPoder2;

  // Exibição dos dados
  // Carta 01

  printf("\n==============================\n");
  printf("          Carta 1:\n");
  printf("==============================\n\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densPopulacional_1);
  printf("PIB per Capita: %.2f reais\n", PibPerCapita1);

  // Carta 02

  printf("\n==============================\n");
  printf("          Carta 2:\n");
  printf("==============================\n\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densPopulacional_2);
  printf("PIB per Capita: %.2f reais\n", PibPerCapita2);

  // Exibindo comparações
  printf("\nComparação de Cartas:\n");

  printf("População: %d\n", resultadoPopulacao);

  printf("Área: %d\n", resultadoArea);

  printf("PIB: %d\n", resultadoPib);

  printf("Pontos Turísticos: %d\n", resultadoPontosTuristicos);

  printf("Densidade Populacional: %d\n", resultadoDensPopulacional);

  printf("PIB per Capita: %d\n", resultadoPibPerCapita);

  printf("Super Poder: %d\n", resultadoSuperPoder);
  

  return 0;
}