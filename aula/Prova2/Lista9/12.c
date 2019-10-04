#include <stdio.h>

int main(){
	
	int x,z, soma=0,vez=0;
	scanf("%d %d",&x,&z);
	
	while(z<x){
		printf("Informe Um valor Para Z maior que valor de X: ");
		scanf("%d",&z);		
	}
	
	while(soma<z){
		 soma=soma+x;
		 x++;
		 vez++;
	}
	printf("Soma: %d\n",soma);
	printf("Vezes: %d\n",vez);
	
	
	return 0;
}

