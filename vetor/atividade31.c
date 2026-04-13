/*31. Faça um programa que leia dois vetores com 10 elementos cada. Crie um terceiro vetor que represente a união dos dois vetores, 
ou seja, que contenha todos os números presentes nos dois vetores, sem repetir valores. Ao final, mostre o vetor resultante.*/
#include <stdio.h>

int main(void){

    int vetorUm[10],vetorDois[10],vetorTres[20] = {0};

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o vetorUm[%d]: ",i);
        scanf("%d",&vetorUm[i]);
    }

    printf("\n-Agora digite o segundo vetor-\n");
    for (int j = 0; j < 10; j++)
    {
        printf("Digite o vetorDois[%d]: ",j);
        scanf("%d",&vetorDois[j]);
    }
    
    for (int k = 0; k < 10; k++)
    {
        if (k<10)
        {
            vetorTres[k] = vetorUm[k];
        }
        
    }

    for (int k = 0; k < 10; k++)
    {
        if (k<10)
        {
            vetorTres[k+10] = vetorDois[k];
        }
        
    }

    printf("\n----- Resultado -----\n");
    for (int l = 0; l < 20; l++)
    {
        printf("vetorTres[%d] = %d\n",l,vetorTres[l]);
    }
    
    return 0;
}