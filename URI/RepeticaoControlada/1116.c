#include <stdio.h>

int main(){
	
	double n,n1,n2,div,i;
	scanf("%lf",&n);
	
	for(i=0;i<n;i++){
		scanf("%lf %lf",&n1,&n2);
		if(n2==0){
			printf("divisao impossivel\n");
		
		}else if(n1==0){
			printf("0.0\n");
		
		} else {
			div=n1/n2;
			printf("%.1lf\n",div);
			
		}
	}
	
	return 0;
}

