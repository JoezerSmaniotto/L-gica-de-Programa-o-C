#include <stdio.h>

int main()
{
	int num=1,soma=0;
	while(soma<100){ // soma<100 && ((soma+num+1)<100)
			num++;
			soma=soma+num;		
			
			
	}
	
	printf("%d\n",soma);
	printf("%d\n",num);
	
	return 0;
}

