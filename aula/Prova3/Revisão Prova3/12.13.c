#include <stdio.h>

int main(){
	int q,r,op,i,k;
	printf("Informe Um Valor Para Q e R: ");
	scanf("%d%d",&q,&r);
	int A[q],B[r],T[q+r];
	
	printf("Informe os Valor Para o Vetor A ! !\n");
	for(i=0;i<q;i++){
		printf("Informe Um Valor Para a Pos %d: ",i);
		scanf("%d",&A[i]);
	}
	
	printf("Informe os Valor Para o Vetor B ! !\n");
	for(i=0;i<r;i++){
		printf("Informe Um Valor Para a Pos %d: ",i);
		scanf("%d",&B[i]);
	}

	printf("1.Vetor A antes de B 2.Vetor B antes de A 3.Fim: ");
	scanf("%d",&op);
	
	while(op==1 || op==2){
		if(op==2){
			for(i=0,k=0;i<r;i++,k++){
				T[k]=B[i];
			}
			for(i=0;i<q;i++,k++){
				T[k]=A[i];
				
			}
		
		}
		if(op==1){
			for(i=0,k=0;i<q;i++,k++){
				T[k]=A[i];
			}
			for(i=0;i<r;i++,k++){
				T[k]=B[i];
				
			}
		
		}
		
		// Printa o Vetor Resultante
		printf("Vetor Total \n");
		for(i=0;i<(q+r);i++){
			printf("%d|",T[i]);
		}
		
		printf("\n1.Vetor A antes de B 2.Vetor B antes de A 3.Fim: ");
		scanf("%d",&op);
	};
	

	return 0;
}

