#include <stdio.h>

int main(){
	int v[10],num=101,i;
	for(i=0;i<10;i++){
		v[i]=num;
		num++;
	}
	printf("|");
	for(i=0;i<10;i++){
		printf("%d|",v[i]);
	
	}		
	return 0;
}

