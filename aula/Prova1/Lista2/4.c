#include <stdio.h>

int main (){
	
	float p1, p2;
	printf("Informe 1 Valor: ");
	scanf("%f",&p1);
	printf("Informe 1 Valor: ");
	scanf("%f",&p2);
	
	if(p1>p2){

		printf("Maior: %.0f",p1);
	
	} else {

			printf("Maior: %.0f",p2);

		}

	return 0;
}

