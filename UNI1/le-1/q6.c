#include <stdlib.h>
#include <stdio.h>

int main(void) {
    // a questão quer qual expressão referencia o terceiro elemento do vetor, que é o 2
    int pulo[4] = {0, 1, 2, 3};
    printf("%d\n", *(pulo+2)); // Saída: 2
    printf("%d\n", *(pulo+3)); // Saída: 3
    printf("%d\n", pulo+3); // Saída: 6422300
    printf("%d\n", pulo+2); // Saída: 6422296
}