#include <stdio.h>

int soma(int a, int b, int c);

int main(){
    int readNum[3], result;

    printf("Digite um valor para somar: ");
    scanf("%d", &readNum[0]);

    printf("\nDigite um valor para somar: ");
    scanf("%d", &readNum[1]);

    printf("\nDigite um valor para somar: ");
    scanf("%d", &readNum[2]);

    result = soma(readNum[0], readNum[1], readNum[2]);

    printf("\n%d", result);

    return 0;
}

int soma(int a, int b, int c){
    int result;

    result = a + b + c;

    return (result);
}