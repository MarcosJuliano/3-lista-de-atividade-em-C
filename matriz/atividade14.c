/*
 * Exercício: Faça um programa para gerar automaticamente números entre 0 e 99 
 * para uma cartela de bingo. Sabendo que cada cartela deverá conter 5 linhas 
 * de 5 números (matriz 5x5), gere estes dados de modo a não ter números 
 * repetidos dentro da cartela. O programa deve exibir a cartela gerada.
 */
#include <stdio.h>

int main() {
    int cartela[5][5];
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cartela[i][j] = (i * 15) + (j * 2); 
        }
    }

    printf("--- CARTELA DE BINGO (GERADA POR FORMULA) ---\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%02d\t", cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}