#include <stdio.h>

int main(){
	int kilos, excedentWeight;
	
	printf("Digite quantos kilos voce esta levando: ");
	scanf("%d", &kilos);
	
	excedentWeight = kilos - 50;
	
	if(excedentWeight > 0){
		printf("\n\nVoce esta com um excedente de %d kilos e vai pagar uma multa de R$%d.00.", excedentWeight, excedentWeight * 4);
	}else{
		printf("\n\nVoce nao passou o limite de peixe");
	}
	
	return 0;
}
