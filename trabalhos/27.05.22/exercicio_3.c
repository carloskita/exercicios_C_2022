#include <stdio.h>

int main(){
    int readNumber=1, i;

    while(readNumber > 0){
        printf("\nDigite um numero de 1 ate 10 para fazer a tabuada: ");
        scanf("%d", &readNumber);
        fflush(stdin);

        if(readNumber <= 0 || readNumber > 10){
            return 0;
            break;
        }

        for(i=1; i <= 10; i++){
            printf("\n%d * %d = %d", readNumber, i, readNumber * i);
        }
    }

    return 0;
}