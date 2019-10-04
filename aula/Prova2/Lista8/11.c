#include <stdio.h>

int main()
{
	int x,y,i;
	
	scanf("%d",&x);
	
	while(x<=0){
	
		scanf("%d",&x);
	}
	
	scanf("%d",&y);
	while(x>y){
		printf("Valores Invalidos\n");
		//scanf("%d",&y);
	}
	
	
	
	for(i=x;i<=y;i++){
		printf("%d ",i);
	}
	
	
	return 0;
}

