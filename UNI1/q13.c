#include <stdlib.h>
#include <stdio.h>

int ordenacao(float *vet, int n) {
    int i, j;
    float aux;

    for (i = 1; i < n; i ++) {
        aux = vet[i];
        j = i - 1;

        while (j >= 0 && vet[j] > aux) {
            vet[j+1] = vet[j];
            j--;
        }
    }
}

int main(void) {

    int n, i;
    float *vet;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    vet = (float*)malloc(n * sizeof(float));

    printf("Digite os elementos: \n");
    
    for (i = 0; i < n; i++) {
        scanf("%f", &vet[i]);
    }

    ordenacao(vet, n);

    printf("Os elementos, em ordem crescente, sao: \n");
    for (i = 0; i < n; i++) {
        printf("%f ", vet[i]);
    }

    free(vet);
}