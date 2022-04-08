#include <stdio.h>

void conditionSquareOrRectangle(float base, float height){
    float area, perimeter;

    if(base == height){
        //Square
        area = base * base;
        perimeter = 4 * base;
        printf("\n\nOs numeros formam um quadrado com uma area de %.2f e perimetro de %.2f", area, perimeter);
    }else{
        //Rectangle
        area = base * height;
        perimeter = 2 * (base + height);
        printf("\n\nOs numeros formam um retangulo com uma area de %.2f e perimetro de %.2f", area, perimeter);
    }
}

int main(){
    float readBase, readHeight;

    printf("Digite a base: ");
    scanf("%f", &readBase);

    printf("\nDigite a altura: ");
    scanf("%f", &readHeight);

    conditionSquareOrRectangle(readBase, readHeight);

    return 0;
}
