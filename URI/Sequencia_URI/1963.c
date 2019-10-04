#include <stdio.h>


int main (){
	
	double ini,final,result;

	scanf("%lf %lf",&ini,&final);
	

	result=((100*final)/ini)-100;

	printf("%.2lf%\n",result);



	return 0;
}



