#include <stdio.h>

int main() {
    // Carta 1 
    char estado1;
    char codigo1[5];
    char cidade1[100];
    int populacao1;
    float area1;
    double pib1; // em bilhões de reais
    int pontos1;
    double densidade1;
    double pibpc1; // PIB per capita em reais

    // Carta 2 
    char estado2;
    char codigo2[5];
    char cidade2[100];
    int populacao2;
    float area2;
    double pib2;
    int pontos2;
    double densidade2;
    double pibpc2;

    // Leitura carta 1
    printf("========================================\n");
    printf("   SUPER TRUNFO - CADASTRO DE CARTAS\n");
    printf("========================================\n\n");
    printf("--- Cadastro da Carta 1 ---\n\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);
    densidade1 = (double)populacao1 / (double)area1;
    pibpc1 = (pib1 * 1000000000.0) / (double)populacao1;

    // Leitura carta 2
    printf("\n--- Cadastro da Carta 2 ---\n\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);
    densidade2 = (double)populacao2 / (double)area2;
    pibpc2 = (pib2 * 1000000000.0) / (double)populacao2;

    // Exibicao
    printf("\n========================================\n");
    printf("         CARTAS CADASTRADAS\n");
    printf("========================================\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("\n========================================\n");

    return 0;
}