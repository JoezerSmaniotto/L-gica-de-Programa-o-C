#include <stdio.h>


int main (){
	
	float com,alt,lar, result;
	
	printf("Informe o Comprimento: ");
	scanf("%f",&com);

	printf("Informe a Largura: ");
	scanf("%f",&lar);
	
	printf("Informe a Altura: ");
	scanf("%f",&alt);	
		
	
	result=(( (alt*lar*2)+ (com*alt*2)) /1.5);
	
	printf("A qtd de caixas: %.2f",result);
		
		
	return 0;
}
