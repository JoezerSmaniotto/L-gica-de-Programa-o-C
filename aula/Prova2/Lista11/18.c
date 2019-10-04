#include <stdio.h>

int main(){
	int i,div,divR,soma,tot;
	for(i=1000;i<9999;i++){
		div=i/100;
		divR=i%100;
		soma=div+divR;
		tot=soma*soma;
		if(i==tot){
			printf("%d ",i);
		}
	}
	
	return 0;
}

