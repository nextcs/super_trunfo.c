#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2;

    float densidade1, densidade2;
    float pibper1, pibper2;
    float superpoder1, superpoder2;
   

    // --- Entrada de dados da Carta 1 ---
    printf("Digite as informações da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);  
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1); 
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em milhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1); 

    printf("\n");

    // --- Entrada de dados da Carta 2 ---
    printf("Digite as informações da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);  
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);  
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em milhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2); 


    // --- calculos ---
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibper1 = pib1 * 1000000 / populacao1; // pib esta em milhoes
    pibper2 = pib2 * 1000000 / populacao2;

    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibper1 + (1.0f / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibper2 + (1.0f / densidade2);

   
    // Exibição dos dados das cartas 
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("densidade populacional: %.2f\n", densidade1);
    printf("pib per capita: R$ %.2f\n", pibper1);
    printf("supor poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("densidade populcional: %.2f\n", densidade2);
    printf("pib per capita: R$ %.2f\n", pibper2);
    printf("super poder: %.2f\n", superpoder2);

    // comparacoes
    printf("\nresultados das comparacoes (1 = carta1 vence, 0 carta2 vence): \n");

    printf("populacao: %d\n", populacao1 > populacao2);
    printf("area: %d\n", area1 > area2);
    printf("pib: %d\n", pib1 > pib2);
    printf("pontos turisticos: %d\n", pontos1 > pontos2);
    printf("densidade populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("super poder: %d\n",superpoder1 > superpoder2);


    return 0;
}

