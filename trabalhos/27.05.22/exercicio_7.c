#include <stdio.h>

int main(){
    int readElements, i;
    float result, readTemperature, smallerTemperature, biggerTemperature;

    printf("Digite quantas temperaturas voce deseja digitar: ");
    scanf("%d", &readElements);
    fflush(stdin);

    printf("\nDigite a primeira temperatura: ");
    scanf("%f", &readTemperature);
    fflush(stdin);

    biggerTemperature = readTemperature;
    smallerTemperature = readTemperature;
    result += readTemperature;

    for(i=1; i <= readElements - 1; i++){
        printf("\nDigite a temperatura: ");
        scanf("%f", &readTemperature);
        fflush(stdin);

        result += readTemperature;

        if(readTemperature > biggerTemperature){
            biggerTemperature = readTemperature;
        }
        
        if(readTemperature < smallerTemperature){
            smallerTemperature = readTemperature;
        }
    }

    printf("\nA media das temperaturas foi de: %.2f\nA menor temperatura foi %.2f\nA maior temperatura foi %.2f", result/readElements, smallerTemperature, biggerTemperature);

    return 0;
}