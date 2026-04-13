/*17. Leia um vetor de 10 posic ̧oes e atribua valor 0 para todos os elementos que possu  ̃  ́ırem
valores negativos.*/
#include <stdio.h>

int main(void){

    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        if (vetor[j] < 0)
        {
            vetor[j] = 0;
        } 
    }

    for (int i = 0; i < 10; i++)
    {
        printf("vetor[%d]: %d\n",i,vetor[i]);
    }
    
    return 0;
}