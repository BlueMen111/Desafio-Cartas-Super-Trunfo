
#include <stdio.h>

/*
 * Nível NOVATO — Cadastro básico de 2 cartas (sem laços/condicionais).
 * Lê e exibe: código, população, área, PIB e pontos turísticos.
 * Observação: uso apenas de scanf/printf conforme o enunciado.
 */

// Estrutura (struct) que representa a carta de uma cidade.
typedef struct {
    char codigo[4];          // Código da carta (ex.: A01, B01 ...) — 3 chars + '\0'
    int populacao;           // População (int)
    float area;              // Área (float) — unidade livre (ex.: km²)
    float pib;               // PIB (float) — unidade livre (ex.: bilhões)
    int pontos_turisticos;   // Número de pontos turísticos (int)
} Carta;

int main(void) {
    Carta c1, c2; // Duas cartas, como pede o nível Novato

    // ===== Entrada (Carta 1) =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", c1.codigo); // lê até 3 caracteres
    printf("Populacao (int): ");
    scanf("%d", &c1.populacao);
    printf("Area (float): ");
    scanf("%f", &c1.area);
    printf("PIB (float): ");
    scanf("%f", &c1.pib);
    printf("Numero de pontos turisticos (int): ");
    scanf("%d", &c1.pontos_turisticos);

    // ===== Entrada (Carta 2) =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", c2.codigo);
    printf("Populacao (int): ");
    scanf("%d", &c2.populacao);
    printf("Area (float): ");
    scanf("%f", &c2.area);
    printf("PIB (float): ");
    scanf("%f", &c2.pib);
    printf("Numero de pontos turisticos (int): ");
    scanf("%d", &c2.pontos_turisticos);

    // ===== Saída organizada (cada propriedade em uma linha) =====
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area: %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos Turisticos: %d\n", c1.pontos_turisticos);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area: %.2f\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos Turisticos: %d\n", c2.pontos_turisticos);

    return 0; // Programa finaliza normalmente
}
