
#include <stdio.h>

/*
 * Nível MESTRE — Compara duas cartas usando operadores relacionais e calcula o Super Poder.
 *
 * Diferenças em relação ao Aventureiro:
 *  - Mantém densidade e PIB per capita calculados.
 *  - Super Poder = soma de TODAS as propriedades (básicas + calculadas), sem inversão da densidade.
 *  - Para comparação:
 *      * Densidade Populacional: vence o MENOR valor.
 *      * Outras propriedades e Super Poder: vence o MAIOR valor.
 *
 * Observação de tipos/precisão:
 *  - População: usamos 'unsigned long int' para permitir números grandes.
 *  - No Super Poder, fazemos cast para 'double' antes de somar unidades distintas.
 */

// Estrutura com atributos básicos + calculados + super poder
typedef struct {
    char codigo[4];
    unsigned long int populacao; // pode armazenar valores grandes (não negativos)
    float area;
    float pib;
    int pontos;
    double densidade;       // calculado
    double pib_per_capita;  // calculado
    double super_poder;     // soma de todas as propriedades
} Carta;

int main(void) {
    Carta c1, c2;

    // ===== Entrada da Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", c1.codigo);
    printf("Populacao (unsigned long int): ");
    scanf("%lu", &c1.populacao);
    printf("Area (float): ");
    scanf("%f", &c1.area);
    printf("PIB (float): ");
    scanf("%f", &c1.pib);
    printf("Pontos turisticos (int): ");
    scanf("%d", &c1.pontos);

    // Cálculos dos derivados
    c1.densidade = (double)c1.populacao / (double)c1.area;
    c1.pib_per_capita = (double)c1.pib / (double)c1.populacao;

    // Super Poder = soma de todas as propriedades (sem inversão de densidade)
    c1.super_poder =
        (double)c1.populacao +
        (double)c1.area +
        (double)c1.pib +
        (double)c1.pontos +
        c1.densidade +
        c1.pib_per_capita;

    // ===== Entrada da Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", c2.codigo);
    printf("Populacao (unsigned long int): ");
    scanf("%lu", &c2.populacao);
    printf("Area (float): ");
    scanf("%f", &c2.area);
    printf("PIB (float): ");
    scanf("%f", &c2.pib);
    printf("Pontos turisticos (int): ");
    scanf("%d", &c2.pontos);

    // Cálculos dos derivados
    c2.densidade = (double)c2.populacao / (double)c2.area;
    c2.pib_per_capita = (double)c2.pib / (double)c2.populacao;

    // Super Poder = soma de todas as propriedades
    c2.super_poder =
        (double)c2.populacao +
        (double)c2.area +
        (double)c2.pib +
        (double)c2.pontos +
        c2.densidade +
        c2.pib_per_capita;

    // ===== Saída dos dados detalhados =====
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Populacao: %lu\n", c1.populacao);
    printf("Area: %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos Turisticos: %d\n", c1.pontos);
    printf("Densidade Populacional: %.6f\n", c1.densidade);
    printf("PIB per capita: %.6f\n", c1.pib_per_capita);
    printf("Super Poder: %.6f\n", c1.super_poder);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Populacao: %lu\n", c2.populacao);
    printf("Area: %.2f\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos Turisticos: %d\n", c2.pontos);
    printf("Densidade Populacional: %.6f\n", c2.densidade);
    printf("PIB per capita: %.6f\n", c2.pib_per_capita);
    printf("Super Poder: %.6f\n", c2.super_poder);

    // ===== Comparações — usando operadores relacionais (1 se Carta 1 vence, 0 se Carta 2 vence) =====
    // Dica: expressões (A > B) já produzem 1 (verdadeiro) ou 0 (falso).
    printf("\n=== Resultado das Comparacoes (1 = Carta 1 vence, 0 = Carta 2 vence) ===\n");
    printf("Populacao: %d\n", (c1.populacao > c2.populacao));
    printf("Area: %d\n", (c1.area > c2.area));
    printf("PIB: %d\n", (c1.pib > c2.pib));
    printf("Pontos Turisticos: %d\n", (c1.pontos > c2.pontos));
    printf("Densidade Populacional (menor vence): %d\n", (c1.densidade < c2.densidade)); // menor vence
    printf("PIB per capita: %d\n", (c1.pib_per_capita > c2.pib_per_capita));
    printf("Super Poder (maior vence): %d\n", (c1.super_poder > c2.super_poder));

    return 0;
}
