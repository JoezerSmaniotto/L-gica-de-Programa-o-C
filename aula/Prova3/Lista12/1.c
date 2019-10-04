#include <stdio.h>

int main(){
	int x,v[10],i;
	scanf("%d",&x);
	for(i=0;i<10;i++){
		v[i]=x;
	}
	
	printf("|");
	for(i=0;i<10;i++){
		printf("%d|",v[i]);
	}
	
	
	
	
	return 0;
}

