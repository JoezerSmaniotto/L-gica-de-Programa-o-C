#include <stdio.h>

int main(){
	int qt,i,u,d,cu=0,cd=0;
	scanf("%d",&qt);
	
	while(qt>0){
		for(i=0;i<qt;i++){
			scanf("%d %d",&u,&d);
			if(u>d){
				cu++;
			}
			if(d>u){
				cd++;
			}
		}
		printf("%d %d\n",cu,cd);
		scanf("%d",&qt);
		cd=0;
		cu=0;
	}
	
	
	return 0;
}

