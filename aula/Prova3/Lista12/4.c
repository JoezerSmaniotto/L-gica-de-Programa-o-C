#include <stdio.h>

int main(){
	int i,q,ano;
	scanf("%d",&q);
	int v[q],vn[q];
	
	for(i=0;i<q;i++){
		printf("Informe Um Ano, Para a Posicao: %d: ",i);
		scanf("%d",&v[i]);
	}
	
	printf("Informe Ano De Ref: ");
	scanf("%d",&ano);
	
	for(i=0;i<q;i++){
		vn[i]= ano - v[i];
	}
	
	printf("|");
	for(i=0;i<q;i++){
		printf("%d|",vn[i]);
	}
	
	
	return 0;
}

