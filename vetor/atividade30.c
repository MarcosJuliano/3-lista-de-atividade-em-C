/*15. Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja
a intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os
números que estão em ambos os vetores. Não deve conter números repetidos.*/
#include <stdio.h>

int main(void){

    int vetor1[10], vetor2[10], vetor3[10];
    int pos = 0;
    int repetido;

    for (int i = 0; i < 10; i++){
        printf("vetor1[%d] = ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n");

    for (int j = 0; j < 10; j++){
        printf("vetor2[%d] = ", j);
        scanf("%d", &vetor2[j]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){

            if (vetor1[i] == vetor2[j]){

                repetido = 0;

                for (int k = 0; k < pos; k++){
                    if (vetor3[k] == vetor1[i]){
                        repetido = 1;
                        break;
                    }
                }

                if (!repetido){
                    vetor3[pos] = vetor1[i];
                    pos++;
                }
            }
        }
    }

    printf("Interseccao:\n");
    for (int i = 0; i < pos; i++){
        printf("vetor3[%d] = %d\n", i, vetor3[i]);
    }

    return 0;
}