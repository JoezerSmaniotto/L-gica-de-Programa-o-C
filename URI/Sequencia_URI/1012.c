#include <stdio.h>

int main (){
	
	double a,b,c, tri,circ,tra,qua,reta,pi;
	pi = 3.14159;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	tri=(a*c)/2;
	circ=pi*(c*c);
	tra= ((a+b)*c)/2;
	qua=b*b;
	reta=a*b;

	printf("TRIANGULO: %.3lf\n",tri);
	printf("CIRCULO: %.3lf\n",circ);
	printf("TRAPEZIO: %.3lf\n",tra);
	printf("QUADRADO: %.3lf\n",qua);
	printf("RETANGULO: %.3lf\n",reta);
 
	return 0;
}