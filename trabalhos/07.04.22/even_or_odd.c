#include <stdio.h>

int evenOrOdd(i){

    if((i%2) == 0){
        printf("\nO numero e par!");
    }else{
        printf("\nO numero e impar!");
    }

}

int main(){
    int readNumber;

    printf("Digite um numero: ");
    scanf("%d", &readNumber);

    evenOrOdd(readNumber);

    return 0;
}