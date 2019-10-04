#include <stdio.h>

int main (){
	float alt,sx, result;
	
	printf("Informe a Altura: ");
	scanf("%f",&alt);
	printf("Informe o Sexo: 1 = Homens, 2 = Mulheres ");
	scanf("%f",&sx);
	
	if(sx==2){
		
		result=(72.86 *alt )-58;
		printf("\n%.2f",result);
		
	} else {
		
		result=(62.1 *alt )-44.7;
		printf("\n%.2f",result);
	}	
	
	
	
	

	return 0;
}

