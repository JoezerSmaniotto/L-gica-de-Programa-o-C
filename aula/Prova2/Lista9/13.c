#include <stdio.h>

int main(){
	
	float tB=1500,tA=500,ano=0 ;
	
	while(tB > tA){
		tA = tA +(tA * 0.052); // tA = tA +((tA * 5.2)/100);
		tB = tB+ (tB * 0.018);
		ano++;	
	}
	
	printf("%.1f\n",ano);
	
	return 0;
}

