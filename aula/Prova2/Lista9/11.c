#include <stdio.h>

int main()
{
	int a,n,i,soma=0;
	scanf("%d %d",&a,&n);
	while(n<=0){
		printf("Informe Valor maior Que Zero: ");
		scanf("%d",&n);
	}

	for(i=a;i<(a+n);i++){
		soma=soma+i;
		
	}
	
	printf("Soma: %d\n",soma);
	
	
	return 0;
}

