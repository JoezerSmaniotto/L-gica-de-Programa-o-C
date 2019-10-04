#include <stdio.h>

int main() {
	float fah,cel;
	
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &fah);
	
	cel=((fah-32)*5) /9;
	
	printf("A temperatura em Celsius: %.2f",cel);
	

 return 0;
}



