#include <stdio.h>

int somaNum(int a);

int main(){
    int readA, result;

    printf("Digite 4 numeros para somar os numeros: ");
    scanf("%d", &readA);

    result = somaNum(readA);

    printf("\n%d", result);

    return 0;
}

int somaNum(int a){
    int result, i, separated[4], temp;

    if(a < 1000 || a > 9999){
        printf("\nNumero invalido");

        return 0;
    }else{
        separated[0] = a % 10;
        temp = a / 10;
        separated[1] = temp % 10;
        temp = temp / 10;
        separated[2] = temp % 10;
        temp = temp / 10;
        separated[3] = temp % 10;
        temp = temp / 10;

        result = separated[0] + separated[1] + separated[2] + separated[3];
    }

    return (result);
}