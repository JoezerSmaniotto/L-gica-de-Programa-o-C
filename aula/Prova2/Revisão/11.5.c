#include <stdio.h>

int main(){
	float soma=0, div,num=4,den=1,flag=1;
	
	do{
		
		if(flag==1){
			div=num/den;
			soma=soma+div;
			flag=0;
			
		}else{
			div=num/den;
			soma=soma-div;
			flag=1;		
			
		}
		
		den=den+2;
		//printf("%f\n",div);
	}while(div > 0.00001);
	
	printf("Result: %f\n",soma);
	
	return 0;
}

