#include <stdio.h>

int main(){
	int q,r,i,cont=0,j=0,flag=0;
	printf("Informe Dois Valores: ");
	scanf("%d%d",&q,&r);
	if(q>10){
		printf("Informe Um Valor Q:");
		scanf("%d",&q);
		while(q>10){
			printf("Informe Um Valor Q:");
			scanf("%d",&q);
		}
	}
	if(r>10){
		printf("Informe Um Valor R:");
		scanf("%d",&r);
		while(r>10){
			printf("Informe Um Valor R:");
			scanf("%d",&r);
		}
	}
	
	int A[q],B[r],U[q+r];
	
	for(i=0;i<q;i++){
		printf("Informe Um Valor Para o Vetor A na Pos: %d:",i);
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<r;i++){
		printf("Informe Um Valor Para o Vetor B na Pos: %d:",i);
		scanf("%d",&B[i]);
	}
	// Junta Vetores C/ Valores Não Repitidos.
	U[k]=A[0]
	k++;
	cont++;
	for(i=1;i<q;i++){
		for(j=0;j<cont;j++){
			if(A[i]==U[j]){
				flag=1;
				break;
			}
		}
		
		if(flag==0){
			U[j]==A[i];
			k++;
			cont++;
			
		}
		flag=0;
	}
	
	
	return 0;
}

