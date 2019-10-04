#include <stdio.h>

int main(){
	int i,p,qt,op;
	double soma=0;
	scanf("%d",&p);
	for(i=1;i<=p;i++){
		scanf("%d %d",&op,&qt);
		if(op==1001){
			soma=soma+(qt*1.50);
		}
		if(op==1002){
			soma=soma+(qt*2.50);
		}
		if(op==1003){
			soma=soma+(qt*3.50);
		}
		if(op==1004){
			soma=soma+(qt*4.50);
		}
		if(op==1005){
			soma=soma+(qt*5.50);
		}
		
	}
	printf("%.2lf\n",soma);
	
	return 0;
}

