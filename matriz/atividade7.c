/*
 * Exercício: Gerar e imprimir uma matriz 10x10 onde seus elementos são calculados por:
 * A[i][j] = 2i + 7j - 2, se i < j
 * A[i][j] = 3i² - 1,     se i = j
 * A[i][j] = 4i³ - 5j² + 1, se i > j
 */
#include <stdio.h>

int main(){

    int A[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i<j)
            {
                A[i][j] =  2*i + 7*j - 2;
            } else if (i == j)
            {
                A[i][j] = 3*(i*i*i) - 1;
            } else {
                A[i][j] = 4*(i*i*i) - 5*(j*j) + 1;
            }  
        }
    }

    printf("\n----- Matriz Resultante -----\n");
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            if (A[i][j] < 0)
            {
                printf("[  %d] ",A[i][j]);
            } else if (A[i][j] < 10)
            {
                printf("[   %d] ",A[i][j]);
            } else if (A[i][j] < 100)
            {
                printf("[  %d] ",A[i][j]);
            } else if (A[i][j] < 1000)
            {
                printf("[ %d] ",A[i][j]);
            } else {
                printf("[%d] ",A[i][j]);
            }
            
        }
        printf("\n");
    }

    return 0;
}