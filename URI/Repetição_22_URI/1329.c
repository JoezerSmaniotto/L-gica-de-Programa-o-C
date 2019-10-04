#include <stdio.h>

int main(){
	int n,i,op,c1=0,c0=0;
	do{
		scanf("%d",&n);
		if(n>0){
			for(i=0;i<n;i++){
				scanf("%d",&op);
				if(op==0){
					c0++;
				}
				if(op==1){
					c1++;
				}
				
			}
			printf("Mary won %d times and John won %d times\n",c0,c1);
		}
		
		
		c0=0;
		c1=0;
		
	}while(n>0);
	
	
	return 0;
}

