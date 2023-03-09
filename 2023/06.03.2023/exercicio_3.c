#include <stdio.h>

float media(float a, float b);

int main(){
    float readA, readB, result;

    printf("Digite o primeiro numero para fazer a media: ");
    scanf("%f", &readA);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &readB);

    result = media(readA, readB);

    printf("%.1f", result);

    return 0;
}

float media(float a, float b){
    float resultMedia;

    resultMedia = (a + b) / 2;

    return (resultMedia);
}