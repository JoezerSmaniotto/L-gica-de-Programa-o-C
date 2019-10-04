#include <stdio.h>

int main()
{
	int qt,num,i;
	
	scanf("%d",&qt);
	
	for(i=0;i<qt;i++){
		
		scanf("%d",&num);
		if(num==0){
			printf("NULL\n");
		
		}else if((num%2)==0){
			printf("EVEN ");
			if(num>0){
				printf("POSITIVE\n");
			}else{
				printf("NEGATIVE\n");	
			}
			
		}else{
			printf("ODD ");
			if(num>0){
				printf("POSITIVE\n");
			}else{
				printf("NEGATIVE\n");	
			}				
		}
	}
	
	return 0;
}

