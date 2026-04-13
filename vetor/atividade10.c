/*10. Fac ̧a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.*/
#include <stdio.h>

int main(void){
    float notaAlunos[15],
    total = 0,
    media = 0;

    for (int i = 0; i < 15; i++){
        printf("Digite a %d nota: ",i+1);
        scanf("%f",&notaAlunos[i]);
        total += notaAlunos[i];
    }

    media = total/15;

    printf("\nA media dos 15 alunos e:%2.f",media);
    
    return 0;
}