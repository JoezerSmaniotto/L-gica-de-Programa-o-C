#include <stdio.h>

int main(){
	int num, soma=0,i;
	
	do{
		printf("Informe Um Numero: ");
		scanf("%d",&num);
		if(num>0){
			for(i=0;i<=(num/2);i++){
				if((num%1)==0){
					soma=soma+i;
				}
			}
			if(num==soma){
				printf("Nº Perfeito: %d\n",num);
			
			}else{
				printf("Nao eH Nº Perfeito: %d\n",num);
				
			}
			
		}
		soma=0;
	}while(num>0);
	
	
	return 0;
}

