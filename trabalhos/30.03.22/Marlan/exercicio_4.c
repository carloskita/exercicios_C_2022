#include <stdio.h>

int main(){
    float lerKg;

    printf("Digite um valor em kilogramas: ");
    scanf("%f", &lerKg);

    printf("\nO valor %.3f kg vai ser %.2f em gramas", lerKg, lerKg*1000);

    return 0;
}