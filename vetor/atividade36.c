/*36. Leia um vetor com 10 números reais, ordene seus elementos e, ao final, escreva os valores do vetor em ordem crescente.*/
#include <stdio.h>

int main(void){

    int vetor[10], guardar;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (vetor[j] > vetor[j+1])
            {
                guardar = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = guardar;
            }
        }
    }


    printf("\n-----Vetor ordenado-----\n");
    for (int i = 0; i < 10; i++)
    {
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }

    return 0;
}