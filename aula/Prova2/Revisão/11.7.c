#include <stdio.h>

int main(){
	int i,num, seq=0,op=1;
	
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(op==1){
			seq=seq+5;
			op=0;
		
		}else{
			seq=seq+1;
			op=1;	
		}	
	}
	printf("%d\n",seq);

	return 0;
}

