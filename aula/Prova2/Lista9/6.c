#include <stdio.h>

int main()
{
	//int num,i;
	float num,i,n1,n2,med=0,medA=0,qtA,perA;
	
	scanf("%f",&num);
	
	for(i=0;i<num;i++){
		printf("Informe a N1: ");
		scanf("%f",&n1);
		printf("Informe a N2: ");
		scanf("%f",&n2);
		med=(n1+n2)/2;
		printf("MD: %.2f\n",med);
		
		if(med>=6){
			medA=medA+med;
			qtA++;
		}

	}
	
	medA=medA/qtA;
	perA=(float)(100*qtA)/num;
	
	printf("MD Aprovados: %.1f\n",medA);
	printf("Perc Aprovados: %.1f\n",perA);
	
	return 0;
}

