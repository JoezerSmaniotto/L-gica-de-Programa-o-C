#include <stdio.h>

int main(){
	int q,i,v[10],num,pos;
	printf("Informe Um Valor: ");
	scanf("%d",&q);
	
	for(i=0;i<q;i++){
		printf("Informe Um Valor Pos %d: ",i);
		scanf("%d",&v[i]);
	}
	printf("Informe Um Valor: ");
	scanf("%d",&num);
	
	printf("Informe a Posicao: ");
	scanf("%d",&pos);
	
	while(pos<0 || pos>q){
		printf("Informe Uma Posicao Correta: ");
		scanf("%d",&pos);
	}
	
	if(pos==0){
		
		for(i=q;i>=1;i--){
			v[i]=v[i-1];
			printf("Pos: %d = %d\n",i,v[i]);
		}
		v[0]=num;
		i=0;
		printf("Pos: %d = %d\n",i,v[i]);
		
	} 
	
	if(pos==q){
		v[q+1]=v[q];
		v[q]=num;
	
	}if(pos>0 && pos<q) {
		
		for(i=q+1;i>=pos;i--){
			v[i+1]=v[i];	
		}
		v[pos]=num;		
	}
	
	printf("|");
	for(i=0;i<=(q);i++){	
		printf(" %d|",v[i]);
	}
	printf("\n");
	return 0;
}

