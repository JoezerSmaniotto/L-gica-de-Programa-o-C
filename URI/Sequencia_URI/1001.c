	#include <stdio.h>
	#include <math.h>
 
 
int main() {
    
	double x1,x2,y1,y2,tot,tot1;
    
	scanf("%lf",&x1,&y1);
    scanf("%lf",&x2,&y2);

    printf("x1: %lf\n",x1);
    printf("x2: %lf\n",x2);
    printf("y1: %lf\n",y1);
    printf("y2: %lf\n",y2);

	tot = ( ( (x2-x1)*(x2-x1) ) + ( (y2-y1)*(y2-y1) ) ) ;

	tot1 = sqrt(tot);


    printf("%.4lf\n",tot1);
            
    return 0;
}
