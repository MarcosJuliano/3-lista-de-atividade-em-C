/*35. Faça um programa que leia dois números inteiros a e b (positivos e menores que 10000) e:

Crie um vetor para cada número, onde cada posição armazene um algarismo do número. A primeira posição deve conter o algarismo 
menos significativo (ou seja, o último dígito do número).
Crie um terceiro vetor que represente a soma de a e b, realizando essa soma utilizando apenas os vetores construídos 
anteriormente.

Dica: some os algarismos de mesma posição. Se a soma for maior ou igual a 10, subtraia 10 do resultado e adicione 1 à próxima posição (vai um).*/
#include <stdio.h>

int main(void){

    int vetorA[5], vetorB[5], vetorC[6];
    int valorUm, valorDois;
    int contUm = 0, contDois = 0;
    int vaiUm = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valorUm);

    printf("Digite o segundo valor: ");
    scanf("%d", &valorDois);

    int temp = valorUm;
    while (temp > 0)
    {
        vetorA[contUm] = temp % 10;
        temp /= 10;
        contUm++;
    }

    temp = valorDois;
    while (temp > 0)
    {
        vetorB[contDois] = temp % 10;
        temp /= 10;
        contDois++;
    }

    int maior = (contUm > contDois) ? contUm : contDois;

    for (int i = 0; i < maior; i++)
    {
        int a = (i < contUm) ? vetorA[i] : 0;
        int b = (i < contDois) ? vetorB[i] : 0;

        int soma = a + b + vaiUm;

        if (soma >= 10)
        {
            vetorC[i] = soma - 10;
            vaiUm = 1;
        }
        else
        {
            vetorC[i] = soma;
            vaiUm = 0;
        }
    }

    if (vaiUm == 1)
    {
        vetorC[maior] = 1;
        maior++;
    }

    printf("\n---Primeiro vetor---\n"); 
    for (int i = 0; i < contUm; i++)
    {
        printf("vetorA[%d] = %d\n",i,vetorA[i]);
    }
    printf("\n---Segundo vetor---\n"); 
    for (int i = 0; i < contDois; i++)
    {
        printf("vetorA[%d] = %d\n",i,vetorB[i]);
    }

    printf("\n-----Resultado (invertido)-----\n");
    for (int i = 0; i < maior; i++)
    {
        printf("%d ", vetorC[i]);
    }

    return 0;
}