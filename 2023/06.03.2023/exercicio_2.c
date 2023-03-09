#include <stdio.h>

int dobro(int a);

int main(){
    int readA, result;

    printf("Digite um numero para retornar o Dobro do mesmo: ");
    scanf("%d", &readA);

    result = dobro(readA);

    printf("%d", result);

    return 0;
}

int dobro(int a){
    int resultDobro;
    
    resultDobro = a * 2;

    return resultDobro;
}