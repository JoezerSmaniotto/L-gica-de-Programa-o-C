#include <stdio.h>

int main (){
	double n1,n2, tot;
	scanf("%lf",&n1);
	scanf("%lf",&n2);


	tot=((n1*3.5)+(n2*7.5))/11;

	printf("MEDIA = %.5lf\n",tot);

	return 0;
}