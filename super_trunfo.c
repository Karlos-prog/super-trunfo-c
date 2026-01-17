#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pib_per_capita1;

    // ===== CARTA 2 =====
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pib_per_capita2;

    // ===== LEITURA CARTA 1 =====
    printf("Cadastro da Carta 1\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Calculos Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // ===== LEITURA CARTA 2 =====
    printf("\nCadastro da Carta 2\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Calculos Carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // ===== COMPARACAO =====
    printf("\nComparacao de Cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    // Estrutura de decisao usando if / else
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
