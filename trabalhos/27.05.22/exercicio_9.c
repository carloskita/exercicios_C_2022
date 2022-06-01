#include <stdio.h>

typedef struct
{
    int readCode;
    float readHeight;
    float readWeight;
} registeredClients;

void get_data(registeredClients readClients[10], int add);
void finalReport(registeredClients readClients[10], int add);

int main(){
    registeredClients readClients[10];
    int menu, add = 0;

    while(menu != -1){
        printf("\n---------Terminal dos clientes---------\n");
        printf("\nDigite 1 para adicionar um cliente (limite de 10).\nDigite 0 para fechar o programa e receber o relatorio.\nDigite aqui: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 0:
            finalReport(readClients, add);

            return 0;
            break;
        
        case 1:
            if(add < 10){
                get_data(readClients, add);
                add++;
            }else{
                printf("\nLimite atingido!");
            }
            break;

        default:
            printf("Codigo invalido!");
            break;
        }
    }
}

void get_data(registeredClients readClients[10], int add){
    fflush(stdin);
    printf("\nDigite o codigo do cliente: ");
    scanf("%d", &readClients[add].readCode);

    fflush(stdin);
    printf("\nDigite a altura do cliente: ");
    scanf("%f", &readClients[add].readHeight);

    fflush(stdin);
    printf("\nDigite o peso dos clientes: ");
    scanf("%f", &readClients[add].readWeight);
}

void finalReport(registeredClients readClients[10], int add){
    int i, maxHeightCode, minHeightCode, maxWeightCode, minWeightCode;
    float maxHeight, minHeight, maxWeight, minWeight, resultWeight=0, resultHeight=0;
    
    maxHeight = readClients[0].readHeight;
    minHeight = readClients[0].readHeight;

    maxWeight = readClients[0].readWeight;
    minWeight = readClients[0].readWeight;

    for(i=0; i < add; i++){
        if(readClients[i].readHeight >= maxHeight){
            maxHeight = readClients[i].readHeight;
            maxHeightCode = readClients[i].readCode;
        }

        if(readClients[i].readHeight <= minHeight){
            minHeight = readClients[i].readHeight;
            minHeightCode = readClients->readCode;
        }

        if(readClients[i].readWeight >= maxWeight){
            maxWeight = readClients[i].readWeight;
            maxWeightCode = readClients[i].readCode;
        }

        if(readClients[i].readWeight <= minWeight){
            minWeight = readClients[i].readWeight;
            minWeightCode = readClients[i].readCode;
        }

        resultHeight += readClients[i].readHeight;
        resultWeight += readClients[i].readWeight;
    }

    printf("\nA maior altura eh do codigo %d com a altura %.2f", maxHeightCode, maxHeight);
    printf("\nA menor altura eh do codigo %d com a altura %.2f", minHeightCode, minHeight);
    printf("\nO maior peso eh do codigo %d com o peso %.2f", maxWeightCode, maxWeight);
    printf("\nO menor peso eh do codigo %d com o peso %.2f", minWeightCode, minWeight);
    printf("\nA media de altura dos alunos e de: %.2f\nA media de pesos dos alunos e de: %.2f", resultHeight/add, resultWeight/add);
}