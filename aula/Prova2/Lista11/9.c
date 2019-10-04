#include <stdio.h>

int main(){
	
	int num, i;
	scanf("%d",&num);
	
	while(num<0){
		scanf("%d",&num);
	}
	
	for(i=1;i<=num;i++){
		if((num%i) == 0 ){
			printf(" %d",i);
			
		}
	
	}

	printf("\n");
	
	return 0;
}

