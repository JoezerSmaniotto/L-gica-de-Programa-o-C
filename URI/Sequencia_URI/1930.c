#include <stdio.h>

int main (){
	
	int n1,n2,n3,n4,tot;

	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

	tot=n1+n2+n3+n4-3; // Menos 3 pq a n2 esta na n1 desconta uma tomada das 3 primeiras

	printf("%d\n",tot);
	

 
	return 0;
}