#include <stdio.h>

int main(){
	float celsius;
	
	printf("Digite uma temperatura em celsius: ");
	scanf("%f", &celsius);
	
	printf("\n\nA temperatura %.2f celsius vai ser %.2f fahrenheit;", celsius, celsius*1.8+32);
	
	return 0;
}
