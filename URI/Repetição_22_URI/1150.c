#include <stdio.h>

int main(){
	int x,z,soma=0,cont=0;
	scanf("%d",&x);
	scanf("%d",&z);//
	while(x>=z){
		scanf("%d",&z);
	}
	
	
	soma=x;
	printf(">%d\n",soma);
	cont++;
	
	do{
		//x++;
		soma=soma + (++x); // soma=soma+(x+1) Não deu por q ??
		printf(">%d\n",soma);
		cont++;
		
	}while(soma<z);
	
	printf("%d\n",cont);
	printf("%d\n",soma);
	return 0;
}

