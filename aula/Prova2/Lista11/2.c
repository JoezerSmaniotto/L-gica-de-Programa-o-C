#include <stdio.h>

int main()
{
	float x=1,y,soma=0,op=1, pot=0;
	
	for(x=1,y=1;x<=10;x++,y++){
		if(op==1){
			pot = y*y;
			soma=soma + (x/pot);
			op=0;
			
		} else if (op==0){
			pot=y*y;
			soma=soma - (x/pot);
			op=1;
	    }
	}
	printf("%f\n",soma);
	
	return 0;
}

