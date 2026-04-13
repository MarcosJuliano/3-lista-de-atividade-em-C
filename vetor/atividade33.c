/*33. Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as posições que contêm o valor zero. 
Para isso, todos os elementos à frente de um valor zero devem ser deslocados uma posição para trás no vetor. Ao final, mostre o vetor resultante.*/
#include <stdio.h>

int main(void){

    int vetor[15], v = 0, contador = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite o vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }
    
    for (int i = 0; i < 15; i++)
    {
        if (vetor[i] != 0)
        {
            vetor[v] = vetor[i];
            v++;
            contador++;
        }
    }

    for (int i = v; i < 15; i++)
    {
        vetor[i] = 0;
    }
    
    printf("\n----- Resultado -----\n");
    for (int k = 0; k < contador; k++)
    {
        printf("vetor[%d] = %d\n",k,vetor[k]);
        //printf("%d",contador);
    }
    

    return 0;
}