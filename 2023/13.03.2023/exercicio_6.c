#include <stdio.h>

void splitIntFloat(float a, int *aInteiro, float *aFracionado){
    *aInteiro = (int)a;
    *aFracionado = a - *aInteiro;
}

int main(){
    float a, aFracionado;
    int aInteiro;

    printf("Digite um numero fracionado para separar com inteiro: ");
    scanf("%f", &a);

    splitIntFloat(a, &aInteiro, &aFracionado);

    printf("\nOs numeros separados sao: %d, %f", aInteiro, aFracionado);

    return 0;
}