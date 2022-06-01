#include <stdio.h>

int main(){
    int readAge;
    float readSalary;
    char readSex, readCivilState;

    printf("Digite sua idade(Limite de ate 150 anos): ");
    scanf("%d", &readAge);
    fflush(stdin);

    printf("\nDigite seu salario(Deve ser maior que 0): ");
    scanf("%f", &readSalary);
    fflush(stdin);

    printf("\nDigite seu sexo(Digite m ou f): ");
    scanf("%c", &readSex);
    fflush(stdin);

    printf("\nDigite seu estado civil(Digite s, c, v ou d): ");
    scanf("%c", &readCivilState);
    fflush(stdin);

    if(readAge >= 0 && readAge <=150){
        printf("\nVoce tem %d anos", readAge);
    }else{
        printf("\nA idade digitada passou do limite de 150 anos");
    }

    if(readSalary > 0){
        printf("\nVoce recebe R$%.2f", readSalary);
    }else{
        printf("\nVoce inseriu um valor abaixo de zero");
    }

    if(readSex == 'm' || readSex == 'f'){
        printf("\nVoce e do sexo: %c", readSex);
    }else{
        printf("\nVoce digitou um caractere errado");
    }

    if(readCivilState == 's' || readCivilState == 'c' || readCivilState == 'v' || readCivilState == 'd'){
        printf("\nSeu estado civil e: %c", readCivilState);
    }else{
        printf("\nVoce digitou um caractere errado.");
    }

    return 0;
}