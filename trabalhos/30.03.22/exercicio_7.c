#include <stdio.h>

int main(){
    float lerValor1, lerValor2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &lerValor1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", &lerValor2);

    printf("\nA soma dos valores %.2f e %.2f, vai ser: %.2f", lerValor1, lerValor2, lerValor1/lerValor2);

    return 0;
}