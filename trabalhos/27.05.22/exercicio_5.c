#include <stdio.h>

int main(){
    int readNumberElements, i;
    float result=0;

    printf("Digite quantos elementos voce deseja adicionar: ");
    scanf("%d", &readNumberElements);
    fflush(stdin);

    for(i = 1; i <= readNumberElements; i++){
        result += 1.0/i;
    }

    printf("\nO resultado da conta vai ser: %.16f", result);

    return 0;
}