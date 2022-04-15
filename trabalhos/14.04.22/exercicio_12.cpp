#include <stdio.h>
#include <math.h>

int intBetweenPaintBucket(float litersNeeded){
	float bucketsNeededSmaller, bucketsNeededBigger;
	int bucketsTotal;
	
	bucketsNeededBigger = (litersNeeded / 18) - 1;
	bucketsNeededSmaller = (ceil((litersNeeded / 18)) / 3.6); //falta corrigir essa lógica aqui
	
	if(bucketsNeededBigger > 1){
		printf("\nVoce vai precisar de %.0f galoes e %.0f latas, com um valor de R$%.2f", ceil(bucketsNeededBigger), ceil(bucketsNeededSmaller), ((ceil(bucketsNeededBigger)) * 80) + (ceil(bucketsNeededBigger) * 25));
	}else{
		printf("\nVoce vai precisar de %.0f latas, com um valor de R$%.2f", ceil(bucketsNeededSmaller), ceil(bucketsNeededSmaller) * 25);
	}
}

int smallerPaintBucket(float litersNeeded){
	float bucketsNeeded;
	
	bucketsNeeded = litersNeeded / 3.6;
	
	if(bucketsNeeded > 1){
		printf("\n\nSerao necessarias %.0f galoes de tinta de 3.6L para pintar, com um custo de R$%.2f", ceil(bucketsNeeded), ceil(bucketsNeeded)*25);
	}else{
		printf("\n\nSera necessario apenas um galao de 3.6L, que custa R$25,00");
	}
}

int biggerPaintBucket(float litersNeeded){
	float bucketsNeeded;
	
	bucketsNeeded = litersNeeded / 18;
	
	if(bucketsNeeded > 1){
		printf("\n\nSerao necessarias %.0f latas de tinta de 18L para pintar, com um custo de R$%.2f", ceil(bucketsNeeded), ceil(bucketsNeeded)*80);
	}else{
		printf("\n\nSera necessario apenas uma lata de 18L, que custa R$80,00");
	}
}

int main(){
	int readUserChoice;
	float readPaintArea, litersNeededPerMeters;
	
	printf("Digite a area, em metros quadrados, a ser pintada: ");
	scanf("%f", &readPaintArea);
	
	litersNeededPerMeters = readPaintArea / 6;
	
	printf("\nSerao necessarios %.2fL de tinta\nDigite 1 para comprar apenas em latas de 18L\nDigite 2 para comprar apenas galoes de 3.6L\nDigite 3 para misturar latas e galoes para evitar desperdicio.\nDigite aqui: ", litersNeededPerMeters);
	scanf("%d", &readUserChoice);
	
	switch(readUserChoice){
		case 1:
			biggerPaintBucket(litersNeededPerMeters);
			break;
		
		case 2:
			smallerPaintBucket(litersNeededPerMeters);
			break;
			
		case 3:
			intBetweenPaintBucket(litersNeededPerMeters);
			break;
			
		default:
			printf("\n\nValor Invalido!");
	}
	
	return 0;
}
