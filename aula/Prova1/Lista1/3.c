#include <stdio.h>

int main () {

	float 	sal, per, reaj;
	
	printf("Informe O Valor O Salario Mensal: ");
	scanf("%f", &sal);
	
	printf("Infomre o percentuala ser reajusrado: ");
	scanf("%f",&per);
	
	reaj=sal+((sal*per)/100);
	
	printf("O Valor Do Reajuste Salarial Ficou: %.2f",reaj);
	printf("\nAcertouu Misseraviii ...hahahha");

	return 0;
}
