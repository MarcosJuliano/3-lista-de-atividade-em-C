/*21. Faça um programa que receba do usuário dois vetores, A e B, cada um com 10 números inteiros. Crie um novo vetor C,
onde cada elemento é o resultado da subtração entre os elementos correspondentes de A e B (C = A - B). 
Em seguida, mostre na tela os elementos do vetor C.*/
#include <stdio.h>

int main(void){

    int a[10],b[10],c[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o A[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o B[%d]: ",i);
        scanf("%d",&b[i]);
    }

    printf("\n----- O resultado da subtracao -----\n");
    for (int i = 0; i < 10; i++)
    {
        c[i] = a[i]-b[i];
        printf("C[%d] = %d\n",i,c[i]);
    }
    
    

    return 0;
}