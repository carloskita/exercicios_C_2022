#include <stdio.h>

int conditionSick(float tempCelsius){
    if(tempCelsius >= 37.5){
        printf("\n\nESTA COM FEBRE!");
    }else{
        printf("\n\nESTA NORMAL!");
    }
}

int main(){
    float readTempCelsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &readTempCelsius);

    conditionSick(readTempCelsius);

    return 0;
}