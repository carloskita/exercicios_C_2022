#include <stdio.h>

int soma(int a, int b);

int main(){
    int a, b, result;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    result = soma(a, b);
    
    printf("%d", result);

    return 0;
}

int soma(int a, int b){
    int r;
    
    r = a + b;

    return (r);
}