#include <stdio.h>

int main()
{
	int i,num,med=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&num);
		med=med+num;		
	}
	med=med/10;
	printf("Media: %d\n",med);
	
	
	
	return 0;
}

