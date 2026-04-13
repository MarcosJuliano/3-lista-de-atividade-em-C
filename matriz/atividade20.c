/*
Faça um programa que leia uma matriz 3 x 6 com valores reais.
(a) Imprima a soma de todos os elementos das colunas ímpares.
(b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
(d) Imprima a matriz modificada.
*/
#include <stdio.h>

int main() {
    float matriz[3][6];
    float soma_impares = 0;
    float soma_2_4 = 0;
    int i, j;

    printf("Digite os valores da matriz 3x6:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j += 2) {
            soma_impares += matriz[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        soma_2_4 += matriz[i][1] + matriz[i][3];
    }
    float media = soma_2_4 / 6.0;

    for (i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    printf("\n(a) Soma das colunas impares: %.2f", soma_impares);
    printf("\n(b) Media das colunas 2 e 4: %.2f", media);

    printf("\n\n(d) Matriz Modificada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.1f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}