#include <stdio.h>

int main()
{
	int num, rep, i;
	
	do{
		scanf("%d",&rep);
		if(num>0){
			scanf("%d",&num);
			for(i=1;i<=rep;i++){
				if(i!=rep){
					printf("%d,",num);
				}else {
					printf("%d ",num);
				}
			}		
		}	
		
		
	}while(num>0);
	
	 
	
	return 0;
}

