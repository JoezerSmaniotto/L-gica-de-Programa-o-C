#include <stdio.h>

int main()
{
	int i,x,y,tot=0;
	
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++){
			tot=tot+i;
	}
	printf("Soma: %d\n",tot);
	
	
	return 0;
}

