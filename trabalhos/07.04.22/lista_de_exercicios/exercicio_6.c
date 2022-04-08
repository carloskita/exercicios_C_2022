#include <stdio.h>

void calculateNewSalary(int yearsOfService, int numberOfDependents, float presentSalary){
    float nextSalary;

    if(yearsOfService > 4 && numberOfDependents > 3 && presentSalary < 2000.0){
        nextSalary = presentSalary + (presentSalary * 0.2);
        printf("\n\nO salario era R$%.2f, com o aumento de 20%%, vai ser R$%.2f", presentSalary, nextSalary);
    }else{
        printf("\n\nVoce nao possui as condicoes para o aumento");
    }
}

int main(){
    int readYearsOfService, readNumberOfDependents;
    float readPresentSalary;

    printf("Digite quantos anos de servico voce possui: ");
    scanf("%d", &readYearsOfService);

    printf("\nDigite o numero de dependentes: ");
    scanf("%d", &readNumberOfDependents);

    printf("\nDigite seu salario atual: R$");
    scanf("%f", &readPresentSalary);

    calculateNewSalary(readYearsOfService, readNumberOfDependents, readPresentSalary);

    return 0;
}