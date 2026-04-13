/*
 * Exercício: Leia uma matriz 5x5 e um valor X. 
 * O programa deve buscar o valor X na matriz e imprimir 
 * sua localização (linha e coluna). Caso o valor não 
 * seja encontrado, imprimir a mensagem "Não encontrado".
 */
#include <stdio.h>

int main(){

    int matriz[5][5];
    int valorX = 0, linha = 0, coluna = 0, encontrado = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }  

    printf("Digite o valir a ser encontrado na matriz: ");
    scanf("%d",&valorX);
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] == valorX)
            {
                encontrado = 1;
                coluna = i;
                linha = j;
            } 
        }
    }

    if (encontrado == 1)
    {
        printf("\n----- Matriz -----\n");
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++)
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

        printf("\n----- Elemento Requisitado -----\n");
        printf("Matriz[%d][%d] = %d",coluna,linha,valorX);
    } else if (encontrado == 0)
    {
        printf("\nNao encontrado");
    }

    return 0;
}