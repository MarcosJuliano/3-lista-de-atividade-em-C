/*24. Faça um programa que leia 10 conjuntos de dois valores: 
o primeiro representando o número do aluno e o segundo representando sua altura (em metros). 
Determine o aluno mais baixo e o aluno mais alto. Ao final, mostre o número do aluno mais baixo e 
do mais alto, juntamente com suas respectivas alturas.*/
#include <stdio.h>

int main(void){

    int aluno[10],
    altura[10],
    numeroAlto = 0,
    numeroBaixo = 0,
    maisAlto = 0,
    maisBaixo = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero do aluno: ");
        scanf("%d",&aluno[i]);
        printf("Digite a altura do aluno %d: ",aluno[i]);
        scanf("%d",&altura[i]);
        printf("\n");

        if (i == 0)
        {
            maisAlto = maisBaixo = altura[i];
        } else {
            if (altura[i]>maisAlto)
            {
                maisAlto = altura[i];
                numeroAlto = i;
            } else if (altura[i]<maisBaixo)
            {
                maisBaixo = altura[i];
                numeroBaixo = i;
            }
        }
    }

    printf("----- Resultado -----\n");
    printf("Numero do aluno mais alto: %d\n",numeroAlto);
    printf("Altura do aluno mais alto: %d\n",maisAlto);
    printf("Numero do aluno mais baixo: %d\n",numeroBaixo);
    printf("Numero do aluno mais alto: %d\n",maisBaixo);

    return 0;
}