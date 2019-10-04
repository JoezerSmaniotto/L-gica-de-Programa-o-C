#include <stdio.h>

int main(){
	int n1,n2,i,cont=0,j;
	scanf("%d %d",&n1,&n2);
	while(n1>n2){
		printf("N1 Maior q N2, Altere: ");
		scanf("%d %d",&n1,&n2);
	}
	
	for(i=n1;i<=n2;i++){
		for(j=1;j<=i;j++){
			if((i%j) == 0 ){
				cont++;
				
			}
		}
		 j--;
		 if(cont==2){
			printf("%d ",j);
					
		}
		cont=0;
	}
			
	return 0;
}

