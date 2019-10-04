#include <stdio.h>

int main (){

	float n1,n2,med,op;
	
	do{
		scanf("%f",&n1);
		while(n1<0 || n1>10){
			printf("Nota Invalida 1\n");
			scanf("%f",&n1);
		}

		scanf("%f",&n2);
		while(n2<0 || n2>10){
			printf("Nota Invalida 2\n");
			scanf("%f",&n2);
		}

		med=(n1+n2)/2;
		printf("%.2f Media\n",med);

		printf("Novo cálculo (1.sim 2.não)? ");
		scanf("%f",&op);

		while(op!=1 && op!=2 ){
			printf("Novo cálculo (1.sim 2.não)? ");
			scanf("%f",&op);
		}


	}while(op == 1);


	return 0;
}