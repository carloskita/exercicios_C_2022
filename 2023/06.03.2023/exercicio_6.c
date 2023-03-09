#include <stdio.h>

int separateNum(int a);

int main(){
    int readA, result;

    printf("Digite um numero para separar o ultimo digito: ");
    scanf("%d", &readA);

    result = separateNum(readA);

    printf("\n%d", result);

    return 0;
}

int separateNum(int a){
    int result, i;

    if(a < 0){
        printf("\nNumero invalido");

        return 0;
    }else if(a < 10){
        result = a;
    }else{
        result = a % 10;
    }
}