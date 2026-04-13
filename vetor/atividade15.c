/*15.Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando
elementos repetidos*/
#include <stdio.h>

int main(void){
    
    int vetor[20],
	valorFinal[20];
    int contador = 0;
    
    for(int i = 0; i < 20; i++){
        printf("Informe o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 20; i++){
        int repetido = 0;
        
        for(int j = 0; j < contador; j++){
            if(vetor[i] == valorFinal[j]){
                repetido = 1;
                break;
            }
        }
        
        if(!repetido){
            valorFinal[contador] = vetor[i];
            contador++;
        }
    }
    
    printf("\nVetor sem repetidos:\n");
    for(int i = 0; i < contador; i++){
        printf("%d\n", valorFinal[i]);
    }
    
    return 0;
}
