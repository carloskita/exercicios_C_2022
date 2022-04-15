#include <stdio.h>

int main(){
	float fahrenheit;
	
	printf("Digite uma temperatura em fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	printf("\n\nA temperatura %.2f fahrenheit vai ser %.2f celsius;", fahrenheit, 5*((fahrenheit-32)/9));
	
	return 0;
}
