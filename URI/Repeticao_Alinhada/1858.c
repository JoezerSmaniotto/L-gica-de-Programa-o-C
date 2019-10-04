#include <stdio.h>

int main(){
	int i,qt,t,pos=0,val=1000;
	scanf("%d",&qt);

	for(i=1;i<=qt;i++){
		scanf("%d",&t);
		
		if(val>t){
			val=t;
			pos=i;
		}
	}
	printf("%d\n",pos);
	
	return 0;
}

