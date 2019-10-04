#include <stdio.h>

int main(){
	int L,C,resultL,resultC,i,j,somaA=0;
	printf("Informe a Qt de Linhas: ");
	scanf("%d",&L);
	printf("Informe a Qt de Colunas: ");
	scanf("%d",&C);
	int m[L][C];
	resultL=L/2;
	resultC=C/2;
	
	// lê as matriz
	for(i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("Inf. Um Val P/ Pos: %d %d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	// Printa Matriz
	printf("\nMatriz\n");
	for(i=0;i<L;i++){
		printf("|");
		for(j=0;j<C;j++){
			printf("%d|",m[i][j]);
		}
		printf("\n");
	}
	// A 
	for(i=0;i<resultL/2;i++){
		for(j=0;j<resultC/2;j++){
			somaA=somaA+m[i][j];
		}
	}
	printf("Soma A: %d\n",somaA);
	
	
	somaA=0;
	
	return 0;
}

