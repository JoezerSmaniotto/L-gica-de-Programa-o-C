#include <stdio.h>

int main()
{	
	int n;
	scanf("%d",&n);
	while(n > 0){
		printf("%d ",n);
		while(n!=1){
			if((n%2)==0){ // par 
			
				n=n/2;
				printf("%d ",n);
			
			}else {   // Impar
				
				n=(3*n)+1;
				printf("%d ",n);
			}
		}
		
		printf("\n");	
		scanf("%d",&n);
	}
	
	return 0;
}

