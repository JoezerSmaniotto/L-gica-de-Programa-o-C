#include<stdio.h>

int main(){
	float emp,salmin,custbike,qtbike,salf,lucroloja, tot;
		
	printf("Informe a Qtd de Funcionarios da Loja: ");
	scanf("%f",&emp);
	printf("Informe o Valor do Salario Minimo R$: ");
	scanf("%f",&salmin);
	printf("Informe o Preco De Custo Por Bike R$: ");
	scanf("%f",&custbike);
	printf("Informe a QTD de Bikes Vendidas: ");
	scanf("%f",&qtbike);
	
	tot=qtbike*custbike*1.5;
	salf=((qtbike*custbike*0.15)/4 ) +(2 *salmin);
	lucroloja= tot -(4*salf)-(qtbike*custbike);
	
	printf("\nSalario Final de Cada Empregado R$ %.2f",salf);
	printf("\nLucro Loja R$ %.2f",lucroloja);
	

	return 0;
}
