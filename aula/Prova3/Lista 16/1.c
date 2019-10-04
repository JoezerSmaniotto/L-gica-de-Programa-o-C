#include <stdio.h>
void exibeTabuada (int n);

void exibeTabuada (int n){
	int i;
	for(i=1;i<=10;i++){
		printf("%d x %d = %d\n",i,n,i*n);
	}
	printf("\n");	
}

int main(){
	int n;
	for(n=1;n<=10;n++){
		exibeTabuada (n);		
	}
	
	
	return 0;
}

