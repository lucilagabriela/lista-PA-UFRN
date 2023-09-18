#include <stdlib.h>
#include <stdio.h>

int soma(int a, int b);

int main() {
    int (*op) (int, int);

    int n1 = 18;
    int n2 = 6;
    int resultadoSoma = soma(n1, n2);
    printf("Resultado da operacao de soma = %d", resultadoSoma);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}