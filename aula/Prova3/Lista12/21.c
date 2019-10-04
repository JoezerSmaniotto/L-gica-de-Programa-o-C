#include <stdio.h>

int main(){
	int q,r;
	printf("Informe o Valor de Q e R: ");
	scanf("%d %d",&q,&r);
	int A[q],B[r],result[q+r],i,j,k=0,flag=1; // cont=0;
	
	for(i=0;i<q;i++){
		printf("Informe Um Valor pos %d: ",i);
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<r;i++){
		printf("Informe Um Valor pos %d: ",i);
		scanf("%d",&B[i]);
	}
	
	result[k]=A[0];
	k++;
	for(i=0;i<q;i++){ // Controle A[i]
		for(j=0;j<k;j++){ // Controle result[j]
			if(A[i]==result[j]){
				flag=0;
				break;
			}				
		}
		if(flag==1){
				result[k]=A[i];
				k++;
		}
		flag=1;
		
			
	}
	
	flag=1;
	
	for(i=0;i<r;i++){ // Controle B[i]
		for(j=0;j<k;j++){ // Controle result[j]
			if(B[i]==result[j]){
				flag=0;
				break;
			}				
		}
		if(flag==1){
				result[k]=B[i];
				k++;
		}
		flag=1;
				
	}
	
	
	printf("\nVetor Result\n|");
	for(i=0;i<k;i++){
		printf("%d|",result[i]);
	}
	printf("\n");
	
	
	
	
	return 0;
}
