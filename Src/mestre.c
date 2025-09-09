
#include <stdio.h>

/*
 * DESAFIO CARTAS SUPER TRUNFO — Nível MESTRE
 * - Mantém atributos e cálculos do Aventureiro
 * - Populacao agora é unsigned long int (para números grandes)
 * - Implementa comparação atributo a atributo usando operadores relacionais
 * - Super Poder = soma de TODAS as propriedades (básicas + calculadas), sem inversão de densidade (conforme enunciado revisado)
 * - Aqui podemos (e devemos) validar divisões por zero.
 */

typedef struct {
    char codigo[4];
    unsigned long int populacao; // números grandes não negativos
    float area;
    float pib;
    int pontos;
    double densidade;      // calculada
    double pib_per_capita; // calculada
    double super_poder;    // soma de todas as propriedades
} Carta;

int main(void) {
    Carta c1, c2;

    // ===== Entrada Carta 1 =====
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

    // Cálculos seguros (evita divisão por zero)
    c1.densidade     = (c1.area > 0.0f)        ? ( (double)c1.populacao / (double)c1.area ) : 0.0;
    c1.pib_per_capita= (c1.populacao > 0UL)    ? ( (double)c1.pib       / (double)c1.populacao ) : 0.0;

    // Super Poder = soma de todas as propriedades (sem inversão de densidade)
    c1.super_poder =
        (double)c1.populacao +
        (double)c1.area +
        (double)c1.pib +
        (double)c1.pontos +
        c1.densidade +
        c1.pib_per_capita;

    // ===== Entrada Carta 2 =====
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

    // Cálculos seguros
    c2.densidade      = (c2.area > 0.0f)        ? ( (double)c2.populacao / (double)c2.area ) : 0.0;
    c2.pib_per_capita = (c2.populacao > 0UL)    ? ( (double)c2.pib       / (double)c2.populacao ) : 0.0;

    // Super Poder
    c2.super_poder =
        (double)c2.populacao +
        (double)c2.area +
        (double)c2.pib +
        (double)c2.pontos +
        c2.densidade +
        c2.pib_per_capita;

    // ===== Saída dos dados =====
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

    // ===== Comparações — 1 se Carta 1 vence, 0 se Carta 2 vence =====
    // Densidade: menor vence; demais: maior vence
    printf("\n=== Resultado das Comparacoes (1 = Carta 1 vence, 0 = Carta 2 vence) ===\n");
    printf("Populacao: %d\n", (c1.populacao > c2.populacao));
    printf("Area: %d\n", (c1.area > c2.area));
    printf("PIB: %d\n", (c1.pib > c2.pib));
    printf("Pontos Turisticos: %d\n", (c1.pontos > c2.pontos));
    printf("Densidade Populacional (menor vence): %d\n", (c1.densidade < c2.densidade));
    printf("PIB per capita: %d\n", (c1.pib_per_capita > c2.pib_per_capita));
    printf("Super Poder: %d\n", (c1.super_poder > c2.super_poder));

    return 0;
}
