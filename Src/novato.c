
#include <stdio.h>

/*
 * DESAFIO CARTAS SUPER TRUNFO — Nível NOVATO
 * - Cadastro de 2 cartas (cidades) com: codigo, populacao (int), area (float), pib (float), pontos (int)
 * - Entrada via scanf; saída via printf (uma propriedade por linha)
 * - Sem laços/condicionais exigidos? Aqui usamos chamadas diretas e repetidas, como permitido.
 */

typedef struct {
    char codigo[4];        // Ex.: A01, B02 (3 chars + '\0')
    int populacao;         // População (int)
    float area;            // Área (float) — unidade livre
    float pib;             // PIB (float) — unidade livre
    int pontos;            // Pontos turísticos (int)
} Carta;

int main(void) {
    Carta c1, c2;

    // ===== Entrada Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", c1.codigo);
    printf("Populacao (int): ");
    scanf("%d", &c1.populacao);
    printf("Area (float): ");
    scanf("%f", &c1.area);
    printf("PIB (float): ");
    scanf("%f", &c1.pib);
    printf("Pontos turisticos (int): ");
    scanf("%d", &c1.pontos);

    // ===== Entrada Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", c2.codigo);
    printf("Populacao (int): ");
    scanf("%d", &c2.populacao);
    printf("Area (float): ");
    scanf("%f", &c2.area);
    printf("PIB (float): ");
    scanf("%f", &c2.pib);
    printf("Pontos turisticos (int): ");
    scanf("%d", &c2.pontos);

    // ===== Saída =====
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area: %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos Turisticos: %d\n", c1.pontos);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area: %.2f\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos Turisticos: %d\n", c2.pontos);

    return 0;
}
