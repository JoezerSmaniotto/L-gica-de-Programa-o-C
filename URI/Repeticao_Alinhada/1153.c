#include <stdio.h>

int main(){
	int n,i,soma=1;
	scanf("%d",&n);
	
	for(i=n;i>0;i--){
		soma=soma*i;
	}
	
	printf("%d\n",soma);
	return 0;
}

