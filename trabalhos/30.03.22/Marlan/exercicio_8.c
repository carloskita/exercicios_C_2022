#include <stdio.h>

int main(){
    int lerIdade;

    printf("Digite sua idade atual: ");
    scanf("%d", &lerIdade);

    printf("\nCom %d anos de idade, ja se passaram %d dias.", lerIdade, lerIdade * 365);

    return 0;
}