#include <stdio.h>

int main(){
	int i,cont=0;
	double total,num,soma=0;
	
	for(i=0;i<6;i++){
		scanf("%lf",&num);
		if(num>0){
			soma=soma+num;
			cont++;
			//printf("Soma: %f Cont: %d\n",soma,cont);
		}	
	}
	
	total= soma/cont;
	
	printf("%d valores positivos\n",cont);
	printf("%.1lf\n",total);
	
	return 0;
}

