#include <stdio.h>

int main(){
	int i,qt,Vles,Vresp;
	
	Vresp=0;
	while(scanf("%d",&qt)==1){
		Vresp=0;
		for(i=0;i<qt;i++){
			scanf("%d",&Vles);
			if(Vresp<Vles){
				Vresp=Vles;
			}
			
			
		}
		
		if(Vresp<10){
			
			printf("1\n");

		} else if(Vresp>=10 && Vresp<20){
			
			printf("2\n");
			
		}else{
			
			printf("3\n");
			
		}
	
	}
	
	return 0;
}

