#include <stdio.h>

int main(){
    int a = 1, b = 2;
    int *pA = &a, *pB = &b;

    if((void *)pA > (void *)pB){
        printf("O endereco A = %p e maior que o B = %p.\n", (void *)pA, (void *)pB);
    }else {
        printf("O endereco B = %p e maior que o A = %p.\n", (void *)pB, (void *)pA);
    }

    // printf("%p\n", (void *)pA); //(void *) para Ver valores em hexadecimal
    // printf("%p\n", (void *)pB);

    return 0;
}