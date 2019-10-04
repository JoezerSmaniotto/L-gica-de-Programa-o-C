#include <stdio.h>

int main(){
	float num,x=4,i,soma=0,op=1,y;
	
	scanf("%f",&num);
	while(num>0){
		for(i=1,y=1;i<=num;i++,y=y+2){
			if(op==1){
				soma=soma +(x/y);
				op=0;
			}else{ //op =1
				soma=soma -(x/y);
				op=1;
			
			}
			//printf("x = %.2f i=%.2f Soma= %.2f\n",x,i,soma);
		}
		printf("%f\n",soma);
		soma=0;
		op=1;
		scanf("%f",&num);
	}
	
	return 0;
}

