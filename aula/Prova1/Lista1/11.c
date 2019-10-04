#include<stdio.h>

int main (){
	float comp,qtv,qtreab,cons,result;
	
	printf("Informe o Conprimento de Pista em Metros: ");
	scanf("%f",&comp);
	printf("Informe a QTD De Voltas: ");
	scanf("%f",&qtv);
	printf("Informe a QTD De Reabastecimento: ");
	scanf("%f",&qtreab);
	printf("Informe o Consumo em KM/L: ");
	scanf("%f",&cons);
	
	result= (((comp/1000)*qtv)/3.5 )/(1+qtreab);
	
	printf("\nA QT minima de Litros: %.2f",result);
	
	return 0;
}
