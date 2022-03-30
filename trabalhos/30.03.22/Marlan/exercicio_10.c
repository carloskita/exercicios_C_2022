#include <stdio.h>

int main(){
    float lerNotas[4], resultante;
    int helper = 1;

    printf("Digite quatro notas a seguir: ");

    for(int i = 0; i <= 3; i++){
        printf("\nDigite a nota %d: ", helper);
        scanf("%f", &lerNotas[i]);

        helper++;
    }

    resultante = (lerNotas[0] + lerNotas[1] + lerNotas[2] + lerNotas[3]) / 4;

    printf("\nA media das notas %.2f, %.2f, %.2f e %.2f vai ser: %.2f", lerNotas[0], lerNotas[1], lerNotas[2], lerNotas[3], resultante);

    return 0;
}