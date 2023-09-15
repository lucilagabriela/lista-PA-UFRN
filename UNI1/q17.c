// Escreva uma função em linguagem C que escreva em um vetor a soma dos elementos correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor. Exemplo:
// soma_vetores(vet1, vet2, resultado, 4);

void somaVetores(int *vetor1, int *vetor2, int *vetorSoma, int tamanhoVetor) {
    int j;
    for (j = 0; j < tamanhoVetor; j++) {
        vetorSoma[j] = vetor1[j] + vetor2[j];
    }
}

int main(void) {
    int tamanhoVetor, i;
    int vetor1[tamanhoVetor], vetor2[tamanhoVetor], vetorSoma[tamanhoVetor]; // criacao de vetores

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanhoVetor); // guardar o tamanho do vetor no endereço da variável tamanhoVetor

    if (tamanhoVetor <= 0) {
        printf("Tamanho invalido");
    }

    // estrutura de repeticao para pegar, do usuario, os valores do vetor 1
    for (i = 0; i < tamanhoVetor; i++) {
        printf("Digite o %d elemento do vetor 1: ", i+1);
        scanf("%d", &vetor1[i]); // guardar os valores no vetor 1
    }
    // estrutura de repeticao para pegar, do usuario, os valores do vetor 2
    printf("Digite os elementos do vetor 2:");
    for (i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &vetor2[i]); // guardar os valores no vetor 1
    }
    // estrutura de repeticao para mostrar os valores do vetor 1
    for (i = 0; i < tamanhoVetor; i++) {
        printf("O %d elemento do vetor 1: %d\n", i+1, vetor1[i]);
    }

    // estrutura de repeticao para mostrar os valores do vetor 2
    for (i = 0; i < tamanhoVetor; i++) {
        printf("O %d elemento do vetor 2: %d\n", i+1, vetor2[i]);
    }
/*
    // estrutura de repeticao para mostrar os valores do vetor soma
    for (i = 0; i < tamanhoVetor; i++) {
        printf("O %d elemento do vetor soma: %d\n", i+1, vetorSoma[i]);
    }
*/
}