#include <stdio.h>

void pointerTroca(int *a, int *b){

    *a = 20;
    *b = 30;

}

int main(){
    int a = 5, b = 8;

    int *pA = &a;
    int *pB = &b;

    pointerTroca(pA, pB);

    printf("a = %d, b = %d", *pA, *pB);

    return 0;
}