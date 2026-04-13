// 1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
#include <stdio.h>

int main(void){

    int matriz[4][4],valores[16],contador = 0;

    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] >= 10)
            {
                valores[contador] = matriz[i][j];
                contador++;
            }

        }
    }
    
    printf("----- Matriz -----\n");
    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("matriz[%d][%d] = %d\n",i,j,matriz[i][j]);
        }
    }

    printf("----- Valores maiores que 10 -----\n");
    for (int i = 0; i < contador; i++)
    {
        printf("velores[%d] = %d\n",i,valores[i]);
    }

    return 0;
}