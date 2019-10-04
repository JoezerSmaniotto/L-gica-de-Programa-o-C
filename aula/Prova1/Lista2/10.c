#include <stdio.h>

int main (){
	int num;
	printf("Informe um Valor: ");
	scanf("%d",&num);
	
	if((num%2)==0){
	
		printf("Par %d",num);
	
	}
		else {
		
				printf("Impar %d",num);
		
		}
		
	
	
	return 0;
}
