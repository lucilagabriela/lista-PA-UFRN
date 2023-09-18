#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i;

    char x1[4];
    printf("x declarado como char:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %x\n", i+1, x1+i);
    }

    int x2[4];
    printf("\nx declarado como int:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %x\n", i+1, x2+i);
    }

    float x3[4];
    printf("\nx declarado como float:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %x\n", i+1, x3+i);
    }
    
    double x4[4];
    printf("\nx declarado como double:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %x\n", i+1, x4+i);
    }
}