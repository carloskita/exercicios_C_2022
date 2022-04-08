#include <stdio.h>

int evenOrOdd(i){

    if((i%2) == 0){
        printf("\nO numero e par! O jogador 1 venceu!");
    }else{
        printf("\nO numero e impar! O jogador 2 venceu!");
    }

}

int main(){
    int readNumber[2];

    printf("Digite um numero: ");
    scanf("%d", &readNumber[0]);

    printf("Digite outro numero: ");
    scanf("%d", &readNumber[1]);

    evenOrOdd(readNumber[0] + readNumber[1]);

    return 0;
}
