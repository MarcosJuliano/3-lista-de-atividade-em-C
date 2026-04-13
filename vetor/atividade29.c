/*29. Faca um programa que receba 6 numeros inteiros e mostre:
• Os numeros pares digitados;
• A soma dos numeros pares digitados;
• Os numeros ımpares digitados;
• A quantidade de numeros ımpares digitados;*/
#include <stdio.h>

int main(void){

    int vetor[6],
    contadorP = 0,
    pares[6],
    somaPar = 0,
    contadorI = 0,
    impares[6],
    qtdImp = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            pares[contadorP] = vetor[i];
            somaPar += vetor[i];
            contadorP++;
        } 
        else
        {
            impares[contadorI] = vetor[i];
            qtdImp++;
            contadorI++;
        }
    }
    
    printf("\nNumeros Pares digitados:\n");
    if (contadorP == 0)
    {
        printf("Nenhum numero par digitado!\n");
    }
    else
    {
        for (int j = 0; j < contadorP; j++)
        {
            printf("%d\n", pares[j]);
        }
        printf("A soma dos numeros pares digitados: %d\n", somaPar);
    }

    printf("\nNumeros Impares digitados:\n");
    if (contadorI == 0)
    {
        printf("Nenhum numero impar digitado!\n");
    }
    else
    {
        for (int k = 0; k < contadorI; k++)
        {
            printf("%d\n", impares[k]);
        }
        printf("A quantidade de numeros impares digitados: %d\n", qtdImp);
    }
    
    return 0;
}