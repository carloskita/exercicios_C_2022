#include <stdio.h>

int main(){
    int lerValor[3], helper = 1;

    for(int i = 0; i <=2; i++){
        printf("\nDigite o valor %d: ", helper);
        scanf("%d", &lerValor[i]);
        helper++;
    }

    printf("\nA soma dos valores %d, %d e %d vai ser: %d", lerValor[0], lerValor[1], lerValor[2], (lerValor[0]+lerValor[1]+lerValor[2]));

    return 0;
}