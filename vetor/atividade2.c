//2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
#include <stdio.h>

int main(void){

    int matriz[6], i=0, j=0;

    for(i=0;i<6;i++){
        printf("Digite o %d valor:\n",i+1);
        scanf("%d",&matriz[i]);
    }

    printf("\nVALORES DIGITADOS EM ORDEM:\n");
    for(j=0;j<6;j++){
        printf("matriz[%d]:%d\n",j,matriz[j]);
    }
    
    return 0;
}