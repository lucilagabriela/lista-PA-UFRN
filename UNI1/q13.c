#include <stdlib.h>
#include <stdio.h>

int main() {
    int (*op)(int, int); // declarando o ponteiro para funcao

    int n1 = 18;
    int n2 = 6.0;

    op = soma;
    int resultadoSoma = op(n1, n2);
    printf("Resultado da operação de soma = %d\n", resultadoSoma);

    return 0;
}

int soma (int a, int b) { // funcao soma
    return a + b;
}
