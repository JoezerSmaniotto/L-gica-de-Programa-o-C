#include <stdio.h>

int main()
{
	float cu=0,cd=0,ct=0,op;
	
	scanf("%f",&op);
	while(op==1 || op==2 || op==3){
		
		if(op==1){
			cu++;
		
		}else if(op==2){
			cd++;
			
		} else if(op==3){
			ct++;
			
		}
		
		scanf("%f",&op);
	}
	
	if((cu>cd) && (cu>ct)){
		printf("1\n");
	
	}else if ((cd>cu) && (cd>ct)){
		printf("2\n");
		
	} else {
		printf("3\n");
		
	}
	
		
	return 0;
}

