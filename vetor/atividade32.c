/*32. Leia dois vetores de inteiros a e y, cada um com 5 elementos (assuma que o
usuário não informa elementos repetidos). Calcule e mostre os vetores resultantes
em cada caso abaixo:
· Soma entre a e y: soma de cada elemento de a com o elemento da mesma posição em y.
· Produto entre a e y: multiplicação de cada elemento de a com o elemento da mesma posição em y.
· Diferença entre a e y: todos os elementos de a que não existam em y.
· Interseção entre a e y: apenas os elementos que aparecem nos dois vetores.
· União entre a e y: todos os elementos de z, e todos os elementos de y que não estão em x.*/
#include <stdio.h>

int main(){

    int a[5], y[5];
    int soma[5], produto[5];
    int diferenca[5], intersecao[5], uniao[10];

    int posD = 0, posI = 0, posU = 0;
    int existe;

    printf("Digite os elementos do vetor a:\n");
    for(int i = 0; i < 5; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");

    printf("Digite os elementos do vetor y:\n");
    for(int i = 0; i < 5; i++){
        printf("y[%d] = ", i);
        scanf("%d", &y[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i++){
        soma[i] = a[i] + y[i];
        produto[i] = a[i] * y[i];
    }

    for(int i = 0; i < 5; i++){
        existe = 0;

        for(int j = 0; j < 5; j++){
            if(a[i] == y[j]){
                existe = 1;
                break;
            }
        }

        if(!existe){
            diferenca[posD] = a[i];
            posD++;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(a[i] == y[j]){
                intersecao[posI] = a[i];
                posI++;
            }
        }
    }

    // união
    for(int i = 0; i < 5; i++){
        uniao[posU] = a[i];
        posU++;
    }

    for(int i = 0; i < 5; i++){

        existe = 0;

        for(int j = 0; j < posU; j++){
            if(y[i] == uniao[j]){
                existe = 1;
                break;
            }
        }

        if(!existe){
            uniao[posU] = y[i];
            posU++;
        }
    }

    // mostrar resultados
    printf("Soma:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", soma[i]);
    }

    printf("\n\nProduto:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", produto[i]);
    }

    printf("\n\nDiferenca (a - y):\n");
    for(int i = 0; i < posD; i++){
        printf("%d ", diferenca[i]);
    }

    printf("\n\nIntersecao:\n");
    for(int i = 0; i < posI; i++){
        printf("%d ", intersecao[i]);
    }

    printf("\n\nUniao:\n");
    for(int i = 0; i < posU; i++){
        printf("%d ", uniao[i]);
    }

    printf("\n");

    return 0;
}