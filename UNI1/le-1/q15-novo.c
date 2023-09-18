// Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função de ordenação, mas que seja capaz de ordenar apenas inteiros do tipo int. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para a função de comparação que determinará como os elementos do array serão ordenados.

#include <stdlib.h>
#include <stdio.h>
#include <time.h> // para medir o tempo de execução do programa

int main(void) {
    int n, i, j, temp;

    printf("Informe quantos numeros serao ordenados: ");
    scanf("%d", &n);

    int *numeros = (int *)malloc(n * sizeof(int));

    printf("Informe os numeros: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        
    }

    time_t begin = time(NULL);
    // ordenacao dos numeros
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    time_t end = time(NULL);

    printf("Numeros ordenados:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Tempo de execucao: %.6f segundos.", (end - begin));

    free(numeros);
}