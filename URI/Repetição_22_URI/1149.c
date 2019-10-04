#include <stdio.h>

int main(){
	int a,n,i,soma=0;
	
	scanf("%d",&a);
	scanf("%d",&n);
	
	while(0>=n){
		//printf("Informe Um Valor Correto: ");
		scanf("%d",&n);
	}
	
	for(i=a;i<(a+n);i++){
		//printf("%d\n",i);
		soma=soma+i;
	}
	
	printf("%d\n",soma);
	
	return 0;
}

