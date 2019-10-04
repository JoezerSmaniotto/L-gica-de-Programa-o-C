#include <stdio.h>

int main (){
	
	float p1, p2, tot;
	printf("Informe a Notas da Prova 1: ");
	scanf("%f",&p1);
	printf("Informe a Notas da Prova 2: ");
	scanf("%f",&p2);
	tot=(p1+p2)/2;
	
	if(tot>=6){
		printf("\n%.2f Media, APROVADO, ESTA PRONTO PARA A PROXIMA FASE ??",tot);
	} else {
			printf("\n%.2f Media, REPROVADO, Estude Mais",tot);
	}

	return 0;
}

