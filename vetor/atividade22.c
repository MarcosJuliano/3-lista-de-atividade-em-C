/*22. Faça um programa que leia dois vetores de 10 posições e crie um terceiro vetor. 
Nesse novo vetor, coloque nas posições pares os valores do primeiro vetor e, 
nas posições ímpares, os valores do segundo vetor.*/
#include <stdio.h>

int main(void){

    int vetorP[10],vetorI[10],vetorFinal[20];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o VetorP[%d]: ",i);
        scanf("%d",&vetorP[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        printf("Digite o VetorI[%d]: ",j);
        scanf("%d",&vetorI[j]);
    }

    for (int i = 0; i < 10; i++)
    {
        vetorFinal[2*i] = vetorP[i];
        vetorFinal[2*i + 1] = vetorI[i];
    }

    printf("\n----- Resultado -----\n");
    for (int i = 0; i < 20; i++)
    {
        printf("vetorFinal[%d] = %d\n", i, vetorFinal[i]);
    }

    return 0;
}