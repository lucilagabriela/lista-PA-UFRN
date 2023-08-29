/*#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char x[4];

    printf("%x", x+1);
}*/

/*

#include <stdio.h>
#include <stdlib.h>

int main(){
    char x1[4] = {"0000"};
    int x2[4] = {0,0,0,0};
    float x3[4] = {0,0,0,0};
    double x4[4] = {0,0,0,0};
    int i;

    for(i=0;i<4;i++){
        printf("Tipo char ->  x + %d = %p \n", i+1 , (x1+i));
    }
    for(i=0;i<4;i++){
        printf("Tipo int ->  x + %d = %p \n",i+1 , (x2+i));
    }
    for(i=0;i<4;i++){
        printf("Tipo float ->  x + %d = %p \n",i+1 , (x3+i));
    }
    for(i=0;i<4;i++){
        printf("Tipo double ->  x + %d = %p \n",i+1 , (x4+i));
    }
}*/

#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i;

    char x1[4];
    printf("x declarado como char:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %d\n", i+1, x1+i);
    }

    int x2[4];
    printf("x declarado como char:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %d\n", i+1, x2+i);
    }
}