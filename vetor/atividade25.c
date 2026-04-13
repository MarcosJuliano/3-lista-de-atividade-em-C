/*25. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais
que não são múltiplos de 7 e que não terminam com o dígito 7.*/
#include <stdio.h>

int main(void){

    int vetor[100], numeros = 1, i = 0;

    while (i < 100)
    {
        if (numeros % 7 != 0 && numeros % 10 != 7)
        {
            vetor[i] = numeros;
            i++;
        }
        numeros = numeros+1;
    }

    for (int j = 0; j < 100; j++)
    {
        printf("vetor[%d] = %d\n",j,vetor[j]);
    }
    
    return 0;
}

