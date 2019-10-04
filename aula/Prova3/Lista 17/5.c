#include <stdio.h>

int somaDivisores(int d);
int somaDivisores(int d){
	int i,soma=0;
	for(i=1;i<d;i++){
		if((d%i)==0){
			soma=soma+i;
		}
	}
	return soma;
}

int main(){
	int n;	
	printf("Informe Um Valor: ");
	scanf("%d",&n);
	while(n>0){
		printf("Soma: %d\n",somaDivisores(n));
		printf("Informe Um Valor: ");
		scanf("%d",&n);
	}
	
	return 0;
}

