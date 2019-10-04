#include <stdio.h>

int main()
{
	float x=1,y,soma=0;
	
	for(y=1;y<=50;y++, x=x+2){
		soma=soma+ (x/y);
	
	}
	printf("%f\n",soma);
	
	return 0;
}

