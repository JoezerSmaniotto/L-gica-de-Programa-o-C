#include <stdio.h>

int main(){
	int l,c,i,j;
	printf("Inf QT de Linhas: ");
	scanf("%d",&l);
	printf("Inf QT de Colunas: ");
	scanf("%d",&c);
	
	int m[l][c],sl[l],sc[c];
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("Inf Valor P/ L:%d C:%d : ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	// Zera SC
	for(i=0;i<c;i++){
		sc[i]=0;
	}
	// Zera SL
	for(i=0;i<l;i++){
		sl[i]=0;
	}
	
	// Printa Matriz
	printf("\nMatriz\n");
	for(i=0;i<l;i++){
		printf("|");
		for(j=0;j<c;j++){
			printf("%d|",m[i][j]);
		}
		printf("\n");
	}
	
	// Linhas 
	//printf("\nVetor de Linhas\n");
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			sl[i]=sl[i]+m[i][j];
		}
	}
	// Colunas 
	//printf("\nVetor de Coluna\n");
	for(j=0;j<c;j++){
		for(i=0;i<l;i++){
			sc[j]=sc[j]+m[i][j];
		}
	}
	
	printf("Vetor Linhas\n|");
	for(i=0;i<l;i++){
		printf("%d|",sl[i]);
	}
	
	
	printf("\nVetor Coluna\n|");
	for(i=0;i<c;i++){
		printf("%d|",sc[i]);
	}
	
	
	return 0;
}

