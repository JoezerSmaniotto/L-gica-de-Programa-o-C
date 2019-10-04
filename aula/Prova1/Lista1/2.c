#include <stdio.h>

int main(){
	float horas, valorH, filhosM, result;
	printf("Informe a QTD de horas trabalhadas: ");
	scanf("%f",&horas);
	printf("Informe o valor que recebe por hora: ");
	scanf("%f",&valorH);
	printf("Informe a QTD de filhos menos de 14 anos: ");
	scanf("%f",&filhosM);
	
	result=(horas*valorH)+((horas*valorH)*0.02*filhosM);
	
	printf("Valor do Salario: %.2f",result);
	

	return 0;
}

