#include <stdio.h>

int main(){
    float notaPrimeiroTrimestre, notaSegundoTrimestre, notaTerceiroTrimestre, resultadoTrimestral;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &notaPrimeiroTrimestre);
    fflush(stdin);

    printf("\nDigite a segunda nota do aluno: ");
    scanf("%f", &notaSegundoTrimestre);
    fflush(stdin);

    printf("\nDigite a terceira nota do aluno: ");
    scanf("%f", &notaTerceiroTrimestre);

    printf("\n\nA nota do aluno foi de %.1f", resultadoTrimestral = (notaPrimeiroTrimestre+notaSegundoTrimestre+notaTerceiroTrimestre)/3);

    if(resultadoTrimestral >= 6){
        printf(", e a nota foi suficiente para ser aprovado.");
    } else if(resultadoTrimestral >= 4){
        printf(", e o aluno esta de recuperacao.");
    } else{
        printf(", e a nota nao foi suficiente para ser aprovado.");
    }

    return 0;
}

void entradaDeNotas(){
    
}