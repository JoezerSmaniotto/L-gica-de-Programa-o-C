#include<stdio.h>

int main (){
	
	float ini, fim, litros, val, lucro, media;
	
	printf("Informe a KM Inicial: ");
	scanf("%f",&ini);
	printf("Informe a KM Final: ");
	scanf("%f",&fim);
	printf("Informe a QTD de Litros Consumidos: ");
	scanf("%f",&litros);
	printf("Informe o Valor Recebido R$: ");
	scanf("%f",&val);
	
	media = (fim-ini)/litros;
	lucro = val-(2.5*litros);
	
	printf("\nMedia de Consumo: %.2f",media);
	printf("\nLucro: %.2f",lucro);

	return 0;
}

