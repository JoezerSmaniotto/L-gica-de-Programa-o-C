#include <stdio.h>

int main(){
	//int flag=1;
	float num=1000,soma=0,qt,i,flag=1,div; 
	printf("Informe Um Valor: ");
	scanf("%f",&qt);
	
	while(qt>0){		
		for(i=1,num=1000;i<=qt;i++,num=num-3){
			div= num/i;
			
			if(flag==1){
				soma=soma + div;
				flag=0;
				//printf("Div:+ %f\n",div);
				
			}else{
				soma=soma-div;
				flag=1;
				//printf("Div:- %f\n",div);
				
			}
			
		}
		printf("Result: %f\n",soma);
		soma=0;
		flag=1;
		i=1;
		num=1000;
		printf("Informe Um Valor: ");
		scanf("%f",&qt);
			
	}
	
	return 0;
}

