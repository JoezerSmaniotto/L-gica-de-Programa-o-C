#include <stdio.h>

int main(){
	int q,i,j;
	printf("Informe Um Qt: ");
	scanf("%d",&q);
	int z[q],w[q];
	// 
	for(i=0;i<q;i++){
		printf("Informe Um Valor p/ Pos %d:",i);
		scanf("%d",&z[i]);
	}
	
	for(i=0,j=(q-1);i<q;i++,j--){
		w[j]=z[i];
	}
	
	// Vetor w
	printf("O Vetor W \n|");
	for(i=0;i<q;i++){
		printf("%d |",w[i]);
	}
	
	return 0;
}

