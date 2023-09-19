#include <stdlib.h>
#include <stdio.h>

int calculoMatrizTri(int altura, int largura, int profundidade, int x, int y, int z) {
    return x * largura * profundidade + y * profundidade + z;
}

int main() {
    int altura, largura, profundidade;

    printf("Digite a altura da matriz: ");
    scanf("%d", &altura);
    printf("Digite a largura da matriz: ");
    scanf("%d", &largura);
    printf("Digite a profundidade da matriz: ");
    scanf("%d", &profundidade);

    int *matriz = (int *)malloc(altura * largura * profundidade * sizeof(int));

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                int indice = calcularIndice(altura, largura, profundidade, i, j, k);
                printf("Digite o valor (0 ou 1) para a posicao (%d, %d, %d): ", i, j, k);
                scanf("%d", &matriz[indice]);
            }
        }
    }

    printf("Matriz tridimensional:\n");
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                int indice = calcularIndice(altura, largura, profundidade, i, j, k);
                printf("%d ", matriz[indice]);
            }
            printf("\n");
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}