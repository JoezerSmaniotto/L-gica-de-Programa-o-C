#include <stdio.h>

int main()
{
	int i, num;
	scanf("%d",&num);
	
	for(i=1;i<21;i=i+num){
		printf("%d ",i);
	}
	
	return 0;
}

