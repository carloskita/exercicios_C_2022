#include <stdio.h>
#include <math.h>

int bucketsNeeded(float paintArea){
	float litersNeededPerMeters, bucketsNeeded;
	
	litersNeededPerMeters = paintArea / 3;
	bucketsNeeded = litersNeededPerMeters / 18;
	
	printf("\n\nCom uma area de %.2f metros quadrados, serao necessarios %.2f litros", paintArea, litersNeededPerMeters);
	
	if(bucketsNeeded > 0){
		printf("\nSerao necessarias %.0f latas de tinta de 18L para pintar, com um custo de R$%.2f", ceil(bucketsNeeded), ceil(bucketsNeeded)*80);
	}else{
		printf("\nSera necessario apenas uma lata de 18L, que custa R$80,00");
	}
}

int main(){
	float readPaintArea;
	
	printf("Digite a area, em metros quadrados, a ser pintada: ");
	scanf("%f", &readPaintArea);
	
	bucketsNeeded(readPaintArea);
	
	return 0;
}
