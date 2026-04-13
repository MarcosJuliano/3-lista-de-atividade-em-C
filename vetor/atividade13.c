/*13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se
encontram o maior e o menor valor.*/
#include <stdio.h>

int main(void){

    int matriz[5],
    maior = 0,
    menor = 0,
    posiMaior = 0,
    posiMenor = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d termo:",i+1);
        scanf("%d",&matriz[i]);

         if (i==0)
        {
            maior = menor = matriz[i];
        } else {
            if(matriz[i]>maior)
            {
                maior = matriz[i];
                posiMaior = i;
            } else if (matriz[i]<menor)
            {
                menor = matriz[i];
                posiMenor = i;
            }   
        }    
    }

    printf("O maior valor: matriz[%d] = %d\n",posiMaior,maior);
    printf("O menor valor: matriz[%d] = %d\n",posiMenor,menor);

    return 0;
}