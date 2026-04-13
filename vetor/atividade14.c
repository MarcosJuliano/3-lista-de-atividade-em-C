/*14-faca um programa que leia um vetor de 10 posicoes e verifique se existem
valores iguais e os escreva na tela*/
#include <stdio.h>

int main(void){
	
	int vetor[10],
	iguais[10],
	contador = 0;
	
	for(int i=0;i<10;i++){
		printf("Informe o valor[%d]: ",i);
		scanf("%d",&vetor[i]);
	}
	
	 for(int j = 0; j < 10; j++){
        for(int k = j + 1; k < 10; k++){
            if(vetor[j] == vetor[k]){
                iguais[contador] = vetor[j];
                contador++;
                break; 
            }
        }
    }
	
	printf("\nValores iguais:");
	for(int i=0;i<contador;i++){
		printf(" %d ",iguais[i]);
	}
	
	return 0;
}