#include <stdio.h>

int main(){
	int q,r;
	printf("Informe o Valor de Q e R: ");
	scanf("%d %d",&q,&r);
	int A[q],B[r],result[q+r],i,j,k=0,flag=0,cont=0;
	for(i=0;i<q;i++){
		printf("Informe Um Valor pos %d: ",i);
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<r;i++){
		printf("Informe Um Valor pos %d: ",i);
		scanf("%d",&B[i]);
	}
	
	for(i=0,j=0;i<q;i++,j++){
		result[j]=A[i];
	}
	
	for(i=0;j<(q+r-cont);i++){
		
		for(k=0;k<(q+r);k++){
			if(B[i]==result[k]){
				flag=1;
				cont++;
				break;
			}
		}
		if(flag==0){
			result[j]=B[i];
			j++;
		}
		flag=0;
	}
	
	printf("|");
	for(i=0;i<(q+r-cont);i++){
		printf("%d|",result[i]);
	}
	
	
	return 0;
}

/*for(i=0;j<(q+r);i++,j++){
		result[j]=B[i];
	}
	
	printf("|");
	for(i=0;i<(q+r);i++){
		printf("%d|",result[i]);
	}*/
