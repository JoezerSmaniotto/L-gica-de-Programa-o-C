#include <stdio.h>
 
int main() {
    int Nfunc, horas;
    double valhora,tot;
    scanf("%d",&Nfunc);
    scanf("%d",&horas);
	scanf("%lf",&valhora);  
	tot = horas*valhora;  
    printf("NUMBER = %d\n",Nfunc);
    printf("SALARY = U $ %.2lf\n",tot);
    
    
 
    return 0;
}