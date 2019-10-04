#include <stdio.h>

int main(){
	int l,c,i,j,col1,col2,k,tot;
	printf("Inf QT de Linhas: ");
	scanf("%d",&l);
	printf("Inf QT de Colunas: ");
	scanf("%d",&c);
	tot=l+c;
	int vPar[tot],m[l][c];
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
	
	printf("Informe o Val de Duas Col: ");
	scanf("%d%d",&col1,&col2);
	
	k=0;
	vPar[k];
	
	for(i=0;i<l;i++){
		if((m[i][col1]%2)==0){
			vPar[k]= m[i][col1];
			k++;
		}
		
		if((m[i][col2]%2)==0){
			vPar[k]=m[i][col2];
			k++;
		}
		
	}
	
	printf("\nVetor Resultante\n|");
	for(i=0;i<k;i++){
		printf("%d|",vPar[i]);
		
	}
	printf("\n");
	return 0;
}

