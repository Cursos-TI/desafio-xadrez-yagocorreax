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
} // =========================
// CAVALO (loops aninhados)
// =========================
printf("\nMovimento do Cavalo:\n");

// Loop externo (for)
for (int i = 1; i <= 1; i++) {

    // Loop interno (while) → 2 casas para baixo
    int baixo = 1;
    while (baixo <= 2) {
        printf("Baixo\n");
        baixo++;
    }

    // Movimento final → 1 casa para esquerda
    printf("Esquerda\n");
} // =========================
// TORRE (recursividade)
// =========================
void moverTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// =========================
// RAINHA (recursividade)
// =========================
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =========================
// BISPO (recursividade + loops aninhados)
// =========================
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop externo (vertical)
    for (int i = 0; i < 1; i++) {

        // Loop interno (horizontal)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// =========================
// USO DAS FUNÇÕES
// =========================
printf("\nMovimento da Torre:\n");
moverTorre(5);

printf("\nMovimento do Bispo:\n");
moverBispo(5);

printf("\nMovimento da Rainha:\n");
moverRainha(8);

// =========================
// CAVALO (loops complexos)
// =========================
printf("\nMovimento do Cavalo:\n");

// Loop externo (2 casas para cima)
for (int i = 1; i <= 2; i++) {

    if (i <= 0) continue; // controle de fluxo

    printf("Cima\n");

    // Após subir 2 casas, move 1 para direita
    if (i == 2) {
        for (int j = 1; j <= 1; j++) {

            if (j > 1) break; // controle de fluxo

            printf("Direita\n");
        }
    }
}

    return 0;
}
