/*16. Fac ̧a um programa que leia um vetor de 5 posic ̧oes para n  ̃ umeros reais e, depois, um  ́
codigo inteiro. Se o c  ́ odigo for zero, finalize o programa; se for 1, mostre o vetor na ordem  ́
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2  ́
escreva uma mensagem informando que o codigo  ́ e inv  ́ alido.*/
#include <stdio.h>

int main(void){

    int vetor[5],
    escolha = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("digite o vetor[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    printf("----- ESCOLHA A ORDEM DE AMOSTRA -----\n");
    printf("0 - finalizar programa\n");
    printf("1 - mostrar em ordem direta\n");
    printf("2 - mostrar em ordem inversa\n");
    scanf("%d",&escolha);

    if (escolha == 0)
    {
        for (int i = 0; i < 1; i++)
        {
            break;
        }
    } else if (escolha == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("vetor[%d]: %d\n",i,vetor[i]);
        }
        
    } else if (escolha == 2)
    {
        for (int i = 4; i >= 0; i--)
        {
            printf("vetor[%d]: %d\n",i,vetor[i]);
        }
        
    }
    
    
    

    return 0;
}