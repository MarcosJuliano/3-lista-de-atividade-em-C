/*
 * Exercício: Faça um programa para corrigir uma prova com 10 questões de 
 * múltipla escolha (a, b, c, d ou e), em uma turma com 3 alunos. 
 * Cada questão vale 1 ponto. Leia o gabarito. Para cada aluno, leia sua 
 * matrícula (inteiro) e suas respostas. Calcule e escreva: 
 * Para cada aluno, sua matrícula, suas respostas e sua nota. 
 * Ao final, exiba o percentual de aprovação, assumindo média 7.0.
 */
#include <stdio.h>

int main() {
    char gabarito[10];
    int matriculas[3];
    char respostas[3][10];
    int notas[3] = {0, 0, 0};
    int aprovados = 0;
    int i, j;

    // 1. Leitura do Gabarito
    printf("--- GABARITO DA PROVA ---\n");
    for (i = 0; i < 10; i++) {
        printf("Questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    // 2. Leitura dos Dados dos Alunos
    for (i = 0; i < 3; i++) {
        printf("\n--- DADOS DO ALUNO %d ---\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &matriculas[i]);

        for (j = 0; j < 10; j++) {
            printf("Resposta Questao %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);
            
            // Comparação imediata para calcular a nota
            if (respostas[i][j] == gabarito[j]) {
                notas[i]++;
            }
        }
        
        // Verifica se o aluno atingiu a média 7.0
        if (notas[i] >= 7) {
            aprovados++;
        }
    }

    // 3. Relatório Individual
    printf("\n================ RESULTADOS ================\n");
    for (i = 0; i < 3; i++) {
        printf("Matricula: %d | Nota: %d | Respostas: ", matriculas[i], notas[i]);
        for (j = 0; j < 10; j++) {
            printf("%c ", respostas[i][j]);
        }
        printf("\n");
    }

    // 4. Estatística da Turma
    // (aprovados / total) * 100. Usamos 3.0 para forçar o resultado decimal.
    float percentual = (aprovados / 3.0) * 100;
    printf("\nPercentual de aprovacao: %.2f%%\n", percentual);
    printf("============================================\n");

    return 0;
}