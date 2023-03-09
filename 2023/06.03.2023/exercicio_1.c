#include <stdio.h>
#include <math.h>

int cubo(int a);

int main(){
    int readA, result;

    printf("Digite um numero para retornar o Cubo do mesmo: ");
    scanf("%d", &readA);

    result = cubo(readA);

    printf("%d", result);

    return 0;
}

int cubo(int a){
    int resultCubo;
    
    resultCubo = pow(a, 3);

    return resultCubo;
}