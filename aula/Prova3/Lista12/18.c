#include <stdio.h>

int main(){
	int q,r,i,j,k=0;
	printf("Informe o Valor de Q e R: ");
	scanf("%d %d",&q,&r);
	int A[q],B[r],result[10];
	
	for(i=0;i<q;i++){
		printf("Informe Um Valor pos %d: ",i);
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<r;i++){
		printf("Informe Um Valor pos %d: ",i);
		scanf("%d",&B[i]);
	}
	
	if(q>r){
		for(i=0;i<q;i++){
			for(j=0;j<r;j++){
				if(A[i]==B[j]){
					result[k]=A[i];
					k++;
				}
			}
		}
		
	}else{
		for(i=0;i<r;i++){
			for(j=0;j<q;j++){
				if(B[i]==A[j]){
					result[k]=B[i];
					k++;
				}
			}
		}
		
	}
	printf("|");
	for(i=0;i<k;i++){
		printf("%d|",result[i]);
	}
	
	return 0;
}

