#include <stdio.h>

int main(){
	float div,soma=0,i,flag=1;
	for(i=1;i<=10;i++){
		div=i/(i*i);
		if(flag==1){
			soma=soma+div;
			flag=0;
		}else{
			soma=soma-div;
			flag=1;
		}	
	}
	printf("Soma: %f\n",soma);
	
	
	return 0;
}

