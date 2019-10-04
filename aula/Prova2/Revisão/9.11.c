#include <stdio.h>
int main(){
	int a,n,soma=0,i;
	
	printf("Informe A e N: ");
	scanf("%d %d",&a,&n);
	
	while(n<=0){
		printf("Informe Um Valor Positivo Para a N: ");
		scanf("%d",&n);
	}
	
	for(i=a;i<=(a+(n-1));i++){	
		soma=soma+i;
		printf("%d\n",soma);
	}
	
	printf("Soma: %d\n",soma);
	
	
	return 0;
}

