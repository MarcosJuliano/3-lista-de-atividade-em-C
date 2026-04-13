/*
 * Exercício: Leia uma matriz 10x3 com as notas de 10 alunos em 3 provas. 
 * Em seguida, escreva o número de alunos cuja pior nota foi na prova 1, 
 * o número de alunos cuja pior nota foi na prova 2, e o número de 
 * alunos cuja pior nota foi na prova 3. Em caso de empate das piores 
 * notas de um aluno, o critério de desempate é arbitrário, mas o aluno 
 * deve ser contabilizado apenas uma vez.
 */
#include <stdio.h>

int main() {
    float notas[10][3];
    int pior_p1 = 0, pior_p2 = 0, pior_p3 = 0;
    int i, j;

    // 1. Leitura das notas
    for (i = 0; i < 10; i++) {
        printf("Digite as 3 notas do aluno %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%f", &notas[i][j]);
        }
    }

    // 2. Processamento: Encontrar a pior nota de cada aluno
    for (i = 0; i < 10; i++) {
        float n1 = notas[i][0];
        float n2 = notas[i][1];
        float n3 = notas[i][2];

        // Se a nota 1 for menor ou igual às outras, ela é a pior
        if (n1 <= n2 && n1 <= n3) {
            pior_p1++;
        }
        // Se a nota 2 for a menor (e não foi a 1)
        else if (n2 <= n3) {
            pior_p2++;
        }
        // Caso contrário, a nota 3 é obrigatoriamente a pior
        else {
            pior_p3++;
        }
    }

    // 3. Exibição dos resultados
    printf("\n--- RESULTADO DAS PIORES NOTAS ---\n");
    printf("Quantidade de alunos cuja pior nota foi na Prova 1: %d\n", pior_p1);
    printf("Quantidade de alunos cuja pior nota foi na Prova 2: %d\n", pior_p2);
    printf("Quantidade de alunos cuja pior nota foi na Prova 3: %d\n", pior_p3);

    return 0;
}