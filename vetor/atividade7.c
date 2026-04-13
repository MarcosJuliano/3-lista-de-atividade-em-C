/*7. Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima  ́
o vetor, o maior elemento e a posic ̧ao que ele se encontra.  ̃*/
#include <stdio.h>

int main(void){
    int vetor[10], maior = 0, posicao = 0;
    for (int i=0;i<10; i++){
        printf("Digite o %d termo: ",i+1);
        scanf("%d",&vetor[i]);
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }    
    }

    printf("\nValores digitados no vetor:\n");
    for (int i = 0; i < 10; i++){
        printf("%d\n",vetor[i]);
    }

    printf("O maior elemento: vetor[%d] = %d",posicao, maior);

    return 0;
}