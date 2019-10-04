#include<stdio.h>
#include<math.h>

int main (){

	int n;
	double fib, r, resp1,resp2;

	scanf("%d",&n);

	r=sqrt(5);
	resp1 = ((1+ r)/2);
	resp1= pow(resp1,n);	

	resp2 = ((1-r)/2);
	resp2= pow(resp2,n);	

	fib= (resp1-resp2)/r;


	printf("%.1lf\n",fib);

	return 0;

}