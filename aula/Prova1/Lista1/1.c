#include <stdio.h>

int main () {
	
	float a,b,c, t,q,r,cir;
	
	printf("Informe o Valor de A: ");
	scanf("%f",&a);
	
	printf("Informe o Valor de B: ");
	scanf("%f",&b);

	printf("Informe o Valor de C: ");
	scanf("%f",&c);
	
	t=(a*b)/2;
	q=b*b;
	r=a*b;
	cir= 3.14*(c*c);
	
	printf("\nArea do Triangulo: %.2f",t);
	printf("\nArea do Quadrado: %.2f",q);
	printf("\nArea do Retangulo: %.2f",r);
	printf("\nArea do Circulo: %.2f",cir);
	
	
	
	
	
	
	
	printf("\n
	Yuri das Gurias, DANADO");
	return 0;
}
