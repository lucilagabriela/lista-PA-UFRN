#include <stdio.h>
#include <stdlib.h>

void alocar_modelo_tridimensional(int ****m, unsigned int comprimento, unsigned int altura, unsigned int largura)
{
  *m = (int ***)calloc(comprimento, sizeof(int **)); // Aloca a quantidade de linhas (comprimento) da matriz

  for (int c = 0; c < comprimento; c++)
  {
    (*m)[c] = (int **)calloc(altura, sizeof(int *));

    for (int a = 0; a < altura; a++)
    {
      (*m)[c][a] = (int *)calloc(largura, sizeof(int));
    }
  }
}

void desalocar_modelo_tridimensional(int ***m, unsigned int comprimento, unsigned int altura, unsigned int largura)
{
  for (unsigned int c = 0; c < comprimento; c++)
  {
    for (unsigned int a = 0; a < altura; a++)
    {
      free(m[c][a]); // Libera a memória para cada "linha" da matriz
    }
    free(m[c]); // Libera a memória para cada "coluna" da matriz
  }
  free(m); // Libera a memória para a matriz principal
}

void imprimir_modelo(int ***m, unsigned int comprimento, unsigned int altura, unsigned int largura)
{
  for (unsigned int c = 0; c < comprimento; c++)
  {
    printf("[\n");
    for (unsigned int a = 0; a < altura; a++)
    {
      printf("  [");
      for (unsigned int l = 0; l < largura; l++)
      {
        printf("%d", m[c][a][l]);
        if (l < largura - 1)
        {
          printf(", ");
        }
      }
      printf("]\n");
    }
    printf("]\n\n");
  }
}

int main()
{
  int ***matriz = NULL;

  unsigned int comprimento = 0; // Eixo X
  unsigned int altura = 0;      // Eixo Y
  unsigned int largura = 0;     // Eixo Z

  printf("Informe o valor do comprimento: ");
  scanf("%u", &comprimento);

  printf("Informe o valor da altura: ");
  scanf("%u", &altura);

  printf("Informe o valor da largura: ");
  scanf("%u", &largura);

  alocar_modelo_tridimensional(&matriz, comprimento, altura, largura);
  imprimir_modelo(matriz, comprimento, altura, largura);

  desalocar_modelo_tridimensional(matriz, comprimento, altura, largura);

  return 0;
}