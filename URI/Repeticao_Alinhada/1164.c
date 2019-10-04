#include <stdio.h>

int main(){
	int num,i,soma=0,j,qt;
	
	scanf("%d",&qt);
	
	for(j=0;j<qt;j++){
		scanf("%d",&num);
	
			for(i=1;i<=(num/2);i++){
				if((num%i)==0){
					//printf("D: %d\n",i);
					soma=soma+i;
					//printf("Soma: %d\n",soma);
				}
			}
			
			if(soma==num){
				printf("%d eh perfeito\n",num);
			
			}else{
				printf("%d nao eh perfeito\n",num);
			}
			
			soma=0;
		
	}
	
	return 0;
}

