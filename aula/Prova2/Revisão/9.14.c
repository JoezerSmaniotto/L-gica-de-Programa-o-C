#include <stdio.h>

int main(){
	int pri=0,seg=1,fib=0,i;
	
	printf("%d %d ",pri,seg);
	for(i=3;i<=20;i++){
		fib=pri+seg;
		printf("%d ",fib);
		pri=seg;
		seg=fib;
	}
	
	
	
	return 0;
}

