/*
 * Exercício: Leia uma matriz de 3x3 elementos. 
 * Calcule e imprima a soma de todos os elementos 
 * que estão localizados ACIMA da diagonal principal.
 */

#include <stdio.h>

int main(){

    int matriz[3][3], soma = 0;

    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
            if (i < j)
            {
                soma = soma + matriz[i][j];
            }
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

    printf("---Soma dos elementos acima da diagonal principal---\n");
    printf("%d",soma);
    

    return 0;
}