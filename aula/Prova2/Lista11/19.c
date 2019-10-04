#include <stdio.h>

int main(){
	int num,i,cont=0;
	
	do{
		scanf("%d",&num);
		if(num>0){
			for(i=1;i<= (num/2);i++){
				if(num%i==0){
					cont+=i;
				}
			}
			if(num==cont){
				printf("%d E Perfeito\n",num);
			
			}else{
				printf("%d Nao eh Perfeito\n",num);
			}
		}
		cont=0;
		
	}while(num>0);
	
	
	return 0;
}

