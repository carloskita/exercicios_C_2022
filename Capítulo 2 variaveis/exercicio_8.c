#include <stdio.h>

int main(){
    int numeroInteiro;
    float numeroReal;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numeroInteiro);
    fflush(stdin);

    printf("\nDigite um numero real: ");
    scanf("%f", &numeroReal);

    printf("\nO valor inteiro e:%d \nO valor real e:%.2f", numeroInteiro, numeroReal);

    return 0;
}