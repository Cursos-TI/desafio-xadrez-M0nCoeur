#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Lucas Ferreira

int main() {
    // Movimentação da Torre (5 casas para a direita) usando "for"
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação do Bispo (5 casas na diagonal para cima e direita) usando "while"
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda) usando "do-while"
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    // Movimentação do Cavalo (2 casas para baixo, 1 para a esquerda) usando "loops aninhados"
    printf("Movimento do Cavalo:\n");
    
    // Loop para as 2 casas para baixo usando "for"
    for (int a = 1; a <= 2; a++) {
        printf("Baixo\n");
    }

    // Loop para 1 casa para a esquerda usando "while"
    int b = 1;
    while (b <= 1) {
        printf("Esquerda\n");
        b++;
    }

    return 0;
}