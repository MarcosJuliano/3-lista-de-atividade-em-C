/*
25. Faça um programa para determinar a próxima jogada em um Jogo da Velha.

Assuma que o tabuleiro é representado por uma matriz 3x3, onde cada posição representa uma casa do tabuleiro.

A matriz pode conter os seguintes valores:
-1 → casa com uma peça minha
 0 → casa vazia
 1 → casa com peça do oponente

Exemplo de tabuleiro:

-1  1  1
-1 -1  0
 0  1  0
*/
#include <stdio.h>

int main() {
    int tab[3][3];
    int i, j, jogada_feita = 0;

    printf("Entre com o estado do tabuleiro (3x3) usando -1, 0 ou 1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &tab[i][j]);
        }
    }
    
    int alvo;
    for (alvo = -2; alvo <= 2 && !jogada_feita; alvo += 4) {
        
        for (i = 0; i < 3 && !jogada_feita; i++) {
            if (tab[i][0] + tab[i][1] + tab[i][2] == alvo) {
                for (j = 0; j < 3; j++) {
                    if (tab[i][j] == 0) {
                        printf("Sugestao: Jogar na Linha %d, Coluna %d\n", i, j);
                        jogada_feita = 1;
                        break;
                    }
                }
            }
        }

        for (j = 0; j < 3 && !jogada_feita; j++) {
            if (tab[0][j] + tab[1][j] + tab[2][j] == alvo) {
                for (i = 0; i < 3; i++) {
                    if (tab[i][j] == 0) {
                        printf("Sugestao: Jogar na Linha %d, Coluna %d\n", i, j);
                        jogada_feita = 1;
                        break;
                    }
                }
            }
        }
    }

    if (!jogada_feita) {
        if (tab[1][1] == 0) {
            printf("Sugestao: Jogar no Centro (1, 1)\n");
        } else {
            for (i = 0; i < 3 && !jogada_feita; i++) {
                for (j = 0; j < 3; j++) {
                    if (tab[i][j] == 0) {
                        printf("Sugestao: Jogar na primeira casa vazia (%d, %d)\n", i, j);
                        jogada_feita = 1;
                        break;
                    }
                }
            }
        }
    }

    if (!jogada_feita) printf("Nao ha jogadas disponiveis (Empate).\n");

    return 0;
}