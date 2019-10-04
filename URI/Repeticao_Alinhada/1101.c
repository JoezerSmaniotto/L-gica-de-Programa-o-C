#include <stdio.h>

int main(){
	int n,m,soma=0,i;
	do{
		scanf("%d %d",&n,&m);
		if(n>0 && m>0 ){
			if(m>n){
				for(i=n;i<=m;i++){
					printf("%d ",i);
					soma=soma+i;
				}
			}
			
			if(n>m){
				for(i=m;i<=n;i++){
					printf("%d ",i);
					soma=soma+i;
				}
			}
			
			printf("Sum=%d\n",soma);
			soma=0;
		}
		
		
	}while(n>0 && m>0);
	
	return 0;
}

