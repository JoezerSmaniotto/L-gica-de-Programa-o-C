#include <stdio.h>
 
int main() {
    
    double km, temp, litros;
    //double litros;
   
    scanf("%lf",&temp);
	scanf("%lf",&km);

    litros = (temp * km)/12;

    printf("%.3lf\n",litros);
            
    return 0;
}