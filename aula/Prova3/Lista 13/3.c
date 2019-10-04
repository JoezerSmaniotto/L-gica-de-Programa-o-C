#include <stdio.h>

int main(){
	int m[4][4],i,j,somaA=0,somaB=0,somaC=0,somaD=0,alt=0;
	// lê as matriz
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Inf. Um Val P/ Pos: %d %d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	// Printa Matriz
	printf("\nMatriz\n");
	for(i=0;i<4;i++){
		printf("|");
		for(j=0;j<4;j++){
			printf("%d|",m[i][j]);
		}
		printf("\n");
	}
	// A 
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			somaA=somaA+m[i][j];
		}
	}
	printf("Soma A: %d\n",somaA);
	// B
	for(i=2;i<4;i++){
		for(j=2;j<4;j++){
			somaB=somaB+m[i][j];
		}
	}
	printf("Soma B: %d\n",somaB);
	// C
	alt=0;
	for(j=0;j<4;j++){
		for(i=alt;i<4;i++){
			somaC=somaC+m[i][j];
		}
		alt++;
	}
	printf("Soma C: %d\n",somaC);
	
	// D
	alt=2;
	for(j=3;j>=1;j--){
		for(i=0;i<=alt;i++){
			//printf("oi\n");
			somaD = somaD+m[i][j];
		}
		alt--;
	}
	printf("Soma D: %d\n",somaD);
	
	somaA=0;
	somaB=0;
	somaC=0;
	somaD=0;
	
	return 0;
}

