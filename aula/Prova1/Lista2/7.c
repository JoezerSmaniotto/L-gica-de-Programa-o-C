#include <stdio.h>

int main () {
	
	float v1,v2;
	
	printf("Informe Um Valor: ");
	scanf("%f",&v1); 
	printf("Informe Um Valor: ");
	scanf("%f",&v2);
	
	if (v1<v2){
		printf(" %.0f %.0f",v1,v2);
	} else{
			
			printf("%.0f %.0f",v2,v1);
		
		}
	
			
	
}
