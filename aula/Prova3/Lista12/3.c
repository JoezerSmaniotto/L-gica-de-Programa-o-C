#include <stdio.h>

int main(){
	int a,b,q,i;
	printf("Informe Um Valor a Para A,B e Q: ");
	scanf("%d %d %d",&a,&b,&q);
	int v[q];
	
	for(i=0;i<q;i++){
		if((i%2)==0){
			v[i]=a;
			
		}else{
			v[i]=b;
		}
	}
	
	printf("|");
	for(i=0;i<q;i++){
		printf("%d |",v[i]);
	}
	
	return 0;
}

