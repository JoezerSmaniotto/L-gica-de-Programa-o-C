#include <stdio.h>

int main(){
	int i,q;
	printf("Informe o Tamanho do Vetor: ");
	scanf("%d",&q);
	int z[q],w[q];
	
	for(i=0;i<q;i++){
		printf("Inf: Valor p/ Pos: %d: ",i);
		scanf("%d",&z[i]);
	}
	
	for(i=0;i<q;i++){
		w[i]=z[i];
	}
	
	printf("|");
	for(i=0;i<q;i++){
		printf("%d|",w[i]);
	}
	printf("Fechou!!!\n");
	
	return 0;
}

