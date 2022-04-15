#include <stdio.h>
#include <math.h>

int main(){
	float square;
	
	printf("Digite a largura de um quadrado: ");
	scanf("%f", &square);
	
	printf("\n\nA area do quadrado e: %.2f\nO dobro da area do quadrado e: %.2f", pow(square, 2), (pow(square, 2) * 2) );
	
	return 0;
}
