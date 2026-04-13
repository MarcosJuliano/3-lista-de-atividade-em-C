/*
Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números inteiros.
Em seguida, gere um array unidimensional pela soma dos números de cada coluna da matriz e mostrar na tela esse array.
Por exemplo, a matriz:

5 -8 10
1  2 15
25 10  7

Vai gerar um vetor, onde cada posição é a soma das colunas da matriz. A primeira posição será 5 + 1 + 25, e assim por diante:

31 4 32
*/
#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma_colunas[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor matriz[%d][%d]: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            soma_colunas[j] += matriz[i][j];
        }
    }

    printf("\n----- Matriz -----\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] > 9)
            {
                printf("[%d] ",matriz[i][j]);
            } else {
                printf("[ %d] ",matriz[i][j]);
            }
        }
        printf("\n");
    }

    printf("\n----- Soma das Colunas -----\n");
    for (int j = 0; j < 3; j++) {
        printf("%d ", soma_colunas[j]);
    }
    printf("\n");

    return 0;
}