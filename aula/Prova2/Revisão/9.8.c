#include <stdio.h>

int main(){
	int num=0,cont=0,incr=0;
	
	while(num<100){
		incr++;
		num=num+incr;
		cont++;
		
	}
	printf("%d\n",cont);
	
	return 0;
}

