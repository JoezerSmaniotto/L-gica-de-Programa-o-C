#include <stdio.h>

int main(){
	int l,c,i,j,k,menor;
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
	
	// encontra o menor elemento da linha
	for(i=0;i<l;i++){
		menor=m[i][0];
		for(j=0;j<c;j++){
			//	printf("oi11\n");
			if(menor > m[i][j]){
				menor = m[i][j];
				printf("Menor: %d\n",menor);
			}
		}
		printf("1=Menor: %d\n",menor);
		// Divide aqui pelo menor elemento da linha toda a linha
		
		for(k=0;k<c;k++){
			m[i][k]= (m[i][k])/menor;
			//printf("\nAqui\n");
		}
		//printf("\nAqui2\n");
	}
	
	// Printa Matriz
	printf("\nMatriz Dividida! ! !\n");
	for(i=0;i<l;i++){
		printf("|");
		for(j=0;j<c;j++){
			printf("%d|",m[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

