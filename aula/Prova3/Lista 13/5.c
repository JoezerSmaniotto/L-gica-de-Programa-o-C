#include <stdio.h>

int main(){
	int l,c,i,j,num,op=0;
	printf("Inf QT de Linhas: ");
	scanf("%d",&l);
	printf("Inf QT de Colunas: ");
	scanf("%d",&c);
	
	int m[l][c];
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("Inf Valor P/ L:%d C:%d : ",i,j);
			scanf("%d",&m[i][j]);
		}
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
	
	do{
		printf("Informe Um Valor: ");
		scanf("%d",&num);
		if(num>0){
			for(i=0;i<l;i++){
				for(j=0;j<c;j++){
					if(num==m[i][j]){
						op=1;
						break;
					}
				}
			}
			
			if(op==1){
				printf("Esta Na Matriz\n");
			}else if(op==0){
				printf("Nao Esta Na Matriz\n");
			}
			op=0;
		}
		
	}while(num>0);
	
	
	return 0;
}

