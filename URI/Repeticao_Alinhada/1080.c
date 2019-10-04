#include <stdio.h>

int main()
{
	int i=0, pos=0,maior=0,num;
	for(i=1;i<=100;i++){
		scanf("%d",&num);
		if(maior<num){
			maior=num;
			pos=i;
		}
	}
	printf("%d\n",maior);
	printf("%d\n",pos);
	return 0;
}

