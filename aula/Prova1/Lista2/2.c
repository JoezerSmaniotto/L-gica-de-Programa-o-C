#include <stdio.h>

int main (){
	float valor;
	
	printf("Informe Um valor: ");
	scanf("%f",&valor);
	
	if(valor>=0){
		printf("%.0f: Positivo\n",valor);
	} else {	
		printf("%.0f: Negativo\n",valor);
		}
	


	return 0;
}

