#include <stdio.h>

int main(){
	int v[8],i,proc,op=0;
	
	for(i=0;i<8;i++){
		printf("Informe o Valor na Posição %d: ",(i));
		scanf("%d",&v[i]);
	}
	
	printf("Informe o Valor a Ser Pesquisado: ");
	scanf("%d",&proc);
	while(proc>0){
		for(i=0;i<8;i++){
			if(proc==v[i]){
				printf("%d\n",i);
				op=1;
				
			}

		}
		
		if(op==0){
			printf("Codigo Nao Existe\n");
				
		}	
			
		op=0;
		printf("Informe o Valor a Ser Pesquisado: ");
		scanf("%d",&proc);
	}
	
	return 0;
}

