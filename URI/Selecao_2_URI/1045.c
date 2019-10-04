#include <stdio.h>
#include <math.h>

int main (){
	
	double a,b,c,va,vb,vc, aux;
	scanf("%lf %lf %lf",&a,&b,&c);

	if( a < b ){
		aux = a;
		a = b;
		b = aux;
	}

	if( a < c ){
		aux = a;
		a = c;
		c = aux;
	}

	if( b < c ){
		aux = b;
		b = c;
		c = aux;
	}

	va= pow(a,2);	
	vb= pow(b,2);
	vc= pow(c,2);



	if( a >= (b+c)){
		printf("NAO FORMA TRIANGULO\n");
	
	} 	else { 

			if ( va == (vb+vc)){
				printf("TRIANGULO RETANGULO\n");
			
			}
			if ( va > (vb+vc)){	
				printf("TRIANGULO OBTUSANGULO\n");
			
			}
			if ( va < (vb+vc)){
				printf("TRIANGULO ACUTANGULO\n");
			
			}
			if ( (va==vb) &&  (va==vc) ){
				printf("TRIANGULO EQUILATERO\n");
			
			}	else {

				 	if ( (va == vb) ||  (va == vc) || (vb == vc)){
					printf("TRIANGULO ISOSCELES\n");
					
					}
				}
		}	

	return 0 ;
}