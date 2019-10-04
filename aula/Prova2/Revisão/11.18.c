#include <stdio.h>

int main(){
	int i,div, rest,pot;
	for(i=1000;i<=9999;i++){
		div=i/100;
		rest=i%100;
		pot=div+rest;
		pot=pot*pot;
		if(pot==i){
			printf("%d ",i);
		}
		
	}
	
	return 0;
}

