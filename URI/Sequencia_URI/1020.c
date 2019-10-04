#include <stdio.h>

int main (){
	
	int tdias,d,m,a;

	scanf("%d",&tdias);

	a= tdias / 365;
	m= (tdias % 365)/30;
	d= (tdias%365)%30;

	printf("%d ano (s)\n",a);
	printf("%d mes (s)\n",m);
	printf("%d dia (s)\n",d);


	return 0;
}


