#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i, j, linhasA, colunasA, linhasB, colunasB, x;

    printf("Informe a quantidade de linhas da matriz A: ");
    scanf("%d", &linhasA);
    printf("Informe a quantidade de colunas da matriz A: ");
    scanf("%d", &colunasA);
    printf("Informe a quantidade de linhas da matriz B: ");
    scanf("%d", &linhasB);
    printf("Informe a quantidade de colunas da matriz B: ");
    scanf("%d", &colunasB);

    float matrizA[linhasA][colunasA], matrizB[linhasB][colunasB], matrizC[linhasA][colunasB], aux = 0;

    if (colunasA != linhasB) { // na questao fala que o numero de colunas de A deve ser igual ao numero de linhas de B
        printf("Nao eh possivel multiplicar as duas matrizes. O numero de colunas de A deve ser igual ao numero de linhas de B.\n");
    }

    for(i = 0; i < linhasA; i++) {
		for(j = 0; j < colunasA; j++) {
			printf("\nInforme o valor da %d%c Linha e da %d%c Coluna da Matriz A: ", i+1, 167, j+1, 167);
			scanf("%f", &matrizA[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < linhasB; i++) {        
		for(j = 0; j < colunasB; j++) {
			printf("Informe o valor da %d%c Linha e da %d%c Coluna da 2%c Matriz B: ", i+1, 167, j+1, 167, 167);
			scanf("%f", &matrizB[i][j]);
		}
		printf("\n");
	}

    printf("Matriz A\n");

	for(i = 0; i < linhasA; i++) {        
		for(j = 0; j < colunasA; j++) {
			printf("%6.f", matrizA[i][j]);
		}
		printf("\n\n");
	}

	printf("Matriz B\n");
	for(i = 0; i < linhasB; i++) {
		for(j = 0; j < colunasB; j++) {
			printf("%6.f", matrizB[i][j]); 
		}
		printf("\n\n");
	}

    printf("Matriz C\n");

    // multiplicacao das matrizes A e B
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