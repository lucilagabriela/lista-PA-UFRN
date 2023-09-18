#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int *vet1, int *vet2, int *resultado, int n){
    int i;
    for(i=0; i<n; i++){
        resultado[i] = vet1[i] + vet2[i];
    }
}

int main(){
    int *vet1, *vet2, *resultado, n, i;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);
    vet1 = (int *) malloc(n*sizeof(int));
    vet2 = (int *) malloc(n*sizeof(int));
    resultado = (int *) malloc(n*sizeof(int));

    printf("Digite os valores do primeiro vetor: ");
    for(i=0; i<n; i++){
        scanf("%d", &vet1[i]);
    }

    printf("Digite os valores do segundo vetor: ");
    for(i=0; i<n; i++){
        scanf("%d", &vet2[i]);
    }

    soma_vetores(vet1, vet2, resultado, n);

    printf("Vetor resultado: ");
    for(i=0; i<n; i++){
        printf("%d ", resultado[i]);
    }

    printf("\n");

    free(vet1);
    free(vet2);
    free(resultado);
    
    return 0;
}