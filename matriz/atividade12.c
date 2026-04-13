//12. Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.
#include <stdio.h>

int main(){

    int matriz[3][3], guard;

    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\n----- Matriz -----\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            if (matriz[j][i] > 9)
            {
                printf("[%d] ",matriz[j][i]);
            } else {
                printf("[ %d] ",matriz[j][i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}