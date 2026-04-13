/*27. Leia 10 números inteiros e armazene-os em um vetor. Em seguida, escreva os elementos que são números primos 
e suas respectivas posições no vetor.*/
#include <stdio.h>

int main(void){

    int vetor[10],
    vetorPrimo[10],
    posiPrimo[10],
    contador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int divisores = 0;

        if (vetor[i] <= 1)
        continue;
        for (int j = 1; j <= vetor[i]; j++)
        {
           if (vetor[i] % j == 0)
            {
                divisores++;
            }
        }
        if (divisores == 2)
        {
            vetorPrimo[contador] = vetor[i];
            posiPrimo[contador] = i;
            contador++;
        }
        
    }
    
    printf("\n----- Resultados -----\n");
    printf("Numeros primos\n\n");
    for (int i = 0; i < contador; i++)
    {
        printf("vetorPrimo[%d] = %d\n",i,vetorPrimo[i]);
        printf("posicao do numero primo: %d\n",i,posiPrimo[i]);
        printf("\n");
    }
    

    return 0;
}