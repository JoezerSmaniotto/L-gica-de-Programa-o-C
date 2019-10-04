#include <stdio.h>

int main (){
	
	float v1,v2,tot,op;

	printf("Informe o Primeiro Um Valor: ");
	scanf("%f",&v1);

	printf("Informe o Segundo Um Valor: ");
	scanf("%f",&v2);
		
	printf("Informe 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação dos valores: ");
	scanf("%f",&op);

	if(op==1){
		tot=v1+v2;
		printf("Result: %.2f\n",tot);
	}   else if (op==2){

			tot=v1-v2;
			printf("Result: %.2f\n",tot);

		} 	else if(op==3){
				
				tot=v1/v2;
				printf("Result: %.2f\n",tot);

			} 	else if (op==4){
					tot=v1*v2;
					printf("Result: %.2f\n",tot);

				} 	else {
						printf("Operacao Informada Nao Confere Com as Descritas Acima !!\n" );
					}


 
	return 0;
}