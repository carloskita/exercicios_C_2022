#include <stdio.h>
#include <math.h>

int main(){
	int numA, numB;
	float numC;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numA);
	
	printf("\nDigite outro numero inteiro: ");
	scanf("%d", &numB);
	
	printf("\nDigite um numero real: ");
	scanf("%f", &numC);
	
	printf("\n\nOs numeros digitados foram: %d - %d - %.2f", numA, numB, numC);
	printf("\nO produto do dobro do primeiro com metade do segundo: (%d * 2) * (%d / 2) = %d", numA, numB, (numA*2) * (numB/2));
	printf("\nA soma do triplo do primeiro com o terceiro: (%d * 3) + %.2f = %.2f", numA, numC, (numA * 3) + numC);
	printf("\nO terceiro elevado ao cubo: %.2f^3 = %.3f", numC, pow(numC, 3));
	
	return 0;
}
