/*
 * Exercício: Gere uma matriz 4x4 com valores no intervalo [1, 20]. 
 * Escreva um programa que transforme a matriz gerada em uma 
 * matriz triangular inferior, atribuindo zero a todos os 
 * elementos acima da diagonal principal. 
 * Imprima a matriz original e a matriz transformada.
 */
#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;

    printf("Digite os 16 valores da matriz (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz Original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (j > i) {
                matriz[i][j] = 0;
            }
        }
    }

    printf("\nMatriz Triangular Inferior:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}