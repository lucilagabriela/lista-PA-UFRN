#include <stdlib.h>
#include <stdio.h>

void somaVetores(int *v1, int *v2, int *vetorSoma, int tamanhoVetor) {
    for (int i = 0; i < tamanhoVetor; i++) {
        vetorSoma[i] = v1[i] + v2[i];
    }
}

int main(void) {
    int tamanhoVetor, i;
    int v1[tamanhoVetor], v2[tamanhoVetor], vetorSoma[tamanhoVetor];

    printf("Digite o tamanho dos vetores:");
    scanf("%d", &tamanhoVetor);

    printf("Digite os elementos do primeiro vetor: ");
    for (i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do segundo vetor: ");
    for (i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &v2[i]);
    }

    somaVetores(v1, v2, vetorSoma, tamanhoVetor);

    printf("Vetor da soma dos vetores:");
    for (i = 0; i < tamanhoVetor; i++) {
        printf("%d \n", vetorSoma[i]);
    }
    
}