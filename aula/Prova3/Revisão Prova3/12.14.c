#include <stdio.h>

int main(){
	int x;
	printf("Informe Um Valor Para X: ");
	scanf("%d",&x);
	int A[x],B[x],T[x+x],i,k,j,flag=0;
	
	// Lê Vetor
	printf("VETOR A\n");
	for(i=0;i<x;i++){
		printf("Informe Um Valor Para Pos: %d: ",i);
		scanf("%d",&A[i]);
	}
	
	// Lê Vetor
	printf("VETOR B\n");
	for(i=0;i<x;i++){
		printf("Informe Um Valor Para Pos: %d: ",i);
		scanf("%d",&B[i]);
	}
	// Printa Vetor
	printf("\n");
	for(i=0;i<x;i++){
		printf("%d|",A[i]);
	}
	// Printa Vetor
	printf("\n");
	for(i=0;i<x;i++){
		printf("%d|",B[i]);
	}
	
	// Intercala Vetores e Junta
	j=0,k=0;
	for(i=0;i<(x*2);i++){
		if(flag==0){
			T[i]=A[j];
			j++;
			flag=1;
		}
		
		else if(flag==1){
			T[i]=B[k];
			k++;
			flag=0;
		}
		
				
	}
	printf("\n");
	for(i=0;i<(x+x);i++){
		printf("%d|",T[i]);
	}	
	printf("\n");
	return 0;
}

