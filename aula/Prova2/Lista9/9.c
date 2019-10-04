#include <stdio.h>

int main()
{
	float cap,cont=0;
	
	scanf("%f",&cap);
	
	while(cap>1){
		cap=(cap/2);
		cont++;
	}
	
	printf("Dias: %f\n",cont);

	return 0;
}

