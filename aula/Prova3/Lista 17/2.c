#include <stdio.h>

int ehPrimo(int pri);

int ehPrimo(int pri){
	int i,cont=0;
	for(i=1;i<=pri;i++){
		//printf("oi4\n");
		if((pri%i)==0){
			cont++;
			//printf("oi5\n");
		}
		
	}
	if(cont==2){
		return 1;
	
	} else{
		return 0;
		
	}
}

int main(){
	int n1,n2,i,respor;
	printf("Informe dois Valor: ");
	scanf("%d%d",&n1,&n2);
	while(n1>n2){
		printf("Informe dois Valor N1<N2: ");
		scanf("%d%d",&n1,&n2);
	}

	for(i=n1;i<=n2;i++){
		respor=ehPrimo(i);
		//printf("oi1\n");
		if(respor==1){
			printf("%d|",i);
			//printf("oi2\n");
		}
		
	}
	//printf("oi3\n");
	
	return 0;
}

