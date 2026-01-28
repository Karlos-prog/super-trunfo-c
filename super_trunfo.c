#include <stdio.h>

int main() {
    // Carta 1
    char pais1[] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1900.0;
    int pontos1 = 50;

    // Carta 2
    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontos2 = 30;

    // Calculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("\n=== Super Trunfo ===\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nComparacao: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nComparacao: Area\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nComparacao: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nComparacao: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("\nComparacao: Densidade Demografica\n");
            printf("%s: %.4f\n", pais1, densidade1);
            printf("%s: %.4f\n", pais2, densidade2);

            // REGRA INVERTIDA
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", pais1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}

