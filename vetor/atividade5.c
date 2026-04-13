//5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
#include <stdio.h>

int main(void){
    int vetor[10],pares = 0;

    for(int i=0;i<10;i++){
        printf("Digite o %d valor:\n",i+1);
        scanf("%d",&vetor[i]);
    }

    for(int j=0;j<10;j++){
        if(vetor[j]%2 == 0){
            printf("O vetor[%d] = %d e par!\n",j,vetor[j]);
            pares++;
        }
    }
    printf("\nO total de valores pares e: %d\n",pares);

    return 0;
}