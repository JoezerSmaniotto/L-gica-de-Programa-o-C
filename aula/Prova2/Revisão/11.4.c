#include <stdio.h>

int main(){
	float qt, num=4,den,div,soma=0,flag=1;
	int i;
	printf("Informe a QT: ");
	scanf("%f",&qt);
	while(qt>0){
		for(i=1,den=1;i<=qt;i++,den=den+2){
			div=num/den;
			if(flag==1){
				soma=soma+div;
				flag=0;
			
			}else{
				soma=soma-div;
				flag=1;
				
			}
			
		}
		printf("Soma: %f\n",soma);
		soma=0;
		flag=1;
			
	printf("Informe a QT: ");
	scanf("%f",&qt);	
	}
	
	return 0;
}

