#include <stdio.h>

int main(){
	int v[10],i=0,cont=0,n1,n2,cont4=0,j;
	
	cont=0;
	
	printf("Informe Um Valor Para a Pos %d: ",i);
	scanf("%d",&v[i]);
	while(v[i]>0 && cont<9) {
		if(v[i]>0 && cont<9){
			cont++;
			i++;		
		}
		printf("Informe Um Valor Para a Pos %d: ",i);
		scanf("%d",&v[i]);			
	}
	
	printf("Informe Um Valor1: ");
	scanf("%d",&n1);
	while(n1>cont || n1<=0){
		printf("Informe Um Valor1: ");
		scanf("%d",&n1);
	}
	
	printf("Informe Um Valor2: ");
	scanf("%d",&n2);
	while(n2>cont || n2<=0){
		printf("Informe Um Valor2: ");
		scanf("%d",&n2);
	}
	
	if(n1>n2){
		for(j=n2;j<=n1;j++){
			if(v[j]>4){
				cont4++;
			}
		}
		
	}else {
		for(j=n1;j<=n2;j++){
			if(v[j]>4){
				cont4++;
			}
		}	
	}
	printf("Num > 4 = %d\n",cont4);
	
	return 0;
}

