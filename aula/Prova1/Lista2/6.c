#include <stdio.h>

int main (){
	
	float qtmacas, result;
	printf("Informe a QT de Macas: ");
	scanf("%f",&qtmacas);
	
	
	if( qtmacas < 13 ){
			
		result= qtmacas*0.30;	
		printf("Valor R$ %.2f ",result );
	
	} else {

		result= qtmacas*0.25;	
		printf("Valor R$ %.2f ",result );

		}

	return 0;
}

