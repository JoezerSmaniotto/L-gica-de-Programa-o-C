#include <stdio.h>

int main(){
	int i,h1,h2;
	float temp[12],soma=0,cont=0,md;
	
	for(i=1;i<=12;i++){
		printf("Informe Uma Temp: P/ Pos %d: ",i);
		scanf("%f",&temp[i]);
	}
	
	do{
		printf("Informe 2 Valores");
		scanf("%d %d",&h1,&h2);
		
		if(h1<h2 || h1==h2){
			for(i=h1;i<=h2;i++){
				soma=soma+temp[i];
				cont++;
			}
		}
		
		md=soma/cont;
		printf("Temp: %f\n",md);
		soma=0;
		cont=0;
		
	}while(h1<h2 || h1==h2);
	
	
	return 0;
}

