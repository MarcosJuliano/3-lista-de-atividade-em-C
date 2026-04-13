/*37. Considere um vetor A com 11 elementos, onde:
A1<A2<⋯<A6>A7>A8>⋯>A11
Ou seja, os elementos estão em ordem crescente até o sexto elemento e, a partir dele, estão em ordem decrescente.
Dado um vetor com essas características, proponha um algoritmo para ordenar todos os seus elementos em ordem crescente.*/
#include <stdio.h>

int main(void){

    int vetor[11], guardar;

    for (int i = 0; i < 11; i++)
    {
        printf("Digite o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            if (vetor[j] > vetor[j+1])
            {
                guardar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = guardar;
            }
        }     
    }

    guardar = vetor[5];
    vetor[5] = vetor[10];
    vetor[10] = guardar;

    for (int i = 6; i < 10; i++)
    {
        for (int j = 6; j < 10; j++)
        {
            if (vetor[j] < vetor[j+1])
            {
                guardar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = guardar;
            }
        }     
    }


    printf("\n-----Vetor ordenado-----\n");
    for (int i = 0; i < 11; i++)
    {
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }

    return 0;

}