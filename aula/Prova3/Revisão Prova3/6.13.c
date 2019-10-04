#include <stdio.h>

int main(){
	int l,c;
	printf("Informe Um Valor: L e C: ");
	scanf("%d %d",&l,&c);
		
	int m[l][c],vl[l],vc[c],i,j,soma=0;
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("Informe: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	// Printa
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("%d |",m[i][j]);
		}
		printf("\n");
	}
	
	// Linha
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			soma=soma+m[i][j];
		}
		vl[i]=soma;
		soma=0;
	}
	
	// Coluna
	for(j=0;j<c;j++){
		for(i=0;i<l;i++){
			soma=soma+m[i][j];
		}
		vc[j]=soma;
		soma=0;
	}
	
	printf("\nVetor VL\n");
	for(i=0;i<l;i++){
		printf("%d|",vl[i]);
	}
	
	printf("\nVetor VC\n");
	for(i=0;i<c;i++){
		printf("%d|",vc[i]);
	}
	
	return 0;
}

