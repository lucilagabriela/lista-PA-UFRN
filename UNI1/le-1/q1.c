#include <stdlib.h>
#include <stdio.h>

int main() {
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    int p1 = p == &i; // 1 = true
    int subt = (*p - *q); // resultado = 3 - 5 = -2
    int p2 = **&p; // 3
    int expnum = (3 - *p / (*q) + 7); // 10

    printf("Valor de p == &i = %d\n", p1);
    printf("Valor de *p - *q = %d\n", subt);
    printf("O valor de **&p = %d\n", p2);
    printf("O valor da expressao eh: %d", expnum);

    return 0;
}
