/*
 * Exercício: Leia duas matrizes 4x4 e gere uma terceira matriz 
 * contendo o maior valor de cada posição correspondente 
 * entre as duas matrizes lidas. Ao final, exiba a matriz resultante.
 */
#include <stdio.h>

void preencherMatriz(int matriz[][4],int tamanho, int contar){
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++)
        {
            printf("Digite a %d matriz[%d][%d]: ",contar,i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n");
}

int main(){

    int matrizUm[4][4], matrizDois[4][4], matrizMaior[4][4], contar;

    preencherMatriz(matrizUm, 4, 1);
    preencherMatriz(matrizDois, 4, 2);

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (matrizUm[i][j] > matrizDois[i][j])
            {
                matrizMaior[i][j] = matrizUm[i][j];
            } else if (matrizDois[i][j] > matrizUm[i][j])
            {
                matrizMaior[i][j] = matrizDois[i][j];
            }
        }
    }
    
    printf("\n----- Matriz Final -----\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
        {
            if (matrizMaior[i][j] > 9)
            {
                printf("[%d] ",matrizMaior[i][j]);
            } else {
                printf("[ %d] ",matrizMaior[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}