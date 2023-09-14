#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp(const void *a, const void *b) {
    float *x = (float *)a;
    float *y = (float *)b;
    if (*x < *y) {
        return -1;
    } else if (*x > *y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, i;
    float *vet;
    clock_t t_inicio, t_fim;
    double tempo_execucao;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    vet = (float*)malloc(n * sizeof(float));
    
    printf("Digite os elementos:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &vet[i]);
    }

     t_inicio = clock();

    qsort(vet, n, sizeof(float), cmp);

    t_fim = clock();

    tempo_execucao = (double)(t_fim - t_inicio) / CLOCKS_PER_SEC;

    printf("Os elementos, em ordem crescente, sao:\n");
    for (i = 0; i < n; i++) {
        printf("%f ", vet[i]);
    }

    printf("\nTempo de execucao, em %lf segundos: \n", tempo_execucao);


    free(vet);

    return 0;
}






