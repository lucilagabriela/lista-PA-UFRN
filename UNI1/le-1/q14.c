#include <stdlib.h>
#include <stdio.h>
#include <time.h> // para medir o tempo de execução do programa

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int n, i;
    // alocacao de memoria para n valores do tipo int
    int *valores = (int *)malloc(n * sizeof(int));

    printf("Digite a quantidade de valores que voce deseja ordenar: ");
    scanf("%d", &n);

    if (n <= 0) { // testar se o numero de valores é valido
        printf("O numero de valores deve ser maior que zero.");
    }

    for (i = 0; i < n; i++) {
        printf("Digite o valor: ");
        scanf("%d", &valores[i]);
    }

    // medir o tempo de execução usando clock_t
    //clock_t inicio = clock();

    time_t begin = time(NULL);

    // ordenar os valores, usando qsort:
    qsort(valores, n, sizeof(int), comparar);

    time_t end = time(NULL);
    
    //clock_t fim = clock();
    //double tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Valores ordenados de forma crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", valores[i]);
    }

    printf("Tempo de execucao: %.6f segundos.", (end - begin));

    // liberar a memória alocada dinamicamente
    free(valores);

}