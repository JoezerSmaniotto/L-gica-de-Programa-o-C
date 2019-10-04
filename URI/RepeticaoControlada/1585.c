#include <stdio.h>

int main(){
	int i,qt,x,y,tot;
	scanf("%d",&qt);
	for(i=0;i<qt;i++){
		scanf("%d %d",&x,&y);
		tot=(x*y)/2;
		printf("%d cm2\n",tot);
	}
	
	return 0;
}

