/*38. Peça ao usuário para digitar dez valores numéricos e armazene-os em um vetor. Ordene os valores em ordem crescente à medida que forem sendo digitados.
Ao final, mostre na tela os valores já ordenados.*/
#include <stdio.h>

int main(void){

    int vetor[10], valor, j;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor[%d]: ",i);
        scanf("%d", &valor);

        j = i - 1;

        while (j >= 0 && vetor[j] > valor)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = valor;
    }
    
    printf("\n-----Vetor ordenado-----\n");
    for (int i = 0; i < 10; i++)
    {
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }

    return 0;
}