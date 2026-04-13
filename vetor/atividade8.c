/*8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os
valores lidos na ordem inversa.*/
#include <stdio.h>

int main(void){
    int valores[6];
    for (int i=0; i<6; i++){
        printf("Digite o %d termo: ",i+1);
        scanf("%d",&valores[i]);
    }

    printf("\n");
    for (int j=5; j!=-1; j--){
        printf("valores[%d] = %d\n",j,valores[j]);
    }
    
    return 0;
}