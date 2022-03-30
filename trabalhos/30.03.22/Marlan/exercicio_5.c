#include <stdio.h>
#include <math.h>

int main(){
    float lerValor;

    printf("Digite um valor: ");
    scanf("%f", &lerValor);

    printf("\nO valor %.2f ao quadrado vai ser %.2f", lerValor, pow(lerValor, 2));

    return 0;
}