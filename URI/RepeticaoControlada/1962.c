#include <stdio.h>

int main()
{
	int qt,i,ano;
	scanf("%d",&qt);
	for(i=1;i<=qt;i++){
		scanf("%d",&ano);
		if(ano<2015){
			printf("%d D.C.\n",(2015-ano));
		
		}else {
			printf("%d A.C.\n",(ano-2014));
			
		}
	
	}
	
	return 0;
}

