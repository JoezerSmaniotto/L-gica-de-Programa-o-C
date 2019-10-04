#include <stdio.h>

int main() {
	float fah,cel;
	
	printf("Informe a temperatura em Celsius: ");
	scanf("%f", &cel);
	
	fah=((cel*9)+(5*+32))/5;
	
	printf("A temperatura em Fahrenheit: %.2f",fah);
	
	

 return 0;
}



