#include <stdio.h>

int main(){
	int m[4][4],num,num1,i,j;
	// Lê a Matriz
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Informe Um Valor: ");
			scanf("%d",&m[i][j]);
		}
	}
	// Printa a Matriz
	for(i=0;i<4;i++){
		printf("|");
		for(j=0;j<4;j++){
			if(m[i][j]<10){
				printf(" %d|",m[i][j]);
			
			}else{
				printf("%d|",m[i][j]);
				
			}
		}
		printf("\n");
	}
	
	do{
		printf("Informe Um Valor X: ");
		scanf("%d",&num);
		
		if(num<4){
			printf("Informe Um Valor Y: ");
			scanf("%d",&num1);
			printf("%d\n",m[num][num1]);
			
		}
		
		
	}while(num<4);
	
	
	return 0;
}

