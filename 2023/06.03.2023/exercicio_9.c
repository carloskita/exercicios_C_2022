#include <stdio.h>

float calcRetang();
float calcCirc();
int tabuada();

int main(){
    int readA;
    float result;

    do
    {
        printf("\n---------------------Menu---------------------\n");
        printf("Digite 1 para fazer um calculo de Retangulo\nDigite 2 para calcular o circulo\nDigite 3 para calcular tabuada\nDigite 4 para fechar o programa\nDigite: ");
        scanf("%d", &readA);

        switch(readA){
            case 1:
                result = calcRetang();
                printf("\n%.2f\n", result);
                break;

            case 2:
                result = calcCirc();
                printf("\n%.2f\n", result);
                break;

            case 3:
                tabuada();
                break;

            case 4:
                return 0;
                break;

            default:
                printf("\nNumero invalido\n");
        }

    }while (readA != 999999);

    return 0;
}

float calcRetang(){
    float readLado1, readLado2, result;

    printf("\nDigite um lado do retangulo: ");
    scanf("%f", &readLado1);

    printf("\nDigite outro lado do retangulo: ");
    scanf("%f", &readLado2);

    result = readLado1 * readLado2;

    return (result);
}

float calcCirc(){
    float readRaio, result;

    printf("\nDigite o raio do ciculo para calcular(pi = 3.14): ");
    scanf("%f", &readRaio);

    result = 3.14 * (readRaio * readRaio);

    return (result);
}

int tabuada(){
    int readNum, result, i;

    printf("\nDIgite um numero para fazer a tabuada do mesmo: ");
    scanf("%d", &readNum);

    for(i = 1; i < 10; i++){
        printf("\n%d * %d = %d", i, readNum, i * readNum);
    }
}