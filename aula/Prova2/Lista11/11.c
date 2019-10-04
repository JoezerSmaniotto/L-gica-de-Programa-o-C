#include <stdio.h>

int main(){
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=10;j++){
			printf("%d x %d = %d\n",j,i,(i*j));
		}
		printf("\n");
	}
	
	return 0;
}

