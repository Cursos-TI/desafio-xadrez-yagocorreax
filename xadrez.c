#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    #include <stdio.h>

int main() {

    // =========================
    // TORRE (for)
    // Movimento: 5 casas para a direita
    // =========================
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // =========================
    // BISPO (while)
    // Movimento: 5 casas na diagonal (Cima + Direita)
    // =========================
    printf("\nMovimento do Bispo:\n");

    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // =========================
    // RAINHA (do-while)
    // Movimento: 8 casas para a esquerda
    // =========================
    printf("\nMovimento da Rainha:\n");

    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}

    return 0;
}
