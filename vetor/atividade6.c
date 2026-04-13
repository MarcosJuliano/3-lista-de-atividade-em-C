/*6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida
deverá ser impresso o maior e o menor elemento do vetor.*/
#include <stdio.h>

int main(void){
    int vetor[10],
    maior = 0,
    menor = 0;
      
    for (int i=0;i<10; i++){
        printf("Digite o %d termo:\n",i+1);
        scanf("%d",&vetor[i]);
        if (i==0)
        {
            maior = menor = vetor[i];
        } else {
            if(vetor[i]>maior)
            {
                maior = vetor[i];
            } else if (vetor[i]<menor)
            {
                menor = vetor[i];
            }   
        }
    }
    printf("O maior termo e: %d\n", maior);
    printf("O menor termo e: %d\n", menor);

    return 0;
}