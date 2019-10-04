#include <stdio.h>

int main()
{
	int num,qd,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if((i%2)==0){
			qd=i*i;
			printf("%d^2 = %d\n",i,qd);
		}	
	}
	
	return 0;
}

