#include <stdio.h>

int main()
{	
	int x,i,tot;
	scanf("%d",&x);
	
	while ( x<=0 || x>10 ){
		scanf("%d",&x);	
	
	}
	
	for(i=1;i<=10;i++){
		tot=x*i;
		printf("%d x %d = %d\n",i,x,tot);
			
	}
		
	return 0;
}

