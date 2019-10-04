#include <stdio.h>

int main(){
	float div=0,x=4,soma=0,y=1, op=1;
	do{
		
		if(op==1){
				div = x/y;
				if(div > 0.00001){
					soma=soma + div;
					op=0;
				}
				
		}else { //op =1
				if(div > 0.00001){
					div = x/y;
					soma=soma - div;
					op=1;
				}
		}
			
		printf("%f\n",div);
		y=y+2;
		
	}while (div > 0.00001);	
	
	printf("%f\n",soma);
	return 0;
}

