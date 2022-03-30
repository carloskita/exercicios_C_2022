#include <stdio.h>
#include <math.h>

int main(){
    float lerValor;

    printf("Digite o valor de um lado do quadrado: ");
    scanf("%f", &lerValor);

    printf("\nA area do quadrado vai ser: %.2f", pow(lerValor, 2));

    return 0;
}

//Calcular area do quadrado Area = Lado * Lado