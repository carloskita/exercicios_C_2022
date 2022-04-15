#include <stdio.h>

int main(){
	int numA, numB;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numA);
	
	printf("\nDigite outro numero inteiro: ");
	scanf("%d", &numB);
	
	printf("\n\nA soma de %d+%d e: %d", numA, numB, numA+numB);
	
	return 0;
}
