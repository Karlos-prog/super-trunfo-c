#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    long populacao;
    float area;
    float pib;
    float densidade;
} Carta;

void mostrarMenu(int excluido) {
    if (excluido != 1) printf("1 - População\n");
    if (excluido != 2) printf("2 - Área\n");
    if (excluido != 3) printf("3 - PIB\n");
    if (excluido != 4) printf("4 - Densidade Demográfica\n");
}

float obterValor(Carta c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.densidade;
        default: return 0;
    }
}

int comparar(float v1, float v2, int atributo) {
    // Densidade: menor vence
    if (atributo == 4)
        return (v1 < v2) ? 1 : (v1 > v2) ? -1 : 0;

    // Demais: maior vence
    return (v1 > v2) ? 1 : (v1 < v2) ? -1 : 0;
}

int main() {
    Carta c1 = {"Brasil", 203000000, 8515767, 1900, 23.8};
    Carta c2 = {"Argentina", 45000000, 2780400, 640, 16.2};

    int a1, a2;

    printf("Escolha o PRIMEIRO atributo:\n");
    mostrarMenu(0);
    scanf("%d", &a1);

    printf("\nEscolha o SEGUNDO atributo:\n");
    mostrarMenu(a1);
    scanf("%d", &a2);

    if (a1 == a2 || a1 < 1 || a1 > 4 || a2 < 1 || a2 > 4) {
        printf("Opção inválida!\n");
        return 0;
    }

    float v1a = obterValor(c1, a1);
    float v2a = obterValor(c2, a1);
    float v1b = obterValor(c1, a2);
    float v2b = obterValor(c2, a2);

    int r1 = comparar(v1a, v2a, a1);
    int r2 = comparar(v1b, v2b, a2);

    float soma1 = v1a + v1b;
    float soma2 = v2a + v2b;

    printf("\n===== RESULTADO =====\n");
    printf("%s: %.2f | %.2f | Soma: %.2f\n", c1.nome, v1a, v1b, soma1);
    printf("%s: %.2f | %.2f | Soma: %.2f\n", c2.nome, v2a, v2b, soma2);

    if (soma1 > soma2)
        printf("🏆 Vencedor: %s\n", c1.nome);
    else if (soma2 > soma1)
        printf("🏆 Vencedor: %s\n", c2.nome);
    else
        printf("🤝 Empate!\n");

    return 0;
}
