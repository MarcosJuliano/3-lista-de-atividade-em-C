/*12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores.*/
#include <stdio.h>

int main(void){
    float matriz[5],
    maior = 0,
    menor = 0,
    media = 0,
    valorTotal = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d termo:",i+1);
        scanf("%f",&matriz[i]);

         if (i==0)
        {
            maior = menor = matriz[i];
        } else {
            if(matriz[i]>maior)
            {
                maior = matriz[i];
            } else if (matriz[i]<menor)
            {
                menor = matriz[i];
            }   
        }
        valorTotal = matriz[i]+matriz[i];    
    }
    media = valorTotal/5;

    printf("\nValores digitados:\n");
    for (int j = 0; j < 5; j++){
        printf("%2.f\n",matriz[j]);
    }
    printf("Maior valor digitado:%2.f\n",maior);
    printf("Maior valor digitado:%2.f\n",menor);
    printf("Media dos valores digitados:%1.f\n\n",media);
    

    return 0;
}