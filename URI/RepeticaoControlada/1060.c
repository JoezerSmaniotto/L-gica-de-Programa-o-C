#include <stdio.h>

int main()
{
	float num, i, cont=0;
	for(i=0;i<6;i++){
		scanf("%f",&num);
		if(num>0){
			cont++;
		}
	}
	
	printf("%.0f valores positivos\n",cont);
	
	return 0;
}

