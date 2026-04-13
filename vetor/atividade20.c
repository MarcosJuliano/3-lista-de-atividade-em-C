/*20. Escreva um programa que leia números inteiros no intervalo [0, 50] e os armazene em um vetor com 10 posições.
Em seguida, preencha um segundo vetor apenas com os números ímpares do primeiro vetor. Por fim, imprima os dois vetores,
exibindo 2 elementos por linha.*/
#include <stdio.h>

int main(void){

    int vetor[10],
    impares[10] = {0},
    k = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        if (vetor[j]%2 != 0)
        {
            impares[k] = vetor[j];
            k++;
        }
    }
    
    printf("\n----- Vetor original -----\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n----- Vetor de impares -----\n");
    for (int i = 0; i < k; i++){
        printf("%d ", impares[i]);       
    }

    return 0;
}