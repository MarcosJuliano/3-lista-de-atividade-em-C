/*23. Leia dois conjuntos de números reais, armazenando-os em vetores, e calcule o produto escalar 
entre eles. Os conjuntos devem ter 5 elementos cada. Imprima os dois vetores e o resultado do produto 
escalar, que é dado por: 𝑥1⋅𝑦1+𝑥2⋅𝑦2+⋯+𝑥𝑛⋅𝑦𝑛*/
#include <stdio.h>

int main(void){

    int conjUm[5],
    conjDois[5],
    produto = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o conjUm[%d]: ",i);
        scanf("%d",&conjUm[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o conjDois[%d]: ",i);
        scanf("%d",&conjDois[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        produto += conjUm[i] * conjDois[i];
    }
    
    printf("\n----- Resultado -----\n");
    printf("O produto escalar e: %d",produto);

    return 0;
}