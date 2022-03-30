#include <stdio.h>

int main(){
    float lerValor1, lerValor2;

    printf("Digite um valor: ");
    scanf("%f", &lerValor1);

    printf("\nDigite um valor: ");
    scanf("%f", &lerValor2);

    printf("\nOs resultados de quatro operacoes sao: ");
    printf("\n%.2f + %.2f = %.2f", lerValor1, lerValor2, lerValor1 + lerValor2);
    printf("\n%.2f - %.2f = %.2f", lerValor1, lerValor2, lerValor1 - lerValor2);
    printf("\n%.2f * %.2f = %.2f", lerValor1, lerValor2, lerValor1 * lerValor2);
    printf("\n%.2f / %.2f = %.2f", lerValor1, lerValor2, lerValor1 / lerValor2);

    return 0;
}

//efetuar as operações de adição, subtração, multiplicação e divisão.
