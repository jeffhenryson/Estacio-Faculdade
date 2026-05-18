#include <stdio.h>
#include <string.h>

int main() {
    // =========================================================
    // DECLARAÇÃO DAS CARTAS
    // Cada carta representa uma cidade com seus atributos
    // =========================================================

    // --- Carta 1 ---
    char estado1[3]       = "SP";
    char codigo1[5]       = "SP01";
    char nome1[50]        = "São Paulo";
    int  populacao1       = 12300000;
    float area1           = 1521.11;
    float pib1            = 748800.0;   // em milhões de R$
    int  pontos_turisticos1 = 15;

    // --- Carta 2 ---
    char estado2[3]       = "RJ";
    char codigo2[5]       = "RJ01";
    char nome2[50]        = "Rio de Janeiro";
    int  populacao2       = 6211000;
    float area2           = 1200.33;
    float pib2            = 390000.0;   // em milhões de R$
    int  pontos_turisticos2 = 12;

    // =========================================================
    // CÁLCULOS DERIVADOS
    // Densidade Populacional = Populacao / Area
    // PIB per Capita         = PIB / Populacao
    // =========================================================

    float densidade1     = (float)populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    float densidade2     = (float)populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // =========================================================
    // EXIBIÇÃO DOS DADOS DAS CARTAS
    // =========================================================

    printf("========================================\n");
    printf("         SUPER TRUNFO - CIDADES         \n");
    printf("========================================\n\n");

    printf("[ CARTA 1 ]\n");
    printf("  Estado              : %s\n", estado1);
    printf("  Código              : %s\n", codigo1);
    printf("  Cidade              : %s\n", nome1);
    printf("  População           : %d hab\n", populacao1);
    printf("  Área                : %.2f km²\n", area1);
    printf("  PIB                 : R$ %.2f milhões\n", pib1);
    printf("  Pontos Turísticos   : %d\n", pontos_turisticos1);
    printf("  Densidade Pop.      : %.2f hab/km²\n", densidade1);
    printf("  PIB per Capita      : R$ %.6f milhões/hab\n\n", pib_per_capita1);

    printf("[ CARTA 2 ]\n");
    printf("  Estado              : %s\n", estado2);
    printf("  Código              : %s\n", codigo2);
    printf("  Cidade              : %s\n", nome2);
    printf("  População           : %d hab\n", populacao2);
    printf("  Área                : %.2f km²\n", area2);
    printf("  PIB                 : R$ %.2f milhões\n", pib2);
    printf("  Pontos Turísticos   : %d\n", pontos_turisticos2);
    printf("  Densidade Pop.      : %.2f hab/km²\n", densidade2);
    printf("  PIB per Capita      : R$ %.6f milhões/hab\n\n", pib_per_capita2);

    // =========================================================
    // COMPARAÇÃO
    // Atributo escolhido diretamente no código: POPULAÇÃO
    // Regra: maior valor vence (exceto Densidade Populacional,
    // onde o MENOR valor vence)
    // =========================================================

    printf("========================================\n");
    printf("  Comparação de Cartas (Atributo: População)\n");
    printf("========================================\n");
    printf("  Carta 1 - %s (%s): %d hab\n", nome1, estado1, populacao1);
    printf("  Carta 2 - %s (%s): %d hab\n", nome2, estado2, populacao2);
    printf("\n  Resultado: ");

    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Empate!\n");
    }

    printf("========================================\n");

    return 0;
}