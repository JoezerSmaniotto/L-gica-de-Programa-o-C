#include <stdio.h>

int main(){
	float i,x=1000,op=1,soma=0,qt;
	scanf("%f",&qt);	
	while(qt>0){	
		for(i=1;i<=qt;i++,x=x-3){
			if(op==1){
				soma= soma + (x/i);
				op=0;
				
			}else if(op==0){
				soma=soma - (x/i);
				op=1;
			}
			//printf("x = %.2f  i= %.2f soma= %.2f\n",x,i,soma);
			
		}
		printf("%f\n",soma);
		soma=0;
		x=1000;
		op=1;
		scanf("%f",&qt);
		
	}
	
	return 0;
}

