// Crie uma função capaz de realizar multiplicação matricial da forma C = AxB. A função deve receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal. Exemplo: para multiplicar duas matrizes (A e B) de dimensões 2x3 e 3x4, respectivamente (o resultado deve ficar armazenado em C).
// multiplica_matrizes(A, B, C, 2, 3, 4);

#include <stdlib.h>
#include <stdio.h>

void multiplicacaoMatrizes(int **A, int **B, int **C, int linhasA, int colunasB) {

}

int main(void) {
    int linhasA, colunasA, linhasB, colunasB, j;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &linhasA);
    printf("Digite o número de colunas de A: ");
    scanf("%d", &colunasA);
    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &linhasB);
    printf("Digite o número de colunas de B: ");
    scanf("%d", &colunasB);

    if (colunasA != linhasB) { // na questao fala que o numero de colunas de A deve ser igual ao numero de linhas de B
        printf("O numero de colunas de A deve ser igual ao numero de linhas de B.\n");
        return 1;
    }

    int **A = (int **)malloc(linhasA * sizeof(int));
    int **B = (int **)malloc(linhasB * sizeof(int));
    int **C = (int **)malloc(linhasA * sizeof(int));

    for (int i = 0; i < linhasA; i++) {
        A[i] = malloc(colunasA * sizeof(int));
        for (j = 0; j < colunasA; j++) {
            printf("Digite o elemento [%d] [%d] da primeira matriz:");
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < linhasA; i++) {
        B[i] = malloc(colunasB * sizeof(int));
        for (j = 0; j < colunasA; j++) {
            printf("Digite o elemento [%d] [%d] da segunda matriz:");
            scanf("%d", &B[i][j]);
        }
    }

    
}