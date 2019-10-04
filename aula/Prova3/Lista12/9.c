#include <stdio.h>

int main(){
	int v[10],i=0,cont=0,n1,n2, maior=0, menor=100000,j;
	
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
	
	printf("Infome 2 Valores: ");
	scanf("%d %d",&n1,&n2);
	
	for(j=n1;j<=n2;j++){
		
		if(v[j] > maior){
			maior=v[j];
		}
		
		if(v[j] < menor){
			menor=v[j];
		}
		
	}
	
	printf("%d (maior)%d (menor)\n",maior,menor);

	/*if(v[n1]>v[n2]){
		printf("%d (maior) %d(menor)\n",v[n1],v[n2]);
	
	}else{
		printf("%d (maior) %d(menor)\n",v[n2],v[n1]);
	}*/
	
	return 0;
}

