#include <stdio.h>

int main(){
    float lerPolegadas;

    printf("Digite um valor em polegadas para transformar em centimetros: ");
    scanf("%f", &lerPolegadas);

    printf("\nO valor %.2f polegadas vai ser %.2f em centimetros", lerPolegadas, lerPolegadas * 2.54);

    return 0;
}

//1 polegada = 2.54 centímetros
