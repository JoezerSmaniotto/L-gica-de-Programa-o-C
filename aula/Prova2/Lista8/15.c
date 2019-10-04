#include <stdio.h>

int main()
{
	float a,b,c,pa,pb,pc,tot,per;
	scanf("%f",&per);
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	
	tot=a+b+c;
	pa=(a*100)/tot;
	pb=(b*100)/tot;
	pc=(c*100)/tot;
	
	printf("\n");
	
	for(int i=0;i < pa; i=i+per){
		printf(" * ");
	}
	printf(" %.0f\n",pa);
	
	for(int i=0;i < pb; i=i+per){
		printf(" * ");
	}
	printf(" %.0f\n",pb);
	
	for(int i=0;i < pc; i=i+per){
		printf(" * ");
	}
	printf(" %.0f\n",pc);
	
	
	
	
	return 0;
}

