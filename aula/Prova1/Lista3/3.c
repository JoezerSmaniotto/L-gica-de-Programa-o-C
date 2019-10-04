#include <stdio.h>

int main (){

	float numlad,medlad,tot;

		printf("Informe Numero de Lados: ");
		scanf("%f",&numlad);	

		printf("Informe a Media de Lados: ");
		scanf("%f",&medlad);
s
	if( numlad == 3 ){


		tot=numlad*medlad;
		printf("Triangulo\n");
		printf("Perimetro: %.2f\n",tot);

	} else if (numlad == 4){

		tot=medlad*medlad;
		printf("Quadrado\n");
		printf("Area: %.2f\n",tot);

		} else if ( numlad == 5){

				printf("Pentagono\n");

			} else{

				printf("Numero da Dados nao Condefe com um Triangulo, Quadrado ou Pentagono \n");
			}


	return 0;
}