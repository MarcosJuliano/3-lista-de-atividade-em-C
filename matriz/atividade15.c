/*
 * Exercício: Leia uma matriz 5x10 contendo as respostas de 10 questões 
 * de múltipla escolha para 5 alunos. Em seguida, leia um vetor de 10 
 * posições com o gabarito (respostas 'a', 'b', 'c' ou 'd'). 
 * O programa deve comparar as respostas de cada aluno com o gabarito 
 * e gerar um vetor "resultado" contendo a pontuação final de cada aluno.
 */
#include <stdio.h>

int main() {
    char respostas[5][10];
    char gabarito[10];
    int resultado[5] = {0, 0, 0, 0, 0};
    int i, j;

    printf("--- CADASTRO DO GABARITO ---\n");
    for (i = 0; i < 10; i++) {
        printf("Resposta da questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    printf("\n--- RESPOSTAS DOS ALUNOS ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("Questao %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            if (respostas[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }


    printf("\n--- PONTUACAO FINAL ---\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultado[i]);
    }

    return 0;
}