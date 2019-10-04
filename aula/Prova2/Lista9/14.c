#include <stdio.h>

int main()
{
	int i,fat=0,n1=1, n2=1;
	printf("0 1 2 ");
	for(i=3;i<20;i++){
		fat=n1+n2;
		printf("%d ",fat);
		n2=n1;
		n1=fat;
	
	}
	
	return 0;
}

