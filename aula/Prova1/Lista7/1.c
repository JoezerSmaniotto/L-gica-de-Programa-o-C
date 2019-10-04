#include <stdio.h>

int main (){

	float n1,n2,med,op,aprov=0,exame=0,repro=0,papro,pexam,preprov, totalunos=0;
	
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

		totalunos++;
		med=( n1 + n2 )/2;
		printf("%.2f Media\n",med);

		if(med >= 6){
			aprov++;
		
		} else if(med<3){
			repro++;
		
		}else{
			exame++;
		}

		printf("Novo cálculo (1.sim 2.não)? ");
		scanf("%f",&op);

		while(op!=1 && op!=2 ){
			printf("Novo cálculo (1.sim 2.não)? ");
			scanf("%f",&op);
		}


	}while(op == 1);

	// Calculo Percentual
	papro=(aprov*100)/totalunos;
	pexam=(exame*100)/totalunos;
	preprov=(repro*100)/totalunos;

	printf("%.0f (quantidade de aprovados)\n",aprov);
	printf("%.0f (quantidade de reprovados)\n",repro);
	printf("%.0f (quantidade de exame)\n",exame);
	printf("%.0f (percentual de aprovados)\n",papro);
	printf("%.0f (percentual de reprovados)\n",preprov);
	printf("%.0f (percentual de exame)\n",pexam);

	return 0;
}