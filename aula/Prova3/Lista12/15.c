#include <stdio.h>

int main(){
	int v[10],i,num;
	
	for(i=0;i<9;i++){
		printf("Informe o Valor P/ Pos:%d :",i);
		scanf("%d",&v[i]);
	}
	
	printf("Informe Um Valor Para a Primeira Pos do Vetor: ");
	scanf("%d",&num);
	
	//printf("V[9] = %d\n",v[9]);
	
	for(i=9;i>=1;i--){
		v[i]=v[i-1];
		//printf("V[%d]=%d|",i,v[i]);
	}
	//printf("%d|",v[1]);
	v[0]=num;
	
	printf("|");
	for(i=0;i<10;i++){
		printf("%d|",v[i]);
	}
	
	return 0;
}

