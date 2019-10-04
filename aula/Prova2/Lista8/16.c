#include <stdio.h>

int main()
{
	int i,tot=0,num;
	
	for(i=0;i<10;i++){
		scanf("%d",&num);
		if(num<0){
			tot++;
		}
	}
	
	printf("QTD de valores negativos: %d\n",tot);
	
	
	return 0;
}

