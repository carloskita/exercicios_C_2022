#include <stdio.h>

int inverterNum(int a);

int main(){
    int readA, result;

    printf("Digite 4 numeros para ve-los invertido: ");
    scanf("%d", &readA);

    result = inverterNum(readA);

    printf("\n%d", result);

    return 0;
}

int inverterNum(int a){
    int result, separated[4], temp, temp2;

    if(a < 1000 || a > 9999){
        printf("Numero invalido");

        return 0;
    }else{
        separated[0] = a / 1000;
        temp = a % 1000;
        separated[1] = temp / 100;
        temp2 = temp % 100;
        separated[2] = temp2 / 10;
        separated[3] = temp2 % 10;

        result = separated[3] * 1000 + separated[2] * 100 + separated[1] * 10 + separated[0];

        return (result);
    }
}