#include<stdio.h>

int main (){
	float v1,v2, tot;

	printf("Informe a nota V1:" );
	scanf("%f",&v1);
	printf("Informe a nota V2:" );
	scanf("%f",&v2);

	tot = (v1+v2)/2;

	if (tot>=6){

		printf("Parabens APROVADO: %.2f\n",tot );
	}
		else if (tot>=3 && tot<6) {
			
			printf("Estude Ainda Pode Passar, EXAME: %.2f\n",tot );
		} if (tot<3){

				printf("Infelizmente vc foi Reprovado:%.2f\n",tot);
			}

	return 0;
}