#include <stdio.h>

int main(){
	int m[4][4],i,j,sl2=0,col1=0,somadP=0,somads=0,somaM=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Informe Um Valor Para Pos: %d %d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	// Printa Matriz
	for(i=0;i<4;i++){
		printf("|");
		for(j=0;j<4;j++){
			printf("%d|",m[i][j]);
		}
		printf("\n");
	}

	//1
	printf("\nSoma dos Elementos Linha 2: ");
	for(j=0;j<4;j++){
		sl2=sl2+m[2][j];
	}
	printf("%d\n",sl2);
	//2
	printf("\nSoma dos Elementos Coluna 1: ");
	for(j=0;j<4;j++){
		col1=col1+m[j][1];
	}
	printf("%d\n",col1);
	//3
	printf("\nSoma dos Elementos  Diagonal Principal: ");
	for(i=0,j=0;i<4;i++,j++){
		somadP=somadP+m[i][j];
	}
	printf("%d\n",somadP);
	//4
	printf("\nSoma dos Elementos  Diagonal Secundaria: ");
	for(i=0,j=3;i<4;i++,j--){
		somads=somads+m[i][j];
	}
	printf("%d\n",somads);
	//5
	printf("\nSoma dos Elementos da Matriz: ");
	for(i=0,j=3;i<4;i++,j--){
		for(j=0;j<4;j++){
			somaM=somaM+m[i][j];
		}
	}
	printf("%d\n",somaM);
	
	return 0;
}

