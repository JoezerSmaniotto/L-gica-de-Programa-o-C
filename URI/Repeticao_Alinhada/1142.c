#include <stdio.h>

int main(){
	int n,i,j,num=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			printf("%d ",num);
			num++;
		}
		printf("PUM\n");
		num++;
	}
	
	return 0;
}

