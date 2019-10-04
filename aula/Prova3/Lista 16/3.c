#include <stdio.h>

void exibePrimos(int x, int y);

void exibePrimos(int x, int y){
	int i,j,cont=0;
	printf("\n");
	if(x<=y){
		for(i=x;i<=y;i++){
			cont=0;
			for(j=1;j<=i;j++){
				if((i%j)==0){
					cont++;
				}
			}
			if(cont==2){
				printf("%d ",i);
			}
			
		}
		printf("\n");
	
	} else{
		for(i=y;i<=x;i++){
			cont=0;
			for(j=1;j<=i;j++){
				if((i%j)==0){
					cont++;
				}
			}
			if(cont==2){
				printf("%d ",i);
			}
			
		}
		printf("\n");		
	}
		
}


int main(){

	int a,b;
	do{
		printf("Informe Dois Numeros: ");
		scanf("%d%d",&a,&b);	
		
		if(a>0 && b>0){
			exibePrimos(a,b);
		}
		
	}while (a>0 && b>0);
		
	return 0;
}

