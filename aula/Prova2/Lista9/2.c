#include <stdio.h>

int main()
{
	int qt;
	float nt,tot;
	scanf("%d",&qt);
	for(int i=1;i<=qt;i++){
		scanf("%f",&nt);
		tot=tot+nt;
	}
	
	tot = tot/qt;
	
	printf("Media: %.0f\n",tot);
	
	
	
	return 0;
}

