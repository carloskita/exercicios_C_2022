#include <stdio.h>

int main(){
    int lerValor1, lerValor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &lerValor1);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &lerValor2);

    printf("\nA soma dos valores %d e %d, vai ser: %d", lerValor1, lerValor2, lerValor1+lerValor2);

    return 0;
}