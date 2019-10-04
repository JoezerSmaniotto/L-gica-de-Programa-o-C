#include <stdio.h>

int main()
{
	int fat,i,aux=1;
	
	scanf("%d",&fat);
	while(fat<=0){
		printf("Informe um Valor Positivo: ");
		scanf("%d",&fat);
	}
	
	for(i=1; i<=fat ; i++){
		aux = aux*i;	
		
	}
	
	printf("Fatorial: %d\n",aux);
	
	
	return 0;
}

