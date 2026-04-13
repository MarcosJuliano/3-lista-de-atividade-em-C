/*19. Faça um programa que crie um vetor de tamanho 50 e o preencha com valores calculados pela expressão
(i+5×i)%(i+1), onde 𝑖 é a posição do elemento no vetor. Em seguida, imprima o vetor na tela.*/
#include <stdio.h>

int main(void){

    float vetor[50];

    for (int i = 0; i < 50; i++)
    {
        vetor[i] = (i+5*i)%(i+1);
    }

    for (int j = 0; j < 50; j++)
    {
        printf("vetor[%d] = %2.f\n",j,vetor[j]);
    }
    

    return 0;
}