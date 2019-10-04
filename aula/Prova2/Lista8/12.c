#include <stdio.h>

int main()
{
	int op,x,y,i;
	
	do{
		scanf("%d",&op);
		if(op==1){
			scanf("%d",&x);
			scanf("%d",&y);
			if( x > y ){
				printf("Crescente\n");
				for(i=y;i<=x;i++){
					printf("%d ",i);
				}
				printf("\n");
				
			} else{
				printf("Crescente\n");
				for(i=x;i<=y;i++){
					printf("%d ",i);
				}
				printf("\n");
			}					
		} else if (op == 2){
			scanf("%d",&x);
			scanf("%d",&y);
			if( x > y ){
				printf("Decrescente\n");
				for(i=x;i>=y;i--){
					printf("%d ",i);
				}
				printf("\n");
				
			} else{
				printf("Decrescente\n");
				for(i=y;i>=x;i--){
					printf("%d ",i);
				}
				printf("\n");
			}
				
		}
		
	}while(op== 1 || op == 2);
	
	return 0;
}

