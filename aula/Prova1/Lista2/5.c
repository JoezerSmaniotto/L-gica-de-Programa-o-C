#include <stdio.h>

int main (){
	
	float ano;
	printf("Informe Seu ANO de Nascimento: ");
	scanf("%f",&ano);
	
	
	if((2018-ano)>17){

		printf("Pode Votar: %.0f ano, Bolsonaro 2018",(2018-ano));
	
	} else {

			printf("Nao Pode Votar: %.0f ano, Estude Mais Sobre Bolsonaro e Vote Nele Se Gostar",(2018-ano));

		}

	return 0;
}

