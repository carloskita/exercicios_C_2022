#include <stdio.h>

void somaVar(int a, int b, int *pC){
    *pC = a + b;
}

int main(){
    int a, b, c;
    int *pC = &c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    somaVar(a, b, pC);

    printf("O resultado da soma de a + b = %d", c);

    return 0;
}