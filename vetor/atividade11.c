/*11. Faça um programa que preencha um vetor com 10 números reais, calcule e
mostre a quantidade de números negativos e a soma dos números positivos desse
vetor.*/
#include <stdio.h>

int main(void){
    int numReais[10],
    qtdNumNegat = 0,
    somaNumPosit = 0;

    printf("DIGITE QUALQUER NUMERO REAL\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d numero:",i+1);
        scanf("%d",&numReais[i]);

        if (numReais[i]<0){
            qtdNumNegat = qtdNumNegat+1;
        }
        
        if (numReais[i]>0)
        {
            somaNumPosit = numReais[i]+somaNumPosit;
        }
       
    }
    
    printf("\nA quantidade de numeros negativos e: %d\n",qtdNumNegat);
    printf("E a soma dos numeros positivos e: %d",somaNumPosit);

    return 0;
}