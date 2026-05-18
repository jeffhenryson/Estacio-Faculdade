#include <stdio.h>

// =========================================================
// PROTÓTIPOS DE FUNÇÕES AUXILIARES
// =========================================================

// Retorna o valor do atributo indicado (normalizado para float)
// Para densidade, o valor já vem invertido (negativo) para que
// a lógica de "maior soma vence" funcione sem exceção especial
float obter_valor(int atributo,
                  int pop, float area, float pib,
                  int pontos, float densidade, float pib_pc);

// Retorna o nome do atributo pelo número
const char* nome_atributo(int atributo);

// Exibe o menu filtrando o atributo já escolhido
void exibir_menu(int excluir);

// =========================================================
// MAIN
// =========================================================

int main() {

    // =====================================================
    // DADOS PRÉ-CADASTRADOS DAS CARTAS
    // =====================================================

    // --- Carta 1 ---
    char estado1[3]  = "SP";
    char nome1[50]   = "São Paulo";
    int  pop1        = 12300000;
    float area1      = 1521.11f;
    float pib1       = 748800.0f;
    int  pontos1     = 15;
    float dens1      = (float)pop1 / area1;
    float pib_pc1    = pib1 / (float)pop1;

    // --- Carta 2 ---
    char estado2[3]  = "RJ";
    char nome2[50]   = "Rio de Janeiro";
    int  pop2        = 6211000;
    float area2      = 1200.33f;
    float pib2       = 390000.0f;
    int  pontos2     = 12;
    float dens2      = (float)pop2 / area2;
    float pib_pc2    = pib2 / (float)pop2;

    // =====================================================
    // EXIBIÇÃO DAS CARTAS
    // =====================================================

    printf("╔══════════════════════════════════════════╗\n");
    printf("║       SUPER TRUNFO  —  NÍVEL MESTRE      ║\n");
    printf("╚══════════════════════════════════════════╝\n\n");

    printf("┌──────────────────────────────────────────┐\n");
    printf("│  CARTA 1  —  %s / %s\n", nome1, estado1);
    printf("├──────────────────────────────────────────┤\n");
    printf("│  1. População         : %d hab\n",         pop1);
    printf("│  2. Área              : %.2f km²\n",       area1);
    printf("│  3. PIB               : R$ %.2f mi\n",     pib1);
    printf("│  4. Pontos Turísticos : %d\n",             pontos1);
    printf("│  5. Densidade Pop.    : %.2f hab/km²\n",   dens1);
    printf("│  6. PIB per Capita    : R$ %.4f mi/hab\n", pib_pc1);
    printf("└──────────────────────────────────────────┘\n\n");

    printf("┌──────────────────────────────────────────┐\n");
    printf("│  CARTA 2  —  %s / %s\n", nome2, estado2);
    printf("├──────────────────────────────────────────┤\n");
    printf("│  1. População         : %d hab\n",         pop2);
    printf("│  2. Área              : %.2f km²\n",       area2);
    printf("│  3. PIB               : R$ %.2f mi\n",     pib2);
    printf("│  4. Pontos Turísticos : %d\n",             pontos2);
    printf("│  5. Densidade Pop.    : %.2f hab/km²\n",   dens2);
    printf("│  6. PIB per Capita    : R$ %.4f mi/hab\n", pib_pc2);
    printf("└──────────────────────────────────────────┘\n\n");

    // =====================================================
    // SELEÇÃO DO 1º ATRIBUTO
    // =====================================================

    int opcao1 = 0;

    printf("══════════════════════════════════════════\n");
    printf("  ESCOLHA O 1º ATRIBUTO PARA COMPARAÇÃO\n");
    printf("══════════════════════════════════════════\n");

    // Exibe menu completo (sem exclusão)
    exibir_menu(0);
    printf("  Opção: ");
    scanf("%d", &opcao1);

    // Valida entrada — repete até opção válida (1–6)
    while (opcao1 < 1 || opcao1 > 6) {
        printf("  ✗ Opção inválida! Escolha entre 1 e 6.\n");
        printf("  Opção: ");
        scanf("%d", &opcao1);
    }

    // =====================================================
    // SELEÇÃO DO 2º ATRIBUTO (exclui o 1º do menu)
    // =====================================================

    int opcao2 = 0;

    printf("\n══════════════════════════════════════════\n");
    printf("  ESCOLHA O 2º ATRIBUTO PARA COMPARAÇÃO\n");
    printf("  (atributo anterior já utilizado: %s)\n", nome_atributo(opcao1));
    printf("══════════════════════════════════════════\n");

    // Menu dinâmico: omite a opção já escolhida
    exibir_menu(opcao1);
    printf("  Opção: ");
    scanf("%d", &opcao2);

    // Valida: deve ser 1–6, diferente de opcao1
    while (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
        if (opcao2 == opcao1) {
            printf("  ✗ Atributo já escolhido! Selecione outro.\n");
        } else {
            printf("  ✗ Opção inválida! Escolha entre 1 e 6.\n");
        }
        printf("  Opção: ");
        scanf("%d", &opcao2);
    }

    // =====================================================
    // OBTENÇÃO DOS VALORES PARA CADA ATRIBUTO ESCOLHIDO
    //
    // A função obter_valor() já aplica a regra especial da
    // densidade retornando o valor NEGADO, de forma que
    // "maior soma vence" funciona sem if especial depois.
    // =====================================================

    float v1_attr1 = obter_valor(opcao1, pop1, area1, pib1, pontos1, dens1, pib_pc1);
    float v1_attr2 = obter_valor(opcao2, pop1, area1, pib1, pontos1, dens1, pib_pc1);

    float v2_attr1 = obter_valor(opcao1, pop2, area2, pib2, pontos2, dens2, pib_pc2);
    float v2_attr2 = obter_valor(opcao2, pop2, area2, pib2, pontos2, dens2, pib_pc2);

    // Soma dos dois atributos por carta
    float soma1 = v1_attr1 + v1_attr2;
    float soma2 = v2_attr1 + v2_attr2;

    // =====================================================
    // EXIBIÇÃO DO RESULTADO
    // =====================================================

    printf("\n╔══════════════════════════════════════════╗\n");
    printf("║           RESULTADO DA PARTIDA           ║\n");
    printf("╚══════════════════════════════════════════╝\n\n");

    // --- Atributo 1 ---
    printf("  [ %s ]\n", nome_atributo(opcao1));

    // Operador ternário para exibir valores originais (sem negação)
    // —— só para exibição; a lógica de vencedor usa os valores internos
    printf("  %s: %.4f\n", nome1,
        (opcao1 == 5) ? dens1 : v1_attr1);
    printf("  %s: %.4f\n", nome2,
        (opcao1 == 5) ? dens2 : v2_attr1);
    printf("  Vencedor deste atributo: %s\n\n",
        (v1_attr1 > v2_attr1) ? nome1 :
        (v2_attr1 > v1_attr1) ? nome2 : "Empate");

    // --- Atributo 2 ---
    printf("  [ %s ]\n", nome_atributo(opcao2));
    printf("  %s: %.4f\n", nome1,
        (opcao2 == 5) ? dens1 : v1_attr2);
    printf("  %s: %.4f\n", nome2,
        (opcao2 == 5) ? dens2 : v2_attr2);
    printf("  Vencedor deste atributo: %s\n\n",
        (v1_attr2 > v2_attr2) ? nome1 :
        (v2_attr2 > v1_attr2) ? nome2 : "Empate");

    // --- Soma final ---
    printf("  ──────────────────────────────────────\n");
    printf("  SOMA DOS ATRIBUTOS\n");
    printf("  %s: %.4f\n", nome1, soma1);
    printf("  %s: %.4f\n", nome2, soma2);
    printf("\n");

    // --- Vencedor final com operador ternário ---
    printf("  ══════════════════════════════════════\n");
    printf("  VENCEDOR FINAL: %s\n",
        (soma1 > soma2) ? nome1 :
        (soma2 > soma1) ? nome2 : "EMPATE!");
    printf("  ══════════════════════════════════════\n");

    return 0;
}

// =========================================================
// IMPLEMENTAÇÃO DAS FUNÇÕES AUXILIARES
// =========================================================

// Retorna o valor do atributo normalizado para float.
// Para densidade (atributo 5), retorna o valor NEGADO para que
// "maior soma" automaticamente signifique "menor densidade".
float obter_valor(int atributo,
                  int pop, float area, float pib,
                  int pontos, float densidade, float pib_pc) {
    switch (atributo) {
        case 1: return (float)pop;
        case 2: return area;
        case 3: return pib;
        case 4: return (float)pontos;
        case 5: return -densidade;   // inversão da regra especial
        case 6: return pib_pc;
        default: return 0.0f;
    }
}

// Retorna o nome legível do atributo pelo número do menu
const char* nome_atributo(int atributo) {
    switch (atributo) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Populacional";
        case 6: return "PIB per Capita";
        default: return "Desconhecido";
    }
}

// Exibe o menu pulando o atributo indicado em `excluir`
// Se excluir == 0, exibe todas as opções (menu completo)
void exibir_menu(int excluir) {
    const char* opcoes[] = {
        "",                       // índice 0 não usado
        "População",
        "Área",
        "PIB",
        "Pontos Turísticos",
        "Densidade Populacional",
        "PIB per Capita"
    };
    for (int i = 1; i <= 6; i++) {
        if (i != excluir) {
            printf("  %d - %s\n", i, opcoes[i]);
        }
    }
}