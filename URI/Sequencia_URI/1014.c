	#include <stdio.h>
 
int main() {
    
    int dist;
    double lt,cons;

    scanf("%d",&dist);
    scanf("%lf",&lt);

    cons = dist / lt;

    printf("%.3lf km/l\n",cons);
            
    return 0;
}
