#include <stdio.h>

int maiorValor(int a, int b);

int main(){
    int readA, readB, result;

    printf("Digite um numero: ");
    scanf("%d", &readA);

    printf("\nDigite outro numero: ");
    scanf("%d", &readB);

    result = maiorValor(readA, readB);

    printf("%d", result);

    return 0;
}

int maiorValor(int a, int b){
    int resultMaior;

    if(a > b){
        resultMaior = a;
    }else{
        resultMaior = b;
    }

    return (resultMaior);
}