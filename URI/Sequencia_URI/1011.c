#include <stdio.h>
 
int main() {
    
    int raio;
    double pi,tot;

    scanf("%d",&raio);

    pi=3.14159;

    tot=(4*(pi*raio*raio*raio))/3;

    printf("VOLUME =  %.3lf\n",tot);
            
    return 0;
}