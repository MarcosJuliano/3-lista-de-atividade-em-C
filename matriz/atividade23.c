//Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A^2.
#include <stdio.h>

int main() {
    int A[3][3], B[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            B[i][j] = A[i][j] * A[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}