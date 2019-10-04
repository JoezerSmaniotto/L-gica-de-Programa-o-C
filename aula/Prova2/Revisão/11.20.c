#include <stdio.h>

int main(){
	int num=0,qt=0,j=1,i,cont=0;
	printf("Informe Um Numero: ");
	scanf("%d",&qt);
	
	while(num<qt){
		for(i=1;i<=(j/2);i++){
			if((j%i)==0){
				cont=cont+i;
			}	
		}
		if(j==cont){
			printf("%d ",j);
			num++; // Conta os Numeros Perfeitos
		}

		j++;
		cont=0;
	}
	 
	
	
	
	return 0;
}

