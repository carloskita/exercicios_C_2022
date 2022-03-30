#include <stdio.h>

int main(){
    int lerValor;

    printf("Digite um numero para ver o dobro do mesmo: ");
    scanf("%d", &lerValor);

    printf("\nO dobro de %d e: %d", lerValor, lerValor*2);

    return 0;
}