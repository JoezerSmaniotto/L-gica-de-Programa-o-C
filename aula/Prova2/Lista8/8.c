#include <stdio.h>

int main()
{
	int num,i;
	
	do{
		scanf("%d",&num);
		
	}while(num<1);
		
	for( i=1;i<=num;i++){
		printf("%d ",i);
	}
	
	
	return 0;
}

