/*18. Faça um programa que leia um vetor de 10 números. Leia um número inteiro x.
Conte os múltiplos de x no vetor e mostre-os na tela.*/
#include <stdio.h>

int main(void){

    int vetor[10],
    x = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    printf("Digite um numero para ver o multiplo comum: ");
    scanf("%d",&x);

    printf("----- Os numeros do vetor multiplos por %d são -----\n",x);
    for (int j = 0; j < 10; j++)
    {
        if (vetor[j] % x == 0)
        {
            printf("vetor[%d] = %d\n",j,vetor[j]);
        } 
    }

    return 0;
}