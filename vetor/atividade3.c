/*3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o 
quadrado das componentes deste vetor, armazenando o resultado em outro vetor.
Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.*/
#include <stdio.h>

int main(void){
    int reais[10],quadrado[10];
    for(int i=0;i<10;i++){
        printf("Digite o %d valor:\n",i+1);
        scanf("%d",&reais[i]);
    }

    for(int j=0;j<10;j++){
        quadrado[j] = reais[j]*reais[j];
        printf("O quadrado da matrizReais[%d] e: %d\n",j,quadrado[j]);
    }

    return 0;
}