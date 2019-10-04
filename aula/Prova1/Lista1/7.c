#include <stdio.h>


int main(){
	
	float elei, br,nul, val, branco, nulos, validos;
	
	printf("Informe a QTD de Eleitores: ");
	scanf("%d",&elei);
		
	printf("Informe a QTD de Votos Brancos: ");
	scanf("%d",&br);
	
	printf("Informe a QTD de Votos Nulos: ");
	scanf("%d",&nul);	

	printf("Informe a QTD de Votos Validos: ");
	scanf("%d",&val);
	
	branco = (br*100)/elei; 
	nulos = (nul*100)/elei;
	validos = (val*100)/elei;
	
	printf("\nPercentual Votos Brancos: %.2f",branco);
	printf("\nPercentual Votos Nulos: %.2f",nulos);
	printf("\nPercentual Votos Validos: %.2f",validos);
	
	return 0;
}

