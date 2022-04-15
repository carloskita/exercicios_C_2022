#include <stdio.h>

int main(){
	float meters;
	
	printf("Digite uma quantidade de metros: ");
	scanf("%f", &meters);
	
	printf("\nConvertendo %.2f metros para centimetros, fica: %.2f centimetros", meters, meters*100);
	
	return 0;
}
