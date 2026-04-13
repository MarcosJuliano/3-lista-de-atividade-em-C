//4. Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac ̧ao (linha e a coluna) do maior valor.
#include <stdio.h>

int main(){

    int matriz[4][4];
    int coluna = 0, linha = 0, maior = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);

            if (matriz[i][j]>maior)
            {
                maior = matriz[i][j];
                coluna = i;
                linha = j;
            }
        }
    }
    
    printf("\n----- Matriz -----\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
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

    printf("\n----- Maior elemento -----\n");
    printf("Matriz[%d][%d] = %d",coluna,linha,maior);


    return 0;
}