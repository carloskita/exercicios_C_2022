#include <stdio.h>

void conditionMarket(float price, int choiceDiscount){
    if(choiceDiscount == 5){
        price = price - (price * 0.1);
        printf("\n\nO preco com desconto de 10%% fica: R$%.2f", price);
    }else{
        price = price - (price * 0.2);
        printf("\n\nO preco com desconto de 20%% fica: R$%.2f", price);
    }
}

int main(){
    int readChoiceDiscount;
    float readPrice;

    printf("---Forma de pagamento---\nCartao de credito - Codigo 5 - 10%%\nA vista - Qualquer valor - 20%%");
    
    printf("\n\nDigite o preco do produto: R$");
    scanf("%f", &readPrice);

    printf("\nDigite o codigo de pagamento: ");
    scanf("%d", &readChoiceDiscount);

    conditionMarket(readPrice, readChoiceDiscount);

    return 0;
}