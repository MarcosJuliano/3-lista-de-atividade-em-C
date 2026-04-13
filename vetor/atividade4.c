/*4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também
dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu
programa deverá escrever a soma dos valores encontrados nas respectivas
posições X e Y.*/
#include <stdio.h>

int main(void){
    int valores[8],
    valor1 = 0,
    valor2 = 0,
    soma = 0;

    for(int i=0;i<8;i++){
    printf("digite o %d valor:\n",i+1);
    scanf("%d",&valores[i]);
    }

    printf("Os valores a sua escolha sao:\n");
    for(int j=0;j<8;j++){
    printf("valores[%d] = %d\n",j,valores[j]);
    }

    for(int k=0;k<1;k++){
    printf("digite qual o primeiro valor entre [0] a [7] voce deseja:\n");
    scanf("%d",&valor1);
    printf("digite qual o segundo valor entre [0] a [7] voce deseja:\n");
    scanf("%d",&valor2);
    }
    soma = valores[valor1] + valores[valor2];
    printf("A soma entre %d+%d e = %d",valores[valor1],valores[valor2],soma);

    return 0;
}