/*
Faça um programa que leia duas matrizes 2 x 2 com valores reais. Ofereça ao usuário um menu de opções:
(a) somar as duas matrizes
(b) subtrair a primeira matriz da segunda
(c) adicionar uma constante às duas matrizes
(d) imprimir as matrizes
Nas duas primeiras opções uma terceira matriz deve ser criada.
Na terceira opção o valor da constante deve ser lido e o resultado da adição
da constante deve ser armazenado na própria matriz.
*/
#include <stdio.h>

int main() {
    float m1[2][2], m2[2][2], m3[2][2];
    float constante;
    char opcao;
    int i, j;

    printf("Dados da Matriz 1:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%f", &m1[i][j]);

    printf("Dados da Matriz 2:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%f", &m2[i][j]);

    printf("\nEscolha uma opcao:\n");
    printf("(a) Somar as matrizes\n");
    printf("(b) Subtrair a primeira da segunda\n");
    printf("(c) Adicionar constante\n");
    printf("(d) Imprimir matrizes\n");
    scanf(" %c", &opcao);

    switch(opcao) {
        case 'a':
            for(i = 0; i < 2; i++)
                for(j = 0; j < 2; j++)
                    m3[i][j] = m1[i][j] + m2[i][j];
            
            printf("\nResultado da Soma:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) printf("%.1f ", m3[i][j]);
                printf("\n");
            }
            break;

        case 'b':
            for(i = 0; i < 2; i++)
                for(j = 0; j < 2; j++)
                    m3[i][j] = m2[i][j] - m1[i][j];
            
            printf("\nResultado da Subtracao:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) printf("%.1f ", m3[i][j]);
                printf("\n");
            }
            break;

        case 'c':
            printf("Digite a constante: ");
            scanf("%f", &constante);
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    m1[i][j] += constante;
                    m2[i][j] += constante;
                }
            }
            printf("Constante adicionada com sucesso!\n");
            break;

        case 'd':
            printf("\nMatriz 1:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) printf("%.1f ", m1[i][j]);
                printf("\n");
            }
            printf("\nMatriz 2:\n");
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) printf("%.1f ", m2[i][j]);
                printf("\n");
            }
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}