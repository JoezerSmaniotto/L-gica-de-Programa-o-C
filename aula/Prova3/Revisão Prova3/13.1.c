#include <stdio.h>

int main(){
	
	int m[4][4],i,j,soma=0;
	// Le valores
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Informe Um Valor: l:%d | Cl: %d : ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	// Printa valores
	printf("|");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d|",m[i][j]);
		}
		printf("\n|");
	}
	// na linha 2 da matriz.
	for(j=0;j<4;j++){
		soma=soma+m[2][j];
	}
	printf("na linha 2 da matriz: %d\n",soma);
	//	na a coluna 1 da matriz.
	soma=0;
	for(i=0;i<4;i++){
		soma=soma+m[i][1];
	}
	printf("na a coluna 1 da matriz.: %d\n",soma);
	soma=0;
	for(i=0,j=0;i<4;i++,j++){
		soma=soma+m[i][j];
	}
	printf("na diagonal principal da matriz: %d\n",soma);
	soma=0;
	for(i=0,j=3;i<4;i++,j--){
		soma=soma+m[i][j];
	}
	printf("na diagonal secundaria da matriz: %d\n",soma);
	soma=0;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			soma=soma+m[i][j];
		}
	}
	printf("Toda a matriz: %d\n",soma);
	soma=0;
	
	return 0;
}

