#include <stdio.h>

int main(){
	int l,c,i,j,maior;
	printf("Inf QT de Linhas: ");
	scanf("%d",&l);
	printf("Inf QT de Colunas: ");
	scanf("%d",&c);
	
	int m[l][c],v[l];
	// Coloco os  valores na matriz
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("Inf Valor P/ L:%d C:%d : ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	// Printa a Matriz
	printf("\nMatriz\n");
	for(i=0;i<l;i++){
		printf("|");
		for(j=0;j<c;j++){
			printf("%d|",m[i][j]);
		}
		printf("\n");
	}
	//Encontra o maior elemento de cada linha
	for(i=0;i<l;i++){
		maior=m[i][0];
		for(j=0;j<c;j++){
			if(maior<m[i][j]){
				maior=m[i][j];
			}
		}
		v[i]=maior;
	}
	
	printf("\nVetor Maiores Elementos!\n|");
	for(i=0;i<l;i++){
		printf("%d|",v[i]);
	}
	printf("\n");
	
	return 0;
}

