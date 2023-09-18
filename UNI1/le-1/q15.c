// Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função de ordenação, mas que seja capaz de ordenar apenas inteiros do tipo int. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para a função de comparação que determinará como os elementos do array serão ordenados.

#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int n, i;

    printf("Informe quantos numeros serao ordenados: ");
    scanf("%d", &n);

    int *numeros = (int *)malloc(n * sizeof(int));

    printf("Informe os numeros: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        
    }
}