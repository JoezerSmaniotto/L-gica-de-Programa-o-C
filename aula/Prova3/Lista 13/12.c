#include <stdio.h>

int main(){
	int l,c,i,j;
	printf("Inf QT de Linhas: ");
	scanf("%d",&l);
	printf("Inf QT de Colunas: ");
	scanf("%d",&c);
	int m[l][c],t[c][l];
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
	
	//Inverte
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			t[j][i]=m[i][j];
		
		}
	}	
	
	printf("\nMatriz Transposta\n");
	for(i=0;i<c;i++){
		printf("|");
		for(j=0;j<l;j++){
			printf("%d|",t[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}

