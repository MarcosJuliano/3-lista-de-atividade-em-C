/*
Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:

Primeira coluna: número de matrícula

Segunda coluna: média das provas

Terceira coluna: média dos trabalhos

Quarta coluna: nota final
*/
#include <stdio.h>

int main() {
    int alunos[5][4];
    int i;
    int maior_nota = -1;
    int matricula_maior = 0;
    float soma_notas_finais = 0;

    for (i = 0; i < 5; i++) {
        printf("Aluno %d - Matricula: ", i + 1);
        scanf("%d", &alunos[i][0]);
        
        printf("Aluno %d - Media Provas: ", i + 1);
        scanf("%d", &alunos[i][1]);
        
        printf("Aluno %d - Media Trabalhos: ", i + 1);
        scanf("%d", &alunos[i][2]);

        alunos[i][3] = alunos[i][1] + alunos[i][2];
        
        soma_notas_finais += alunos[i][3];

        if (alunos[i][3] > maior_nota) {
            maior_nota = alunos[i][3];
            matricula_maior = alunos[i][0];
        }
        printf("\n");
    }

    printf("Matricula do aluno com maior nota final (%d): %d\n", maior_nota, matricula_maior);
    printf("Media aritmetica das notas finais: %.2f\n", soma_notas_finais / 5.0);

    return 0;
}