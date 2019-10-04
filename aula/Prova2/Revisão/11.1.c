#include <stdio.h>

int main(){
	int i;
	float soma=0,den=1,num=1,div;
	
	for(i=1;i<=50;i++){
		div=num/den;
		soma=soma+div;

		num=num+2;
		den++;
	}
	
	printf("Soma: %f\n",soma);
	
	return 0;
}

