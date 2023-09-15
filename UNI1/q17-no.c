// Escreva uma função em linguagem C que escreva em um vetor a soma dos elementos correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor. Exemplo:
// soma_vetores(vet1, vet2, resultado, 4);

#include <stdlib.h>
#include <stdio.h>

void somaVetores(int *vetor1, int *vetor2, int *resultado, int n){
    int i;
    for(i=0; i<n; i++){
        resultado[i] = vetor1[i] + vetor2[i];
    }
}

int main(){
    int *vetor1, *vetor2, *resultado, tamanhoVetor, i;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanhoVetor);
    vetor1 = (int *) malloc(tamanhoVetor*sizeof(int));
    vetor2 = (int *) malloc(tamanhoVetor*sizeof(int));
    resultado = (int *) malloc(tamanhoVetor*sizeof(int));

    for(i = 0; i < tamanhoVetor; i++){
        printf("Digite os valores do vetor 1: ");
        scanf("%d", &vetor1[i]);
    }

    
    for(i = 0; i < tamanhoVetor; i++){
        printf("Digite os valores do vetor 2: ");
        scanf("%d", &vetor2[i]);
    }

    somaVetores(vetor1, vetor2, resultado, tamanhoVetor);
    printf("Vetor resultado: ");
    for(i=0; i<tamanhoVetor; i++){
        printf("%d ", resultado[i]);
    }
    printf("\n");

    free(vetor1);
    free(vetor2);
    free(resultado);

    return 0;
}