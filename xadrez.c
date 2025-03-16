#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Lucas Ferreira

// Função recursiva para a Torre (move para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o Bispo (move na diagonal para cima e direita)
void moverBispo(int casas, int movAtual) {
    if (movAtual > casas) return;
    printf("Cima, Direita\n");
    moverBispo(casas, movAtual + 1);
}

// Função recursiva para a Rainha (move para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimentação do Bispo
void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo:\n");
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

// Movimentação do Cavalo (2 casas para cima, 1 para a direita)
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    int movimentos = 0;
    
    for (int i = 0; i < 2; i++) { // Duas casas para cima
        printf("Cima\n");
        movimentos++;
    }
    
    int j = 0;
    while (j < 1) { // Uma casa para a direita
        printf("Direita\n");
        j++;
        movimentos++;
    }

    // Controle do fluxo com break (apenas para demonstrar uso)
    if (movimentos == 3) {
        printf("Movimento do Cavalo finalizado!\n");
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 1);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    moverBispoComLoops(5); // Bispo com loops aninhados
    moverCavalo(); // Cavalo com loops complexos

    return 0;
}
