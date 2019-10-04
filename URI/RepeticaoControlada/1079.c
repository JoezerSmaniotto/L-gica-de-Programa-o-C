#include <stdio.h>

int main()
{
	double num,i,tot,n1,n2,n3;
	scanf("%lf",&num);
	for(i=0;i<num;i++){
		scanf("%lf %lf %lf",&n1,&n2,&n3);
		tot=((2*n1)+(3*n2)+(5*n3))/(2+3+5);
		printf("%.1lf\n",tot);
		
	}
	
	return 0;
	
}
