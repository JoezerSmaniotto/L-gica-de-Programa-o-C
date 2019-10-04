#include <stdio.h>
float obtemPI(int n);
float obtemPI(int n){
	int i,cont=0,cont1=0,cond=3;
	float soma=0,c=2,b=1,div=0,ant=1;
	
	for(i=1;i<=n;i++){
		//if(cont<=2){ 
			div=((float) c/b);
			//printf("DIV %.0f/%.0f: %f\n",c,b,div);
			soma=div*ant;
			//printf("Soma: %f\n",soma);
			ant=soma;
			cont++;
			cont1++;
			if(cont==2){
				b=b+2;
				cont=0;
			}
			if(cont1==cond){
				cont1=0;
				cond=2;
				c=c+2;
			}
		//}
	}
	
	return soma;	
	
	
}

int main(){
	int qt;
	float result;
	
	do{
		printf("Informe Um Valor: ");
		scanf("%d",&qt);
		if(qt>0){
			result=obtemPI(qt);
			printf("%f\n",result);
		}
		
	}while(qt>0);
		
	return 0;
}

