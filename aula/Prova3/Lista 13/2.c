#include <stdio.h>

int main(){
	int a[3][5],b[3][5],s[3][5],i,j;
	// lê as matriz A
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("Inf. Um Val P/ Pos: %d %d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	// lê as matriz B
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("Inf. Um Val P/ Pos: %d %d: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	// Printa Matriz A
	printf("\nMatriz A\n");
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<5;j++){
			printf("%d|",a[i][j]);
		}
		printf("\n");
	}
	// Printa Matriz B
	printf("\nMatriz B\n");
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<5;j++){
			printf("%d|",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			s[i][j]=a[i][j]+b[i][j];
			
		}
		
	}
	
	// Printa Matriz Soma A+B
	printf("\nMatriz Soma A+B !\n");
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<5;j++){
			printf("%d|",s[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

