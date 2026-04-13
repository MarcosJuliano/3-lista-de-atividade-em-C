/*28. Leia 10 números inteiros e armazene-os em um vetor v. Crie dois novos vetores, v1 e v2. 
Copie os valores ímpares de v para v1 e os valores pares de v para v2. 
Note que cada um dos vetores v1 e v2 pode ter no máximo 10 elementos, mas nem todas as posições serão necessariamente utilizadas. 
Ao final, escreva apenas os elementos efetivamente utilizados de v1 e v2.*/
#include <stdio.h>

int main(void){

    int v[10],
    v1[10] = {0},
    v2[10] = {0},
    contadorPar = 0,
    contadorImpar = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o v[%d]: ",i);
        scanf("%d",&v[i]);

        if (v[i]%2 == 0)
        {
            v1[contadorPar] = v[i];
            contadorPar++;
        } else if (v[i]%2 != 0 && v[i]!=0)
        {
            v2[contadorImpar] = v[i];
            contadorImpar++;
        } 
    }

    printf("\n----- Resultados -----\n");
    printf("\n--- Pares ---\n");
    for (int i = 0; i < contadorPar; i++)
    {
        printf("v1[%d] = %d\n",i,v1[i]);
    }
    printf("\n");
    printf("--- Impares ---\n");
    for (int i = 0; i < contadorImpar; i++)
    {
        printf("v2[%d] = %d\n",i,v2[i]);
    }
    
    

    return 0;
}