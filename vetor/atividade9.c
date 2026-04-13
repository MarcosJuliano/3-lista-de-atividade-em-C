/*9. Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela
os valores lidos na ordem inversa. Utilize a solução anterior como base para esta.*/
#include <stdio.h>

int main(void){
    int valores[6],
    qtd = 0;
    printf("!DIGITE SOMENTE NUMEROS PARES!\n");
    for (int i=0; i<6; i++){
        printf("Digite o %d termo: ",i+1);
        scanf("%d",&valores[i]);
        if (valores[i]%2==1)
        {
            printf("Valor invalido!\n");
            break;
        }
        qtd++;
    }

    printf("\n");
    for (int j=qtd-1; j>=0; j--){
        if (valores[j] % 2 == 0)
        {
            printf("valores[%d] = %d\n",j,valores[j]);
        }
    }
    
    return 0;
}