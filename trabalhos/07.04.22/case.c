#include <stdio.h>

int caseExample(i){
    switch (i)
    {
    case 1:
        printf("\nVoce digitou 1");
        break;

    case 2:
        printf("\nVoce digitou 2");
        break;
    
    default:
        printf("\nValor invalido");
        break;
    }
}

int main(){
    int lerNumero;

    printf("Digite um numero: ");
    scanf("%d", &lerNumero);

    caseExample(lerNumero);

    printf("\nO programa termina aqui!");

    return 0;
}