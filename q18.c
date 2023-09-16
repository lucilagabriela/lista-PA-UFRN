// Crie uma função capaz de realizar multiplicação matricial da forma C = AxB. A função deve receber 6 argumentos: os ponteiros para as matrizes A, B e C, o número de linhas e colunas de A e o número de colunas de B (assuma que o número de coluna de A é igual ao número de linhas de B). O resultado da multiplicação deve ficar armazenado em C. Crie um programa para testar sua implementação, capaz de utilizar a função de multiplicação e imprimir as três matrizes. A função criada para multiplicação não deve realizar nenhum tipo de saída de dados no terminal. Exemplo: para multiplicar duas matrizes (A e B) de dimensões 2x3 e 3x4, respectivamente (o resultado deve ficar armazenado em C).
// multiplica_matrizes(A, B, C, 2, 3, 4);

#include <stdlib.h>
#include <stdio.h>

void multiplicacaoMatrizes(int **A, int **B, int **C, int linhasA, int colunasB) {

}

int main(void) {
    int linhasA, colunasA, linhasB, colunasB, i, j, x;
    float matrizA[linhasA][colunasA], matrizB[linhasB][colunasB], matrizC[linhasA][colunasB];
    float aux = 0;

    printf("Informe a quantidade de linhas da matriz A: ");
    scanf("%d", &linhasA);
    printf("Informe a quantidade de colunas da matriz A: ");
    scanf("%d", &colunasA);
    printf("Informe a quantidade de linhas da matriz A: ");
    scanf("%d", &linhasB);
    printf("Informe a quantidade de colunas da matriz B: ");
    scanf("%d", &colunasB);

    if (colunasA != linhasB) { // na questao fala que o numero de colunas de A deve ser igual ao numero de linhas de B
        printf("Nao eh possivel multiplicar as duas matrizes. O numero de colunas de A deve ser igual ao numero de linhas de B.\n");
    }

    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasA; j++) {
            printf("Digite o elemento [%d] [%d] da primeira matriz:");
            scanf("%f", &matrizA[i][j]);
        }
    }

    for (i = 0; i < linhasB; i++) {
        for (j = 0; j < colunasB; j++) {
            printf("Digite o elemento [%d] [%d] da segunda matriz:");
            scanf("%f", &matrizB[i][j]);
        }
    }

    // imprimindo as matrizes:
    printf("Matriz A:");
    for(i = 0; i < linhasA; i++) {        
		for(j = 0; j < colunasA; j++) {
			printf("%6.f", matrizA[i][j]);
		}
		printf("\n\n");
	}

    printf("Matriz B:");
    for(i = 0; i < linhasB; i++) {
		for(j = 0; j < colunasB; j++) {
			printf("%6.f", matrizB[i][j]); 
		}
		printf("\n\n");
	}

    for(i = 0; i < linhasA; i++) {
		for(j = 0; j < colunasB; j++) {
			
			matrizC[i][j] = 0;
			for(x = 0; x < linhasB; x++) {
				aux +=  matrizA[i][x] * matrizB[x][j];
			}

			matrizC[i][j] = aux;
			aux = 0;
		}
	}
	
	for(i = 0; i < linhasA; i++) {
		for(j = 0; j < colunasB; j++) {
			printf("%6.f", matrizC[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");

}

/*
    int **A = (int **)malloc(linhasA * sizeof(int));
    int **B = (int **)malloc(linhasB * sizeof(int));
    int **C = (int **)malloc(linhasA * sizeof(int));

    for (i = 0; i < linhasA; i++) {
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
*/