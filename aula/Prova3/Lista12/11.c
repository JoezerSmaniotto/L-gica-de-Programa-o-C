#include <stdio.h>

int main(){
	int q,i,j,cont=0;
	printf("Informe a Qt: ");
	scanf("%d",&q);
	int v[q],n[q];
	for(i=0;i<q;i++){
		printf("Informe Um Valor p/ Pos %d: ",i);
		scanf("%d",&v[i]);
	}
	for(i=0,j=0;i<q;i++){
		if(v[i]<0){
			n[j]=v[i];
			j++;
			cont++;
		}
	}
	
	printf("|");
	for(j=0;j<cont;j++){
		printf(" %d| ",n[j]);
	}
	
	return 0;
}

