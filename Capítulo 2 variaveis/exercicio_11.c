#include <stdio.h>

int main(){
    int lerValor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &lerValor);

    printf("\nO valor que foi digitado e: %3d", lerValor);
    printf("\nO valor que foi digitado e: %03d", lerValor);

    return 0;
}