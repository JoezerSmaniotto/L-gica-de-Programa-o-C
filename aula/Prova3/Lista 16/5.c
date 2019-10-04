#include <stdio.h>

void exibeSeno(int q, float x);

void exibeSeno(int q, float x){
	int i;
	float pi=3.141592,sen=0,ant=x;
	
	if (q==1){
		sen=x;
		printf("%f\n",sen);
	}
	
	if(q>1){
		for(i=1;i<q;i++){
			
			sen= 1-((x*x)/((i*i)*(pi*pi) ) );
			sen= sen*ant;
			ant=sen;
		}
		printf("%f\n",sen);
	}	
}

int main(){
		
	int qt,x;
	float result,pi=3.141592;
	do{
		printf("Informe a QT: ");
		scanf("%d",&qt);
		if(qt>0){
			printf("Informe X: ");
			scanf("%d",&x);
			result=(x*pi)/180;

			exibeSeno(qt,result);
		}
		
		
	}while(qt>0);
	
	return 0;
}

