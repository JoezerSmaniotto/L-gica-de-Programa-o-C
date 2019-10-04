#include <stdio.h>

int main(){
	int qt,pri=0,seg=1,i,fib;
	scanf("%d",&qt);
	//printf("%d  %d",pri,seg);
	if(qt==1){
		printf("%d\n",pri);
	}
	
	if(qt==2){
		printf("%d %d\n",pri,seg);
	}
	
	if(qt>2){
		printf("%d %d",pri,seg);
		for(i=2;i<qt;i++){
			fib=pri+seg;
			printf(" %d",fib);
			pri=seg;
			seg=fib;	
		}
		printf("\n");
	}

	return 0;
}

