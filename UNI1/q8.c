#include <stdlib.h>
#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",*(vet+i)); //%x determina que será mostrado um número em hexadecimal em letra maiúsculas
  }
}
