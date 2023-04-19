#include <stdio.h>
#include <math.h>

float pi = 3.14159216;

void raioCirc(float r, float *area, float *volume){
    *area = 4 * pi * pow(r, 2);
    *volume = (4.0/3.0) * pi * pow(r, 3);
}

int main(){
    float raio, area, volume;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    raioCirc(raio, &area, &volume);

    printf("\nA area vai ser: %f\nO volume vai ser: %f", area, volume);

    return 0;
}