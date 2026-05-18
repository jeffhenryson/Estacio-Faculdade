#include <stdio.h>
#include <string.h>

int main() {
    // =========================================================
    // DECLARAÇÃO DAS CARTAS
    // Os dados são inseridos pelo usuário via scanf
    // =========================================================

    // --- Carta 1 ---
    char estado1[3], codigo1[5], nome1[50];
    int  populacao1, pontos_turisticos1;
    float area1, pib1;

    // --- Carta 2 ---
    char estado2[3], codigo2[5], nome2[50];
    int  populacao2, pontos_turisticos2;
    float area2, pib2;

    // =========================================================
    // CADASTRO DA CARTA 1
    // =========================================================

    printf("========================================\n");
    printf("        CADASTRO - CARTA 1\n");
    printf("========================================\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado1);
    printf("Código da carta: ");
    scanf("%4s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em milhões R$): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // =========================================================
    // CADASTRO DA CARTA 2
    // =========================================================

    printf("\n========================================\n");
    printf("        CADASTRO - CARTA 2\n");
    printf("========================================\n");
    printf("Estado (sigla): ");
    scanf("%2s", estado2);
    printf("Código da carta: ");
    scanf("%4s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em milhões R$): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // =========================================================
    // CÁLCULOS DERIVADOS
    // Densidade Populacional = Populacao / Area
    // PIB per Capita         = PIB / Populacao
    // =========================================================

    float densidade1      = (float)populacao1 / area1;
    float pib_per_capita1 = pib1 / (float)populacao1;

    float densidade2      = (float)populacao2 / area2;
    float pib_per_capita2 = pib2 / (float)populacao2;

    // =========================================================
    // EXIBIÇÃO DAS CARTAS CADASTRADAS
    // =========================================================

    printf("\n========================================\n");
    printf("       SUPER TRUNFO - CIDADES\n");
    printf("========================================\n\n");

    printf("[ CARTA 1 - %s / %s ]\n", nome1, estado1);
    printf("  Código               : %s\n",               codigo1);
    printf("  1. População         : %d hab\n",           populacao1);
    printf("  2. Área              : %.2f km²\n",         area1);
    printf("  3. PIB               : R$ %.2f mi\n",       pib1);
    printf("  4. Pontos Turísticos : %d\n",               pontos_turisticos1);
    printf("  5. Densidade Pop.    : %.2f hab/km²\n",     densidade1);
    printf("  6. PIB per Capita    : R$ %.4f mi/hab\n\n", pib_per_capita1);

    printf("[ CARTA 2 - %s / %s ]\n", nome2, estado2);
    printf("  Código               : %s\n",               codigo2);
    printf("  1. População         : %d hab\n",           populacao2);
    printf("  2. Área              : %.2f km²\n",         area2);
    printf("  3. PIB               : R$ %.2f mi\n",       pib2);
    printf("  4. Pontos Turísticos : %d\n",               pontos_turisticos2);
    printf("  5. Densidade Pop.    : %.2f hab/km²\n",     densidade2);
    printf("  6. PIB per Capita    : R$ %.4f mi/hab\n\n", pib_per_capita2);

    // =========================================================
    // MENU INTERATIVO
    // O usuário escolhe o atributo para comparação
    // =========================================================

    int opcao;

    printf("========================================\n");
    printf("  Escolha o atributo para comparar:\n");
    printf("  1 - População\n");
    printf("  2 - Área\n");
    printf("  3 - PIB\n");
    printf("  4 - Pontos Turísticos\n");
    printf("  5 - Densidade Populacional\n");
    printf("  6 - PIB per Capita\n");
    printf("========================================\n");
    printf("  Opção: ");
    scanf("%d", &opcao);
    printf("\n========================================\n");

    // =========================================================
    // COMPARAÇÃO: switch por atributo + if-else aninhado
    //
    // Regra geral  : maior valor vence
    // Regra especial (case 5): menor valor vence (densidade)
    // =========================================================

    switch (opcao) {

        case 1: // --- POPULAÇÃO ---
            printf("  Comparação: POPULAÇÃO\n");
            printf("  %s (%s): %d hab\n",  nome1, estado1, populacao1);
            printf("  %s (%s): %d hab\n",  nome2, estado2, populacao2);
            printf("  Resultado: ");
            if (populacao1 > populacao2) {
                printf("Carta 1 (%s) venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // --- ÁREA ---
            printf("  Comparação: ÁREA\n");
            printf("  %s (%s): %.2f km²\n", nome1, estado1, area1);
            printf("  %s (%s): %.2f km²\n", nome2, estado2, area2);
            printf("  Resultado: ");
            if (area1 > area2) {
                printf("Carta 1 (%s) venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // --- PIB ---
            printf("  Comparação: PIB\n");
            printf("  %s (%s): R$ %.2f mi\n", nome1, estado1, pib1);
            printf("  %s (%s): R$ %.2f mi\n", nome2, estado2, pib2);
            printf("  Resultado: ");
            if (pib1 > pib2) {
                printf("Carta 1 (%s) venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // --- PONTOS TURÍSTICOS ---
            printf("  Comparação: PONTOS TURÍSTICOS\n");
            printf("  %s (%s): %d pontos\n", nome1, estado1, pontos_turisticos1);
            printf("  %s (%s): %d pontos\n", nome2, estado2, pontos_turisticos2);
            printf("  Resultado: ");
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Carta 1 (%s) venceu!\n", nome1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // --- DENSIDADE POPULACIONAL (menor vence) ---
            printf("  Comparação: DENSIDADE POPULACIONAL\n");
            printf("  (regra especial: menor valor vence)\n");
            printf("  %s (%s): %.2f hab/km²\n", nome1, estado1, densidade1);
            printf("  %s (%s): %.2f hab/km²\n", nome2, estado2, densidade2);
            printf("  Resultado: ");
            if (densidade1 < densidade2) {
                printf("Carta 1 (%s) venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // --- PIB PER CAPITA ---
            printf("  Comparação: PIB PER CAPITA\n");
            printf("  %s (%s): R$ %.4f mi/hab\n", nome1, estado1, pib_per_capita1);
            printf("  %s (%s): R$ %.4f mi/hab\n", nome2, estado2, pib_per_capita2);
            printf("  Resultado: ");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Carta 1 (%s) venceu!\n", nome1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        // --- OPÇÃO INVÁLIDA ---
        default:
            printf("  Opção inválida! Escolha entre 1 e 6.\n");
            break;
    }

    printf("========================================\n");

    return 0;
}