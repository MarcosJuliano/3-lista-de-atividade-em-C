/*39. Escreva um programa que leia um número inteiro positivo n e, em seguida, imprima n linhas do chamado Triângulo de Pascal.
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1*/
#include <stdio.h>

int main(void){

    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int vetor[100] = {0};

    vetor[0] = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (vetor[j] != 0)
            {
                printf("%d ", vetor[j]);
            }
        }
        printf("\n");

        for (int j = i; j > 0; j--)
        {
            vetor[j] = vetor[j] + vetor[j-1];
        }
    }

    return 0;
}