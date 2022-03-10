#include <stdio.h>

int main(){
    int lerValor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &lerValor);

    printf("\n\nO valor hexadecimal e de: %x", lerValor);
    printf("\nO valor octadecimal e de: %o", lerValor);

    return 0;
}