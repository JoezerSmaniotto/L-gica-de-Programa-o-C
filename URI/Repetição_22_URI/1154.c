#include <stdio.h>

int main(){
	double soma=0, total=0;
	int cont=0,num;
	
	do{
		scanf("%d",&num);
		
		if(num > 0){
			soma = soma + num;
			cont = cont + 1;
			//printf("Cont: %d\n",cont);
			//printf("Soma: %.0lf\n",soma);
		}
		
		
	}while(num > 0);

	
	total= (double) soma / cont;
	
	printf("%.2lf\n",total);
	
	return 0;
}

