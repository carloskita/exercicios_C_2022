#include <stdio.h>

void funcDobro(int *a){
    *a = *a + *a;
}

int main(){
    int a;
    int *pA = &a;

    printf("Digite o valor de a para receber o dobro: ");
    scanf("%d", &a);

    funcDobro(pA);

    printf("\nO dobro do valor sera: %d", a);

    return 0;
}