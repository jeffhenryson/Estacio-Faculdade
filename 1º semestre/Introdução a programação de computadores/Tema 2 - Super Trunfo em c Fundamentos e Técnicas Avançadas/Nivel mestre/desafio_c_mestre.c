#include <stdio.h>

int main() {
    // Carta 1
    unsigned long populacao1;
    char estado1;
    char codigo1[5];
    char cidade1[100];
    float area1;
    double pib1;
    int pontos1;

    // Carta 2
    unsigned long populacao2;
    char estado2;
    char codigo2[5];
    char cidade2[100];
    float area2;
    double pib2;
    int pontos2;

    // Derived values
    double densidade1, densidade2;
    double pibpc1, pibpc2; // PIB per capita
    double poder1, poder2; // Super Poder

    // Leitura Carta 1
    printf("========================================\n");
    printf("   SUPER TRUNFO - BATALHA DE CARTAS\n");
    printf("========================================\n\n");
    printf("--- Carta 1 ---\n\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // leitura com espaços (até newline)

    // Ajuste de leitura simplificado para cidades com espaços
    // Reposiciona o buffer e lê até o newline
    getchar();
    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Leitura Carta 2
    printf("\n--- Carta 2 ---\n\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar();
    scanf(" %[^\\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%lf", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = (double)populacao1 / (double)area1;
    pibpc1 = (pib1 * 1e9) / (double)populacao1;
    poder1 = (double)populacao1 + (double)area1 + pib1 + (double)pontos1 + pibpc1 + (1.0 / densidade1);

    densidade2 = (double)populacao2 / (double)area2;
    pibpc2 = (pib2 * 1e9) / (double)populacao2;
    poder2 = (double)populacao2 + (double)area2 + pib2 + (double)pontos2 + pibpc2 + (1.0 / densidade2);

    // Comparações
    int winPop = (populacao1 > populacao2) ? 1 : 0;
    int winArea = (area1 > area2) ? 1 : 0;
    int winPib = (pib1 > pib2) ? 1 : 0;
    int winPontos = (pontos1 > pontos2) ? 1 : 0;
    int winDens = (densidade1 < densidade2) ? 1 : 0;
    int winPibpc = (pibpc1 > pibpc2) ? 1 : 0;
    int winPoder = (poder1 > poder2) ? 1 : 0;

    // Exibir resultados
    printf("\nComparação de Cartas:\n\n");
    printf("População: %s venceu (%d)\n\n", (winPop ? "Carta 1" : "Carta 2"), winPop);
    printf("Área: %s venceu (%d)\n\n", (winArea ? "Carta 1" : "Carta 2"), winArea);
    printf("PIB: %s venceu (%d)\n\n", (winPib ? "Carta 1" : "Carta 2"), winPib);
    printf("Pontos Turísticos: %s venceu (%d)\n\n", (winPontos ? "Carta 1" : "Carta 2"), winPontos);
    printf("Densidade Populacional: %s venceu (%d)\n\n", (winDens ? "Carta 1" : "Carta 2"), winDens);
    printf("PIB per Capita: %s venceu (%d)\n\n", (winPibpc ? "Carta 1" : "Carta 2"), winPibpc);
    printf("Super Poder: %s venceu (%d)\n\n", (winPoder ? "Carta 1" : "Carta 2"), winPoder);

    return 0;
}
