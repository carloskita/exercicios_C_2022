#include <stdio.h>

void readUser(int *pA){
    printf("Digite um valor para a: ");
    scanf("%d", pA);
}

int main(){
    int a;

    readUser(&a);

    printf("\nO valor de a vai ser: %d", a);

    return 0;
}