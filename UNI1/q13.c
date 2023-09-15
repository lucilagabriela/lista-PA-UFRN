// Implemente em linguagem C uma função em um programa de computador que leia n valores do tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para realizar a tarefa.

#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i, j, n, valor;
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

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (valores[i] > valores[j]) {
                int temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }

    printf("Valores ordenados de forma crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", valores[i]);
    }

    free(valores);

}