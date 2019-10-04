#include <stdio.h>

int main(){
	int l,c,i,j,aux; 
	printf("Inf QT de Linhas: ");
	scanf("%d",&l);
	printf("Inf QT de Colunas: ");
	scanf("%d",&c);
	int m[l][c];
	
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
	// Troca as Col
		for(j=0;j<c;j=j+2){
			for(i=0;i<l;i++){
				aux=m[i][j];
				m[i][j]=m[i][j+1];
				m[i][j+1]=aux;
			}
		}
		
	// Printa Matriz alterada
	printf("\nMatriz Trocada \n");
	for(i=0;i<l;i++){
		printf("|");
		for(j=0;j<c;j++){
			printf("%d|",m[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

