#include <stdio.h>
#include <math.h>

#define linhas 8
#define colunas 8

int main() {
  //unsigned char m[8][8]; Tem que inicializar a matriz com os valores;
  unsigned int resultado = 0; // Inteiro (sem sinal) que vai representar
  unsigned char m[8][8] = {
  {'0', '0', '0', '0', '0', '0', '0', '0' },
  {'0', '0', '0', '0', '0', '0', '0', '0' },
  {'0', '0', '0', '0', '0', '0', '0', '0' },
  {'0', '0', '0', '0', '0', '0', '0', '0'},
  {'0', '0', '0', '0', '0', '0', '0', '0' },
  {'0', '0', '0', '0', '0', '0', '0', '0'},
  {'0', '0', '0', '0', '0', '0', '0', '0' },
  {'1', '1', '1', '1', '1', '1', '1', '1' }
};

  int potenciaDe2 = 0;

  for (int linha = 7; linha >= 0; linha--) {
    unsigned int somaDaLinha = 0;

    for (int coluna = 7; coluna >= 0; coluna--) {
      const char estado = m[linha][coluna]; // Valor do estado em char ('1' ou '0')
      const int estadoEmInteiro = estado - '0';

      somaDaLinha += estadoEmInteiro * (pow(2, potenciaDe2));
      potenciaDe2++; 
    }

    resultado += somaDaLinha;
  }

  printf("Inteiro convertido: %u", resultado);
  
  return 0;
}