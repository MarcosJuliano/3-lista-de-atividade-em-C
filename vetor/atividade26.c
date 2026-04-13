/*26. Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números reais,
onde m é a média dos valores do vetor.*/
#include <stdio.h>
#include <math.h>

int main(void){

    float v[10], soma = 0, media, somaDesvio = 0, desvio;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / 10;

    for(int i = 0; i < 10; i++)
    {
        somaDesvio += (v[i] - media) * (v[i] - media);
    }

    desvio = sqrt(somaDesvio / 9);

    printf("\n----- Resultados -----");
    printf("\nMedia = %.2f\n", media);
    printf("Desvio padrao = %.2f\n", desvio);

    return 0;
}